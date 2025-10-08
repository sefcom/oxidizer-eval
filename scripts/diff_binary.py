import traceback

import angr

def decompile(binary_path, function_list, extract_body_func, is_rust_binary, cache_only=False):
        proj = angr.Project(binary_path, auto_load_libs=False, is_rust_binary=is_rust_binary)
        cfg = proj.analyses.CFGFast(normalize=True)
        proj.analyses.CompleteCallingConventions(recover_variables=True, cfg=cfg)

        if proj.is_rust_binary:
            proj.analyses.KnownTypeLoader()

        for func_addr in proj.kb.functions:
            func = proj.kb.functions[func_addr]
            try:
                if func.name in function_list:
                    decompiler = proj.analyses.Decompiler(cfg=cfg, func=func)
                    output = extract_body_func(decompiler.codegen.text.split("\n"))
            except BaseException as e:
                traceback.print_exception(e)
                print(f"Failed to decompile functon: {demangle(func.name)}")

        save_result(decompiler_name, bin_name, result)
    return result
