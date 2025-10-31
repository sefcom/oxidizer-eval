import os
import subprocess
import logging
from tempfile import NamedTemporaryFile
import traceback
import shutil
import json
from typing import Dict

from eval.result import DecompileResult
from eval.config import GHIDRA_PATH, RESULT_DIR

l = logging.getLogger(__name__)

GHIDRA_PRE_DEC_SCRIPT = r"""
options = getCurrentAnalysisOptionsAndValues(currentProgram)
if 'Demangler Rust' in options:
    setAnalysisOption(currentProgram, 'Demangler Rust', 'false');
if 'Demangler GNU' in options:
    setAnalysisOption(currentProgram, 'Demangler GNU', 'false');
"""

GHIDRA_POST_DEC_SCRIPT = r"""
import os
import traceback
from collections import Counter
import json

from ghidra.app.decompiler import DecompInterface
from ghidra.program.model.symbol import SymbolType
from ghidra.program.model.pcode import PcodeOp
from ghidra.program.model.data import Pointer, Array, Structure, Union

def collect_call_counts(decomp_func):
    called_functions = list()
    if decomp_func is not None:
        for op in decomp_func.getHighFunction().pcodeOps:
            if op.getOpcode() == PcodeOp.CALL:
                called_func_addr = int(op.inputs[0].getAddress().getOffset()) - image_base
                called_functions.append(called_func_addr)
    
    out = dict(Counter(called_functions))
    
    return out
    
def classify_type(datatype):
    if datatype is None:
        return None
    if isinstance(datatype, Pointer):
        pointed = datatype.getDataType()
        if isinstance(pointed, Pointer):
            inner = "reference"
        else:
            inner = classify_type(pointed)
        return "&{}".format(inner) if inner else None
    elif isinstance(datatype, Array):
        return "array"
    elif isinstance(datatype, Structure) or isinstance(datatype, Union):
        return "struct"
    else:
        return "primitive"

def collect_variable_types(high_func):
    variable_types = dict()
    if high_func is None:
        return variable_types

    local_symbols = high_func.getLocalSymbolMap()
    for symbol in local_symbols.getSymbols():
        datatype = symbol.getDataType()
        size = datatype.getLength() if datatype else None
        ty = classify_type(datatype)

        storage = symbol.getStorage()
        ident = None

        if storage.isStackStorage():
            offset = storage.getFirstVarnode().getOffset()
            frame_size = func.getStackFrame().getFrameSize()
            adjusted_offset = frame_size + offset - 8
            ident = "stack_{}".format(adjusted_offset)
        elif storage.isRegisterStorage():
            reg = storage.getRegister()
            base_reg = reg.getBaseRegister()
            ident = "reg_{}".format(base_reg.getName().lower())

        if ident is not None:
            variable_types.setdefault(ident, []).append((ty, size))
    
    proto = high_func.getFunctionPrototype()

    rettype = proto.getReturnType()
    r_size = rettype.getLength() if rettype else None
    r_type_str = classify_type(rettype)
    variable_types["return_type"] = [(r_type_str, r_size)]

    n_params = proto.getNumParams()
    for i in range(n_params):
        psym = proto.getParam(i) 
        if psym is None:
            variable_types.setdefault("arg_" + str(i), []).append((None, None))
            continue

        p_dt = psym.getDataType()
        p_name = psym.getName() if psym.getName() else None
        p_size = p_dt.getLength() if p_dt else None
        p_type_str = classify_type(p_dt)
        variable_types.setdefault("arg_" + str(i), []).append((p_type_str, p_size))

    return variable_types

result = {}
image_base = int(currentProgram.getImageBase().getOffset())

for func in currentProgram.getFunctionManager().getFunctions(True):
    try:
        func_addr = int(func.getEntryPoint().getOffset()) - image_base
        if func_addr in %TARGET_FUNCTIONS%:
            func.setComment(None)
            di = DecompInterface()
            di.openProgram(currentProgram)
            dec_func = di.decompileFunction(func, 0, None)
            pseudocode = dec_func.getDecompiledFunction().getC().strip()
            pseudocode = "\n".join([line for line in pseudocode.split("\n") if not line.startswith("/*")]).strip()
            function_call_counts = collect_call_counts(dec_func)
            result[func_addr] = {
                "decompilation": pseudocode,
                "function_call_counts": function_call_counts,
                "macro_call_counts": {},
                "variable_types": collect_variable_types(dec_func.getHighFunction())
            }
    except Exception as e:
        traceback.print_exc()
        continue

with open("%RESULT_PATH%", "w") as fd:
    json.dump(result, fd, indent=2)
"""


def ghidra_dec(binary_path, target_functions, tag):
    assert os.path.exists(binary_path)
    binary_path = os.path.abspath(binary_path)
    binary_name = os.path.basename(binary_path)

    result_dir = RESULT_DIR / tag / "Ghidra" / binary_name
    os.makedirs(result_dir, exist_ok=True)
    decompiled_functions = set(int(result_path.stem, 16) for result_path in result_dir.glob("*.json"))

    if not decompiled_functions.issuperset(target_functions):
        target_functions = set(func_addr for func_addr in target_functions if func_addr not in decompiled_functions)
        pre_dec_script = GHIDRA_PRE_DEC_SCRIPT
        fd = NamedTemporaryFile("w", suffix=".py", delete=False)
        fd.write(pre_dec_script)
        fd.close()
        pre_dec_script_path = fd.name

        result_fd = NamedTemporaryFile("w", suffix=".py", delete=False)
        result_fd.close()

        post_dec_script = GHIDRA_POST_DEC_SCRIPT.replace("%TARGET_FUNCTIONS%", str(target_functions)).replace(
            "%RESULT_PATH%", result_fd.name
        )
        fd = NamedTemporaryFile("w", suffix=".py", delete=False)
        fd.write(post_dec_script)
        fd.close()
        post_dec_script_path = fd.name

        ghidra_path = GHIDRA_PATH
        original_cwd = os.getcwd()
        try:
            dir_path = os.path.dirname(binary_path)
            os.chdir(dir_path)
            subprocess.run(
                [
                    f"{ghidra_path}",
                    ".",
                    f"temp_project_{binary_name}",
                    "-import",
                    binary_name,
                    "-preScript",
                    f"{pre_dec_script_path}",
                    "-postScript",
                    f"{post_dec_script_path}",
                ]
            )
            os.unlink(f"./temp_project_{binary_name}.gpr")
            shutil.rmtree(f"./temp_project_{binary_name}.rep")
            with open(result_fd.name, "r") as fd:
                result = json.load(fd)
                for func_addr in list(result.keys()):
                    func_result = DecompileResult(
                        decompilation=result[func_addr]["decompilation"],
                        variable_types=result[func_addr]["variable_types"],
                        function_call_counts=result[func_addr]["function_call_counts"],
                        macro_call_counts=result[func_addr]["macro_call_counts"],
                    )
                    result_path = result_dir / f"{int(func_addr):x}.json"
                    func_result.save_json(result_path)
        except Exception as e:
            l.critical(f"Ghidra decompilation exeception: {e}")
            l.critical("".join(traceback.format_exception(e)))
        finally:
            os.chdir(original_cwd)
            os.unlink(pre_dec_script_path)
            os.unlink(result_fd.name)
            os.unlink(post_dec_script_path)
