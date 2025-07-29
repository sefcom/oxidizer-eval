from collections import defaultdict, Counter
import statistics
from typing import Dict, List, Tuple

from eval.config import DECOMPILERS
from eval.metrics import *


class FunctionEvalResult:
    def __init__(self, func_name):
        self.func_name = func_name
        self.eval_result = defaultdict(dict)

    def add_result(self, metric, decompiler, value):
        self.eval_result[decompiler][metric] = value

    def is_valid_for_all_decompilers(self):
        return len(self.eval_result) == len(DECOMPILERS)


class BinaryEvalResult:

    def __init__(self, binary_path):
        self.binary_path = binary_path
        self.func_eval_results: List[FunctionEvalResult] = []

    def add_func_eval_result(self, func_eval_result: FunctionEvalResult):
        if func_eval_result.is_valid_for_all_decompilers():
            self.func_eval_results.append(func_eval_result)

    def _average(self, decompiler, metric):
        values = [func_eval_result.eval_result[decompiler][metric] for func_eval_result in self.func_eval_results]
        assert len(values) > 0
        return sum(values) / len(values)

    def __str__(self) -> str:
        output = f"Binary: {self.binary_path}\n"
        if len(self.func_eval_results) == 0:
            output += "N/A\n"
        else:
            for metric in METRICS:
                output += f'Average {metric}({"/".join(DECOMPILERS)}): {"/".join([f"{self._average(decompiler, metric):.2f}" for decompiler in DECOMPILERS])}\n'
        return output


class EvalResult:

    def __init__(self):
        self.total_binaries = 0
        self.total_functions = 0
        self.values: Dict[Tuple, List] = defaultdict(list)

    def add_binary_eval_result(self, binary_eval_result: BinaryEvalResult):
        self.total_binaries += 1
        for func_eval_result in binary_eval_result.func_eval_results:
            self.total_functions += 1
            for decompiler in DECOMPILERS:
                for metric, value in func_eval_result.eval_result[decompiler].items():
                    self.values[(decompiler, metric)].append(value)

    def merge(self, other: "EvalResult"):
        result = EvalResult()
        result.total_binaries = self.total_binaries + other.total_binaries
        result.total_functions = self.total_functions + other.total_functions
        for key, values in self.values.items():
            result.values[key].extend(values)
        for key, values in other.values.items():
            result.values[key].extend(values)
        return result

    def _average(self, decompiler, metric):
        values = self.values[(decompiler, metric)]
        assert len(values)
        return sum(values) / len(values)

    def _sum(self, decompiler, metric):
        values = self.values[(decompiler, metric)]
        assert len(values)
        return sum(values)

    def _median(self, decompiler, metric):
        values = self.values[(decompiler, metric)]
        assert len(values)
        return statistics.median(values) if len(values) else -1

    def __str__(self) -> str:
        output = f"General Evaluation Result:\n"
        output += f"# Binaries: {self.total_binaries}\n"
        output += f"# Functions: {self.total_functions}\n"
        output += "\n"
        for metric in METRICS:
            output += f'Average {metric}({"/".join(DECOMPILERS)}): {"/".join([f"{self._average(decompiler, metric):.2f}" for decompiler in DECOMPILERS])}\n'
        output += "\n"
        for metric in METRICS:
            output += f'Sum {metric}({"/".join(DECOMPILERS)}): {"/".join([f"{self._sum(decompiler, metric)}" for decompiler in DECOMPILERS])}\n'
        output += "\n"
        for metric in METRICS:
            output += f'Median {metric}({"/".join(DECOMPILERS)}): {"/".join([f"{self._median(decompiler, metric)}" for decompiler in DECOMPILERS])}\n'

        # Type Recovery Metrics
        output += "\nType Recovery Evaluation (per type):\n"
        type_suffixes = [
            "primitive",
            "struct",
            "enum",
            "Result",
            "Option",
            "&primitive",
            "&struct",
            "&enum",
            "&Result",
            "&Option",
            "&reference",
            "reference",
        ]

        # Header row with decompiler names

        header = "Type (Precision/Recall/F1): " + " | ".join([f"{d}" for d in DECOMPILERS]) + "\n"
        output += header

        # Per-type rows
        for t in type_suffixes:
            row = f"{t} (Precision/Recall/F1): "
            results_per_decompiler = []
            for decompiler in DECOMPILERS:
                tp = sum(self.values.get((decompiler, f"{t}_TP"), []))
                fp = sum(self.values.get((decompiler, f"{t}_FP"), []))
                fn = sum(self.values.get((decompiler, f"{t}_FN"), []))

                if tp + fp == 0:
                    precision = 0.0
                else:
                    precision = tp / (tp + fp)

                if tp + fn == 0:
                    recall = 0.0
                else:
                    recall = tp / (tp + fn)

                if precision + recall == 0:
                    f1 = 0.0
                else:
                    f1 = 2 * precision * recall / (precision + recall)

                result_str = f"{precision * 100:.2f}%/{recall * 100:.2f}%/{f1 * 100:.2f}% ({tp}/{fp}/{fn})"
                results_per_decompiler.append(result_str)

            row += " | ".join(results_per_decompiler) + "\n"
            output += row

        # Overall row
        overall_row = "Overall (Precision/Recall/F1): "
        overall_results = []
        for decompiler in DECOMPILERS:
            total_tp = total_fp = total_fn = 0
            for t in type_suffixes:
                total_tp += sum(self.values.get((decompiler, f"{t}_TP"), []))
                total_fp += sum(self.values.get((decompiler, f"{t}_FP"), []))
                total_fn += sum(self.values.get((decompiler, f"{t}_FN"), []))

            if total_tp + total_fp == 0:
                precision = 0.0
            else:
                precision = total_tp / (total_tp + total_fp)

            if total_tp + total_fn == 0:
                recall = 0.0
            else:
                recall = total_tp / (total_tp + total_fn)

            if precision + recall == 0:
                f1 = 0.0
            else:
                f1 = 2 * precision * recall / (precision + recall)

            overall_result_str = (
                f"{precision * 100:.2f}%/{recall * 100:.2f}%/{f1 * 100:.2f}% ({total_tp}/{total_fp}/{total_fn})"
            )
            overall_results.append(overall_result_str)

        overall_row += " | ".join(overall_results) + "\n"
        output += overall_row

        return output
