import json
import traceback

from angr.rust.sim_type import *

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


def _normalize_type(ty: RustSimType) -> Type:
    if ty is None:
        return Type(None, None)
    name = None
    size = ty.size // 8
    is_pointer = isinstance(ty, RustSimTypeReference)
    if is_pointer:
        ty = ty.pts_to
    if isinstance(ty, RustSimTypeResult):
        name = "Result"
    elif isinstance(ty, RustSimTypeOption):
        name = "Option"
    elif isinstance(ty, RustSimStruct):
        name = "struct"
    else:
        name = "primitive"
    if is_pointer:
        name += "*"
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


def _angr_dec_base(binary_path, function_list, extract_body_func, is_rust_binary, cache_only=False):
    assert os.path.exists(binary_path)

    decompiler_name = "oxidizer" if is_rust_binary else "angr"
    function_list = list(function_list)
    result = {
        "decompilation": {},
        "function_call_counts": {},
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
        try:
            proj = angr.Project(binary_path, auto_load_libs=False, is_rust_binary=is_rust_binary)
            cfg = proj.analyses.CFGFast(normalize=True)
            proj.analyses.CompleteCallingConventions(recover_variables=True, cfg=cfg)
        except:
            return result

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

            except BaseException as e:
                traceback.print_exception(e)
                print(f"Failed to decompile functon: {demangle(func.name)}")
        # Save inferred prototypes
        if is_rust_binary:
            for func_addr in proj.kb.functions:
                func = proj.kb.functions[func_addr]
                if isinstance(func.prototype, RustSimTypeFunction):
                    result["prototypes"][func.name] = _normalize_prototype(func.name, func.prototype).to_dict()
        save_result(decompiler_name, bin_name, result)
    return result


def angr_dec(binary_path, function_list, cache_only=False):
    return _angr_dec_base(binary_path, function_list, _extract_function_body, False, cache_only)
