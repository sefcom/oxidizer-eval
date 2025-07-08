import os
from collections import defaultdict
from pprint import pformat
import sys

sys.path.append(os.path.abspath("."))

from eval.utils.dwarf_parser import *
import angr
from angr.rust.sim_type import RustSimStruct
from angr.sim_variable import SimStackVariable

TARGET_FUNCTIONS = [
    "uu_fmt::uumain::uumain",
]

struct_cases = []
enum_cases = []
stats = defaultdict(list)

def check(dwarf_type, sim_type):
    

if __name__ == "__main__":
    proj = angr.Project("dataset/o3/fmt", auto_load_libs=False)
    cfg = proj.analyses.CFGFast(normalize=True)
    proj.analyses.CompleteCallingConventions(recover_variables=True, cfg=cfg)
    proj.analyses.StructMemoryLayout(struct_prefixes=("alloc::string::String", "core::fmt::Arguments"))
    parser = DwarfParser()
    parser.parse_json("output/dwarf/fmt.json")
    for func_addr in proj.kb.functions:
        func = proj.kb.functions[func_addr]
        # if func.demangled_name.startswith("running_example::encrypt_file") and "closure" not in func.name:
        # if func.demangled_name.startswith("uu_fmt::uumain::uumain") and "closure" not in func.name:
        if (
            any(func.demangled_name.startswith(prefix) for prefix in TARGET_FUNCTIONS)
            and "closure" not in func.name
        ):
            decompiler = proj.analyses.Decompiler(cfg=cfg, func=func, fail_fast=True)
            stack_depth = decompiler.clinic.calculate_stack_depth()
            offset_to_dwarf_vars = defaultdict(list)
            for var in parser.local_variables[func.demangled_name]:
                if var.category == "stack":
                    offset_to_dwarf_vars[var.location].append(var)
            offset_to_types = defaultdict(list)
            for var, rust_vars_and_types in decompiler.codegen.rust_func.get_unified_local_vars().items():
                types = [ty for _, ty in rust_vars_and_types]
                if isinstance(var, SimStackVariable):
                    stack_offset = var.offset - stack_depth
                    offset_to_types[stack_offset] += types
            for stack_offset in offset_to_dwarf_vars:
                for dwarf_var in offset_to_dwarf_vars[stack_offset]:
                    category = dwarf_var.type.__class__.__name__
                    possible_types = offset_to_types[stack_offset]
                    import ipdb
                    ipdb.set_trace()