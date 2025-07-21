import os
from multiprocessing import Pool

from angr.rust.utils.library import demangle

from eval.decompilers.ida import ida_dec
from eval.decompilers.oxidizer import oxidizer_dec
from eval.decompilers.angr import angr_dec
from eval.decompilers.ghidra import ghidra_dec
from eval.decompilers.util import load_function_list, load_cached_inferred_prototypes
from eval.metrics.result import FunctionEvalResult, BinaryEvalResult, EvalResult
from eval.metrics import *
from eval.metrics.trivial import *
from eval.metrics.ground_truth import BinaryGroundTruth, FunctionGroundTruth


DEC_OPTIONS = {
    # "angr": {"dec_func": angr_dec, "cache_only": True},
    "Oxidizer": {"dec_func": oxidizer_dec, "cache_only": True},
    # "IDA": {"dec_func": ida_dec, "cache_only": True},
    # "Ghidra": {"dec_func": ghidra_dec, "cache_only": True},
    # "Binary Ninja": {"dec_func": binja_c_dec, "cache_only": True},
    # "Binary Ninja (Pseudo Rust)": {"dec_func": binja_rust_dec, "cache_only": True},
}

EXCLUDED_FUNCTIONS = [
    "_ZN5uu_df7columns6Column5parse17h6fa6943eaec20ad4E",
    "_ZN7uu_head5parse17process_num_block17h8e5bdc2257d4c6b6E",
    "_ZN5uu_ls12extract_time17h4f1c34fa33e953acE",
    "_ZN5uu_cp8platform5linux24sparse_copy_without_hole17h5128473705372174E",
    "_ZN5uu_od13parse_formats18parse_format_flags17h9e51e9c420287b95E",
    "_ZN5uu_od13parse_formats30od_argument_traditional_format17h14da6a638cd1f622E",
    "_ZN5uu_dd9parseargs15conversion_mode17h18084a71126044cdE",
    "_ZN5uu_tr9operation8Sequence15parse_backslash17h345c32065b0e9c92E",
]


def convert_to_debug_path(path):
    return path.replace("datasets", "datasets-debug")


def eval_binary(binary_path, is_malware):
    binary_name = os.path.basename(binary_path)
    ground_truth = BinaryGroundTruth(binary_name)

    # We do not evaluate on every function
    # For Coreutils binaries, we evaluate on functions that are relevant to current module
    function_list = load_function_list(binary_path, module=f"uu_{binary_name}")

    binary_eval_result = BinaryEvalResult(binary_path, is_malware)

    for decompiler in DEC_OPTIONS:
        options = DEC_OPTIONS[decompiler]
        dec_func = options["dec_func"]
        cache_only = options["cache_only"]

        result = dec_func(
            binary_path,
            function_list,
            cache_only=cache_only,
        )

        for func_name in function_list:
            # if "write_fast_using_splice" not in func_name:
            #     continue
            func_eval_result = FunctionEvalResult(func_name)
            func_ground_truth = ground_truth.get_function_ground_truth(func_name)

            if func_ground_truth is None and not is_malware:
                continue

            if (
                func_name not in EXCLUDED_FUNCTIONS
                and func_name in result["decompilation"]
                and func_name in result["function_call_counts"]
                and func_name in result["variable_types"]
            ):
                decompilation = result["decompilation"][func_name]

                func_eval_result.add_result(
                    NUM_MATCHED_STRING_LITERALS,
                    decompiler,
                    num_matched_string_literals(decompilation, func_ground_truth),
                )
                func_eval_result.add_result(
                    NUM_MISMATCHED_FUNCTION_CALLS,
                    decompiler,
                    num_mismatched_function_calls(result["function_call_counts"][func_name], func_ground_truth),
                )
                func_eval_result.add_result(
                    NUM_MISMATCHED_MACRO_CALLS,
                    decompiler,
                    num_mismatched_macro_calls(result["macro_call_counts"][func_name], func_ground_truth),
                )

                func_eval_result.add_result(LOC, decompiler, LoC(decompilation))
                func_eval_result.add_result(NUM_GOTOS, decompiler, num_gotos(decompilation))
                if decompiler.startswith("Binary Ninja"):
                    assert "num_variables" in result and func_name in result["num_variables"]
                    func_eval_result.add_result(NUM_VARIABLES, decompiler, result["num_variables"][func_name])
                else:
                    func_eval_result.add_result(NUM_VARIABLES, decompiler, num_variables(decompilation))
                func_eval_result.add_result(NUM_OPERATORS, decompiler, num_operators(decompilation))
                func_eval_result.add_result(
                    NUM_FUNCTION_CALL_COUNTS, decompiler, num_call_counts(result["function_call_counts"][func_name])
                )

                binary_eval_result.generate_type_eval_result(
                    result["variable_types"][func_name],
                    func_ground_truth["variable_types"],
                )

                binary_eval_result.add_func_eval_reuslt(func_eval_result)

    print(binary_eval_result)
    return binary_eval_result


def eval(dir_path):
    is_malware = "malware" in dir_path
    binary_paths = []

    for dirpath, _, filenames in os.walk(dir_path):
        for filename in filenames:
            if "." in filename:
                continue
            binary_paths.append(os.path.join(dirpath, filename))

    # binary_paths = [binary_path for binary_path in binary_paths if os.path.basename(binary_path) == "fmt"]
    # binary_paths = binary_paths[5:6]
    tasks = [(binary_path, is_malware) for binary_path in binary_paths if "expr" not in binary_path]

    with Pool(4) as pool:
        results = pool.starmap(eval_binary, tasks)

    # results = []
    # for binary_path in binary_paths:
    #     results.append(eval_binary(binary_path, is_malware))

    eval_result = EvalResult(is_malware)

    for result in results:
        eval_result.add_binary_eval_result(result)
    # eval_result = EvalResult([result for result in results])
    print(eval_result)
    import ipdb

    ipdb.set_trace()


if __name__ == "__main__":
    eval("datasets/o3")
    # print("-------------- Malware Evaluation Results --------------")
    # eval("dataset/malware")
