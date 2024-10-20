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


def angr_dec(binary_path, func_name, is_rust_binary=True):
    binary_name = os.path.basename(binary_path)
    cache = get_cached_decompiled_code("angr", binary_name, func_name)
    if cache:
        return cache
    proj = angr.Project(binary_path, auto_load_libs=False, is_rust_binary=is_rust_binary)
    cfg = proj.analyses.CFGFast(normalize=True)
    proj.analyses.CompleteCallingConventions(recover_variables=True, cfg=cfg)
    for func_addr in proj.kb.functions:
        func = proj.kb.functions[func_addr]
        try:
            if func.name == func_name:
                decompiler = proj.analyses.Decompiler(cfg=cfg, func=func)
                result = _extract_function_body(decompiler.codegen.text.split("\n"))
                if result:
                    save_output("angr", binary_name, func_name, result)
                return result
        except BaseException as e:
            import traceback

            traceback.print_exception(e)
    return None
