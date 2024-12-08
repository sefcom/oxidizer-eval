import json
import traceback

import angr

from .util import *


def _extract_function_body(output):
    body = []
    for idx, line in enumerate(output):
        if len(body) == 0 and line.endswith(")") and len(output) > idx + 1 and output[idx + 1].endswith("{"):
            body.append(line)
            continue
        elif len(body):
            body.append(line)
    return "\n".join(body)


def angr_dec(binary_path, function_list, cache_dir, cache_only=False):
    assert os.path.exists(binary_path)

    function_list = list(function_list)
    result = {}

    for func_name in list(function_list):
        cached_output = load_cached_output(cache_dir, func_name)
        cached_call_counts_output = load_cached_output(cache_dir, "CALL_COUNTS_" + func_name)
        if cached_output and cached_call_counts_output:
            result[func_name] = cached_output
            result["CALL_COUNTS_" + func_name] = cached_call_counts_output
            function_list.remove(func_name)

    if function_list and not cache_only:
        try:
            proj = angr.Project(binary_path, auto_load_libs=False, is_rust_binary=False)
            cfg = proj.analyses.CFGFast(normalize=True)
            proj.analyses.CompleteCallingConventions(recover_variables=True, cfg=cfg)
        except:
            return result

        for func_addr in proj.kb.functions:
            func = proj.kb.functions[func_addr]
            try:
                if func.name in function_list:
                    decompiler = proj.analyses.Decompiler(cfg=cfg, func=func)
                    output = _extract_function_body(decompiler.codegen.text.split("\n"))
                    if output:
                        save_output(cache_dir, func.name, output)
                        result[func.name] = output
                        call_counter = CallCounter(proj)
                        call_counter.walk(decompiler.seq_node)
                        save_output(cache_dir, "CALL_COUNTS_" + func.name, json.dumps(dict(call_counter.call_counts), indent=2))
            except BaseException as e:
                traceback.print_exception(e)
                print(f"Failed to decompile functon: {demangle(func.name)}")
                save_output(cache_dir, "ERROR_" + func.name, "".join(traceback.format_exception(e)))
    return result
