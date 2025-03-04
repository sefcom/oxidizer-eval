import json
import subprocess
import os

from ..config import IDA_PATH, IDA_SCRIPTS_PATH
from .util import *


def _extract_function_body(output):
    non_empty_lines = []
    body = ""
    for idx, line in enumerate(output):
        if line != "\n":
            non_empty_lines.append(line)
        else:
            non_empty_lines = []
        if body == "" and line.endswith(")\n") and len(output) > idx + 1 and output[idx + 1].endswith("{\n"):
            body = "".join(non_empty_lines[1:])
            continue
        elif len(body):
            body += line
            if line == "}\n":
                break
    return body


def ida_dec(binary_path, function_list, cache_only=False):
    assert os.path.exists(binary_path)

    function_list = list(function_list)
    result = {
        "decompilation": {},
        "function_call_counts": {},
        "macro_call_counts": {},
        "node_counts": {},
        "prototypes": {},
    }

    bin_name = os.path.basename(binary_path)
    cached_result = load_cached_result("ida", bin_name)
    if cached_result:
        result = cached_result
    for func_name in result["decompilation"]:
        if func_name in function_list:
            function_list.remove(func_name)

    if function_list and not cache_only:
        for func_name in function_list:
            # Decompile
            cmd = f"{IDA_PATH} -A -Ohexrays:{func_name}:{func_name} {os.path.abspath(binary_path)}"
            subprocess.run(cmd.split())
            output_path = f"{func_name}.c"
            if os.path.exists(output_path):
                with open(output_path, "r") as fd:
                    output = fd.readlines()
                os.remove(output_path)
                output = _extract_function_body(output)
                if output:
                    result["decompilation"][func_name] = output
                    result["macro_call_counts"][func_name] = {}
                    result["node_counts"][func_name] = 0

            cmd = f"{IDA_PATH} -A -Ohexrays:ida_main:main -S{os.path.abspath(os.path.join(IDA_SCRIPTS_PATH, 'call_counts.py'))} {os.path.abspath(binary_path)}"
            subprocess.run(cmd.split())
            try:
                os.remove("ida_main.c")
            except:
                pass
            call_counts_output_path = f"CALL_COUNTS_{os.path.basename(binary_path)}.json"
            if os.path.exists(call_counts_output_path):
                with open(call_counts_output_path, "r") as fd:
                    counts = json.load(fd)
                try:
                    os.remove(call_counts_output_path)
                except:
                    pass
                result["function_call_counts"] = dict(counts)
        save_result("ida", bin_name, result)
    return result
