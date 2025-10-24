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
from binaryninja.types import TypeClass, VariableSourceType
from binaryninja.variable import Variable

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


def classify_type(bn_type):
    if bn_type is None:
        return None
    if bn_type.type_class == TypeClass.PointerTypeClass:
        inner = classify_type(bn_type.target)
        return "&{}".format(inner if inner else "reference")
    elif bn_type.type_class == TypeClass.ArrayTypeClass:
        return "array"
    elif bn_type.type_class == TypeClass.StructureTypeClass:
        return "struct"
    else:
        return "primitive"


def estimate_frame_size(func):
    offsets = [
        var.storage for var in func.stack_layout if var.source_type == VariableSourceType.StackVariableSourceType
    ]
    if not offsets:
        return 0
    return abs(min(offsets))


def get_variable_ident(var: Variable, func):
    if var.source_type == VariableSourceType.StackVariableSourceType:
        frame_size = estimate_frame_size(func)
        adjusted_offset = frame_size + var.storage
        return f"stack_{adjusted_offset}"

    # Registers
    elif var.source_type == VariableSourceType.RegisterVariableSourceType:
        arch = func.arch
        reg_name = arch.get_reg_name(var.storage)
        if reg_name in arch.regs:
            reg_info = arch.regs[reg_name]
            return f"reg_{reg_info.full_width_reg}"

    return None  # Ignore other types


def get_variable_types(func):
    ident_to_types = defaultdict(list)

    hlil = func.hlil
    for var in set(hlil.vars) | set(hlil.aliased_vars):
        ident = get_variable_ident(var, func)
        if ident:
            ty = classify_type(var.type)
            size = var.type.width if var.type else -1
            ident_to_types[ident].append((ty, size))

    return ident_to_types


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
        "variable_types": {},
    }

    cached_result = load_cached_result(decompiler_name, binary_path)
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
                            result["macro_call_counts"][func.name] = {}
                            result["variable_types"][func.name] = get_variable_types(func)
                        else:
                            raise Exception()

                except BaseException as e:
                    traceback.print_exception(e)
                    print(f"Failed to decompile function: {demangle(func.name)}")
        save_result(decompiler_name, binary_path, result)
    return result


def binja_c_dec(binary_path, function_list, cache_only=False):
    return _binja_dec_base(binary_path, function_list, False, cache_only)


def binja_rust_dec(binary_path, function_list, cache_only=False):
    return _binja_dec_base(binary_path, function_list, True, cache_only)
