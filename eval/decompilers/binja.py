from collections import defaultdict
import traceback
import os

import binaryninja
from binaryninja import lineardisassembly
from binaryninja import demangle
from binaryninja.commonil import Constant, Call
from binaryninja.enums import DisassemblyOption, InstructionTextTokenType
from binaryninja.function import DisassemblySettings, Function
from binaryninja.highlevelil import HighLevelILInstruction

from .util import load_cached_result, save_result


def _decompile(bv, func, language="C"):
    settings = DisassemblySettings()
    settings.set_option(DisassemblyOption.ShowAddress, False)
    settings.set_option(DisassemblyOption.WaitForIL, True)

    obj = lineardisassembly.LinearViewObject.language_representation(bv, settings, f"Pseudo {language}")
    cursor_end = lineardisassembly.LinearViewCursor(obj)
    cursor_end.seek_to_address(func.highest_address)
    end_lines = bv.get_next_linear_disassembly_lines(cursor_end)
    cursor_end.seek_to_address(func.highest_address)
    start_lines = bv.get_previous_linear_disassembly_lines(cursor_end)
    lines = start_lines + end_lines

    return "\n".join(
        "".join(str(token) for token in line.contents.tokens if token.type != InstructionTextTokenType.TagToken)
        for line in lines
    )


def count_calls(bv, func: Function):
    def find_call(i) -> HighLevelILInstruction:
        if isinstance(i, Call):
            return i

    call_counts = defaultdict(int)
    for result in func.hlil.traverse(find_call):
        if isinstance(result.dest, Constant):
            symbol = bv.get_symbol_at(result.dest.constant)
            if symbol and symbol.raw_name:
                call_counts[symbol.raw_name] += 1
    return dict(call_counts)


def count_variables(func: Function):
    return len(set(func.hlil.vars) | set(func.hlil.aliased_vars)) - len(func.parameter_vars)


def _binja_dec_base(binary_path, function_list, is_rust_binary, cache_only=False):
    assert os.path.exists(binary_path)

    decompiler_name = "Binary Ninja (Pseudo Rust)" if is_rust_binary else "Binary Ninja"
    language_name = "Rust" if is_rust_binary else "C"
    function_list = list(function_list)
    result = {
        "decompilation": {},
        "function_call_counts": {},
        "num_variables": {},
        "macro_call_counts": {},
        "node_counts": {},
        "prototypes": {},
    }

    bin_name = os.path.basename(binary_path)
    cached_result = load_cached_result(decompiler_name, bin_name)
    if cached_result:
        result = cached_result

    for func_name in result["decompilation"]:
        if func_name in function_list:
            function_list.remove(func_name)

    if function_list and not cache_only:
        with binaryninja.load(binary_path) as bv:
            for func in bv.functions:
                try:
                    if func.name in function_list:
                        output = _decompile(bv, func, language_name)
                        if output:
                            result["decompilation"][func.name] = output
                            # Save call counts result
                            result["function_call_counts"][func.name] = count_calls(bv, func)
                            result["num_variables"][func.name] = count_variables(func)
                            result["macro_call_counts"][func.name] = 0
                            result["node_counts"][func.name] = 0
                        else:
                            raise Exception()

                except BaseException as e:
                    traceback.print_exception(e)
                    print(f"Failed to decompile functon: {demangle(func.name)}")
        save_result(decompiler_name, bin_name, result)
    return result


def binja_c_dec(binary_path, function_list, cache_only=False):
    return _binja_dec_base(binary_path, function_list, False, cache_only)


def binja_rust_dec(binary_path, function_list, cache_only=False):
    return _binja_dec_base(binary_path, function_list, True, cache_only)
