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


def _angr_dec_base(binary_path, function_list, cache_dir, extract_body_func, is_rust_binary, cache_only=False):
    assert os.path.exists(binary_path)

    function_list = list(function_list)
    decompilation_result = {}
    call_counts_result = {}

    for func_name in list(function_list):
        cached_output = load_cached_output(cache_dir, func_name)
        cached_call_counts_output = load_cached_call_counts_output(cache_dir, func_name)
        if cached_output and cached_call_counts_output:
            decompilation_result[func_name] = cached_output
            call_counts_result[func_name] = cached_call_counts_output
            function_list.remove(func_name)

    if function_list and not cache_only:
        try:
            proj = angr.Project(binary_path, auto_load_libs=False, is_rust_binary=is_rust_binary)
            cfg = proj.analyses.CFGFast(normalize=True)
            proj.analyses.CompleteCallingConventions(recover_variables=True, cfg=cfg)
        except:
            return decompilation_result, call_counts_result

        for func_addr in proj.kb.functions:
            func = proj.kb.functions[func_addr]
            try:
                if func.name in function_list:
                    decompiler = proj.analyses.Decompiler(cfg=cfg, func=func)
                    output = extract_body_func(decompiler.codegen.text.split("\n"))
                    if output:
                        # Save decompilation result
                        save_output(cache_dir, func.name, output)
                        decompilation_result[func.name] = output
                        # Save call counts result
                        call_counter = CallCounter(proj)
                        call_counter.walk(decompiler.seq_node)
                        call_counts_output = json.dumps(dict(call_counter.call_counts), indent=2)
                        call_counts_result[func.name] = call_counts_output
                        save_call_counts_output(cache_dir, func.name, call_counts_output)
            except BaseException as e:
                traceback.print_exception(e)
                print(f"Failed to decompile functon: {demangle(func.name)}")
                save_output(cache_dir, "ERROR_" + func.name, "".join(traceback.format_exception(e)))
        # Save inferred prototypes
        if is_rust_binary:
            prototypes = {}
            for func_addr in proj.kb.functions:
                func = proj.kb.functions[func_addr]
                if isinstance(func.prototype, RustSimTypeFunction):
                    prototypes[func.name] = _normalize_prototype(func.name, func.prototype)
            save_inferred_prototypes(cache_dir, os.path.basename(binary_path), prototypes)
    return decompilation_result, call_counts_result


def angr_dec(binary_path, function_list, cache_dir, cache_only=False):
    return _angr_dec_base(binary_path, function_list, cache_dir, _extract_function_body, False, cache_only)
