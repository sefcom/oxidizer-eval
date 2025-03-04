import os
from multiprocessing import Pool

from angr.rust.utils.library import demangle

from eval.decompilers.ida import ida_dec
from eval.decompilers.oxidizer import oxidizer_dec
from eval.decompilers.angr import angr_dec
from eval.decompilers.ghidra import ghidra_dec
from eval.decompilers.util import load_function_list, load_cached_inferred_prototypes
from eval.metrics.result import FunctionEvalResult, BinaryEvalResult, EvalResult, TypeRecoveryEvalResult
from eval.metrics import *
from eval.metrics.trivial import *
from eval.metrics.ground_truth import GroundTruth, MalwareGroundTruth
from eval.type_recovery.dwarf_parser import extract_function_prototypes


DEC_OPTIONS = {
    "angr": {"dec_func": angr_dec, "cache_only": True},
    "Oxidizer": {"dec_func": oxidizer_dec, "cache_only": True},
    "IDA": {"dec_func": ida_dec, "cache_only": True},
    "Ghidra": {"dec_func": ghidra_dec, "cache_only": True},
}

MALWARE_MODE = False

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
    return path.replace("dataset", "dataset-debug")


def eval_binary(binary_path, is_malware):
    binary_name = os.path.basename(binary_path)
    ground_truth = MalwareGroundTruth() if is_malware else GroundTruth(binary_name)

    # We do not evaluate on every function
    # For malware samples, we evaluate on specified functions
    # For Coreutils binaries, we evaluate on functions that are relevant to current module
    function_list = (
        ground_truth.get_malware_function_list(binary_name)
        if is_malware
        else load_function_list(binary_path, module=f"uu_{binary_name}")
    )

    binary_eval_result = BinaryEvalResult(binary_path, is_malware)

    for func_name in function_list:
        func_eval_result = FunctionEvalResult(func_name)
        func_ground_truth = None if is_malware else ground_truth.get_function_ground_truth(func_name)

        if func_ground_truth is None and not is_malware:
            continue

        for decompiler in DEC_OPTIONS:
            options = DEC_OPTIONS[decompiler]
            dec_func = options["dec_func"]
            cache_only = options["cache_only"]

            result = dec_func(
                binary_path,
                function_list,
                cache_only=cache_only,
            )

            if (
                func_name not in EXCLUDED_FUNCTIONS
                and func_name in result["decompilation"]
                and func_name in result["function_call_counts"]
            ):
                decompilation = result["decompilation"][func_name]

                if func_ground_truth is not None:
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
                func_eval_result.add_result(NUM_VARIABLES, decompiler, num_variables(decompilation))
                func_eval_result.add_result(NUM_OPERATORS, decompiler, num_operators(decompilation))
                func_eval_result.add_result(
                    NUM_FUNCTION_CALL_COUNTS, decompiler, num_call_counts(result["function_call_counts"][func_name])
                )

                if is_malware:
                    func_eval_result.add_result(
                        NUM_MISSED_FUNCTION_CALLS,
                        decompiler,
                        num_missed_malware_function_calls(
                            result["function_call_counts"][func_name],
                            ground_truth.get_malware_call_counts(os.path.basename(binary_path), func_name),
                        ),
                    )

        binary_eval_result.add_func_eval_reuslt(func_eval_result)

    # Type recovery evaluation
    inferred_prototypes, ground_truth_prototypes = None, None
    if not is_malware:
        inferred_prototypes = load_cached_inferred_prototypes(os.path.basename(binary_name))
        ground_truth_prototypes = extract_function_prototypes(
            convert_to_debug_path(binary_path), list(inferred_prototypes.keys())
        )

    print(binary_eval_result)
    return binary_eval_result, ground_truth_prototypes, inferred_prototypes


def eval(dir_path):
    is_malware = "malware" in dir_path
    binary_paths = []

    for dirpath, _, filenames in os.walk(dir_path):
        for filename in filenames:
            if "." in filename:
                continue
            binary_paths.append(os.path.join(dirpath, filename))

    # binary_paths = ["dataset/o3/cp"]

    tasks = [(binary_path, is_malware) for binary_path in binary_paths]

    with Pool() as pool:
        results = pool.starmap(eval_binary, tasks)

    # results = []
    # for binary_path in binary_paths:
    #     results.append(eval_one(binary_path,))

    eval_result = EvalResult(is_malware)
    type_recovery_eval_result = TypeRecoveryEvalResult()

    for result in results:
        eval_result.add_binary_eval_result(result[0])
        if result[1] and result[2]:
            type_recovery_eval_result.add_result(result[1], result[2])
    # eval_result = EvalResult([result for result in results])
    print(eval_result)
    if not is_malware:
        print(type_recovery_eval_result)


if __name__ == "__main__":
    eval("dataset/o3")
    print("-------------- Malware Evaluation Results --------------")
    eval("dataset/malware")
