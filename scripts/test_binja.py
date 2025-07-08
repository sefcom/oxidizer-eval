from collections import defaultdict
import os
import sys
from pathlib import Path

import binaryninja
from binaryninja import lineardisassembly
from binaryninja.commonil import Call, Constant, Localcall
from binaryninja.enums import DisassemblyOption, HighLevelILOperation, InstructionTextTokenType
from binaryninja.function import DisassemblySettings, Function
from binaryninja.highlevelil import HighLevelILInstruction
from binaryninja.settings import Settings

sys.path.append(os.path.abspath("."))

from eval.decompilers.util import load_function_list

ROOT_PATH = Path(__file__).parent.parent.absolute()

binary_path = os.path.join(ROOT_PATH, "dataset/o3/fmt")


def decompile(func, language="C"):
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


with binaryninja.load(binary_path) as bv:
    function_list = load_function_list(binary_path, module=f"uu_fmt")
    for func in bv.functions:
        if func.name in function_list:
            print(decompile(func, "Rust"))
            print(count_calls(bv, func))
            print(f"{len(set(func.hlil.vars) | set(func.hlil.aliased_vars)) - len(func.parameter_vars)=}")
            break
