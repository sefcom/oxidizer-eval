import sys
import os
import traceback
import logging

sys.path.insert(0, os.path.expanduser("~/.binaryninja/plugins"))

import binaryninja
from rust_string_slicer.binja_plugin.actions import (
    RustStringSlice,
    RecoverStringFromReadOnlyDataTask,
    RecoverStringFromCodeTask,
)

from eval.decompilers.binja import _decompile, count_calls, get_variable_types
from eval.result import DecompileResult


def binja_with_plugin_decompile(binary_path, target_functions, tag, symbols):
    l = logging.getLogger(tag)
    binary_name = os.path.basename(binary_path)

    with binaryninja.load(binary_path) as bv:
        if not RustStringSlice.check_binary_ninja_type_exists(bv):
            RustStringSlice.create_binary_ninja_type(bv)
        RecoverStringFromReadOnlyDataTask(bv).run()
        RecoverStringFromCodeTask(bv).run()

        # Debug: log all recovered &str data variables
        str_type = bv.get_type_by_name("&str")
        if str_type:
            recovered = []
            for addr, var in bv.data_vars.items():
                if var.type == str_type:
                    ptr_size = bv.arch.address_size
                    ptr = int.from_bytes(bv.read(addr, ptr_size), "little")
                    length = int.from_bytes(bv.read(addr + ptr_size, ptr_size), "little")
                    data = bv.read(ptr, min(length, 256))
                    try:
                        s = data.decode("utf-8")
                    except UnicodeDecodeError:
                        s = repr(data)
                    recovered.append(f"  {addr:#x}: len={length} {s!r}")
            l.info(f"rust_string_slicer recovered {len(recovered)} strings in {binary_name}:")
            for line in recovered:
                l.info(line)

        for func in bv.functions:
            try:
                func_addr = func.start - bv.start
                if func_addr in target_functions:
                    output = _decompile(bv, func, language="C")
                    if output:
                        result = DecompileResult(
                            decompilation=output,
                            function_call_counts=count_calls(bv, func),
                            macro_call_counts={},
                            variable_types=get_variable_types(func),
                        )
                        yield func_addr, result
                    else:
                        raise Exception("Empty decompilation output")

            except Exception as e:
                l.error(f"Failed to decompile function: {func.start:x} in {binary_name}: {e}")
                l.error(traceback.format_exc())