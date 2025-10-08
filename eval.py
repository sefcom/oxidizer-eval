#!/usr/bin/env python3
import os
from multiprocessing import Pool
from pathlib import Path
import logging
import resource
import time

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


# Debug mode: only use cached results, do not run decompilers
CACHE_ONLY = True

DEC_OPTIONS = {
    "Source": {"dec_func": dummy_dec, "cache_only": True},
    "angr": {"dec_func": angr_dec, "cache_only": False or CACHE_ONLY},
    "Oxidizer": {"dec_func": oxidizer_dec, "cache_only": False or CACHE_ONLY},
    "IDA": {"dec_func": ida_dec, "cache_only": False or CACHE_ONLY},
    "Ghidra": {"dec_func": ghidra_dec, "cache_only": False or CACHE_ONLY},
    "Binary Ninja": {"dec_func": binja_c_dec, "cache_only": False or CACHE_ONLY},
    "Binary Ninja (Pseudo Rust)": {"dec_func": binja_rust_dec, "cache_only": False or CACHE_ONLY},
}

TARGET_RELEASE_DIR = Path("targets/release").absolute()
TARGET_DEBUG_DIR = Path("targets/debug").absolute()
TARGET_GROUND_TRUTH_DIR = Path("targets/merged_ground_truth").absolute()
LOG_PATH = Path("output/eval.log").absolute()
l = logging.getLogger("oxidizer-eval")

COREUTILS_MODULES = [
    "df",
    "mv",
    "kill",
    "touch",
    "base64",
    "unlink",
    "vdir",
    "rmdir",
    "nice",
    "ln",
    "install",
    "split",
    "printenv",
    "factor",
    "printf",
    "groups",
    "uname",
    "expr",
    "false",
    "pwd",
    "base32",
    "fold",
    "uniq",
    "fmt",
    "yes",
    "cat",
    "nohup",
    "uptime",
    "true",
    "chcon",
    "mkdir",
    "echo",
    "ls",
    "who",
    "pinky",
    "comm",
    "readlink",
    "nproc",
    "csplit",
    "sync",
    "du",
    "tail",
    "numfmt",
    "dirname",
    "cksum",
    "hostid",
    "basename",
    "users",
    "chroot",
    "runcon",
    "stty",
    "sort",
    "unexpand",
    "wc",
    "shred",
    "test",
    "dircolors",
    "tr",
    "tac",
    "tsort",
    "chmod",
    "stat",
    "mktemp",
    "cp",
    "seq",
    "hashsum",
    "cut",
    "paste",
    "ptx",
    "shuf",
    "sum",
    "stdbuf",
    "id",
    "timeout",
    "tee",
    "realpath",
    "od",
    "join",
    "pathchk",
    "mknod",
    "mkfifo",
    "link",
    "head",
    "date",
    "rm",
    "more",
    "hostname",
    "truncate",
    "chown",
    "dd",
    "nl",
    "pr",
    "dir",
    "sleep",
    "basenc",
    "expand",
    "env",
    "chgrp",
    "tty",
    "whoami",
    "logname",
    "arch",
]

EXCLUDED_FUNCTIONS = ["uu_sort::exec"]


def get_module_from_binary_path(binary_path):
    binary_name = os.path.basename(binary_path)
    if binary_name in COREUTILS_MODULES:
        return f"uu_{binary_name}"
    return binary_name.replace("-", "_")


# DEC_OPTIONS = {
#     "Source": {"dec_func": dummy_dec, "cache_only": True},
#     "angr": {"dec_func": angr_dec, "cache_only": False},
#     "Oxidizer": {"dec_func": oxidizer_dec, "cache_only": False},
#     "IDA": {"dec_func": ida_dec, "cache_only": False},
#     "Ghidra": {"dec_func": ghidra_dec, "cache_only": False},
#     "Binary Ninja": {"dec_func": binja_c_dec, "cache_only": False},
#     "Binary Ninja (Pseudo Rust)": {"dec_func": binja_rust_dec, "cache_only": False},
# }


def eval_binary(binary_path, opt_level):
    l.info(f"Evaluating binary: {binary_path} ({os.path.getsize(binary_path) / (1024 * 1024):.2f} MB)")

    binary_name = os.path.basename(binary_path)

    # Load ground truth for <binary_path>
    ground_truth_path = TARGET_GROUND_TRUTH_DIR / opt_level / f"{binary_name}.json"
    ground_truth = BinaryGroundTruth.load(ground_truth_path)

    # We only evaluate application functions
    function_list = load_function_list(binary_path, get_module_from_binary_path(binary_path))
    # Exclude certain functions from evaluation
    function_list = [func for func in function_list if demangle(func) not in EXCLUDED_FUNCTIONS]

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
            # Get ground truth by demangled function name
            func_ground_truth = ground_truth.get_function_ground_truth(demangle(func_name))
            if func_ground_truth is None:
                continue

            # Initialize function eval result if not exists
            if func_name not in func_eval_results:
                func_eval_results[func_name] = FunctionEvalResult(func_name)
            func_eval_result = func_eval_results[func_name]

            # Special handling for source
            if decompiler == "Source":
                func_eval_result.add_result(MCC, decompiler, func_ground_truth.mcc)
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
                func_eval_result.add_result(NUM_MATCHED_MACRO_CALLS, decompiler, sum(func_ground_truth.macros.values()))
            elif (
                func_name in result["decompilation"]
                and func_name in result["function_call_counts"]
                and func_name in result["variable_types"]
                and func_ground_truth is not None
            ):
                decompilation = result["decompilation"][func_name]
                # print(
                #     "Evaluating function:",
                #     demangle(func_name),
                #     "with decompiler:",
                #     decompiler,
                #     "call counts:",
                #     num_matched_function_calls(result["function_call_counts"][func_name], func_ground_truth.calls),
                # )

                # Conciseness Metric-0: Number of lines of code
                func_eval_result.add_result(MCC, decompiler, mcc(decompilation))

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

    for func_eval_result in func_eval_results.values():
        binary_eval_result.add_func_eval_result(func_eval_result)

    l.info(f"Finished evaluating binary: {binary_path}")
    l.info(f"\n{binary_eval_result}")

    return binary_eval_result


def safe_eval_binary(binary_path, opt_level):
    try:
        return eval_binary(binary_path, opt_level)
    except Exception as e:
        l.error(f"Exception: Failed to evaluate binary {binary_path}: {e}")
        l.error(traceback.format_exc())
        return None


def set_memory_limit_gb(limit_gb: int):
    """Set a per-process virtual memory limit in GB."""
    soft, hard = limit_gb * 1024**3, limit_gb * 1024**3
    resource.setrlimit(resource.RLIMIT_AS, (soft, hard))


def eval(dir_path, opt_level):
    # Find all binaries in dir_path (recursively)
    binary_paths = []

    for dirpath, _, filenames in os.walk(dir_path):
        for filename in filenames:
            if "." in filename:
                continue
            binary_paths.append(os.path.join(dirpath, filename))

    binary_paths = [binary_path for binary_path in binary_paths if os.path.basename(binary_path) in COREUTILS_MODULES]
    # binary_paths = [binary_path for binary_path in binary_paths if os.path.basename(binary_path) == "printf"]
    # binary_paths = [binary_path for binary_path in binary_paths if os.path.getsize(binary_path) < 50 * 1024 * 1024]

    with Pool(processes=10, initializer=set_memory_limit_gb, initargs=(64,)) as pool:
        async_results = []
        results = []
        for binary_path in sorted(binary_paths, key=lambda p: os.path.getsize(p)):
            async_results.append(pool.apply_async(safe_eval_binary, (binary_path, opt_level)))
        for r in async_results:
            results.append(r.get())

    eval_result = EvalResult()

    for result in results:
        if result:
            eval_result.add_binary_eval_result(result)

    return eval_result


def init_logger():
    Path(LOG_PATH).unlink(missing_ok=True)
    # Create a named logger
    logger = logging.getLogger("oxidizer-eval")
    logger.setLevel(logging.INFO)

    # Create handlers
    file_handler = logging.FileHandler(LOG_PATH, mode="w")
    stream_handler = logging.StreamHandler()

    # Create formatter and attach to handlers
    logging.Formatter.converter = time.localtime
    formatter = logging.Formatter("%(asctime)s [%(levelname)s] %(message)s")
    file_handler.setFormatter(formatter)
    stream_handler.setFormatter(formatter)

    # Attach handlers to the logger
    logger.addHandler(file_handler)
    logger.addHandler(stream_handler)


if __name__ == "__main__":
    init_logger()
    l.info("Starting evaluation...")
    o3_result = eval(TARGET_RELEASE_DIR / "O3", "O3")
    print(o3_result)
