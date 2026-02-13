import json
import subprocess
import os
from tempfile import NamedTemporaryFile

from eval.result import DecompileResult
from eval.config import IDA_PATH, IDA_SCRIPTS_PATH

IDAPYTHON_SCRIPT = r"""
from collections import defaultdict
import json

import idaapi
import idautils
import idc
import ida_hexrays
from ida_typeinf import *
import ida_lines

def classify_type(tif):
    if not tif:
        return None
    if tif.is_ptr():
        pointed = tif.get_pointed_object()
        if pointed:
            if pointed.is_ptr():
                inner = "reference"
            else:
                inner = classify_type(pointed)
            return f"&{inner}" if inner else None
        return None
    elif tif.is_array():
        return "array"
    elif tif.is_struct() or tif.is_union():
        return "struct"
    else:
        return "primitive"

class CallCollector(ida_hexrays.ctree_visitor_t):
    def __init__(self):
        super().__init__(ida_hexrays.CV_FAST)
        self.counts = defaultdict(int)

    def visit_expr(self, expr):
        if expr.op == ida_hexrays.cot_call:
            callee = expr.x
            if callee.op == ida_hexrays.cot_obj:
                ea = callee.obj_ea
                self.counts[ea] += 1
        return 0

def decompile(ea):
    func = idaapi.get_func(ea)
    if not func:
        return None
    try:
        cfunc = idaapi.decompile(func)
    except idaapi.DecompilationFailure:
        return None
    return cfunc

def get_variable_types(cfunc):
    lvars = cfunc.get_lvars()
    ident_to_types = defaultdict(list)

    for var in lvars:
        vtype = var.tif.dstr() if var.tif else "unknown"
        loc = var.location
        ident = None
        atype = loc.atype()

        if atype == ALOC_REG1:
            reg_off = loc.reg1()
            reg_name = ida_hexrays.get_mreg_name(reg_off, var.width)
            ident = f"reg_{reg_name}"

        elif atype == ALOC_STACK:
            offset = loc.stkoff()
            ident = f"stack_{offset}"

        if ident is not None:
            ty = classify_type(var.tif)
            size = var.width
            ident_to_types[ident].append((ty, size))
            
    # Handle argument types and return types
    tif = ida_typeinf.tinfo_t()
    ida_nalt.get_tinfo(tif, ea)
    ftd = func_type_data_t()
    tif.get_func_details(ftd)
    rettif = ftd.rettype
    ret_ty = classify_type(rettif)
    ident_to_types["return_type"].append((ret_ty, rettif.get_size() if rettif else (None, None)))

    n_args = ftd.size()
    for i in range(n_args):
        a = ftd.at(i)
        a_tif  = getattr(a, "type", None) or getattr(a, "tif", None)
        a_type_str = classify_type(a_tif)
        a_size = None
        if a_tif is not None and hasattr(a_tif, "get_size"):
            a_size = a_tif.get_size()
        ident_to_types["arg_" + str(i)].append((a_type_str, a_size))
    return ident_to_types

def get_function_call_counts(cfunc):
    collector = CallCollector()
    collector.apply_to(cfunc.body, None)
    function_call_counts = collector.counts
    return function_call_counts
    
def get_pseudocode(cfunc):
    return "\n".join(ida_lines.tag_remove(line.line) for line in cfunc.get_pseudocode())

if __name__ == "__main__":
    ida_auto.auto_wait()
    result = {}
    for ea in idautils.Functions():
        func_name = idc.get_func_name(ea)
        demangled = idaapi.demangle_name(func_name, idaapi.MNG_SHORT_FORM) or func_name
        if ea in %TARGET_FUNCTIONS%:
            cfunc = decompile(ea)
            if cfunc is not None:
                variable_types = get_variable_types(cfunc)
                function_call_counts = get_function_call_counts(cfunc)
                pseudocode = get_pseudocode(cfunc)
                result[ea] = {
                    "decompilation": pseudocode,
                    "function_call_counts": function_call_counts,
                    "macro_call_counts": {},
                    "variable_types": variable_types
                }
    with open("%RESULT_PATH%", "w", encoding="utf-8") as fd:
        json.dump(result, fd, indent=2)
    idc.qexit(0)
"""


def ida_decompile(binary_path, target_functions, tag):
    result_fd = NamedTemporaryFile("w", suffix=".py", delete=False)
    result_fd.close()
    script_fd = NamedTemporaryFile("w", suffix=".py", delete=False)
    script_fd.write(
        IDAPYTHON_SCRIPT.replace("%TARGET_FUNCTIONS%", str(target_functions)).replace(
            "%RESULT_PATH%", result_fd.name
        )
    )
    script_fd.close()
    cmd = f"{IDA_PATH} -A -S{os.path.abspath(os.path.join(IDA_SCRIPTS_PATH, script_fd.name))} {os.path.abspath(binary_path)}"
    subprocess.run(cmd.split())

    with open(result_fd.name, "r") as fd:
        result = json.load(fd)
        for func_addr in list(result.keys()):
            func_result = DecompileResult(
                decompilation=result[func_addr]["decompilation"],
                variable_types=result[func_addr]["variable_types"],
                function_call_counts=result[func_addr]["function_call_counts"],
                macro_call_counts=result[func_addr]["macro_call_counts"],
            )
            yield func_addr, func_result

    os.unlink(result_fd.name)
    os.unlink(script_fd.name)
