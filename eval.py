import os
from multiprocessing import Pool

from angr.rust.utils.library import demangle

from eval.decompilers.ida import ida_dec
from eval.decompilers.oxidizer import oxidizer_dec
from eval.decompilers.angr import angr_dec
from eval.decompilers.ghidra import ghidra_dec
from eval.decompilers.util import load_function_list
from eval.metrics.result import FunctionEvalResult, BinaryEvalResult, EvalResult
from eval.metrics.trivial import *


DEC_OPTIONS = {
    "angr": {"dec_func": angr_dec, "cache_only": True},
    "Oxidizer": {"dec_func": oxidizer_dec, "cache_only": True},
    "IDA": {"dec_func": ida_dec, "cache_only": True},
    "Ghidra": {"dec_func": ghidra_dec, "cache_only": True},
}


def eval_one_with_decompiler(binary_path, function_list, opt_level, decompiler):
    options = DEC_OPTIONS[decompiler]
    dec_func = options["dec_func"]
    cache_only = options["cache_only"]

    binary_name = os.path.basename(binary_path)
    decompilation_result, call_counts_result = dec_func(
        binary_path,
        function_list,
        cache_dir=f"O{opt_level}/{decompiler.lower()}/{binary_name}",
        cache_only=cache_only,
    )

    func_eval_results = []
    for func_name in function_list:
        if func_name in decompilation_result and func_name in call_counts_result:
            decompilation_output = decompilation_result[func_name]
            call_counts_output = call_counts_result[func_name]

            func_eval_result = FunctionEvalResult(func_name)
            # Feeding outputs
            func_eval_result.add_loc(decompiler, LoC(decompilation_output))
            func_eval_result.add_num_assignments(decompiler, num_assignments(decompilation_output))
            func_eval_result.add_num_variables(decompiler, num_variables(decompilation_output))
            func_eval_result.add_num_gotos(decompiler, num_gotos(decompilation_output))
            func_eval_result.add_num_call_counts(decompiler, num_call_counts(call_counts_output))
            func_eval_results.append(func_eval_result)
            print(func_eval_result)
    return func_eval_results


def eval_one(binary_path, opt_level):
    binary_name = os.path.basename(binary_path)
    function_list = load_function_list(binary_path, module=f"uu_{binary_name}")

    binary_eval_result = BinaryEvalResult(binary_path)
    decompiler_and_func_name_to_func_eval_result = {}
    for decompiler in DEC_OPTIONS:
        func_eval_results = eval_one_with_decompiler(binary_path, function_list, opt_level, decompiler)
        for func_eval_result in func_eval_results:
            decompiler_and_func_name_to_func_eval_result[(decompiler, func_eval_result.func_name)] = func_eval_result

    for func_name in function_list:
        if all((decompiler, func_name) in decompiler_and_func_name_to_func_eval_result for decompiler in DEC_OPTIONS):
            merged_func_eval_result = FunctionEvalResult.merge(
                [decompiler_and_func_name_to_func_eval_result[(decompiler, func_name)] for decompiler in DEC_OPTIONS]
            )
            binary_eval_result.add_func_eval_reuslt(merged_func_eval_result)

    print(binary_eval_result)
    return binary_eval_result


def eval_coreutils(opt_level):
    binary_paths = []

    for dirpath, _, filenames in os.walk(f"dataset/o{opt_level}"):
        for filename in filenames:
            if "." in filename:
                continue
            binary_paths.append(os.path.join(dirpath, filename))

    # binary_paths = ["dataset/o3/fmt"]

    tasks = [(binary_path, opt_level) for binary_path in binary_paths]

    with Pool() as pool:
        results = pool.starmap(eval_one, tasks)

    eval_result = EvalResult([result for result in results if result.is_valid()])
    print(eval_result)
    # for binary_path in binary_paths:
    #     eval_one(binary_path, opt_level)


if __name__ == "__main__":
    # eval_coreutils(opt_level=0)
    eval_coreutils(opt_level=3)
