import traceback

import angr

from .util import *


def _extract_function_body(output):
    body = []
    for line in output:
        if len(body) == 0 and line.startswith("fn ") and line.endswith("{"):
            body.append(line)
            continue
        elif len(body):
            body.append(line)
    return "\n".join(body)


def oxidizer_dec(binary_path, function_list, cache_dir, cache_only=False):
    assert os.path.exists(binary_path)

    function_list = list(function_list)
    result = {}

    for func_name in list(function_list):
        cached_output = load_cached_output(cache_dir, func_name)
        if cached_output:
            result[func_name] = cached_output
            function_list.remove(func_name)

    if function_list and not cache_only:
        try:
            proj = angr.Project(binary_path, auto_load_libs=False, is_rust_binary=True)
            cfg = proj.analyses.CFGFast(normalize=True)
            proj.analyses.CompleteCallingConventions(recover_variables=True, cfg=cfg)
        except:
            # TODO: Log here
            pass

        for func_addr in proj.kb.functions:
            func = proj.kb.functions[func_addr]
            try:
                if func.name in function_list:
                    decompiler = proj.analyses.Decompiler(cfg=cfg, func=func)
                    output = _extract_function_body(decompiler.codegen.text.split("\n"))
                    if output:
                        save_output(cache_dir, func.name, output)
                        result[func.name] = output
            except BaseException as e:
                traceback.print_exception(e)
                print(f"Failed to decompile functon: {demangle(func.name)}")
    return result
