from collections import defaultdict
import os
import json
import statistics
from typing import Dict, List, Tuple

from eval.metrics import METRICS
from eval.config import DECOMPILERS


class DecompileResult:

    def __init__(self, decompilation: str, variable_types, function_call_counts, macro_call_counts):
        self.decompilation = decompilation
        self.variable_types = variable_types
        self.function_call_counts = function_call_counts
        self.macro_call_counts = macro_call_counts

    def save_json(self, path: str):
        with open(path, "w") as fd:
            json.dump(
                {
                    "decompilation": self.decompilation,
                    "variable_types": self.variable_types,
                    "function_call_counts": self.function_call_counts,
                    "macro_call_counts": self.macro_call_counts,
                },
                fd,
                indent=2,
            )

    @staticmethod
    def load_json(path: str) -> "DecompileResult":
        with open(path, "r") as fd:
            data = json.load(fd)
        return DecompileResult(
            decompilation=data["decompilation"],
            variable_types=data["variable_types"],
            function_call_counts=data["function_call_counts"],
            macro_call_counts=data["macro_call_counts"],
        )


class FuncEvalResult:
    """Evaluation result for a function and a decompiler"""

    def __init__(self, name):
        self.name = name
        self.metric_to_value = {}

    def add_result(self, metric: str, value):
        self.metric_to_value[metric] = value


class EvalResult:
    def __init__(self, total_binaries=1):
        self.total_binaries = total_binaries
        self.decompiler_and_metric_to_values: Dict[Tuple, List] = defaultdict(list)

    @property
    def total_functions(self):
        if not self.decompiler_and_metric_to_values:
            return 0
        return len(next(iter(self.decompiler_and_metric_to_values.values())))

    def add_func_eval_result(self, decompiler, func_eval_result: FuncEvalResult):
        for metric, value in func_eval_result.metric_to_value.items():
            self.decompiler_and_metric_to_values[(decompiler, metric)].append(value)

    def merge(self, other: "EvalResult"):
        self.total_binaries += other.total_binaries
        for key, values in other.decompiler_and_metric_to_values.items():
            self.decompiler_and_metric_to_values[key].extend(values)

    def _average(self, decompiler, metric):
        values = self.decompiler_and_metric_to_values.get((decompiler, metric), [])
        if not values:
            return 0.0
        return sum(values) / len(values)

    def _median(self, decompiler, metric):
        values = self.decompiler_and_metric_to_values.get((decompiler, metric), [])
        if not values:
            return 0.0
        return statistics.median(values)

    def _sum(self, decompiler, metric):
        values = self.decompiler_and_metric_to_values.get((decompiler, metric), [])
        return sum(values)

    def __str__(self) -> str:
        output = f"Evaluation Result:\n"
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
        type_categories = [
            "primitive",
            "struct",
            "enum",
            "array",
            "Result",
            "Option",
            "&primitive",
            "&struct",
            "&enum",
            "&Result",
            "&Option",
            "&array",
            "&reference",
            "reference",
        ]

        # Header row with decompiler names

        header = "Type (Precision/Recall/F1): " + " | ".join([f"{d}" for d in DECOMPILERS]) + "\n"
        output += header

        # Per-type rows
        for t in type_categories:
            row = f"{t} (Precision/Recall/F1): "
            results_per_decompiler = []
            for decompiler in DECOMPILERS:
                tp = sum(self.decompiler_and_metric_to_values.get((decompiler, f"{t}_TP"), []))
                fp = sum(self.decompiler_and_metric_to_values.get((decompiler, f"{t}_FP"), []))
                fn = sum(self.decompiler_and_metric_to_values.get((decompiler, f"{t}_FN"), []))

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
            for t in type_categories:
                total_tp += sum(self.decompiler_and_metric_to_values.get((decompiler, f"{t}_TP"), []))
                total_fp += sum(self.decompiler_and_metric_to_values.get((decompiler, f"{t}_FP"), []))
                total_fn += sum(self.decompiler_and_metric_to_values.get((decompiler, f"{t}_FN"), []))

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
