#!/usr/bin/env python3
from concurrent.futures import ProcessPoolExecutor, as_completed
import os
from pathlib import Path
import logging
import resource
import time
from datetime import datetime
import pytz

from eval.config import COREUTILS_MODULES, DECOMPILERS, RESULT_DIR
from eval.metrics import *
from eval.metrics.calc import *
from eval.metrics.ground_truth import FunctionGroundTruth
from eval.decompilers.ida import ida_dec
from eval.decompilers.oxidizer import oxidizer_dec, oxidizer_stripped_dec
from eval.decompilers.angr import angr_dec
from eval.decompilers.ghidra import ghidra_dec
from eval.decompilers.binja import binja_dec
from eval.result import DecompileResult, FuncEvalResult, EvalResult
from eval.utils.timeout import run_with_timeout


def dummy_dec(*args, **kwargs):
    pass


CACHE_ONLY = False  # Debug mode: only use cached results, do not run decompilers
PROCESSES = 8
MAX_MEMORY_GB = 32

DEC_OPTIONS = {
    "Source": {"dec_func": dummy_dec, "cache_only": True, "timeout": 0},
    "angr": {"dec_func": angr_dec, "cache_only": False or CACHE_ONLY, "timeout": 150},
    "Oxidizer": {"dec_func": oxidizer_dec, "cache_only": False or CACHE_ONLY, "timeout": 150},
    "Oxidizer (Stripped)": {"dec_func": oxidizer_stripped_dec, "cache_only": False or CACHE_ONLY, "timeout": 150},
    "IDA": {"dec_func": ida_dec, "cache_only": True or CACHE_ONLY, "timeout": 60},
    "Ghidra": {"dec_func": ghidra_dec, "cache_only": False or CACHE_ONLY, "timeout": 180},
    "Binary Ninja": {"dec_func": binja_dec, "cache_only": False or CACHE_ONLY, "timeout": 120},
    "Binary Ninja (Pseudo Rust)": {"dec_func": dummy_dec, "cache_only": True or CACHE_ONLY, "timeout": 0},
}

TARGET_RELEASE_DIR = Path("targets/release").absolute()
TARGET_DEBUG_DIR = Path("targets/debug").absolute()
TARGET_GROUND_TRUTH_DIR = Path("targets/merged_ground_truth").absolute()
TARGET_SYMBOLS_DIR = Path("targets/symbols").absolute()
LOG_DIR = Path("output/log").absolute()
EXCLUDED_FUNCTIONS = ["uu_sort::exec"]

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


def decompile_binary(binary_path, tag, target_functions, decompiler):
    binary_name = os.path.basename(binary_path)

    dec_func = DEC_OPTIONS[decompiler]["dec_func"]

    l.info(f"Decompiling {binary_name} with {decompiler}...")
    dec_func(binary_path, target_functions, tag)


def decompile_binary_safe(binary_path, tag, target_functions, decompiler):
    try:
        decompile_binary(binary_path, tag, target_functions, decompiler)
    except Exception as e:
        l.error(f"{type(e)}: Failed to decompile binary {binary_path}: {e}")
        l.error(traceback.format_exc())


def compute_binary_eval_result(binary_path, tag, symbols):
    binary_name = os.path.basename(binary_path)
    target_functions = set(load_function_addresses(binary_path, tag))

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

        # Debug macro recovery
        oxidizer_result_path = RESULT_DIR / tag / "Oxidizer" / binary_name / f"{func_addr:x}.json"
        oxidizer_stripped_result_path = RESULT_DIR / tag / "Oxidizer (Stripped)" / binary_name / f"{func_addr:x}.json"
        if oxidizer_result_path.exists() and oxidizer_stripped_result_path.exists():
            func_name = symbols.get(f"{func_addr:x}", f"sub_{func_addr:x}")
            func_result = DecompileResult.load_json(oxidizer_result_path)
            l.debug(f"Oxidizer recovered macros for function {func_name}: {func_result.macro_call_counts}")
            func_stripped_result = DecompileResult.load_json(oxidizer_stripped_result_path)
            l.debug(
                f"Oxidizer (Stripped) recovered macros for function {func_name}: {func_stripped_result.macro_call_counts}"
            )
            l.debug(f"Ground truth macros for function {func_name}: {func_ground_truth.macros}")

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
                    # l.warning(f"Decompilation result file does not exist: {result_path}")
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
    for decompiler in DECOMPILERS:
        l.info(
            f"Number of functions decompiled by {decompiler}: {len(func_eval_results[decompiler])}/{len(target_functions)}"
        )

    eval_result = EvalResult()
    for decompiler in DECOMPILERS:
        for key in keys:
            eval_result.add_func_eval_result(decompiler, func_eval_results[decompiler][key])

    return eval_result


def eval_binary(binary_path, tag):
    """
    Evaluate a binary by decompiling it with different decompilers and comparing the results against the ground truth.
    """
    binary_name = os.path.basename(binary_path)
    symbols_path = TARGET_SYMBOLS_DIR / tag / f"{binary_name}.json"
    with open(symbols_path, "r", encoding="utf-8") as fd:
        symbols = json.load(fd)

    target_functions = load_function_addresses(binary_path, tag)
    target_functions = set(
        addr for addr in target_functions if symbols.get(f"{addr:x}", None) not in EXCLUDED_FUNCTIONS
    )
    for decompiler in DECOMPILERS:
        timeout = DEC_OPTIONS[decompiler]["timeout"] * 60
        cache_only = DEC_OPTIONS[decompiler]["cache_only"]
        if cache_only:
            l.info(f"Skipping decompilation for {binary_name} with {decompiler} since cache_only is set to True. ")
            continue
        try:
            run_with_timeout(decompile_binary_safe, binary_path, tag, target_functions, decompiler, timeout=timeout)
        except TimeoutError:
            l.error(f"Timeout for decompiling binary {binary_path} with {decompiler}")
    return compute_binary_eval_result(binary_path, tag, symbols)


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
    logger.setLevel(logging.DEBUG)

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
            if "." in filename or filename == "sort":
                continue
            binary_paths.append(os.path.join(dirpath, filename))

    # binary_paths = [binary_path for binary_path in binary_paths if os.path.basename(binary_path) in COREUTILS_MODULES]
    # binary_paths = [binary_path for binary_path in binary_paths if os.path.getsize(binary_path) < 30 * 1024 * 1024]

    l.info(f"Starting evaluation for tag: {tag} ({len(binary_paths)} binaries)")

    future_to_path = {}
    merged_result = EvalResult(0)

    def callback(future):
        result = future.result()
        merged_result.merge(result)
        binary_path = future_to_path[future]
        l.info(f"Binary evaluation result for {binary_path}:\n{result}")
        l.info(f"Current merged evaluation result:\n{merged_result}")

    with ProcessPoolExecutor(PROCESSES, initializer=set_memory_limit_gb, initargs=(MAX_MEMORY_GB,)) as executor:
        for binary_path in binary_paths:
            future = executor.submit(eval_binary, binary_path, tag)
            future_to_path[future] = binary_path
            future.add_done_callback(callback)

    return merged_result


if __name__ == "__main__":
    # for toolchain in ("nightly-2025-05-22", "nightly-2023-05-22"):
    #     for opt_level in ("0", "1", "2", "3", "s", "z"):
    for toolchain in ("nightly-2025-05-22",):
        for opt_level in ("3",):
            tag = f"{toolchain}-O{opt_level}"
            result = eval(TARGET_RELEASE_DIR / f"{tag}", tag)
            l.info(f"Final evaluation:\n{result}")
            l.info(result.to_latex())
