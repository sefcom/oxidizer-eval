from collections import defaultdict, Counter
import statistics
from typing import Dict, List, Tuple
import logging

from eval.config import DECOMPILERS
from eval.metrics import *


l = logging.getLogger("oxidizer-eval")


class FunctionEvalResult:
    def __init__(self, func_name):
        self.func_name = func_name
        self.eval_result = defaultdict(dict)

    def add_result(self, metric, decompiler, value):
        self.eval_result[decompiler][metric] = value

    def is_valid_for_all_decompilers(self):
        return (
            len(self.eval_result)
            == len(DECOMPILERS)
            # and abs(self.eval_result["Oxidizer"][LOC] - self.eval_result["angr"][LOC]) < 80
        )


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
        output += f"# Functions evaluated: {len(self.func_eval_results)}\n"
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
        if not len(values):
            l.error(f"No values for {decompiler} {metric}")
            l.error(self.values.keys())
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
        latex.append("\\begin{tabular}{l" + "ccc" * len(DECOMPILERS) + "}")
        latex.append("\\toprule")

        decompiler_mappings = {
            "IDA": "Hex-Rays",
            "Oxidizer": "\dec",
            "Binary Ninja": "Binary Ninja (C)",
            "Binary Ninja (Pseudo Rust)": "Binary Ninja (Rust)",
        }

        # Header rows
        latex.append(
            "\\multirow{2}{*}{\\textbf{Metric}} "
            + "& "
            + " & ".join(
                [f"\\multicolumn{{3}}{{c}}{{\\textbf{{{decompiler_mappings.get(d, d)}}}}}" for d in DECOMPILERS]
            )
            + " \\\\"
        )
        latex.append("\\cmidrule{2-" + str(1 + 3 * len(DECOMPILERS)) + "}")
        latex.append("& " + " & ".join(["\\textbf{Sum} & \\textbf{Avg} & \\textbf{Med}"] * len(DECOMPILERS)) + " \\\\")
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
            sums = [self._sum(d, metric) for d in DECOMPILERS]
            avgs = [self._average(d, metric) for d in DECOMPILERS]
            meds = [self._median(d, metric) for d in DECOMPILERS]

            source_avg = avgs[DECOMPILERS.index("Source")]

            for i in range(len(DECOMPILERS)):
                decompiler = DECOMPILERS[i]
                best_decompiler = "Oxidizer" if metric != NUM_MATCHED_FUNCTION_CALLS else "IDA"

                sum_str = winner_fmt(f"{sums[i]:,}", decompiler == best_decompiler)

                if decompiler == "Source":
                    avg_fmt = f"{avgs[i]:.2f}"
                else:
                    ratio = int((avgs[i] / source_avg) * 100) if source_avg != 0 else "-"
                    # avg_fmt = f"{avgs[i]:.2f} ({ratio}\\%)" if decompiler == "Oxidizer" else f"{avgs[i]:.2f}"
                    avg_fmt = f"{avgs[i]:.2f}"

                avg_str = winner_fmt(avg_fmt, decompiler == best_decompiler)

                if int(meds[i]) in [0, 3]:
                    med_str = str(int(meds[i]))
                else:
                    med_str = winner_fmt(f"{int(meds[i])}", decompiler == best_decompiler)

                row.extend([sum_str, avg_str, med_str])

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
