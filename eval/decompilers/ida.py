import subprocess
import os

from ..config import IDA_PATH
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


def ida_dec(binary_path, func_name):
    assert os.path.exists(binary_path)

    binary_name = os.path.basename(binary_path)
    cache = get_cached_decompiled_code("ida", binary_name, func_name)
    if cache:
        return cache

    cmd = f"{IDA_PATH} -A -Ohexrays:{func_name}:{func_name} {os.path.abspath(binary_path)}"
    subprocess.run(cmd.split())
    output_path = f"{func_name}.c"
    if os.path.exists(output_path):
        with open(output_path, "r") as fd:
            output = fd.readlines()
        os.remove(output_path)
        output = _extract_function_body(output)
        save_output("ida", binary_name, func_name, output)
        return output
    return None


def ida_dec_with_script(binary_path, script_path):
    assert os.path.exists(binary_path)
    assert os.path.exists(script_path)

    bin_name = os.path.basename(binary_path)
    if os.path.exists(os.path.join(os.path.dirname(binary_path), bin_name + ".idb")):
        cmd = f"{IDA_PATH} -A -Ohexrays:ida_{bin_name}:main -S{os.path.abspath(script_path)} {os.path.abspath(binary_path)}"
        subprocess.run(cmd.split())
        decompiled_file = os.path.join(os.path.dirname(binary_path), f"ida_{bin_name}.c")
        if os.path.isfile(decompiled_file):
            os.remove(decompiled_file)
    else:
        print(f"Error: IDA failed to decompile {binary_path}")
