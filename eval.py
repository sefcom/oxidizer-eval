import os
from multiprocessing import Pool

from angr.rust.utils.library import demangle

from eval.config import DECOMPILERS
from eval.decompilers.util import load_function_list
from eval.metrics.result import FunctionEvalResult, BinaryEvalResult, EvalResult
from eval.metrics import *
from eval.metrics.calc import *
from eval.metrics.ground_truth import BinaryGroundTruth
from eval.decompilers.ida import ida_dec
from eval.decompilers.oxidizer import oxidizer_dec
from eval.decompilers.angr import angr_dec
from eval.decompilers.ghidra import ghidra_dec
from eval.decompilers.binja import binja_c_dec, binja_rust_dec


def dummy_dec(*args, **kwargs):
    pass


DEC_OPTIONS = {
    "Source": {"dec_func": dummy_dec, "cache_only": True},
    "angr": {"dec_func": angr_dec, "cache_only": True},
    "Oxidizer": {"dec_func": oxidizer_dec, "cache_only": True},
    "IDA": {"dec_func": ida_dec, "cache_only": True},
    "Ghidra": {"dec_func": ghidra_dec, "cache_only": True},
    "Binary Ninja": {"dec_func": binja_c_dec, "cache_only": False},
    "Binary Ninja (Pseudo Rust)": {"dec_func": binja_rust_dec, "cache_only": False},
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


def eval_binary(binary_path):
    binary_name = os.path.basename(binary_path)

    # Load ground truth from output/ground_truth/<binary_name>.json
    ground_truth = BinaryGroundTruth.load(binary_name)

    # We do not evaluate on every function
    # For Coreutils binaries, we evaluate on functions that are relevant to current module
    module = f"uu_{binary_name}" if "o3" in binary_path else binary_name
    print(f"{binary_path=}")
    function_list = load_function_list(binary_path, module)

    binary_eval_result = BinaryEvalResult(binary_path)

    func_eval_results = {}

    for decompiler in DEC_OPTIONS:
        if decompiler not in DECOMPILERS:
            continue

        options = DEC_OPTIONS[decompiler]
        dec_func = options["dec_func"]
        cache_only = options["cache_only"]

        result = dec_func(
            binary_path,
            function_list,
            cache_only=cache_only,
        )

        for func_name in function_list:
            # if "process_file" not in func_name:
            #     continue
            if demangle(func_name) not in func_eval_results:
                func_eval_results[demangle(func_name)] = FunctionEvalResult(func_name)
            func_eval_result = func_eval_results[demangle(func_name)]

            # Get function-level ground truth
            func_ground_truth = ground_truth.get_function_ground_truth(func_name)

            # Special handling for source
            if decompiler == "Source":
                if func_ground_truth:
                    func_eval_result.add_result(LOC, decompiler, func_ground_truth.loc)
                    func_eval_result.add_result(NUM_VARIABLES, decompiler, func_ground_truth.nvars)
                    func_eval_result.add_result(NUM_OPERATORS, decompiler, func_ground_truth.nofops)
                    func_eval_result.add_result(NUM_GOTOS, decompiler, 0)  # Source does not have gotos
                    func_eval_result.add_result(
                        NUM_MATCHED_STRING_LITERALS, decompiler, sum(func_ground_truth.string_literals.values())
                    )
                    func_eval_result.add_result(
                        NUM_MATCHED_FUNCTION_CALLS, decompiler, sum(func_ground_truth.calls.values())
                    )
                    func_eval_result.add_result(NUM_EXTRANEOUS_FUNCTION_CALLS, decompiler, 0)
                    func_eval_result.add_result(
                        NUM_MATCHED_MACRO_CALLS, decompiler, sum(func_ground_truth.macros.values())
                    )
            elif (
                func_name not in EXCLUDED_FUNCTIONS
                and func_name in result["decompilation"]
                and func_name in result["function_call_counts"]
                and func_name in result["variable_types"]
                and func_ground_truth is not None
            ):
                decompilation = result["decompilation"][func_name]

                # Conciseness Metric-1: Number of lines of code
                func_eval_result.add_result(LOC, decompiler, LoC(decompilation))

                # Conciseness Metric-2: Number of variables
                if decompiler.startswith("Binary Ninja"):
                    assert "num_variables" in result and func_name in result["num_variables"]
                    func_eval_result.add_result(NUM_VARIABLES, decompiler, result["num_variables"][func_name])
                else:
                    func_eval_result.add_result(NUM_VARIABLES, decompiler, num_variables(decompilation))

                # Conciseness Metric-3: Number of operators
                func_eval_result.add_result(NUM_OPERATORS, decompiler, num_operators(decompilation))

                # Fidelity Metric-1: Number of gotos
                func_eval_result.add_result(NUM_GOTOS, decompiler, num_gotos(decompilation))

                # Fidelity Metric-2: Number of matched string literals
                func_eval_result.add_result(
                    NUM_MATCHED_STRING_LITERALS,
                    decompiler,
                    num_matched_string_literals(decompilation, func_ground_truth.string_literals),
                )

                # Fidelity Metric-3: Number of matched function calls
                func_eval_result.add_result(
                    NUM_MATCHED_FUNCTION_CALLS,
                    decompiler,
                    num_matched_function_calls(result["function_call_counts"][func_name], func_ground_truth.calls),
                )

                # Fidelity Metric-3: Number of extraneous function calls
                func_eval_result.add_result(
                    NUM_EXTRANEOUS_FUNCTION_CALLS,
                    decompiler,
                    num_extraneous_function_calls(result["function_call_counts"][func_name], func_ground_truth.calls),
                )

                # Fidelity Metric-4: Number of matched macro calls
                func_eval_result.add_result(
                    NUM_MATCHED_MACRO_CALLS,
                    decompiler,
                    num_matched_macro_calls(result["macro_call_counts"][func_name], func_ground_truth.macros),
                )

                type_eval_result, dwarf_var_to_predicted_types = generate_type_eval_result(
                    result["variable_types"][func_name], func_ground_truth.variable_types
                )
                for metric in type_eval_result:
                    func_eval_result.add_result(metric, decompiler, type_eval_result[metric])

                # For debug purpose
                if decompiler == "Oxidizer":
                    with open(f"output/log/{binary_name}.log", "a+") as fd:
                        fd.write(f"\nFunction: {demangle(func_name)}\n")
                        for dwarf_var, pred_types in dwarf_var_to_predicted_types.items():
                            fd.write(f"  {dwarf_var}: {pred_types}\n")

    for func_name, func_eval_result in func_eval_results.items():
        binary_eval_result.add_func_eval_result(func_eval_result)

    # print(binary_eval_result)
    return binary_eval_result


def eval(dir_path):
    binary_paths = []

    for dirpath, _, filenames in os.walk(dir_path):
        for filename in filenames:
            if "." in filename:
                continue
            binary_paths.append(os.path.join(dirpath, filename))

    binary_paths = [binary_path for binary_path in binary_paths if os.path.basename(binary_path) == "binary"]
    # binary_paths = binary_paths[:30]

    tasks = [(binary_path,) for binary_path in binary_paths]
    with Pool(20) as pool:
        results = pool.starmap(eval_binary, tasks)

    # results = []
    # for binary_path in binary_paths:
    #     results.append(eval_binary(binary_path))

    eval_result = EvalResult()

    for result in results:
        eval_result.add_binary_eval_result(result)
    # eval_result = EvalResult([result for result in results])

    return eval_result


if __name__ == "__main__":
    # coreutils_result = eval("datasets/o3")
    # print("-------------- Coreutils Evaluation Results --------------")
    # print(coreutils_result)
    malware_result = eval("datasets/malware")
    print("-------------- Malware Evaluation Results --------------")
    print(malware_result)
    # print("-------------- Merged Results --------------")
    # merged_result = coreutils_result.merge(malware_result)
    # print(merged_result)
