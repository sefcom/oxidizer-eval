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

        gt_macro_call_counts = defaultdict(int)
        oxidizer_macro_call_counts = defaultdict(int)
        for (decompiler, metric), values in self.decompiler_and_metric_to_values.items():
            if metric.startswith("macro_call_"):
                macro_name = metric[len("macro_call_") :]
                if decompiler == "Oxidizer":
                    oxidizer_macro_call_counts[macro_name] += sum(values)
                else:
                    gt_macro_call_counts[macro_name] += sum(values)
        output += "\nGround Truth Macro Call Counts:\n"
        for macro_name, count in sorted(gt_macro_call_counts.items(), key=lambda x: x[1], reverse=True):
            output += f"  {macro_name}: {count}\n"

        output += "\nOxidizer Macro Call Counts:\n"
        for macro_name, count in sorted(oxidizer_macro_call_counts.items(), key=lambda x: x[1], reverse=True):
            output += f"  {macro_name}: {count}\n"

        target_sum = 0
        total_sum = 0
        for key in oxidizer_macro_call_counts:
            if key not in gt_macro_call_counts:
                output += f"  {key}: 0\n"

        for key in gt_macro_call_counts:
            gt_count = gt_macro_call_counts[key]
            if key in oxidizer_macro_call_counts:
                target_sum += gt_count
            total_sum += gt_count
        output += f"\nOxidizer covered {target_sum} out of {total_sum} macro calls in ground truth.\n"

        return output

    def to_latex(self, tag) -> str:
        def winner_fmt(value: str, is_best: bool) -> str:
            return f"\\winner{{{value}}}" if is_best and value else value

        latex = []
        latex.append("\\begin{table*}[ht]")
        latex.append("\\centering")
        latex.append(
            "\\caption{"
            f"Evaluation results on conciseness and fidelity metrics for the {tag} dataset. "
            f"{self.total_functions:,} functions are evaluated across {self.total_binaries:,} binaries. "
            f"We present average and median values per function for each metric. "
            f"We also show percentage relative to the source code in parentheses for average values. "
            f"The best average values per metric are highlighted in \\winner{{bold}}."
            "}"
        )
        latex.append(f"\\label{{table:eval_result_{tag}}}")
        latex.append("\\footnotesize")
        latex.append("\\resizebox{\\textwidth}{!}{%")
        latex.append("\\begin{tabular}{l" + "rr" * len(DECOMPILERS) + "}")
        latex.append("\\toprule")

        decompiler_mappings = {
            "IDA": "Hex-Rays",
            "Oxidizer": "\dec",
            "Binary Ninja": "Binary Ninja\n(Pseudo C)",
            "Binary Ninja (Pseudo Rust)": "Binary Ninja\n(Pseudo Rust)",
        }

        for d in DECOMPILERS:
            if d not in decompiler_mappings:
                decompiler_mappings[d] = d
            mapping = decompiler_mappings[d]
            decompiler_mappings[d] = "\\\\".join([f"\\textbf{{{line}}}" for line in mapping.split("\n")])

        # Header rows
        latex.append(
            "\\multirowcell{3}{\\textbf{Metric}} "
            + "& "
            + " & ".join([f"\\multicolumn{{2}}{{c}}{{\\makecell{{{decompiler_mappings[d]}}}}}" for d in DECOMPILERS])
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
            if metric == NUM_GOTOS:
                latex.append(f"\\cmidrule{{1-{2 * len(DECOMPILERS) + 1}}}")
            row = [metric_mappings.get(metric, metric)]
            # Collect all values first for comparison
            # sums = [self._sum(d, metric) for d in DECOMPILERS]
            avgs = [self._average(d, metric) for d in DECOMPILERS]
            meds = [self._median(d, metric) for d in DECOMPILERS]

            best_decompiler = None
            if metric in [NUM_MATCHED_FUNCTION_CALLS, NUM_MATCHED_MACRO_CALLS, NUM_MATCHED_STRING_LITERALS]:
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
                        f"{avgs[i]:.2f} ({avgs[i] / self._average('Source', metric) * 100:,.1f}\\%)"
                        if self._average("Source", metric) > 0
                        else f"{avgs[i]:.2f}"
                    )

                avg_str = winner_fmt(avg_fmt, decompiler == best_decompiler)
                med_str = f"{int(meds[i])}"

                row.extend([avg_str, med_str])

            latex.append(" & ".join(row) + " \\\\")

        latex.append("\\bottomrule")
        latex.append("\\end{tabular}%")
        latex.append("}")
        latex.append("\\end{table*}")

        return "\n".join(latex)

    def to_latex_type_eval(self, tag) -> str:
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
            row.append(f"{max(totals):,}")
            return " & ".join(row) + " \\\\"

        def compute_metrics(t: str):
            precisions, recalls, f1s, totals = [], [], [], []
            for decompiler in decompilers:
                tp = sum(self.decompiler_and_metric_to_values.get((decompiler, f"{t}_TP"), []))
                fp = sum(self.decompiler_and_metric_to_values.get((decompiler, f"{t}_FP"), []))
                fn = sum(self.decompiler_and_metric_to_values.get((decompiler, f"{t}_FN"), []))
                total = sum(self.decompiler_and_metric_to_values.get((decompiler, f"{t}_total"), []))
                total = tp + fn

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
        latex.append(
            "\\caption{"
            f"Type inference evaluation results across decompilers for the {tag} dataset. "
            "The precision, recall, and F1 score are reported per type category, and the best scores are highlighted in \\winner{bold}. "
            "The total number of types per category is also provided. "
            "For struct and enum types, \\dec outperforms other decompilers on all scores."
            "}"
        )
        latex.append(f"\\label{{table:type_eval_result_{tag}}}")
        latex.append("\\centering")
        latex.append("\\resizebox{\\textwidth}{!}{")
        latex.append("\\begin{tabular}{lrrrrrrrrrrrrrrrr}")
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
        latex.append(
            "& \\multicolumn{1}{c}{\\textbf{Precision}} & \\multicolumn{1}{c}{\\textbf{Recall}} & \\multicolumn{1}{c}{\\textbf{F1}} "
            * 5
            + " \\\\"
        )
        latex.append("\\midrule")

        # Overall row
        precisions, recalls, f1s, totals = [], [], [], []
        for decompiler in decompilers:
            tp = fp = fn = total = 0
            for t in type_suffixes:
                tp += sum(self.decompiler_and_metric_to_values.get((decompiler, f"{t}_TP"), []))
                fp += sum(self.decompiler_and_metric_to_values.get((decompiler, f"{t}_FP"), []))
                fn += sum(self.decompiler_and_metric_to_values.get((decompiler, f"{t}_FN"), []))
            total = tp + fn

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

    def to_html(self, tag) -> str:
        """Generate an HTML report of evaluation results."""
        html = []

        # HTML header with CSS styling
        html.append("<!DOCTYPE html>")
        html.append("<html lang='en'>")
        html.append("<head>")
        html.append("    <meta charset='UTF-8'>")
        html.append("    <meta name='viewport' content='width=device-width, initial-scale=1.0'>")
        html.append(f"    <title>Evaluation Results - {tag}</title>")
        html.append("    <style>")
        html.append("        body { font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif; margin: 20px; background-color: #f5f5f5; }")
        html.append("        h1, h2 { color: #333; }")
        html.append("        .summary { background: white; padding: 20px; border-radius: 5px; margin-bottom: 20px; box-shadow: 0 2px 4px rgba(0,0,0,0.1); }")
        html.append("        table { border-collapse: collapse; width: 100%; background: white; margin-bottom: 30px; box-shadow: 0 2px 4px rgba(0,0,0,0.1); }")
        html.append("        th, td { padding: 12px; text-align: left; border-bottom: 1px solid #ddd; }")
        html.append("        th { background-color: #4CAF50; color: white; font-weight: bold; position: sticky; top: 0; }")
        html.append("        tr:hover { background-color: #f5f5f5; }")
        html.append("        .winner { font-weight: bold; color: #4CAF50; }")
        html.append("        .metric-name { font-weight: bold; }")
        html.append("        .section { background: white; padding: 20px; border-radius: 5px; margin-bottom: 20px; }")
        html.append("        .percentage { color: #666; font-size: 0.9em; }")
        html.append("        .macro-list { max-height: 400px; overflow-y: auto; }")
        html.append("        .timestamp { color: #999; font-size: 0.9em; }")
        html.append("        .sep { border-left: 3px solid #333; }")
        html.append("    </style>")
        html.append("</head>")
        html.append("<body>")

        # Title and summary
        import datetime
        html.append(f"    <h1>Evaluation Results: {tag}</h1>")
        html.append(f"    <p class='timestamp'>Generated on: {datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S')}</p>")
        html.append("    <div class='summary'>")
        html.append(f"        <h2>Summary</h2>")
        html.append(f"        <p><strong>Number of Binaries:</strong> {self.total_binaries:,}</p>")
        html.append(f"        <p><strong>Number of Functions:</strong> {self.total_functions:,}</p>")
        html.append("    </div>")

        # Main metrics table
        html.append("    <div class='section'>")
        html.append("        <h2>Conciseness and Fidelity Metrics</h2>")
        html.append("        <table>")
        html.append("            <thead>")
        html.append("                <tr>")
        html.append("                    <th>Metric</th>")
        for decompiler in DECOMPILERS:
            html.append(f"                    <th class='sep' colspan='2'>{decompiler}</th>")
        html.append("                </tr>")
        html.append("                <tr>")
        html.append("                    <th></th>")
        for _ in DECOMPILERS:
            html.append("                    <th class='sep'>Average</th>")
            html.append("                    <th>Median</th>")
        html.append("                </tr>")
        html.append("            </thead>")
        html.append("            <tbody>")

        metric_names = {
            MCC: "McCabe Cyclomatic Complexity",
            LOC: "Lines of Code",
            NUM_VARIABLES: "Number of Variables",
            NUM_OPERATORS: "Number of Operators",
            NUM_GOTOS: "Number of Gotos",
            NUM_MATCHED_STRING_LITERALS: "Matched String Literals",
            NUM_MATCHED_FUNCTION_CALLS: "Matched Function Calls",
            NUM_EXTRANEOUS_FUNCTION_CALLS: "Extraneous Function Calls",
            NUM_MATCHED_MACRO_CALLS: "Matched Macro Calls",
        }

        for metric in METRICS:
            avgs = [self._average(d, metric) for d in DECOMPILERS]
            meds = [self._median(d, metric) for d in DECOMPILERS]

            # Determine best decompiler
            if metric in [NUM_MATCHED_FUNCTION_CALLS, NUM_MATCHED_MACRO_CALLS, NUM_MATCHED_STRING_LITERALS]:
                best_decompiler = max(DECOMPILERS, key=lambda d: self._average(d, metric) if d != "Source" else 0)
            else:
                best_decompiler = min(DECOMPILERS, key=lambda d: self._average(d, metric) if d != "Source" else float("inf"))

            html.append("                <tr>")
            html.append(f"                    <td class='metric-name'>{metric_names.get(metric, metric)}</td>")

            for i, decompiler in enumerate(DECOMPILERS):
                is_winner = decompiler == best_decompiler and decompiler != "Source"
                classes_avg = " ".join(filter(None, ["sep", "winner" if is_winner else ""]))
                classes_med = "winner" if is_winner else ""

                # Average with percentage
                if decompiler == "Source":
                    avg_text = f"{avgs[i]:.2f}"
                else:
                    percentage = f" <span class='percentage'>({avgs[i] / self._average('Source', metric) * 100:.1f}%)</span>" if self._average("Source", metric) > 0 else ""
                    avg_text = f"{avgs[i]:.2f}{percentage}"

                html.append(f"                    <td class='{classes_avg}'>{avg_text}</td>")
                html.append(f"                    <td class='{classes_med}'>{int(meds[i])}</td>")

            html.append("                </tr>")

        html.append("            </tbody>")
        html.append("        </table>")
        html.append("    </div>")

        # Type recovery evaluation
        html.append("    <div class='section'>")
        html.append("        <h2>Type Recovery Evaluation</h2>")
        html.append("        <table>")
        html.append("            <thead>")
        html.append("                <tr>")
        html.append("                    <th>Type Category</th>")
        # Filter out "Source" from decompilers
        type_decompilers = [d for d in DECOMPILERS if d != "Source"]
        for decompiler in type_decompilers:
            html.append(f"                    <th class='sep' colspan='3' style='text-align: center;'>{decompiler}</th>")
        html.append("                </tr>")
        html.append("                <tr>")
        html.append("                    <th></th>")
        for _ in type_decompilers:
            html.append("                    <th class='sep'>Precision</th>")
            html.append("                    <th>Recall</th>")
            html.append("                    <th>F1</th>")
        html.append("                </tr>")
        html.append("            </thead>")
        html.append("            <tbody>")

        type_categories = [
            "primitive", "struct", "enum", "array", "Result", "Option",
            "&primitive", "&struct", "&enum", "&Result", "&Option", "&array", "&reference", "reference",
        ]

        for t in type_categories:
            html.append("                <tr>")
            html.append(f"                    <td class='metric-name'>{t}</td>")

            precisions, recalls, f1s = [], [], []
            for decompiler in type_decompilers:
                tp = sum(self.decompiler_and_metric_to_values.get((decompiler, f"{t}_TP"), []))
                fp = sum(self.decompiler_and_metric_to_values.get((decompiler, f"{t}_FP"), []))
                fn = sum(self.decompiler_and_metric_to_values.get((decompiler, f"{t}_FN"), []))

                precision = tp / (tp + fp) if (tp + fp) > 0 else 0.0
                recall = tp / (tp + fn) if (tp + fn) > 0 else 0.0
                f1 = 2 * precision * recall / (precision + recall) if (precision + recall) > 0 else 0.0

                precisions.append(precision)
                recalls.append(recall)
                f1s.append(f1)

            best_p = max(precisions) if precisions else 0
            best_r = max(recalls) if recalls else 0
            best_f1 = max(f1s) if f1s else 0

            for i in range(len(type_decompilers)):
                p_winner = precisions[i] == best_p and best_p > 0
                r_winner = recalls[i] == best_r and best_r > 0
                f_winner = f1s[i] == best_f1 and best_f1 > 0
                p_class = f" class='{' '.join(filter(None, ['sep', 'winner' if p_winner else '']))}'"
                r_class = ' class="winner"' if r_winner else ''
                f_class = ' class="winner"' if f_winner else ''

                html.append(f"                    <td{p_class}>{precisions[i] * 100:.2f}%</td>")
                html.append(f"                    <td{r_class}>{recalls[i] * 100:.2f}%</td>")
                html.append(f"                    <td{f_class}>{f1s[i] * 100:.2f}%</td>")

            html.append("                </tr>")

        # Overall type recovery
        html.append("                <tr style='background-color: #e8f5e9; font-weight: bold;'>")
        html.append("                    <td>Overall</td>")

        overall_precisions, overall_recalls, overall_f1s = [], [], []
        for decompiler in type_decompilers:
            total_tp = total_fp = total_fn = 0
            for t in type_categories:
                total_tp += sum(self.decompiler_and_metric_to_values.get((decompiler, f"{t}_TP"), []))
                total_fp += sum(self.decompiler_and_metric_to_values.get((decompiler, f"{t}_FP"), []))
                total_fn += sum(self.decompiler_and_metric_to_values.get((decompiler, f"{t}_FN"), []))

            precision = total_tp / (total_tp + total_fp) if (total_tp + total_fp) > 0 else 0.0
            recall = total_tp / (total_tp + total_fn) if (total_tp + total_fn) > 0 else 0.0
            f1 = 2 * precision * recall / (precision + recall) if (precision + recall) > 0 else 0.0

            overall_precisions.append(precision)
            overall_recalls.append(recall)
            overall_f1s.append(f1)

        best_p = max(overall_precisions) if overall_precisions else 0
        best_r = max(overall_recalls) if overall_recalls else 0
        best_f1 = max(overall_f1s) if overall_f1s else 0

        for i in range(len(type_decompilers)):
            p_winner = overall_precisions[i] == best_p and best_p > 0
            r_winner = overall_recalls[i] == best_r and best_r > 0
            f_winner = overall_f1s[i] == best_f1 and best_f1 > 0
            p_class = f" class='{' '.join(filter(None, ['sep', 'winner' if p_winner else '']))}'"
            r_class = ' class="winner"' if r_winner else ''
            f_class = ' class="winner"' if f_winner else ''

            html.append(f"                    <td{p_class}>{overall_precisions[i] * 100:.2f}%</td>")
            html.append(f"                    <td{r_class}>{overall_recalls[i] * 100:.2f}%</td>")
            html.append(f"                    <td{f_class}>{overall_f1s[i] * 100:.2f}%</td>")

        html.append("                </tr>")
        html.append("            </tbody>")
        html.append("        </table>")
        html.append("    </div>")

        # Macro calls section
        gt_macro_call_counts = defaultdict(int)
        oxidizer_macro_call_counts = defaultdict(int)
        for (decompiler, metric), values in self.decompiler_and_metric_to_values.items():
            if metric.startswith("macro_call_"):
                macro_name = metric[len("macro_call_"):]
                if decompiler == "Oxidizer":
                    oxidizer_macro_call_counts[macro_name] += sum(values)
                else:
                    gt_macro_call_counts[macro_name] += sum(values)

        if gt_macro_call_counts or oxidizer_macro_call_counts:
            html.append("    <div class='section'>")
            html.append("        <h2>Macro Call Statistics</h2>")

            target_sum = sum(gt_macro_call_counts[key] for key in gt_macro_call_counts if key in oxidizer_macro_call_counts)
            total_sum = sum(gt_macro_call_counts.values())
            coverage_pct = (target_sum / total_sum * 100) if total_sum > 0 else 0

            html.append(f"        <p><strong>Coverage:</strong> Oxidizer covered {target_sum:,} out of {total_sum:,} macro calls in ground truth ({coverage_pct:.2f}%)</p>")

            html.append("        <div style='display: flex; gap: 20px;'>")
            html.append("            <div style='flex: 1;'>")
            html.append("                <h3>Ground Truth Macro Calls</h3>")
            html.append("                <div class='macro-list'>")
            html.append("                    <table>")
            html.append("                        <thead><tr><th>Macro Name</th><th>Count</th></tr></thead>")
            html.append("                        <tbody>")
            for macro_name, count in sorted(gt_macro_call_counts.items(), key=lambda x: x[1], reverse=True):
                html.append(f"                            <tr><td>{macro_name}</td><td>{count:,}</td></tr>")
            html.append("                        </tbody>")
            html.append("                    </table>")
            html.append("                </div>")
            html.append("            </div>")

            html.append("            <div style='flex: 1;'>")
            html.append("                <h3>Oxidizer Macro Calls</h3>")
            html.append("                <div class='macro-list'>")
            html.append("                    <table>")
            html.append("                        <thead><tr><th>Macro Name</th><th>Count</th></tr></thead>")
            html.append("                        <tbody>")
            for macro_name, count in sorted(oxidizer_macro_call_counts.items(), key=lambda x: x[1], reverse=True):
                in_gt = "✓" if macro_name in gt_macro_call_counts else "✗"
                html.append(f"                            <tr><td>{macro_name} {in_gt}</td><td>{count:,}</td></tr>")
            html.append("                        </tbody>")
            html.append("                    </table>")
            html.append("                </div>")
            html.append("            </div>")
            html.append("        </div>")
            html.append("    </div>")

        html.append("</body>")
        html.append("</html>")

        return "\n".join(html)
