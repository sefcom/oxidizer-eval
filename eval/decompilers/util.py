import os

from ..config import CACHED_DECOMPILED_CODE_PATH


def get_cached_decompiled_code(decompiler, binary_name, func_name):
    path = os.path.join(CACHED_DECOMPILED_CODE_PATH, decompiler, binary_name, func_name + ".c")
    if os.path.exists(path):
        with open(path, "r") as fd:
            return fd.read()
    return None


def save_output(decompiler, binary_name, func_name, output):
    path = os.path.join(CACHED_DECOMPILED_CODE_PATH, decompiler, binary_name)
    os.makedirs(path, exist_ok=True)
    with open(os.path.join(path, func_name + ".c"), "w") as fd:
        fd.write(output)
