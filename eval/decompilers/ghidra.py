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

GHIDRA_POST_DEC_SCRIPT = r"""
import os
import traceback
from collections import Counter
import json

from ghidra.app.decompiler import DecompInterface
from ghidra.program.model.symbol import SymbolType
from ghidra.program.model.pcode import PcodeOp

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

function_mapping = {}
decompiled_code_cache_dir = "{}"
call_counts_cache_dir = "{}"

for func in currentProgram.getFunctionManager().getFunctions(True):
    try:
        demangled_func_name = str(func.getName(True))
        if demangled_func_name in function_mapping:
            func.setComment(None)
            di = DecompInterface()
            di.openProgram(currentProgram)
            dec_func = di.decompileFunction(func, 0, None)
            func_name = function_mapping[demangled_func_name]
            func_text = dec_func.getDecompiledFunction().getC().strip()
            with open(os.path.join(decompiled_code_cache_dir, func_name + ".c"), "w") as fd:
                fd.write(func_text)
            call_counts = collect_call_counts(dec_func)
            with open(os.path.join(call_counts_cache_dir, func_name + ".json"), "w") as fd:
                fd.write(json.dumps(call_counts, indent=2))
    except Exception as e:
        traceback.print_exc()
        continue
"""


def _generate_function_mapping(function_list):
    mapping = {}
    for func_name in function_list:
        demangled_func_name = demangle(func_name)
        mapping[demangled_func_name] = func_name
    return mapping


def ghidra_dec(binary_path, function_list, cache_only=False):
    binary_path = os.path.abspath(binary_path)
    function_list = list(function_list)
    result = {
        "decompilation": {},
        "function_call_counts": {},
        "macro_call_counts": {},
        "node_counts": {},
        "prototypes": {},
    }

    bin_name = os.path.basename(binary_path)
    cached_result = load_cached_result("ghidra", bin_name)
    if cached_result:
        result = cached_result
    for func_name in result["decompilation"]:
        if func_name in function_list:
            function_list.remove(func_name)

    if function_list and not cache_only:
        # Generate demangled function name to mangled function name mapping
        function_mapping = _generate_function_mapping(function_list)

        # Create cache directories
        decompilation_tmp_dir = TemporaryDirectory()
        call_counts_tmp_dir = TemporaryDirectory()
        decompilation_path = decompilation_tmp_dir.name
        call_counts_path = call_counts_tmp_dir.name

        post_dec_script = GHIDRA_POST_DEC_SCRIPT.format(function_mapping, decompilation_path, call_counts_path)
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
                    f"temp_project_{bin_name}",
                    "-import",
                    os.path.basename(binary_path),
                    "-postScript",
                    f"{post_dec_script_path}",
                ]
            )
            os.unlink(f"./temp_project_{bin_name}.gpr")
            shutil.rmtree(f"./temp_project_{bin_name}.rep")
            for func_name in function_list:
                decompilation_path = os.path.join(decompilation_tmp_dir.name, func_name + ".c")
                call_counts_path = os.path.join(call_counts_tmp_dir.name, func_name + ".json")
                if os.path.isfile(decompilation_path) and os.path.isfile(call_counts_path):
                    with open(decompilation_path, "r") as fd:
                        decompilation = fd.read()
                    with open(call_counts_path, "r") as fd:
                        call_counts = json.load(fd)
                    result["decompilation"][func_name] = decompilation
                    result["macro_call_counts"][func_name] = 0
                    result["node_counts"][func_name] = 0
                    result["function_call_counts"][func_name] = dict(call_counts)
        except Exception as e:
            l.critical(f"Ghidra decompilation exeception: {e}")
            l.critical("".join(traceback.format_exception(e)))
        finally:
            os.chdir(original_cwd)
            os.unlink(post_dec_script_path)
            decompilation_tmp_dir.cleanup()
            call_counts_tmp_dir.cleanup()
        save_result("ghidra", bin_name, result)

    return result
