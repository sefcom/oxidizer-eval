from collections import defaultdict
import os
import json
import statistics
from typing import Dict, List, Tuple

from eval.metrics import METRICS
from eval.metrics import *
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
        # output += "\n"
        # for metric in METRICS:
        #     output += f'Sum {metric}({"/".join(DECOMPILERS)}): {"/".join([f"{self._sum(decompiler, metric)}" for decompiler in DECOMPILERS])}\n'
        # output += "\n"
        # for metric in METRICS:
        #     output += f'Median {metric}({"/".join(DECOMPILERS)}): {"/".join([f"{self._median(decompiler, metric)}" for decompiler in DECOMPILERS])}\n'

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

    def to_latex(self) -> str:
        def winner_fmt(value: str, is_best: bool) -> str:
            return f"\\winner{{{value}}}" if is_best and value else value

        latex = []
        latex.append("\\begin{table*}[ht]")
        latex.append("\\centering")
        latex.append("\\caption{Evaluation results on conciseness and fidelity metrics.}")
        latex.append("\\label{table:coreutils_eval_result}")
        latex.append("\\footnotesize")
        latex.append("\\resizebox{\\textwidth}{!}{%")
        latex.append("\\begin{tabular}{l" + "rr" * len(DECOMPILERS) + "}")
        latex.append("\\toprule")

        decompiler_mappings = {
            "IDA": "Hex-Rays",
            "Oxidizer": "\dec",
            "Oxidizer (Stripped)": "\\shortstack{\dec\\\\(Stripped)}",
            "Binary Ninja": "\\shortstack{\\textbf{Binary Ninja}\\\\\\textbf{(Pseudo C)}}",
            "Binary Ninja (Pseudo Rust)": "\\shortstack{\\textbf{Binary Ninja}\\\\\\textbf{(Pseudo Rust)}}",
        }

        # Header rows
        latex.append(
            "\\multirow{2}{*}{\\textbf{Metric}} "
            + "& "
            + " & ".join(
                [f"\\multicolumn{{2}}{{c}}{{\\textbf{{{decompiler_mappings.get(d, d)}}}}}" for d in DECOMPILERS]
            )
            + " \\\\"
        )
        latex.append("\\cmidrule{2-" + str(1 + 2 * len(DECOMPILERS)) + "}")
        latex.append(
            "& "
            + " & ".join(
                ["\\multicolumn{1}{c}{\\textbf{Avg.}} & \\multicolumn{1}{c}{\\textbf{Med.}}"] * len(DECOMPILERS)
            )
            + " \\\\"
        )
        latex.append("\\midrule")

        metric_mappings = {
            MCC: "MCC",
            LOC: "LoC",
            NUM_VARIABLES: "NofVar",
            NUM_OPERATORS: "NofOps",
            NUM_GOTOS: "Gotos",
            NUM_MATCHED_STRING_LITERALS: "Matched Strings",
            NUM_MATCHED_FUNCTION_CALLS: "Matched Calls",
            NUM_EXTRANEOUS_FUNCTION_CALLS: "Extraneous Calls",
            NUM_MATCHED_MACRO_CALLS: "Matched Macros",
        }

        for metric in METRICS:
            row = [metric_mappings.get(metric, metric)]
            # Collect all values first for comparison
            # sums = [self._sum(d, metric) for d in DECOMPILERS]
            avgs = [self._average(d, metric) for d in DECOMPILERS]
            meds = [self._median(d, metric) for d in DECOMPILERS]

            best_decompiler = None
            if metric in [NUM_MATCHED_FUNCTION_CALLS, NUM_MATCHED_MACRO_CALLS]:
                best_decompiler = max(
                    DECOMPILERS, key=lambda d: self._average(d, metric) if d != "Source" else 0
                )  # Higher is better
            else:
                best_decompiler = min(
                    DECOMPILERS, key=lambda d: self._average(d, metric) if d != "Source" else float("inf")
                )  # Lower is better

            for i in range(len(DECOMPILERS)):
                decompiler = DECOMPILERS[i]

                # sum_str = winner_fmt(f"{sums[i]:,}", decompiler == best_decompiler)

                if decompiler == "Source":
                    avg_fmt = f"{avgs[i]:.2f}"
                else:
                    avg_fmt = (
                        f"{avgs[i]:.2f} ({avgs[i] / self._average('Source', metric) * 100:.1f}\\%)"
                        if self._average("Source", metric) > 0
                        else f"{avgs[i]:.2f}"
                    )

                avg_str = winner_fmt(avg_fmt, decompiler == best_decompiler)
                med_str = winner_fmt(f"{int(meds[i])}", decompiler == best_decompiler)

                row.extend([avg_str, med_str])

            latex.append(" & ".join(row) + " \\\\")

        latex.append("\\bottomrule")
        latex.append("\\end{tabular}%")
        latex.append("}")
        latex.append("\\end{table*}")

        return "\n".join(latex)

    def to_latex_type_eval_table(self) -> str:
        type_suffixes = [
            "primitive",
            "reference",
            "array",
            "struct",
            "Option",
            "Result",
            "enum",
        ]
        decompilers = [d for d in DECOMPILERS if d not in ["Source", "Binary Ninja (Pseudo Rust)"]]

        def format_percent(x):
            return f"{x * 100:.2f}\\%"

        def latex_row(label, precisions, recalls, f1s, totals):
            best_p = max(precisions)
            best_r = max(recalls)
            best_f1 = max(f1s)
            row = [label]
            for i in range(len(decompilers)):
                p = (
                    f"\\winner{{{format_percent(precisions[i])}}}"
                    if precisions[i] == best_p
                    else format_percent(precisions[i])
                )
                r = f"\\winner{{{format_percent(recalls[i])}}}" if recalls[i] == best_r else format_percent(recalls[i])
                f = f"\\winner{{{format_percent(f1s[i])}}}" if f1s[i] == best_f1 else format_percent(f1s[i])
                row.extend([p, r, f])
            row.append(str(max(totals)))
            return " & ".join(row) + " \\\\"

        def compute_metrics(t: str):
            precisions, recalls, f1s, totals = [], [], [], []
            for decompiler in decompilers:
                tp = sum(self.values.get((decompiler, f"{t}_TP"), []))
                fp = sum(self.values.get((decompiler, f"{t}_FP"), []))
                fn = sum(self.values.get((decompiler, f"{t}_FN"), []))
                total = sum(self.values.get((decompiler, f"{t}_total"), []))

                totals.append(total)

                precision = tp / (tp + fp) if (tp + fp) > 0 else 0.0
                recall = tp / (tp + fn) if (tp + fn) > 0 else 0.0
                f1 = 2 * precision * recall / (precision + recall) if (precision + recall) > 0 else 0.0

                precisions.append(precision)
                recalls.append(recall)
                f1s.append(f1)
            return precisions, recalls, f1s, totals

        def type_label(t):
            return {
                "primitive": "Primitive",
                "reference": "Reference",
                "struct": "Struct",
                "enum": "Other Enum",
                "Option": "Option\\textless{}T\\textgreater{}",
                "Result": "Result\\textless{}T, E\\textgreater{}",
                "array": "Array",
            }.get(t, t)

        latex = []
        latex.append("\\begin{table*}[bt]")
        latex.append("\\caption{Type inference evaluation results across decompilers.}")
        latex.append("\\label{table:type_eval_result}")
        latex.append("\\centering")
        latex.append("\\resizebox{\\textwidth}{!}{")
        latex.append("\\begin{tabular}{lcccccccccccccccc}")
        latex.append("\\toprule")
        latex.append(
            "\\multirow{2}{*}{\\textbf{Category}} "
            "& \\multicolumn{3}{c}{\\textbf{\dec}} "
            "& \\multicolumn{3}{c}{\\textbf{angr}} "
            "& \\multicolumn{3}{c}{\\textbf{Hex-Rays}} "
            "& \\multicolumn{3}{c}{\\textbf{Ghidra}} "
            "& \\multicolumn{3}{c}{\\textbf{Binary Ninja}} "
            "& \\multirow{2}{*}{\\textbf{Total}} \\\\"
        )
        latex.append("\\cmidrule(lr){2-16}")
        latex.append("& \\textbf{Precision} & \\textbf{Recall} & \\textbf{F1} " * 5 + " \\\\")
        latex.append("\\midrule")

        # Overall row
        precisions, recalls, f1s, totals = [], [], [], []
        for decompiler in decompilers:
            tp = fp = fn = total = 0
            for t in type_suffixes:
                tp += sum(self.values.get((decompiler, f"{t}_TP"), []))
                fp += sum(self.values.get((decompiler, f"{t}_FP"), []))
                fn += sum(self.values.get((decompiler, f"{t}_FN"), []))
                total += sum(self.values.get((decompiler, f"{t}_total"), []))

            totals.append(total)

            precision = tp / (tp + fp) if (tp + fp) > 0 else 0.0
            recall = tp / (tp + fn) if (tp + fn) > 0 else 0.0
            f1 = 2 * precision * recall / (precision + recall) if (precision + recall) > 0 else 0.0

            precisions.append(precision)
            recalls.append(recall)
            f1s.append(f1)

        latex.append(latex_row("Overall", precisions, recalls, f1s, totals))
        latex.append("\\midrule")

        # Per type row
        for t in type_suffixes:
            p, r, f, tot = compute_metrics(t)
            latex.append(latex_row(type_label(t), p, r, f, tot))

        latex.append("\\bottomrule")
        latex.append("\\end{tabular}")
        latex.append("}")
        latex.append("\\end{table*}")

        return "\n".join(latex)
