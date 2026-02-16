#!/usr/bin/env python3
import json
import os
import sys
import traceback
import logging
import time
from collections import defaultdict
from concurrent.futures import Future, ProcessPoolExecutor
from dataclasses import dataclass
from pathlib import Path
from typing import Dict, List

from eval.config import COREUTILS_MODULES, DECOMPILERS, RESULT_DIR
from eval.metrics import *
from eval.metrics.calc import *
from eval.metrics.ground_truth import FunctionGroundTruth
from eval.decompilers.decompiler import Decompiler

from eval.result import DecompileResult, FuncEvalResult, EvalResult
from eval.utils.timeout import run_with_timeout
from eval.utils.logging import init_logger
from eval.utils.scheduler import set_memory_limit_gb

CACHE_ONLY = True
MULTIPROCESSING = True
DEC_CONFIG = {
    "Source": {"cache_only": True, "timeout_minutes": 0},
    "angr": {"cache_only": True, "timeout_minutes": 120},
    "Oxidizer": {"cache_only": False, "timeout_minutes": 240},
    "Oxidizer.old": {"cache_only": True, "timeout_minutes": 240},
    "Oxidizer_propagation": {"cache_only": False, "timeout_minutes": 240},
    "Oxidizer_no_propagation": {"cache_only": False, "timeout_minutes": 240},
    "Oxidizer.ndss": {"cache_only": True, "timeout_minutes": 180},
    "IDA": {"cache_only": True, "timeout_minutes": 60},
    "Ghidra": {"cache_only": True, "timeout_minutes": 120},
    "Binary Ninja": {"cache_only": True, "timeout_minutes": 120},
    "Binary Ninja (Pseudo Rust)": {"cache_only": True, "timeout_minutes": 0},
    "GhidRust": {"cache_only": True, "timeout_minutes": 60},
    "Binary Ninja (with Plugin)": {"cache_only": True, "timeout_minutes": 120},
}

TARGET_STRIPPED_DIR = Path("targets/stripped").absolute()
TARGET_GROUND_TRUTH_DIR = Path("targets/merged_ground_truth").absolute()
TARGET_SYMBOLS_DIR = Path("targets/symbols").absolute()

l = logging.getLogger("oxidizer-eval")

logging.getLogger("angr.rust").setLevel(logging.INFO)


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

    cfg = DEC_CONFIG[decompiler]
    cache_only = cfg["cache_only"] or CACHE_ONLY
    timeout = cfg["timeout_minutes"] * 60

    if cache_only:
        return

    l.info(f"Decompiling {binary_name} with {decompiler}...")
    start = time.time()
    dec = Decompiler(decompiler)
    try:
        if MULTIPROCESSING:
            run_with_timeout(dec.decompile, binary_path, target_functions, tag, symbols, timeout=timeout)
        else:
            dec.decompile(binary_path, target_functions, tag, symbols)
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
                    sum(
                        len(types)
                        for var, types in func_result.variable_types.items()
                        if not var.startswith("arg_") and not var.startswith("return_type")
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
                if decompiler == "Oxidizer":
                    for macro_name, count in func_result.macro_call_counts.items():
                        func_eval_result.add_result(f"macro_call_{macro_name}", count)

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


def save_html_report(tag: str, eval_result: EvalResult):
    """Save HTML report for a tag's evaluation result, keeping last 10 reports."""
    from datetime import datetime

    html_output_dir = Path("output/html") / tag
    html_output_dir.mkdir(parents=True, exist_ok=True)

    timestamp = datetime.now().strftime("%Y-%m-%d_%H-%M-%S")
    html_file = html_output_dir / f"{tag}_{timestamp}.html"
    latest_html_file = html_output_dir / "latest.html"

    try:
        html_content = eval_result.to_html(tag)

        with open(html_file, "w", encoding="utf-8") as f:
            f.write(html_content)
        l.info(f"HTML report saved to: {html_file}")

        with open(latest_html_file, "w", encoding="utf-8") as f:
            f.write(html_content)
        l.info(f"HTML report also saved as: {latest_html_file}")

        html_files = sorted(
            [f for f in html_output_dir.glob(f"{tag}_*.html")], key=lambda x: x.stat().st_mtime, reverse=True
        )
        for old_file in html_files[10:]:
            old_file.unlink()
            l.info(f"Removed old HTML report: {old_file}")

    except Exception as e:
        l.error(f"Failed to save HTML report: {e}")


@dataclass
class Task:
    tag: str
    decompiler: str
    binary_path: str


class Scheduler:
    def __init__(self, processes: int = 30, max_memory_gb: int = 32):
        self.processes = processes
        self.max_memory_gb = max_memory_gb

        self._tag_to_tasks: Dict[str, List[Task]] = {}
        self._progress = defaultdict(set)
        self._results = {}
        self._future_to_task: Dict[Future, Task] = {}
        self._binary_path_to_symbols = {}
        self._completed_tasks = 0
        self._total_tasks = 0

    def schedule_tasks(self, tag: str):
        binary_paths = []
        for filename in os.listdir(TARGET_STRIPPED_DIR / tag):
            binary_path = TARGET_STRIPPED_DIR / tag / filename
            if not binary_path.is_file() or "." in filename.replace(".elf", ""):
                continue
            if filename not in COREUTILS_MODULES:
                continue
            # if filename != "fmt":
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

    def _print_terminal_progress(self, task: Task = None):
        """Update terminal title bar with real-time progress."""
        total_binaries = 0
        finished_binaries = 0
        for tag, tasks in self._tag_to_tasks.items():
            binary_paths = set(t.binary_path for t in tasks)
            total_binaries += len(binary_paths)
            finished_binaries += sum(1 for bp in binary_paths if self._is_finished(bp))

        title = f"[{self._completed_tasks}/{self._total_tasks}] " f"Binaries: {finished_binaries}/{total_binaries}"
        if task:
            title += f" | {task.decompiler} @ {os.path.basename(task.binary_path)}"
        # Set terminal title using OSC escape sequence
        sys.stdout.write(f"\033]0;{title}\007")
        sys.stdout.flush()

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

    def _on_task_done(self, task: Task):
        """Handle completion of a single decompilation task."""
        self._progress[task.binary_path].add(task.decompiler)
        self._completed_tasks += 1
        self._print_terminal_progress(task)
        if self._is_finished(task.binary_path):
            l.info(f"Completed evaluation for binary {task.binary_path} with all decompilers.")
            result = compute_binary_eval_result(
                task.binary_path, task.tag, self._binary_path_to_symbols[task.binary_path]
            )
            self._results[task.tag].merge(result)
            logger = logging.getLogger(task.tag)
            logger.info(f"Task completed: {task.decompiler} on {task.binary_path}")
            logger.info(result)
            l.info(f"Updated evaluation result for tag {task.tag}:\n{self._results[task.tag]}")
            self._show_progress()

    def _callback(self, future):
        task = self._future_to_task[future]
        self._on_task_done(task)

    def _show_overall_results(self):
        for tag, result in self._results.items():
            for logger in (l, logging.getLogger(tag)):
                logger.info(f"================ Overall Evaluation Result for tag {tag} ================")
                logger.info(f"Overall evaluation result for tag {tag}:\n{result}")
                logger.info(result.to_latex(tag))
                logger.info(result.to_latex_type_eval(tag))
            save_html_report(tag, result)

    def run(self):
        self._total_tasks = sum(len(tasks) for tasks in self._tag_to_tasks.values())
        for tag in self._tag_to_tasks:
            init_logger(tag)
            self._results[tag] = EvalResult(0)
            l.info(
                f"Starting decompilation tasks for tag {tag}... ({len(self._tag_to_tasks[tag]) // len(DECOMPILERS)} binaries)"
            )
        if MULTIPROCESSING:
            self._run_multiprocess()
        else:
            self._run_single_process()
        self._show_overall_results()

    def _run_single_process(self):
        for tag, tasks in self._tag_to_tasks.items():
            for task in tasks:
                try:
                    decompile_binary(
                        task.binary_path,
                        task.tag,
                        task.decompiler,
                        self._binary_path_to_symbols[task.binary_path],
                    )
                except Exception as e:
                    l.error(f"Task failed: {task.decompiler} on {task.binary_path}: {e}")
                self._on_task_done(task)

    def _run_multiprocess(self):
        with ProcessPoolExecutor(
            max_workers=self.processes, initializer=set_memory_limit_gb, initargs=(self.max_memory_gb,)
        ) as executor:
            for tag, tasks in self._tag_to_tasks.items():
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


if __name__ == "__main__":
    init_logger("oxidizer-eval")

    # toolchains = ("nightly-2025-05-22", "nightly-2023-05-22")
    # optimization_levels = ("0", "1", "2", "3", "s", "z")
    toolchains = ("nightly-2023-05-22",)
    optimization_levels = ("3",)
    tags = (
        # "malware",
        # "nightly-2023-05-22-O3",
        # "nightly-2025-05-22-O0",
        "nightly-2025-05-22-O3-inline",
        # "open-source-malware",
    )

    scheduler = Scheduler()

    for tag in tags:
        scheduler.schedule_tasks(tag)
    scheduler.run()
