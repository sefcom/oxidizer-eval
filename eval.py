import os
from multiprocessing import Pool

from angr.rust.utils.library import demangle

from eval.decompilers.ida import ida_dec
from eval.decompilers.oxidizer import oxidizer_dec
from eval.decompilers.angr import angr_dec
from eval.decompilers.util import load_function_list
from eval.metrics.result import FunctionEvalResult, BinaryEvalResult, EvalResult
from eval.metrics.trivial import *


def eval_one(binary_path, opt_level):
    # if binary_path != "dataset/o3/fmt":
    #     return BinaryEvalResult(binary_path)

    binary_name = os.path.basename(binary_path)
    function_list = load_function_list(binary_path, module=f"uu_{binary_name}")

    angr_dec_result = angr_dec(
        binary_path, function_list, cache_dir=f"O{opt_level}/angr/{binary_name}", cache_only=True
    )
    oxidizer_dec_result = oxidizer_dec(
        binary_path, function_list, cache_dir=f"O{opt_level}/oxidizer/{binary_name}", cache_only=True
    )
    ida_dec_result = ida_dec(binary_path, function_list, cache_dir=f"O{opt_level}/ida/{binary_name}", cache_only=True)

    binary_eval_result = BinaryEvalResult(binary_path)

    decompiled_function_list = set(oxidizer_dec_result.keys()).intersection(ida_dec_result.keys())
    for func_name in decompiled_function_list:
        oxidizer_output = oxidizer_dec_result[func_name]
        ida_output = ida_dec_result[func_name]
        angr_output = angr_dec_result[func_name]

        func_eval_result = FunctionEvalResult(demangle(func_name))
        func_eval_result.add_loc("IDA", LoC(ida_output))
        func_eval_result.add_loc("Oxidizer", LoC(oxidizer_output))
        func_eval_result.add_loc("angr", LoC(angr_output))

        func_eval_result.add_num_variables("IDA", num_variables_ida(ida_output))
        func_eval_result.add_num_variables("Oxidizer", num_variables_oxidizer(oxidizer_output))
        func_eval_result.add_num_variables("angr", num_variables_angr(angr_output))

        func_eval_result.add_num_ptr_deref("IDA", num_ptr_deref(ida_output))
        func_eval_result.add_num_ptr_deref("Oxidizer", num_ptr_deref(oxidizer_output))
        func_eval_result.add_num_ptr_deref("angr", num_ptr_deref(angr_output))

        func_eval_result.add_num_assignments("IDA", num_assignments(ida_output))
        func_eval_result.add_num_assignments("Oxidizer", num_assignments(oxidizer_output))
        func_eval_result.add_num_assignments("angr", num_assignments(angr_output))

        func_eval_result.add_num_whiles("IDA", num_whiles(ida_output))
        func_eval_result.add_num_whiles("Oxidizer", num_whiles(oxidizer_output))
        func_eval_result.add_num_whiles("angr", num_whiles(angr_output))

        func_eval_result.add_num_gotos("IDA", num_gotos(ida_output))
        func_eval_result.add_num_gotos("Oxidizer", num_gotos(oxidizer_output))
        func_eval_result.add_num_gotos("angr", num_gotos(angr_output))

        binary_eval_result.add_func_eval_reuslt(func_eval_result)

        # print(func_eval_result)

    print(binary_eval_result)
    return binary_eval_result


def eval_coreutils(opt_level):
    binary_paths = []

    for dirpath, _, filenames in os.walk(f"dataset/o{opt_level}"):
        for filename in filenames:
            if "." in filename:
                continue
            binary_paths.append(os.path.join(dirpath, filename))

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
