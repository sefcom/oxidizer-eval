import json
import traceback
from collections import Counter

from angr.rust.sim_type import *
from angr.sim_variable import SimStackVariable, SimRegisterVariable
from angr.sim_type import TypeRef, SimTypeChar, SimTypeInt, SimTypeFloat, SimStruct, SimTypePointer, SimType

from .util import *
from ..type_recovery.function_prototype import FunctionPrototype, Type


def _extract_function_body(output):
    body = []
    for idx, line in enumerate(output):
        if len(body) == 0 and line.endswith(")") and len(output) > idx + 1 and output[idx + 1].endswith("{"):
            body.append(line)
            continue
        elif len(body):
            body.append(line)
    return "\n".join(body)


def _normalize_type(ty: SimType) -> Type:
    if ty is None:
        return Type(None, None)
    if isinstance(ty, TypeRef):
        ty = ty.type
    name = None
    size = ty.size // 8 if ty.size else None
    is_pointer = isinstance(ty, SimTypePointer)
    if is_pointer:
        ty = ty.pts_to
    if isinstance(ty, RustSimTypeResult):
        name = "Result"
    elif isinstance(ty, RustSimTypeOption):
        name = "Option"
    elif isinstance(ty, SimStruct):
        name = "struct"
    elif isinstance(ty, RustSimEnum):
        name = "enum"
    elif isinstance(ty, SimTypePointer):
        name = "reference"
    elif isinstance(ty, SimTypeArray):
        name = "array"
    else:
        name = "primitive"
    if is_pointer:
        name = "&" + name
    return Type(name, size)


def _normalize_prototype(name, prototype: RustSimTypeFunction) -> FunctionPrototype:
    args = prototype.args or []
    return_type = prototype.returnty
    if prototype.is_arg0_retbuf and args and isinstance(args[0], RustSimTypeReference):
        return_type = args[0].pts_to
        args = args[1:]
    return_type = _normalize_type(return_type)
    args = [_normalize_type(arg) for arg in args]
    return FunctionPrototype(name, return_type, args)


def _dump_variable_types(decompiler):
    stack_depth = decompiler.clinic.calculate_stack_depth()
    ident_to_types = defaultdict(list)
    func = decompiler.codegen.rust_func if decompiler.project.is_rust_binary else decompiler.codegen.cfunc
    for var, rust_var_and_vartypes in func.get_unified_local_vars().items():
        vartypes = [x[1] for x in rust_var_and_vartypes]
        count = Counter(vartypes)
        vartypes = sorted(
            count.copy(),
            key=lambda x, ct=count: (isinstance(x, (SimTypeChar, SimTypeInt, SimTypeFloat)), ct[x], repr(x)),
        )
        types = [_normalize_type(ty.with_arch(decompiler.project.arch)).to_tuple() for ty in vartypes][:1]
        if isinstance(var, SimStackVariable):
            stack_offset = var.offset - stack_depth
            ident = f"stack_{stack_offset}"
            ident_to_types[ident] += types
        elif isinstance(var, SimRegisterVariable):
            ident = f"reg_{decompiler.project.arch.register_names.get(var.reg)}"
            ident_to_types[ident] += types
    return ident_to_types


def _angr_dec_base(binary_path, function_list, extract_body_func, is_rust_binary, cache_only=False):
    assert os.path.exists(binary_path)

    decompiler_name = "oxidizer" if is_rust_binary else "angr"
    function_list = list(function_list)
    result = {
        "decompilation": {},
        "function_call_counts": {},
        "macro_call_counts": {},
        "node_counts": {},
        "variable_types": {},
    }

    bin_name = os.path.basename(binary_path)
    cached_result = load_cached_result(decompiler_name, bin_name)
    if cached_result:
        result = cached_result

    for func_name in result["decompilation"]:
        if func_name in function_list:
            function_list.remove(func_name)

    if function_list and not cache_only:
        try:
            proj = angr.Project(binary_path, auto_load_libs=False, is_rust_binary=is_rust_binary)
            cfg = proj.analyses.CFGFast(normalize=True)
            proj.analyses.CompleteCallingConventions(recover_variables=True, cfg=cfg)
        except:
            return result

        if proj.is_rust_binary:
            proj.analyses.KnownTypeLoader()

        for func_addr in proj.kb.functions:
            func = proj.kb.functions[func_addr]
            try:
                if func.name in function_list:
                    decompiler = proj.analyses.Decompiler(cfg=cfg, func=func)
                    output = extract_body_func(decompiler.codegen.text.split("\n"))
                    if output:
                        result["decompilation"][func.name] = output
                        # Save call counts result
                        call_counter = CallCounter(proj)
                        call_counter.walk(decompiler.seq_node)
                        result["function_call_counts"][func.name] = call_counter.function_call_counts
                        result["macro_call_counts"][func.name] = call_counter.macro_call_counts
                        node_counter = NodeCounter()
                        node_counter.walk(decompiler.seq_node)
                        result["node_counts"][func.name] = node_counter.node_counts
                        result["variable_types"][func.name] = _dump_variable_types(decompiler)

            except BaseException as e:
                traceback.print_exception(e)
                print(f"Failed to decompile functon: {demangle(func.name)}")

        result["mcc"] = calculate_mcc(result, is_rust_binary)

        save_result(decompiler_name, bin_name, result)
    return result


def angr_dec(binary_path, function_list, cache_only=False):
    return _angr_dec_base(binary_path, function_list, _extract_function_body, False, cache_only)
