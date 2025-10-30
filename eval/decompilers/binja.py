from collections import defaultdict
import traceback
import os
from typing import Dict
import logging

import binaryninja
from binaryninja import lineardisassembly
from binaryninja import demangle
from binaryninja.commonil import Constant, Call
from binaryninja.enums import DisassemblyOption, InstructionTextTokenType
from binaryninja.function import DisassemblySettings, Function
from binaryninja.highlevelil import HighLevelILInstruction
from binaryninja.types import TypeClass, VariableSourceType
from binaryninja.variable import Variable

from eval.config import RESULT_DIR
from eval.result import DecompileResult


l = logging.getLogger("oxidizer-eval")


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
            call_counts[result.dest.constant - bv.start] += 1
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


def get_variable_types(func: Function):
    ident_to_types = defaultdict(list)

    hlil = func.hlil
    for var in set(hlil.vars) | set(hlil.aliased_vars):
        ident = get_variable_ident(var, func)
        if ident:
            ty = classify_type(var.type)
            size = var.type.width if var.type else -1
            ident_to_types[ident].append((ty, size))

    # params
    for i, p in enumerate(func.parameter_vars):
        ptype = p.type
        psize = getattr(ptype, "width", None)
        ident = f"arg_{i}"
        a_type_str = classify_type(ptype)
        ident_to_types[ident].append((a_type_str, psize))

    # return
    rtype = func.return_type
    rsize = getattr(rtype, "width", None)
    ident_to_types["return_type"].append((classify_type(rtype), rsize))

    return ident_to_types


def _binja_dec_base(binary_path, target_functions, tag, is_rust_binary):
    assert os.path.exists(binary_path)

    decompiler_name = "Binary Ninja (Pseudo Rust)" if is_rust_binary else "Binary Ninja"
    binary_name = os.path.basename(binary_path)
    language_name = "Rust" if is_rust_binary else "C"

    results: Dict[int, DecompileResult] = {}

    result_dir = RESULT_DIR / tag / decompiler_name / binary_name
    os.makedirs(result_dir, exist_ok=True)
    for result_path in result_dir.glob("*.json"):
        func_addr = int(result_path.stem, 16)
        func_result = DecompileResult.load_json(result_path)
        results[func_addr] = func_result

    if not all(func_addr in results for func_addr in target_functions):
        with binaryninja.load(binary_path) as bv:
            for func in bv.functions:
                try:
                    # print(func.name, hex(func.start), hex(bv.start))
                    func_addr = func.start - bv.start
                    if func_addr in target_functions:
                        output = _decompile(bv, func, language_name)
                        if output:
                            result = DecompileResult(
                                decompilation=output,
                                function_call_counts=count_calls(bv, func),
                                macro_call_counts={},
                                variable_types=get_variable_types(func),
                            )
                            results[func_addr] = result
                            result_path = result_dir / f"{func_addr:x}.json"
                            result.save_json(result_path)
                        else:
                            raise Exception("Empty decompilation output")

                except BaseException as e:
                    l.error(f"Failed to decompile function: {demangle.demangle_generic(bv.arch, func.name)}")
                    l.error(traceback.format_exc())


def binja_c_dec(binary_path, target_functions, tag):
    return _binja_dec_base(binary_path, target_functions, tag, False)


def binja_rust_dec(binary_path, target_functions, tag):
    return _binja_dec_base(binary_path, target_functions, tag, True)
