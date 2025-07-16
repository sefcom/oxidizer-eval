import os
from collections import defaultdict
from pprint import pformat
import sys

sys.path.append(os.path.abspath("."))

from eval.utils.dwarf_parser import *
import angr
from angr.sim_type import TypeRef
from angr.rust.sim_type import RustSimStruct
from angr.sim_variable import SimStackVariable

stats = defaultdict(list)


def check(dwarf_type: Type, sim_type: angr.sim_type.SimType):
    if isinstance(sim_type, TypeRef):
        sim_type = sim_type.type
    if isinstance(dwarf_type, Struct):
        return isinstance(sim_type, RustSimStruct) and sim_type.size == dwarf_type.size * 8
    return False


if __name__ == "__main__":
    for file in os.listdir("dataset/o3/"):
        try:
            if "." in file or "expr" in file:
                continue
            if "fmt" not in file:
                continue
            parser = DwarfParser()
            parser.parse_json(f"output/dwarf/{file}.json")
            proj = angr.Project(os.path.join("dataset/o3", file), auto_load_libs=False)
            target_functions = [f"uu_{file}::"]
            cfg = proj.analyses.CFGFast(normalize=True)
            proj.analyses.CompleteCallingConventions(recover_variables=True, cfg=cfg)
            proj.analyses.StructMemoryLayout(struct_prefixes=("alloc::string::String", "core::fmt::Arguments"))
            for func_addr in proj.kb.functions:
                func = proj.kb.functions[func_addr]
                # if func.demangled_name.startswith("running_example::encrypt_file") and "closure" not in func.name:
                # if func.demangled_name.startswith("uu_fmt::uumain::uumain") and "closure" not in func.name:
                if (
                    any(func.demangled_name.startswith(prefix) for prefix in target_functions)
                    and "closure" not in func.name
                ):
                    try:
                        decompiler = proj.analyses.Decompiler(cfg=cfg, func=func, fail_fast=True)
                        stack_depth = decompiler.clinic.calculate_stack_depth()
                        offset_to_dwarf_vars = defaultdict(list)
                        for var in parser.local_variables[func.demangled_name]:
                            if var.category == "stack":
                                offset_to_dwarf_vars[var.location].append(var)
                            else:
                                category = dwarf_var.type.__class__.__name__
                                stats[category].append(False)
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
                                stats[category].append(
                                    any(check(dwarf_var.type, ty.with_arch(proj.arch)) for ty in possible_types)
                                )
                    except:
                        pass
        except Exception as e:
            import ipdb

            ipdb.set_trace()
    import ipdb

    ipdb.set_trace()
