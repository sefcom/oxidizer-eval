import os
import subprocess
import logging
from tempfile import TemporaryDirectory, NamedTemporaryFile
import traceback
import shutil
import json

from angr.rust.utils.library import demangle

from eval.decompilers.util import load_cached_result, save_result

from ..config import GHIDRA_PATH

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
                called_func_addr = op.inputs[0].getAddress()
                called_func = currentProgram.getFunctionManager().getFunctionContaining(called_func_addr)
                if called_func is not None:
                    called_functions.append(str(called_func.getName(True)))
    
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
        size = datatype.getLength() if datatype else -1
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
    
    return variable_types

result = {
    "decompilation": {},
    "function_call_counts": {},
    "macro_call_counts": {},
    "variable_types": {}
}

for func in currentProgram.getFunctionManager().getFunctions(True):
    try:
        func_name = str(func.getName(True))
        if func_name in %FUNCTION_LIST%:
            func.setComment(None)
            di = DecompInterface()
            di.openProgram(currentProgram)
            dec_func = di.decompileFunction(func, 0, None)
            pseudocode = dec_func.getDecompiledFunction().getC().strip()
            pseudocode = "\n".join([line for line in pseudocode.split("\n") if not line.startswith("/*")]).strip()
            function_call_counts = collect_call_counts(dec_func)
            result["decompilation"][func_name] = pseudocode
            result["function_call_counts"][func_name] = function_call_counts
            result["macro_call_counts"][func_name] = {}
            result["variable_types"][func_name] = collect_variable_types(dec_func.getHighFunction())
    except Exception as e:
        traceback.print_exc()
        continue

with open("%RESULT_PATH%", "w") as fd:
    json.dump(result, fd, indent=2)
"""


def ghidra_dec(binary_path, function_list, cache_only=False):
    assert os.path.exists(binary_path)
    binary_path = os.path.abspath(binary_path)

    function_list = list(function_list)
    result = {
        "decompilation": {},
        "function_call_counts": {},
        "macro_call_counts": {},
        "variable_types": {},
    }

    binary_name = os.path.basename(binary_path)
    cached_result = load_cached_result("ghidra", binary_path)
    if cached_result:
        result = cached_result
    for func_name in result["decompilation"]:
        if func_name in function_list:
            function_list.remove(func_name)

    if function_list and not cache_only:

        pre_dec_script = GHIDRA_PRE_DEC_SCRIPT
        fd = NamedTemporaryFile("w", suffix=".py", delete=False)
        fd.write(pre_dec_script)
        fd.close()
        pre_dec_script_path = fd.name

        result_fd = NamedTemporaryFile("w", suffix=".py", delete=False)
        result_fd.close()

        post_dec_script = GHIDRA_POST_DEC_SCRIPT.replace("%FUNCTION_LIST%", str(function_list)).replace(
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
                more_result = json.load(fd)
                demangled_function_call_counts = {}
                for func_name, counts in more_result["function_call_counts"].items():
                    new_counts = {}
                    for callee_name, count in counts.items():
                        new_counts[demangle(callee_name)] = count
                    demangled_function_call_counts[func_name] = new_counts
                more_result["function_call_counts"] = demangled_function_call_counts
                for key in list(result.keys()):
                    result[key].update(more_result.get(key, {}))
        except Exception as e:
            l.critical(f"Ghidra decompilation exeception: {e}")
            l.critical("".join(traceback.format_exception(e)))
        finally:
            os.chdir(original_cwd)
            os.unlink(pre_dec_script_path)
            os.unlink(result_fd.name)
            os.unlink(post_dec_script_path)
        save_result("ghidra", binary_path, result)

    return result
