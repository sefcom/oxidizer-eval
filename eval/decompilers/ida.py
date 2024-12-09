import json
import subprocess
import os

from ..config import IDA_PATH, IDA_SCRIPTS_PATH
from .util import *


def _extract_function_body(output):
    body = ""
    for idx, line in enumerate(output):
        if body == "" and line.endswith(")\n") and len(output) > idx + 1 and output[idx + 1].endswith("{\n"):
            body = line
            continue
        elif len(body):
            body += line
            if line == "}\n":
                break
    return body


def ida_dec(binary_path, function_list, cache_dir, cache_only=False):
    assert os.path.exists(binary_path)

    function_list = list(function_list)
    decompilation_result = {}
    call_counts_result = {}

    for func_name in list(function_list):
        cached_output = load_cached_output(cache_dir, func_name)
        if cached_output:
            decompilation_result[func_name] = cached_output
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
                    save_output(cache_dir, func_name, output)
                    decompilation_result[func_name] = output

    # Collect call counts
    function_list = list(decompilation_result.keys())
    # Load cache
    for func_name in list(function_list):
        cached_call_counts_output = load_cached_call_counts_output(cache_dir, func_name)
        if cached_call_counts_output:
            call_counts_result[func_name] = cached_call_counts_output
            function_list.remove(func_name)

    if function_list and not cache_only:
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
            for func_name in function_list:
                if func_name in counts:
                    call_counts_output = json.dumps(counts[func_name])
                    call_counts_result[func_name] = call_counts_output
                    save_call_counts_output(cache_dir, func_name, call_counts_output)
    return decompilation_result, call_counts_result
