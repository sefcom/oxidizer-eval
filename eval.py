#!/usr/bin/env python3
from concurrent.futures import ProcessPoolExecutor, as_completed
import os
from pathlib import Path
import logging
import resource
import time
from datetime import datetime
import pytz

from eval.config import DECOMPILERS, RESULT_DIR
from eval.metrics import *
from eval.metrics.calc import *
from eval.metrics.ground_truth import FunctionGroundTruth
from eval.decompilers.ida import ida_dec
from eval.decompilers.oxidizer import oxidizer_dec
from eval.decompilers.angr import angr_dec
from eval.decompilers.ghidra import ghidra_dec
from eval.decompilers.binja import binja_c_dec, binja_rust_dec
from eval.result import DecompileResult, FuncEvalResult, EvalResult
from eval.utils.timeout import run_with_timeout


def dummy_dec(*args, **kwargs):
    pass


CACHE_ONLY = False  # Debug mode: only use cached results, do not run decompilers
TIMEOUT = 60 * 120  # 120 minutes per binary
PROCESSES = 6
MAX_MEMORY_GB = 32

DEC_OPTIONS = {
    "Source": {"dec_func": dummy_dec, "cache_only": True},
    "angr": {"dec_func": angr_dec, "cache_only": True or CACHE_ONLY},
    "Oxidizer": {"dec_func": oxidizer_dec, "cache_only": True or CACHE_ONLY},
    "IDA": {"dec_func": ida_dec, "cache_only": True or CACHE_ONLY},
    "Ghidra": {"dec_func": ghidra_dec, "cache_only": True or CACHE_ONLY},
    "Binary Ninja": {"dec_func": binja_c_dec, "cache_only": False or CACHE_ONLY},
    "Binary Ninja (Pseudo Rust)": {"dec_func": binja_rust_dec, "cache_only": False or CACHE_ONLY},
}

TARGET_RELEASE_DIR = Path("targets/release").absolute()
TARGET_DEBUG_DIR = Path("targets/debug").absolute()
TARGET_GROUND_TRUTH_DIR = Path("targets/merged_ground_truth").absolute()
TARGET_SYMBOLS_DIR = Path("targets/symbols").absolute()
LOG_DIR = Path("output/log").absolute()

l = logging.getLogger("oxidizer-eval")


def load_function_addresses(binary_path, tag):
    """
    Load function addresses from the ground truth directory for a given binary and tag.
    """
    binary_name = os.path.basename(binary_path)
    ground_truth_dir = TARGET_GROUND_TRUTH_DIR / tag / binary_name
    for file in os.listdir(ground_truth_dir):
        if file.endswith(".json"):
            func_addr = int(file[:-5], 16)
            yield func_addr


def decompile_binary(binary_path, tag):
    l.info(f"Decompiling binary: {binary_path} ({os.path.getsize(binary_path) / (1024 * 1024):.2f} MB)")

    binary_name = os.path.basename(binary_path)
    target_functions = list(load_function_addresses(binary_path, tag))

    for decompiler in DECOMPILERS:
        options = DEC_OPTIONS[decompiler]
        dec_func = options["dec_func"]
        cache_only = options["cache_only"]

        if not cache_only:
            l.info(f"Decompiling {binary_name} with {decompiler}...")
            dec_func(binary_path, target_functions, tag)
        else:
            l.info(f"Skip decompiling {binary_name} with {decompiler}...")


def decompile_binary_safe(binary_path, tag):
    try:
        return decompile_binary(binary_path, tag)
    except Exception as e:
        l.error(f"{type(e)}: Failed to decompile binary {binary_path}: {e}")
        l.error(traceback.format_exc())


def compute_binary_eval_result(binary_path, tag):
    binary_name = os.path.basename(binary_path)
    target_functions = list(load_function_addresses(binary_path, tag))
    symbols_path = TARGET_SYMBOLS_DIR / tag / f"{binary_name}.json"
    if not symbols_path.exists():
        l.error(f"Symbols file does not exist: {symbols_path}")
        return
    with open(symbols_path, "r", encoding="utf-8") as fd:
        symbols = json.load(fd)

    func_eval_results = {}
    for decompiler in DECOMPILERS:
        func_eval_results[decompiler] = {}

    for func_addr in target_functions:
        # Try to load function ground truth path
        ground_truth_path = TARGET_GROUND_TRUTH_DIR / tag / f"{binary_name}" / f"{func_addr:x}.json"
        if not ground_truth_path.exists():
            l.error(f"Ground truth file does not exist: {ground_truth_path}")
            continue
        func_ground_truth = FunctionGroundTruth.load(ground_truth_path)

        for decompiler in DECOMPILERS:
            # Initialize function eval result if not exists
            if func_addr not in func_eval_results[decompiler]:
                func_eval_results[decompiler][func_addr] = FuncEvalResult(func_addr)
            func_eval_result = func_eval_results[decompiler][func_addr]

            # Compare decompilation result with ground truth
            if decompiler == "Source":
                func_eval_result.add_result(MCC, func_ground_truth.mcc)
                func_eval_result.add_result(LOC, func_ground_truth.loc)
                func_eval_result.add_result(NUM_VARIABLES, func_ground_truth.nvars)
                func_eval_result.add_result(NUM_OPERATORS, func_ground_truth.nofops)
                func_eval_result.add_result(NUM_GOTOS, 0)  # Source does not have gotos
                func_eval_result.add_result(
                    NUM_MATCHED_STRING_LITERALS, sum(func_ground_truth.string_literals.values())
                )
                func_eval_result.add_result(NUM_MATCHED_FUNCTION_CALLS, sum(func_ground_truth.calls.values()))
                func_eval_result.add_result(NUM_EXTRANEOUS_FUNCTION_CALLS, 0)
                func_eval_result.add_result(NUM_MATCHED_MACRO_CALLS, sum(func_ground_truth.macros.values()))
            else:
                # Try to load decompilation result
                result_path = RESULT_DIR / tag / decompiler / binary_name / f"{func_addr:x}.json"
                if not result_path.exists():
                    del func_eval_results[decompiler][func_addr]
                    l.warning(f"Decompilation result file does not exist: {result_path}")
                    continue
                func_result = DecompileResult.load_json(result_path)

                decompilation = func_result.decompilation

                # Conciseness Metric-0: Number of lines of code
                func_eval_result.add_result(MCC, mcc(decompilation))

                # Conciseness Metric-1: Number of lines of code
                func_eval_result.add_result(LOC, LoC(decompilation))

                # Conciseness Metric-2: Number of variables
                func_eval_result.add_result(
                    NUM_VARIABLES,
                    len(
                        [
                            var
                            for var in func_result.variable_types
                            if not var.startswith("arg_") and not var.startswith("return_type")
                        ]
                    ),
                )

                # Conciseness Metric-3: Number of operators
                func_eval_result.add_result(NUM_OPERATORS, num_operators(decompilation))

                # Fidelity Metric-1: Number of gotos
                func_eval_result.add_result(NUM_GOTOS, num_gotos(decompilation))

                # Fidelity Metric-2: Number of matched string literals
                func_eval_result.add_result(
                    NUM_MATCHED_STRING_LITERALS,
                    num_matched_string_literals(decompilation, func_ground_truth.string_literals),
                )

                # Fix function call names from addresses to names
                function_call_counts = {}
                for call_target in func_result.function_call_counts:
                    try:
                        call_addr = int(call_target, 16)
                        func_name = symbols.get(call_target, f"sub_{call_addr:x}")
                    except ValueError:
                        func_name = call_target
                    function_call_counts[func_name] = func_result.function_call_counts[call_target]

                # Fidelity Metric-3: Number of matched function calls
                func_eval_result.add_result(
                    NUM_MATCHED_FUNCTION_CALLS,
                    num_matched_function_calls(function_call_counts, func_ground_truth.calls),
                )

                # Fidelity Metric-3: Number of extraneous function calls
                func_eval_result.add_result(
                    NUM_EXTRANEOUS_FUNCTION_CALLS,
                    num_extraneous_function_calls(function_call_counts, func_ground_truth.calls),
                )

                # Fidelity Metric-4: Number of matched macro calls
                func_eval_result.add_result(
                    NUM_MATCHED_MACRO_CALLS,
                    num_matched_macro_calls(func_result.macro_call_counts, func_ground_truth.macros),
                )

                type_eval_result, dwarf_var_to_predicted_types = generate_type_eval_result(
                    func_result.variable_types, func_ground_truth.variable_types, func_ground_truth.prototype
                )
                for metric in type_eval_result:
                    func_eval_result.add_result(metric, type_eval_result[metric])

    # Aggregate function eval results into binary eval result
    keys = set(target_functions)
    for decompiler in func_eval_results:
        keys = keys & set(func_eval_results[decompiler].keys())
    l.info(f"Number of functions evaluated for {binary_path}: {len(keys)}/{len(target_functions)}")

    eval_result = EvalResult()
    for decompiler in DECOMPILERS:
        for key in keys:
            eval_result.add_func_eval_result(decompiler, func_eval_results[decompiler][key])

    l.info(f"Finished evaluating binary: {binary_path}")
    l.info(f"\n{eval_result}")

    return eval_result


def eval_binary(binary_path, tag):
    try:
        run_with_timeout(decompile_binary_safe, binary_path, tag, timeout=TIMEOUT)
    except TimeoutError as e:
        l.error(f"TimeoutError: Failed to evaluate binary {binary_path}: {e}")
    return compute_binary_eval_result(binary_path, tag)


def set_memory_limit_gb(limit_gb: int):
    """Set a per-process virtual memory limit in GB."""
    soft, hard = limit_gb * 1024**3, limit_gb * 1024**3
    resource.setrlimit(resource.RLIMIT_AS, (soft, hard))


phoenix_tz = pytz.timezone("America/Phoenix")


def phoenix_time(*args):
    return datetime.now(phoenix_tz).timetuple()


def init_logger(tag):
    os.makedirs(LOG_DIR / tag, exist_ok=True)
    LOG_PATH = LOG_DIR / tag / f"{datetime.now().strftime('%Y-%m-%d-%H-%M-%S')}.log"
    # Create a link to the latest log
    if (LOG_DIR / tag / "latest.log").exists():
        os.unlink(LOG_DIR / tag / "latest.log")
    os.symlink(LOG_PATH, LOG_DIR / tag / "latest.log")

    # Create a named logger
    logger = logging.getLogger("oxidizer-eval")
    logger.setLevel(logging.INFO)

    # Create handlers
    file_handler = logging.FileHandler(LOG_PATH, mode="w")
    stream_handler = logging.StreamHandler()

    # Create formatter and attach to handlers
    logging.Formatter.converter = time.localtime
    formatter = logging.Formatter("%(asctime)s [%(levelname)s] %(message)s")
    formatter.converter = phoenix_time
    file_handler.setFormatter(formatter)
    stream_handler.setFormatter(formatter)

    # Clean previous handlers
    if logger.hasHandlers():
        logger.handlers.clear()

    # Attach handlers to the logger
    logger.addHandler(file_handler)
    logger.addHandler(stream_handler)


def eval(dir_path, tag):
    init_logger(tag)

    # Find all binaries in dir_path (recursively)
    binary_paths = []

    for dirpath, _, filenames in os.walk(dir_path):
        for filename in filenames:
            if "." in filename:
                continue
            if filename != "fmt":
                continue
            binary_paths.append(os.path.join(dirpath, filename))

    # binary_paths = [binary_path for binary_path in binary_paths if os.path.basename(binary_path) in COREUTILS_MODULES]
    # binary_paths = [binary_path for binary_path in binary_paths if os.path.getsize(binary_path) < 30 * 1024 * 1024]

    l.info(f"Starting evaluation for tag: {tag} ({len(binary_paths)} binaries)")

    results = []
    with ProcessPoolExecutor(PROCESSES, initializer=set_memory_limit_gb, initargs=(MAX_MEMORY_GB,)) as executor:
        future_to_path = {executor.submit(eval_binary, p, tag): p for p in binary_paths}
        for future in as_completed(future_to_path):
            results.append(future.result())

    return None


if __name__ == "__main__":
    # for toolchain in ("nightly-2025-05-22", "nightly-2023-05-22"):
    #     for opt_level in ("0", "1", "2", "3", "s", "z"):
    for toolchain in ("nightly-2025-05-22",):
        for opt_level in ("3",):
            tag = f"{toolchain}-O{opt_level}"
            result = eval(TARGET_RELEASE_DIR / f"{tag}", tag)
            l.info(f"Final result for {tag}:\n{result}")
