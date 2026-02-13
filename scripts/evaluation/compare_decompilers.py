#!/usr/bin/env python3
"""
Compare type recovery and decompilation results between two decompilers.
Generates an HTML report with side-by-side comparisons.
"""

import os
import sys
import json
from pathlib import Path
from collections import defaultdict
from typing import Dict, List, Tuple
import argparse

# Add parent directory to path to import eval modules
sys.path.insert(0, str(Path(__file__).parent.parent.parent))

from eval.result import DecompileResult
from eval.metrics.ground_truth import FunctionGroundTruth
from eval.metrics.calc import generate_type_eval_result, _normalize_dwarf_type
from eval.utils.dwarf_parser import Variable


class DecompilerComparison:
    def __init__(self, tag: str, binary: str, decompiler1: str, decompiler2: str):
        self.tag = tag
        self.binary = binary
        self.decompiler1 = decompiler1
        self.decompiler2 = decompiler2

        self.result_dir = Path("output/result").absolute()
        self.ground_truth_dir = Path("targets/merged_ground_truth").absolute()

        self.comparisons = []

    def get_function_addresses(self) -> List[str]:
        """Get all function addresses for the binary."""
        gt_dir = self.ground_truth_dir / self.tag / self.binary
        if not gt_dir.exists():
            print(f"Ground truth directory does not exist: {gt_dir}")
            return []

        func_addrs = []
        for file in os.listdir(gt_dir):
            if file.endswith(".json"):
                func_addr = file[:-5]  # Remove .json
                func_addrs.append(func_addr)
        return sorted(func_addrs)

    def load_results(self, func_addr: str) -> Tuple:
        """Load results for a function from both decompilers and ground truth."""
        # Load ground truth
        gt_path = self.ground_truth_dir / self.tag / self.binary / f"{func_addr}.json"
        if not gt_path.exists():
            return None, None, None
        ground_truth = FunctionGroundTruth.load(str(gt_path))

        # Load decompiler 1 result
        result1_path = self.result_dir / self.tag / self.decompiler1 / self.binary / f"{func_addr}.json"
        result1 = None
        if result1_path.exists():
            result1 = DecompileResult.load_json(str(result1_path))

        # Load decompiler 2 result
        result2_path = self.result_dir / self.tag / self.decompiler2 / self.binary / f"{func_addr}.json"
        result2 = None
        if result2_path.exists():
            result2 = DecompileResult.load_json(str(result2_path))

        return result1, result2, ground_truth

    def compare_function(self, func_addr: str):
        """Compare results for a single function."""
        result1, result2, ground_truth = self.load_results(func_addr)

        if ground_truth is None:
            return None

        if result1 is None and result2 is None:
            return None

        comparison = {
            'func_addr': func_addr,
            'ground_truth': ground_truth,
            'decompiler1': {
                'result': result1,
                'type_eval': None,
                'dwarf_var_mapping': None
            },
            'decompiler2': {
                'result': result2,
                'type_eval': None,
                'dwarf_var_mapping': None
            }
        }

        # Compute type eval results
        if result1:
            type_eval1, dwarf_mapping1 = generate_type_eval_result(
                result1.variable_types,
                ground_truth.variable_types,
                ground_truth.prototype,
                debug=False
            )
            comparison['decompiler1']['type_eval'] = type_eval1
            comparison['decompiler1']['dwarf_var_mapping'] = dwarf_mapping1

        if result2:
            type_eval2, dwarf_mapping2 = generate_type_eval_result(
                result2.variable_types,
                ground_truth.variable_types,
                ground_truth.prototype,
                debug=False
            )
            comparison['decompiler2']['type_eval'] = type_eval2
            comparison['decompiler2']['dwarf_var_mapping'] = dwarf_mapping2

        return comparison

    def compare_all(self):
        """Compare all functions in the binary."""
        func_addrs = self.get_function_addresses()
        print(f"Found {len(func_addrs)} functions in {self.binary}")

        for func_addr in func_addrs:
            comparison = self.compare_function(func_addr)
            if comparison:
                self.comparisons.append(comparison)

        print(f"Successfully compared {len(self.comparisons)} functions")

    def generate_html_report(self, output_path: str):
        """Generate HTML report comparing the two decompilers."""
        html = []

        # HTML header with CSS
        html.append("<!DOCTYPE html>")
        html.append("<html lang='en'>")
        html.append("<head>")
        html.append("    <meta charset='UTF-8'>")
        html.append("    <meta name='viewport' content='width=device-width, initial-scale=1.0'>")
        html.append(f"    <title>Decompiler Comparison: {self.decompiler1} vs {self.decompiler2}</title>")
        html.append("    <style>")
        html.append("        body { font-family: 'Monaco', 'Courier New', monospace; margin: 20px; background-color: #f5f5f5; font-size: 12px; }")
        html.append("        h1, h2, h3 { color: #333; font-family: 'Segoe UI', sans-serif; }")
        html.append("        .summary { background: white; padding: 20px; border-radius: 5px; margin-bottom: 20px; box-shadow: 0 2px 4px rgba(0,0,0,0.1); }")
        html.append("        .function-comparison { background: white; padding: 20px; border-radius: 5px; margin-bottom: 30px; box-shadow: 0 2px 4px rgba(0,0,0,0.1); }")
        html.append("        .side-by-side { display: flex; gap: 20px; margin-bottom: 20px; }")
        html.append("        .decompiler-column { flex: 1; }")
        html.append("        .decompiler-column h3 { text-align: center; background: #4CAF50; color: white; padding: 10px; border-radius: 3px; }")
        html.append("        .code-block { background: #f8f8f8; border: 1px solid #ddd; border-radius: 3px; padding: 15px; overflow-x: auto; white-space: pre; }")
        html.append("        .type-table { width: 100%; border-collapse: collapse; margin-top: 10px; font-size: 11px; }")
        html.append("        .type-table th, .type-table td { padding: 8px; text-align: left; border-bottom: 1px solid #ddd; }")
        html.append("        .type-table th { background-color: #4CAF50; color: white; position: sticky; top: 0; }")
        html.append("        .type-correct { background-color: #c8e6c9; }")
        html.append("        .type-incorrect { background-color: #ffcdd2; }")
        html.append("        .type-missing { background-color: #fff9c4; }")
        html.append("        .metric-summary { display: flex; gap: 10px; margin-top: 10px; }")
        html.append("        .metric-box { flex: 1; background: #e3f2fd; padding: 10px; border-radius: 3px; text-align: center; }")
        html.append("        .metric-box .value { font-size: 24px; font-weight: bold; color: #1976d2; }")
        html.append("        .metric-box .label { font-size: 12px; color: #666; }")
        html.append("        .better { background-color: #c8e6c9 !important; }")
        html.append("        .worse { background-color: #ffcdd2 !important; }")
        html.append("        .nav { position: sticky; top: 0; background: white; padding: 10px; box-shadow: 0 2px 4px rgba(0,0,0,0.1); z-index: 100; margin-bottom: 20px; }")
        html.append("        .nav a { margin-right: 15px; text-decoration: none; color: #1976d2; }")
        html.append("    </style>")
        html.append("</head>")
        html.append("<body>")

        # Title and summary
        import datetime
        html.append(f"    <h1>Decompiler Comparison: {self.decompiler1} vs {self.decompiler2}</h1>")
        html.append(f"    <div class='summary'>")
        html.append(f"        <p><strong>Binary:</strong> {self.binary}</p>")
        html.append(f"        <p><strong>Tag:</strong> {self.tag}</p>")
        html.append(f"        <p><strong>Functions Compared:</strong> {len(self.comparisons)}</p>")
        html.append(f"        <p><strong>Generated:</strong> {datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S')}</p>")
        html.append("    </div>")

        # Overall statistics
        html.append(self._generate_overall_stats_html())

        # Navigation
        html.append("    <div class='nav'>")
        html.append("        <strong>Jump to function:</strong> ")
        for i, comp in enumerate(self.comparisons):
            html.append(f"        <a href='#func_{comp['func_addr']}'>0x{comp['func_addr']}</a>")
        html.append("    </div>")

        # Individual function comparisons
        for comp in self.comparisons:
            html.append(self._generate_function_comparison_html(comp))

        html.append("</body>")
        html.append("</html>")

        # Write to file
        with open(output_path, 'w', encoding='utf-8') as f:
            f.write('\n'.join(html))

        print(f"HTML report saved to: {output_path}")

    def _generate_overall_stats_html(self) -> str:
        """Generate overall statistics section."""
        html = []

        # Aggregate type eval metrics
        type_categories = ["primitive", "struct", "enum", "array", "Result", "Option",
                          "&primitive", "&struct", "&enum", "&Result", "&Option", "&array",
                          "&reference", "reference"]

        stats1 = defaultdict(int)
        stats2 = defaultdict(int)

        for comp in self.comparisons:
            if comp['decompiler1']['type_eval']:
                for k, v in comp['decompiler1']['type_eval'].items():
                    stats1[k] += v
            if comp['decompiler2']['type_eval']:
                for k, v in comp['decompiler2']['type_eval'].items():
                    stats2[k] += v

        html.append("    <div class='summary'>")
        html.append("        <h2>Overall Type Recovery Statistics</h2>")
        html.append("        <table class='type-table'>")
        html.append("            <thead>")
        html.append("                <tr>")
        html.append("                    <th>Type Category</th>")
        html.append(f"                    <th colspan='3' style='text-align: center;'>{self.decompiler1}</th>")
        html.append(f"                    <th colspan='3' style='text-align: center;'>{self.decompiler2}</th>")
        html.append("                </tr>")
        html.append("                <tr>")
        html.append("                    <th></th>")
        html.append("                    <th>Precision</th><th>Recall</th><th>F1</th>")
        html.append("                    <th>Precision</th><th>Recall</th><th>F1</th>")
        html.append("                </tr>")
        html.append("            </thead>")
        html.append("            <tbody>")

        for cat in type_categories:
            tp1 = stats1.get(f"{cat}_TP", 0)
            fp1 = stats1.get(f"{cat}_FP", 0)
            fn1 = stats1.get(f"{cat}_FN", 0)

            tp2 = stats2.get(f"{cat}_TP", 0)
            fp2 = stats2.get(f"{cat}_FP", 0)
            fn2 = stats2.get(f"{cat}_FN", 0)

            p1 = tp1 / (tp1 + fp1) if (tp1 + fp1) > 0 else 0
            r1 = tp1 / (tp1 + fn1) if (tp1 + fn1) > 0 else 0
            f1_1 = 2 * p1 * r1 / (p1 + r1) if (p1 + r1) > 0 else 0

            p2 = tp2 / (tp2 + fp2) if (tp2 + fp2) > 0 else 0
            r2 = tp2 / (tp2 + fn2) if (tp2 + fn2) > 0 else 0
            f1_2 = 2 * p2 * r2 / (p2 + r2) if (p2 + r2) > 0 else 0

            # Highlight better values
            p_class1 = " class='better'" if p1 > p2 else (" class='worse'" if p1 < p2 else "")
            r_class1 = " class='better'" if r1 > r2 else (" class='worse'" if r1 < r2 else "")
            f_class1 = " class='better'" if f1_1 > f1_2 else (" class='worse'" if f1_1 < f1_2 else "")

            p_class2 = " class='better'" if p2 > p1 else (" class='worse'" if p2 < p1 else "")
            r_class2 = " class='better'" if r2 > r1 else (" class='worse'" if r2 < r1 else "")
            f_class2 = " class='better'" if f1_2 > f1_1 else (" class='worse'" if f1_2 < f1_1 else "")

            html.append("                <tr>")
            html.append(f"                    <td>{cat}</td>")
            html.append(f"                    <td{p_class1}>{p1*100:.1f}%</td>")
            html.append(f"                    <td{r_class1}>{r1*100:.1f}%</td>")
            html.append(f"                    <td{f_class1}>{f1_1*100:.1f}%</td>")
            html.append(f"                    <td{p_class2}>{p2*100:.1f}%</td>")
            html.append(f"                    <td{r_class2}>{r2*100:.1f}%</td>")
            html.append(f"                    <td{f_class2}>{f1_2*100:.1f}%</td>")
            html.append("                </tr>")

        html.append("            </tbody>")
        html.append("        </table>")
        html.append("    </div>")

        return '\n'.join(html)

    def _generate_function_comparison_html(self, comp: dict) -> str:
        """Generate HTML for a single function comparison."""
        html = []
        func_addr = comp['func_addr']

        html.append(f"    <div class='function-comparison' id='func_{func_addr}'>")
        html.append(f"        <h2>Function 0x{func_addr}</h2>")

        # Type recovery metrics summary
        if comp['decompiler1']['type_eval'] or comp['decompiler2']['type_eval']:
            html.append("        <div class='side-by-side'>")

            for dec_key, dec_name in [('decompiler1', self.decompiler1), ('decompiler2', self.decompiler2)]:
                if comp[dec_key]['result']:
                    type_eval = comp[dec_key]['type_eval']

                    # Calculate overall metrics
                    total_tp = sum(v for k, v in type_eval.items() if k.endswith('_TP'))
                    total_fp = sum(v for k, v in type_eval.items() if k.endswith('_FP'))
                    total_fn = sum(v for k, v in type_eval.items() if k.endswith('_FN'))

                    precision = total_tp / (total_tp + total_fp) if (total_tp + total_fp) > 0 else 0
                    recall = total_tp / (total_tp + total_fn) if (total_tp + total_fn) > 0 else 0
                    f1 = 2 * precision * recall / (precision + recall) if (precision + recall) > 0 else 0

                    html.append("            <div class='decompiler-column'>")
                    html.append(f"                <h3>{dec_name}</h3>")
                    html.append("                <div class='metric-summary'>")
                    html.append("                    <div class='metric-box'>")
                    html.append(f"                        <div class='value'>{precision*100:.1f}%</div>")
                    html.append("                        <div class='label'>Precision</div>")
                    html.append("                    </div>")
                    html.append("                    <div class='metric-box'>")
                    html.append(f"                        <div class='value'>{recall*100:.1f}%</div>")
                    html.append("                        <div class='label'>Recall</div>")
                    html.append("                    </div>")
                    html.append("                    <div class='metric-box'>")
                    html.append(f"                        <div class='value'>{f1*100:.1f}%</div>")
                    html.append("                        <div class='label'>F1 Score</div>")
                    html.append("                    </div>")
                    html.append("                </div>")
                    html.append("            </div>")

            html.append("        </div>")

        # Variable type details
        html.append(self._generate_variable_types_table(comp))

        # Decompilation code side-by-side
        html.append("        <h3>Decompiled Code</h3>")
        html.append("        <div class='side-by-side'>")

        result1 = comp['decompiler1']['result']
        result2 = comp['decompiler2']['result']

        html.append("            <div class='decompiler-column'>")
        html.append(f"                <h3>{self.decompiler1}</h3>")
        if result1:
            html.append(f"                <div class='code-block'>{self._escape_html(result1.decompilation)}</div>")
        else:
            html.append("                <div class='code-block'>Not available</div>")
        html.append("            </div>")

        html.append("            <div class='decompiler-column'>")
        html.append(f"                <h3>{self.decompiler2}</h3>")
        if result2:
            html.append(f"                <div class='code-block'>{self._escape_html(result2.decompilation)}</div>")
        else:
            html.append("                <div class='code-block'>Not available</div>")
        html.append("            </div>")

        html.append("        </div>")
        html.append("    </div>")

        return '\n'.join(html)

    def _generate_variable_types_table(self, comp: dict) -> str:
        """Generate a table comparing variable types."""
        html = []

        ground_truth = comp['ground_truth']
        result1 = comp['decompiler1']['result']
        result2 = comp['decompiler2']['result']

        html.append("        <h3>Variable Types</h3>")
        html.append("        <table class='type-table'>")
        html.append("            <thead>")
        html.append("                <tr>")
        html.append("                    <th>Variable</th>")
        html.append("                    <th>Ground Truth</th>")
        html.append(f"                    <th>{self.decompiler1}</th>")
        html.append(f"                    <th>{self.decompiler2}</th>")
        html.append("                </tr>")
        html.append("            </thead>")
        html.append("            <tbody>")

        # Collect all variables from ground truth
        for gt_var in ground_truth.variable_types:
            if gt_var.category == "stack":
                var_ident = f"stack_{gt_var.location}"
            elif gt_var.category == "register":
                var_ident = f"reg_{gt_var.location}"
            else:
                var_ident = gt_var.name

            gt_type_str = str(gt_var.type)
            gt_normalized = _normalize_dwarf_type(gt_var.type)

            # Get predicted types
            pred1_types = result1.variable_types.get(var_ident, []) if result1 else []
            pred2_types = result2.variable_types.get(var_ident, []) if result2 else []

            # Check if any prediction matches
            match1 = any(tuple(p) == gt_normalized for p in pred1_types)
            match2 = any(tuple(p) == gt_normalized for p in pred2_types)

            row_class1 = "type-correct" if match1 else ("type-incorrect" if pred1_types else "type-missing")
            row_class2 = "type-correct" if match2 else ("type-incorrect" if pred2_types else "type-missing")

            pred1_str = ", ".join([f"{p[0]}({p[1]})" for p in pred1_types]) if pred1_types else "N/A"
            pred2_str = ", ".join([f"{p[0]}({p[1]})" for p in pred2_types]) if pred2_types else "N/A"

            html.append("                <tr>")
            html.append(f"                    <td>{self._escape_html(var_ident)}</td>")
            html.append(f"                    <td>{self._escape_html(gt_type_str)} <small>({gt_normalized[0]}, {gt_normalized[1]})</small></td>")
            html.append(f"                    <td class='{row_class1}'>{self._escape_html(pred1_str)}</td>")
            html.append(f"                    <td class='{row_class2}'>{self._escape_html(pred2_str)}</td>")
            html.append("                </tr>")

        # Also show function arguments and return type
        for i, arg_ty in enumerate(ground_truth.prototype.args):
            if arg_ty is not None:
                var_ident = f"arg_{i}"
                gt_type_str = str(arg_ty)
                gt_normalized = _normalize_dwarf_type(arg_ty)

                pred1_types = result1.variable_types.get(var_ident, []) if result1 else []
                pred2_types = result2.variable_types.get(var_ident, []) if result2 else []

                match1 = any(tuple(p) == gt_normalized for p in pred1_types)
                match2 = any(tuple(p) == gt_normalized for p in pred2_types)

                row_class1 = "type-correct" if match1 else ("type-incorrect" if pred1_types else "type-missing")
                row_class2 = "type-correct" if match2 else ("type-incorrect" if pred2_types else "type-missing")

                pred1_str = ", ".join([f"{p[0]}({p[1]})" for p in pred1_types]) if pred1_types else "N/A"
                pred2_str = ", ".join([f"{p[0]}({p[1]})" for p in pred2_types]) if pred2_types else "N/A"

                html.append("                <tr>")
                html.append(f"                    <td><em>arg_{i}</em></td>")
                html.append(f"                    <td>{self._escape_html(gt_type_str)} <small>({gt_normalized[0]}, {gt_normalized[1]})</small></td>")
                html.append(f"                    <td class='{row_class1}'>{self._escape_html(pred1_str)}</td>")
                html.append(f"                    <td class='{row_class2}'>{self._escape_html(pred2_str)}</td>")
                html.append("                </tr>")

        # Return type
        if ground_truth.prototype.returnty is not None:
            var_ident = "return_type"
            gt_type_str = str(ground_truth.prototype.returnty)
            gt_normalized = _normalize_dwarf_type(ground_truth.prototype.returnty)

            pred1_types = result1.variable_types.get(var_ident, []) if result1 else []
            pred2_types = result2.variable_types.get(var_ident, []) if result2 else []

            match1 = any(tuple(p) == gt_normalized for p in pred1_types)
            match2 = any(tuple(p) == gt_normalized for p in pred2_types)

            row_class1 = "type-correct" if match1 else ("type-incorrect" if pred1_types else "type-missing")
            row_class2 = "type-correct" if match2 else ("type-incorrect" if pred2_types else "type-missing")

            pred1_str = ", ".join([f"{p[0]}({p[1]})" for p in pred1_types]) if pred1_types else "N/A"
            pred2_str = ", ".join([f"{p[0]}({p[1]})" for p in pred2_types]) if pred2_types else "N/A"

            html.append("                <tr>")
            html.append(f"                    <td><em>return_type</em></td>")
            html.append(f"                    <td>{self._escape_html(gt_type_str)} <small>({gt_normalized[0]}, {gt_normalized[1]})</small></td>")
            html.append(f"                    <td class='{row_class1}'>{self._escape_html(pred1_str)}</td>")
            html.append(f"                    <td class='{row_class2}'>{self._escape_html(pred2_str)}</td>")
            html.append("                </tr>")

        html.append("            </tbody>")
        html.append("        </table>")

        return '\n'.join(html)

    def _escape_html(self, text: str) -> str:
        """Escape HTML special characters."""
        if text is None:
            return ""
        return (text
                .replace('&', '&amp;')
                .replace('<', '&lt;')
                .replace('>', '&gt;')
                .replace('"', '&quot;')
                .replace("'", '&#39;'))


def main():
    parser = argparse.ArgumentParser(description="Compare type recovery results between two decompilers")
    parser.add_argument("--tag", default="nightly-2025-05-22-O3", help="Tag/dataset name")
    parser.add_argument("--binary", default="fmt", help="Binary name")
    parser.add_argument("--decompiler1", default="Oxidizer", help="First decompiler")
    parser.add_argument("--decompiler2", default="Oxidizer.normal", help="Second decompiler")
    parser.add_argument("--output", default=None, help="Output HTML file path")

    args = parser.parse_args()

    comparison = DecompilerComparison(args.tag, args.binary, args.decompiler1, args.decompiler2)
    comparison.compare_all()

    if args.output is None:
        output_dir = Path("output/html/comparisons")
        output_dir.mkdir(parents=True, exist_ok=True)
        output_path = output_dir / f"{args.binary}_{args.decompiler1}_vs_{args.decompiler2}.html"
    else:
        output_path = args.output

    comparison.generate_html_report(str(output_path))


if __name__ == "__main__":
    main()
