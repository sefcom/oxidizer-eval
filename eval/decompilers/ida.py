import json
import subprocess
import os
from tempfile import NamedTemporaryFile

from ..config import IDA_PATH, IDA_SCRIPTS_PATH
from .util import *

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
                fname = idc.get_func_name(ea)
                demangled = idaapi.demangle_name(fname, idaapi.MNG_SHORT_FORM) or fname
                self.counts[demangled] += 1
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
    result = {
        "decompilation": {},
        "function_call_counts": {},
        "macro_call_counts": {},
        "variable_types": {}
    }
    for ea in idautils.Functions():
        func_name = idc.get_func_name(ea)
        print(func_name)
        demangled = idaapi.demangle_name(func_name, idaapi.MNG_SHORT_FORM) or func_name
        if func_name in %FUNCTION_LIST%:
            cfunc = decompile(ea)
            if cfunc is not None:
                variable_types = get_variable_types(cfunc)
                function_call_counts = get_function_call_counts(cfunc)
                pseudocode = get_pseudocode(cfunc)
                result["decompilation"][func_name] = pseudocode
                result["function_call_counts"][func_name] = function_call_counts
                result["macro_call_counts"][func_name] = {}
                result["variable_types"][func_name] = variable_types
    with open("%RESULT_PATH%", "w", encoding="utf-8") as fd:
        json.dump(result, fd, indent=2)
    idc.qexit(0)
"""


def ida_dec(binary_path, function_list, cache_only=False):
    assert os.path.exists(binary_path)

    function_list = list(function_list)
    result = {
        "decompilation": {},
        "function_call_counts": {},
        "macro_call_counts": {},
        "variable_types": {},
    }

    bin_name = os.path.basename(binary_path)
    cached_result = load_cached_result("ida", bin_name)
    if cached_result:
        result = cached_result
    for func_name in result["decompilation"]:
        if func_name in function_list:
            function_list.remove(func_name)

    if function_list and not cache_only:
        result_fd = NamedTemporaryFile("w", suffix=".py", delete=False)
        result_fd.close()
        script_fd = NamedTemporaryFile("w", suffix=".py", delete=False)
        script_fd.write(
            IDAPYTHON_SCRIPT.replace("%FUNCTION_LIST%", str(function_list)).replace("%RESULT_PATH%", result_fd.name)
        )
        script_fd.close()
        cmd = f"{IDA_PATH} -A -S{os.path.abspath(os.path.join(IDA_SCRIPTS_PATH, script_fd.name))} {os.path.abspath(binary_path)}"
        subprocess.run(cmd.split())

        with open(result_fd.name, "r") as fd:
            more_result = json.load(fd)
            for key in list(result.keys()):
                result[key].update(more_result.get(key, {}))

        os.unlink(result_fd.name)
        os.unlink(script_fd.name)

        save_result("ida", bin_name, result)
    return result
