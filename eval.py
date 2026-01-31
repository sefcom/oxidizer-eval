#!/usr/bin/env python3
from concurrent.futures import Future, ProcessPoolExecutor, as_completed
import os
from pathlib import Path
import logging
from pprint import pformat
import resource
import time
from typing import Dict, List

from eval.config import COREUTILS_MODULES, DECOMPILERS, RESULT_DIR
from eval.metrics import *
from eval.metrics.calc import *
from eval.metrics.ground_truth import FunctionGroundTruth
from eval.decompilers.ida import ida_dec
from eval.decompilers.oxidizer import oxidizer_dec
from eval.decompilers.angr import angr_dec
from eval.decompilers.ghidra import ghidra_dec
from eval.decompilers.binja import binja_dec

from eval.result import DecompileResult, FuncEvalResult, EvalResult
from eval.utils.timeout import run_with_timeout
from eval.utils.logging import init_logger


def dummy_dec(*args, **kwargs):
    pass


CACHE_ONLY = True  # Debug mode: only use cached results, do not run decompilers

DEC_OPTIONS = {
    "Source": {"dec_func": dummy_dec, "cache_only": True, "timeout": 0},
    "angr": {"dec_func": angr_dec, "cache_only": False or CACHE_ONLY, "timeout": 120},
    "Oxidizer": {"dec_func": oxidizer_dec, "cache_only": False or CACHE_ONLY, "timeout": 180},
    "IDA": {"dec_func": ida_dec, "cache_only": False or CACHE_ONLY, "timeout": 60},
    "Ghidra": {"dec_func": ghidra_dec, "cache_only": False or CACHE_ONLY, "timeout": 120},
    "Binary Ninja": {"dec_func": binja_dec, "cache_only": False or CACHE_ONLY, "timeout": 120},
    "Binary Ninja (Pseudo Rust)": {"dec_func": dummy_dec, "cache_only": True or CACHE_ONLY, "timeout": 0},
}

TARGET_STRIPPED_DIR = Path("targets/stripped").absolute()
TARGET_GROUND_TRUTH_DIR = Path("targets/merged_ground_truth").absolute()
TARGET_SYMBOLS_DIR = Path("targets/symbols").absolute()

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


def decompile_binary(binary_path, tag, decompiler, symbols):
    binary_name = os.path.basename(binary_path)
    target_functions = set(load_function_addresses(binary_path, tag))

    dec_func = DEC_OPTIONS[decompiler]["dec_func"]
    cache_only = DEC_OPTIONS[decompiler]["cache_only"]
    timeout = DEC_OPTIONS[decompiler]["timeout"] * 60  # minutes to seconds

    if cache_only:
        return

    l.info(f"Decompiling {binary_name} with {decompiler}...")
    start = time.time()
    try:
        run_with_timeout(dec_func, binary_path, target_functions, tag, symbols, timeout=timeout)
    except Exception as e:
        l.error(f"{decompiler}: Failed to decompile binary {binary_path}({e})")
        l.error(traceback.format_exc())
    end = time.time()
    l.info(f"Decompiled {binary_name} with {decompiler} in {end - start:.2f} seconds.")


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
                for macro_name, count in func_ground_truth.macros.items():
                    func_eval_result.add_result(f"macro_call_{macro_name}", count)
            else:
                # Try to load decompilation result
                result_path = RESULT_DIR / tag / decompiler / binary_name / f"{func_addr:x}.json"
                if not result_path.exists():
                    del func_eval_results[decompiler][func_addr]
                    # l.warning(f"Decompilation result file does not exist: {result_path}")
                    continue
                func_result = DecompileResult.load_json(result_path)

                decompilation = func_result.decompilation

                if "fn UnresolvableJumpTarget" in decompilation:
                    del func_eval_results[decompiler][func_addr]
                    continue

                # Conciseness Metric-0: Number of lines of code
                mcc_value = mcc(decompilation)
                if mcc_value is None:
                    l.warning(f"Failed to compute MCC for function {func_addr:x} decompiled by {decompiler}")
                    del func_eval_results[decompiler][func_addr]
                    continue
                func_eval_result.add_result(MCC, mcc_value)

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
                # l.info(
                #     f"Evaluating string literals for function {func_addr:x} {binary_name} decompiled by {decompiler}"
                # )
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
                if decompiler == "Oxidizer":
                    for macro_name, count in func_result.macro_call_counts.items():
                        func_eval_result.add_result(f"macro_call_{macro_name}", count)
                #     l.info(f"---Function: {func_addr:x}---")
                #     l.info(f"Ground truth macro calls: {func_ground_truth.macros}")
                #     l.info(f"Decompiled macro calls: {func_result.macro_call_counts}")

                type_eval_result, dwarf_var_to_predicted_types = generate_type_eval_result(
                    func_result.variable_types,
                    func_ground_truth.variable_types,
                    func_ground_truth.prototype,
                    debug=(decompiler == "Oxidizer"),
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


def set_memory_limit_gb(limit_gb: int):
    """Set a per-process virtual memory limit in GB."""
    soft, hard = limit_gb * 1024**3, limit_gb * 1024**3
    resource.setrlimit(resource.RLIMIT_AS, (soft, hard))


@dataclass
class Task:
    tag: str
    decompiler: str
    binary_path: str


class Scheduler:
    def __init__(self, processes: int = 100, max_memory_gb: int = 32):
        self.processes = processes
        self.max_memory_gb = max_memory_gb

        self._tag_to_tasks: Dict[str, List[Task]] = {}
        self._progress = defaultdict(set)
        self._results = {}
        self._future_to_task: Dict[Future, Task] = {}
        self._binary_path_to_symbols = {}

    def schedule_tasks(self, tag: str):
        binary_paths = []
        for filename in os.listdir(TARGET_STRIPPED_DIR / tag):
            binary_path = TARGET_STRIPPED_DIR / tag / filename
            if not binary_path.is_file() or "." in filename.replace(".elf", ""):
                continue
            # if filename not in COREUTILS_MODULES:
            #     continue
            # if filename != "forc-tx":
            #     continue
            binary_paths.append(str(binary_path.resolve()))
        for binary_path in binary_paths:
            # Load symbols for the binary
            binary_name = os.path.basename(binary_path)
            symbols_path = TARGET_SYMBOLS_DIR / tag / f"{binary_name}.json"
            if symbols_path.exists():
                with open(symbols_path, "r") as fd:
                    symbols = json.load(fd)
                self._binary_path_to_symbols[binary_path] = symbols
        tasks = []
        for binary_path in binary_paths:
            for decompiler in DECOMPILERS:
                task = Task(tag=tag, decompiler=decompiler, binary_path=binary_path)
                tasks.append(task)
        self._tag_to_tasks[tag] = tasks

    def _is_finished(self, binary_path: str):
        return len(self._progress[binary_path]) == len(DECOMPILERS)

    def _show_progress(self):
        for tag, tasks in self._tag_to_tasks.items():
            l.info(f"Progress for tag {tag}:")
            binary_paths = set(task.binary_path for task in tasks)
            finished_binaries = sum(1 for bp in binary_paths if self._is_finished(bp))
            if finished_binaries > 0:
                l.info(f"Finished binaries: {finished_binaries}/{len(binary_paths)}")
                l.info("Ongoing binaries:")
                for binary_path in binary_paths:
                    if not self._is_finished(binary_path):
                        l.info(
                            f'  Binary {os.path.basename(binary_path)}: {len(self._progress[binary_path])}/{len(DECOMPILERS)} decompilers finished ({", ".join(self._progress[binary_path])}).'
                        )
            else:
                l.info("No binaries finished yet.")

    def _callback(self, future):
        task = self._future_to_task[future]
        self._progress[task.binary_path].add(task.decompiler)
        if self._is_finished(task.binary_path):
            l.info(f"Completed evaluation for binary {task.binary_path} with all decompilers.")
            result = compute_binary_eval_result(
                task.binary_path, task.tag, self._binary_path_to_symbols[task.binary_path]
            )
            self._results[task.tag].merge(result)
            # Log to the task-specific logger
            logger = logging.getLogger(task.tag)
            logger.info(f"Task completed: {task.decompiler} on {task.binary_path}")
            logger.info(result)
            # Also log to the main logger
            l.info(f"Updated evaluation result for tag {task.tag}:\n{self._results[task.tag]}")
            self._show_progress()

    def _show_overall_results(self):
        for tag in self._results:
            for logger in (l, logging.getLogger(tag)):
                logger.info(f"================ Overall Evaluation Result for tag {tag} ================")
                logger.info(f"Overall evaluation result for tag {tag}:\n{self._results[tag]}")
                logger.info(self._results[tag].to_latex(tag))
                logger.info(self._results[tag].to_latex_type_eval(tag))

    def run(self):
        for tag in self._tag_to_tasks:
            l.info(
                f"Starting decompilation tasks for tag {tag}... ({len(self._tag_to_tasks[tag]) // len(DECOMPILERS)} binaries)"
            )
        with ProcessPoolExecutor(
            max_workers=self.processes, initializer=set_memory_limit_gb, initargs=(self.max_memory_gb,)
        ) as executor:
            for tag, tasks in self._tag_to_tasks.items():
                init_logger(tag)
                self._results[tag] = EvalResult(0)
                for task in tasks:
                    future = executor.submit(
                        decompile_binary,
                        task.binary_path,
                        task.tag,
                        task.decompiler,
                        self._binary_path_to_symbols[task.binary_path],
                    )
                    self._future_to_task[future] = task
                    future.add_done_callback(self._callback)
        self._show_overall_results()

if __name__ == "__main__":
    init_logger("oxidizer-eval")

    # toolchains = ("nightly-2025-05-22", "nightly-2023-05-22")
    # optimization_levels = ("0", "1", "2", "3", "s", "z")
    toolchains = ("nightly-2023-05-22",)
    optimization_levels = ("3",)
    tags = (
        # "malware",
        "nightly-2023-05-22-O3",
        # "nightly-2025-05-22-O0",
        # "nightly-2025-05-22-O3",
        # "open-source-malware",
    )

    scheduler = Scheduler()

    for tag in tags:
        scheduler.schedule_tasks(tag)
    scheduler.run()