import os

import angr
from angr.rust.utils.library import demangle

from ..config import CACHED_DECOMPILED_CODE_PATH


def load_cached_output(cache_dir, func_name):
    path = os.path.join(CACHED_DECOMPILED_CODE_PATH, cache_dir, func_name + ".c")
    if os.path.exists(path):
        with open(path, "r") as fd:
            return fd.read()
    return None


def save_output(cache_dir, func_name, output):
    path = os.path.join(CACHED_DECOMPILED_CODE_PATH, cache_dir)
    os.makedirs(path, exist_ok=True)
    with open(os.path.join(path, func_name + ".c"), "w") as fd:
        fd.write(output)


def load_function_list(binary_path, module=None):
    proj = angr.Project(binary_path, auto_load_libs=False)
    symbols = proj.loader.main_object.symbols
    function_list = [symbol.name for symbol in symbols if symbol.is_function]
    return (
        function_list
        if module is None
        else [name for name in function_list if demangle(name).startswith(module + "::")]
    )
