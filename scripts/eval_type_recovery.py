import os
import sys
from collections import defaultdict
from pprint import pformat
import multiprocessing

sys.path.append(os.path.abspath("."))

from eval.utils.dwarf_parser import *
import angr
from angr.sim_type import TypeRef
from angr.rust.sim_type import RustSimStruct
from angr.sim_variable import SimStackVariable, SimRegisterVariable


def check(dwarf_type: Type, sim_type: angr.sim_type.SimType):
    if isinstance(sim_type, TypeRef):
        sim_type = sim_type.type
    if isinstance(dwarf_type, Struct):
        return isinstance(sim_type, RustSimStruct) and sim_type.size == dwarf_type.size * 8
    return False


def process_file(file):
    local_stats = defaultdict(list)
    try:
        parser = DwarfParser()
        parser.parse_json(f"output/dwarf/{file}.json")
        proj = angr.Project(os.path.join("dataset/o3", file), auto_load_libs=False)
        target_functions = [f"uu_{file}::"]
        cfg = proj.analyses.CFGFast(normalize=True)
        proj.analyses.CompleteCallingConventions(recover_variables=True, cfg=cfg)
        proj.analyses.StructMemoryLayout(struct_prefixes=("alloc::string::String", "core::fmt::Arguments"))
        for func_addr in proj.kb.functions:
            func = proj.kb.functions[func_addr]
            if (
                any(func.demangled_name.startswith(prefix) for prefix in target_functions)
                and "closure" not in func.name
            ):
                try:
                    decompiler = proj.analyses.Decompiler(cfg=cfg, func=func, fail_fast=True)
                    stack_depth = decompiler.clinic.calculate_stack_depth()
                    ident_to_dwarf_vars = defaultdict(list)
                    for var in parser.local_variables[func.demangled_name]:
                        if var.category == "stack":
                            ident = f"stack{var.location}"
                            ident_to_dwarf_vars[ident].append(var)
                        elif var.category == "register":
                            ident = f"reg{proj.arch.get_register_offset(var.location)}"
                            ident_to_dwarf_vars[ident].append(var)
                    ident_to_types = defaultdict(list)
                    for var, rust_vars_and_types in decompiler.codegen.rust_func.get_unified_local_vars().items():
                        types = [ty for _, ty in rust_vars_and_types]
                        if isinstance(var, SimStackVariable):
                            stack_offset = var.offset - stack_depth
                            ident = f"stack{stack_offset}"
                            ident_to_types[ident] += types
                        elif isinstance(var, SimRegisterVariable):
                            ident = f"reg{var.reg}"
                            ident_to_types[ident] += types
                    for ident in ident_to_dwarf_vars:
                        for dwarf_var in ident_to_dwarf_vars[ident]:
                            category = dwarf_var.type.__class__.__name__
                            possible_types = ident_to_types[ident]
                            local_stats[category].append(
                                any(check(dwarf_var.type, ty.with_arch(proj.arch)) for ty in possible_types)
                            )
                except:
                    pass
    except Exception as e:
        import traceback

        traceback.print_exc()
    return local_stats


if __name__ == "__main__":
    files = [f for f in os.listdir("dataset/o3/") if "." not in f and "expr" not in f and "fmt" in f]
    # for file in files:
    #     if "fmt" in file:
    #         process_file(file)
    with multiprocessing.Pool(10) as pool:
        results = pool.map(process_file, files)

    # Merge stats
    stats = defaultdict(list)
    for res in results:
        for key, value_list in res.items():
            stats[key].extend(value_list)

    import ipdb

    ipdb.set_trace()
