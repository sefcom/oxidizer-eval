#!/usr/bin/env python3
"""
Compare IDA and Oxidizer decompilation results for a specific binary.
Generates an HTML report with side-by-side decompilation and metric comparisons.
"""

import os
import sys
import json
import datetime
import argparse
from pathlib import Path
from collections import defaultdict
from typing import Dict, List, Optional, Tuple

# Add project root to path
sys.path.insert(0, str(Path(__file__).parent.parent.parent))

from eval.result import DecompileResult
from eval.metrics.ground_truth import FunctionGroundTruth
from eval.metrics.calc import (
    LoC,
    mcc,
    num_variables,
    num_operators,
    num_gotos,
    num_matched_string_literals,
    num_matched_function_calls,
    num_extraneous_function_calls,
    num_matched_macro_calls,
    generate_type_eval_result,
    _normalize_dwarf_type,
)


def escape_html(text: str) -> str:
    if text is None:
        return ""
    return (
        text.replace("&", "&amp;")
        .replace("<", "&lt;")
        .replace(">", "&gt;")
        .replace('"', "&quot;")
        .replace("'", "&#39;")
    )


class FunctionComparison:
    """Holds comparison data for a single function."""

    def __init__(self, func_addr: str, func_name: str):
        self.func_addr = func_addr
        self.func_name = func_name
        self.ground_truth: Optional[FunctionGroundTruth] = None
        self.ida_result: Optional[DecompileResult] = None
        self.oxidizer_result: Optional[DecompileResult] = None
        # Conciseness metrics: {metric_name: {"source": val, "IDA": val, "Oxidizer": val}}
        self.metrics: Dict[str, Dict[str, float]] = {}
        # Type eval: {"IDA": {cat_TP: n, ...}, "Oxidizer": {cat_TP: n, ...}}
        self.type_eval: Dict[str, dict] = {}


class IDAOxidizerComparison:
    def __init__(self, tag: str, binary: str):
        self.tag = tag
        self.binary = binary

        self.project_root = Path(__file__).parent.parent.parent
        self.result_dir = self.project_root / "output" / "result"
        self.ground_truth_dir = self.project_root / "targets" / "merged_ground_truth"
        self.symbols_dir = self.project_root / "targets" / "symbols"

        self.symbols: Dict[str, str] = {}
        symbols_path = self.symbols_dir / tag / f"{binary}.json"
        if symbols_path.exists():
            with open(symbols_path, "r") as f:
                self.symbols = json.load(f)

        self.comparisons: List[FunctionComparison] = []

    def get_function_addresses(self) -> List[str]:
        gt_dir = self.ground_truth_dir / self.tag / self.binary
        if not gt_dir.exists():
            print(f"Ground truth directory does not exist: {gt_dir}")
            return []
        return sorted(f.stem for f in gt_dir.glob("*.json"))

    def load_and_compare(self):
        func_addrs = self.get_function_addresses()
        print(f"Found {len(func_addrs)} functions for {self.binary}")

        for func_addr in func_addrs:
            comp = self._compare_function(func_addr)
            if comp is not None:
                self.comparisons.append(comp)

        print(f"Compared {len(self.comparisons)} functions")

    def _compare_function(self, func_addr: str) -> Optional[FunctionComparison]:
        # Load ground truth
        gt_path = self.ground_truth_dir / self.tag / self.binary / f"{func_addr}.json"
        if not gt_path.exists():
            return None
        gt = FunctionGroundTruth.load(str(gt_path))

        # Read function name directly from ground truth JSON
        with open(str(gt_path), "r") as f:
            gt_raw = json.load(f)
        func_name = gt_raw.get("name", f"0x{func_addr}")

        # Load decompiler results
        ida_path = self.result_dir / self.tag / "IDA" / self.binary / f"{func_addr}.json"
        oxi_path = self.result_dir / self.tag / "Oxidizer" / self.binary / f"{func_addr}.json"

        ida_result = DecompileResult.load_json(str(ida_path)) if ida_path.exists() else None
        oxi_result = DecompileResult.load_json(str(oxi_path)) if oxi_path.exists() else None

        if ida_result is None and oxi_result is None:
            return None

        comp = FunctionComparison(func_addr, func_name)
        comp.ground_truth = gt
        comp.ida_result = ida_result
        comp.oxidizer_result = oxi_result

        # Compute conciseness/fidelity metrics
        self._compute_metrics(comp)

        # Compute type eval
        for label, result in [("IDA", ida_result), ("Oxidizer", oxi_result)]:
            if result:
                type_eval, _ = generate_type_eval_result(
                    result.variable_types, gt.variable_types, gt.prototype
                )
                comp.type_eval[label] = type_eval

        return comp

    def _compute_metrics(self, comp: FunctionComparison):
        gt = comp.ground_truth

        source_metrics = {
            "LoC": gt.loc,
            "MCC": gt.mcc,
            "Variables": gt.nvars,
            "Operators": gt.nofops,
            "Gotos": 0,
            "Matched Strings": sum(gt.string_literals.values()) if gt.string_literals else 0,
            "Matched Calls": sum(gt.calls.values()) if gt.calls else 0,
            "Extraneous Calls": 0,
            "Matched Macros": sum(gt.macros.values()) if gt.macros else 0,
        }

        for label, result in [("Oxidizer", comp.oxidizer_result), ("IDA", comp.ida_result)]:
            if result is None:
                continue
            decomp = result.decompilation

            # Resolve function call addresses to names (same as eval.py)
            resolved_calls = {}
            for call_target, count in result.function_call_counts.items():
                try:
                    call_addr = int(call_target, 16)
                    func_name = self.symbols.get(call_target, f"sub_{call_addr:x}")
                except ValueError:
                    func_name = call_target
                resolved_calls[func_name] = count

            # Variable count: sum of type entries per location, excluding args/return
            var_count = sum(
                len(types)
                for var, types in result.variable_types.items()
                if not var.startswith("arg_") and not var.startswith("return_type")
            )

            m = {
                "LoC": LoC(decomp),
                "MCC": mcc(decomp),
                "Variables": var_count,
                "Operators": num_operators(decomp),
                "Gotos": num_gotos(decomp),
                "Matched Strings": num_matched_string_literals(decomp, gt.string_literals),
                "Matched Calls": num_matched_function_calls(resolved_calls, gt.calls),
                "Extraneous Calls": num_extraneous_function_calls(resolved_calls, gt.calls),
                "Matched Macros": num_matched_macro_calls(
                    result.macro_call_counts if result.macro_call_counts else {},
                    gt.macros,
                ),
            }
            for metric_name, value in m.items():
                if metric_name not in comp.metrics:
                    comp.metrics[metric_name] = {}
                comp.metrics[metric_name][label] = value

        # Fill source values
        for metric_name, value in source_metrics.items():
            if metric_name not in comp.metrics:
                comp.metrics[metric_name] = {}
            comp.metrics[metric_name]["Source"] = value

    # ───────────────────────── Aggregation helpers ─────────────────────────

    def _aggregate_metrics(self) -> Dict[str, Dict[str, float]]:
        """Return {metric: {decompiler: average_value}}."""
        totals: Dict[str, Dict[str, List[float]]] = defaultdict(lambda: defaultdict(list))
        for comp in self.comparisons:
            for metric_name, values in comp.metrics.items():
                for dec, val in values.items():
                    if val is not None:
                        totals[metric_name][dec].append(val)

        averages: Dict[str, Dict[str, float]] = {}
        for metric_name, dec_vals in totals.items():
            averages[metric_name] = {}
            for dec, vals in dec_vals.items():
                averages[metric_name][dec] = sum(vals) / len(vals) if vals else 0
        return averages

    def _aggregate_type_eval(self) -> Dict[str, Dict[str, int]]:
        """Return {decompiler: {cat_TP: sum, ...}}."""
        agg: Dict[str, Dict[str, int]] = defaultdict(lambda: defaultdict(int))
        for comp in self.comparisons:
            for dec, te in comp.type_eval.items():
                for k, v in te.items():
                    agg[dec][k] += v
        return agg

    # ───────────────────────── HTML generation ─────────────────────────

    def generate_html(self, output_path: str):
        h = _HtmlBuilder()

        h.raw("<!DOCTYPE html>")
        h.raw("<html lang='en'>")
        h.raw("<head>")
        h.raw("  <meta charset='UTF-8'>")
        h.raw("  <meta name='viewport' content='width=device-width, initial-scale=1.0'>")
        h.raw(f"  <title>IDA vs Oxidizer – {self.binary} ({self.tag})</title>")
        h.raw(f"  <style>{_CSS}</style>")
        h.raw("  <link rel='stylesheet' href='https://cdnjs.cloudflare.com/ajax/libs/highlight.js/11.9.0/styles/github.min.css'>")
        h.raw("  <script src='https://cdnjs.cloudflare.com/ajax/libs/highlight.js/11.9.0/highlight.min.js'></script>")
        h.raw("  <script src='https://cdnjs.cloudflare.com/ajax/libs/highlight.js/11.9.0/languages/rust.min.js'></script>")
        h.raw("  <script src='https://cdnjs.cloudflare.com/ajax/libs/highlight.js/11.9.0/languages/c.min.js'></script>")
        h.raw("</head>")
        h.raw("<body>")

        # Header
        h.raw(f"<h1>IDA vs Oxidizer – {escape_html(self.binary)}</h1>")
        h.raw(f"<p class='timestamp'>Tag: {escape_html(self.tag)} &nbsp;|&nbsp; "
              f"Generated: {datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S')}</p>")

        # Summary
        h.raw("<div class='summary'>")
        h.raw(f"  <p><b>Functions compared:</b> {len(self.comparisons)}</p>")
        h.raw("</div>")

        # Aggregated metrics table
        h.raw(self._html_aggregate_metrics())

        # Ground truth type distribution
        h.raw(self._html_gt_type_distribution())

        # Aggregated type recovery table
        h.raw(self._html_aggregate_type_eval())

        # Navigation
        h.raw("<div class='nav'>")
        h.raw("  <b>Jump to function:</b> ")
        for comp in self.comparisons:
            name = escape_html(comp.func_name)
            h.raw(f"  <a href='#func_{comp.func_addr}' title='{name}'>0x{comp.func_addr}</a>")
        h.raw("</div>")

        # Per-function sections
        for comp in self.comparisons:
            h.raw(self._html_function(comp))

        h.raw("<script>hljs.highlightAll();</script>")
        h.raw("</body></html>")

        Path(output_path).parent.mkdir(parents=True, exist_ok=True)
        with open(output_path, "w", encoding="utf-8") as f:
            f.write(h.build())
        print(f"HTML report saved to: {output_path}")

    # ── Aggregate metrics table ──

    def _html_aggregate_metrics(self) -> str:
        avgs = self._aggregate_metrics()
        decompilers = ["Oxidizer", "IDA"]

        # Metric display order
        metric_order = [
            "MCC", "LoC", "Variables", "Operators",
            "Gotos", "Matched Strings", "Matched Calls", "Extraneous Calls", "Matched Macros",
        ]
        higher_is_better = {"Matched Strings", "Matched Calls", "Matched Macros"}

        lines = []
        lines.append("<div class='section'>")
        lines.append("  <h2>Aggregated Conciseness / Fidelity Metrics (averages per function)</h2>")
        lines.append("  <table>")
        lines.append("    <thead>")
        lines.append("      <tr><th>Metric</th><th>Source</th><th>Oxidizer</th><th>IDA</th></tr>")
        lines.append("    </thead><tbody>")

        for metric in metric_order:
            if metric not in avgs:
                continue
            src_val = avgs[metric].get("Source")
            oxi_val = avgs[metric].get("Oxidizer")
            ida_val = avgs[metric].get("IDA")

            # Determine winner between IDA and Oxidizer
            ida_cls = oxi_cls = ""
            if ida_val is not None and oxi_val is not None:
                if metric in higher_is_better:
                    if ida_val > oxi_val:
                        ida_cls = " class='winner'"
                    elif oxi_val > ida_val:
                        oxi_cls = " class='winner'"
                else:
                    if ida_val < oxi_val:
                        ida_cls = " class='winner'"
                    elif oxi_val < ida_val:
                        oxi_cls = " class='winner'"

            src_str = f"{src_val:.2f}" if src_val is not None else "–"
            oxi_str = f"{oxi_val:.2f}" if oxi_val is not None else "–"
            ida_str = f"{ida_val:.2f}" if ida_val is not None else "–"

            lines.append(f"      <tr>")
            lines.append(f"        <td class='metric-name'>{metric}</td>")
            lines.append(f"        <td>{src_str}</td>")
            lines.append(f"        <td{oxi_cls}>{oxi_str}</td>")
            lines.append(f"        <td{ida_cls}>{ida_str}</td>")
            lines.append(f"      </tr>")

        lines.append("    </tbody></table>")
        lines.append("</div>")
        return "\n".join(lines)

    # ── Aggregate type recovery table ──

    def _html_aggregate_type_eval(self) -> str:
        agg = self._aggregate_type_eval()
        type_categories = [
            "primitive", "struct", "enum", "array", "Result", "Option",
            "&primitive", "&struct", "&enum", "&Result", "&Option", "&array",
            "&reference", "reference",
        ]
        decompilers = ["Oxidizer", "IDA"]

        lines = []
        lines.append("<div class='section'>")
        lines.append("  <h2>Aggregated Type Recovery</h2>")
        lines.append("  <table>")
        lines.append("    <thead>")
        lines.append("      <tr>")
        lines.append("        <th>Type Category</th>")
        for d in decompilers:
            lines.append(f"        <th colspan='3' style='text-align:center'>{d}</th>")
        lines.append("      </tr>")
        lines.append("      <tr><th></th>")
        for _ in decompilers:
            lines.append("        <th>Precision</th><th>Recall</th><th>F1</th>")
        lines.append("      </tr>")
        lines.append("    </thead><tbody>")

        def prf(dec, cat):
            stats = agg.get(dec, {})
            tp = stats.get(f"{cat}_TP", 0)
            fp = stats.get(f"{cat}_FP", 0)
            fn = stats.get(f"{cat}_FN", 0)
            p = tp / (tp + fp) if (tp + fp) else 0
            r = tp / (tp + fn) if (tp + fn) else 0
            f1 = 2 * p * r / (p + r) if (p + r) else 0
            return p, r, f1

        def overall_prf(dec):
            stats = agg.get(dec, {})
            tp = fp = fn = 0
            for cat in type_categories:
                tp += stats.get(f"{cat}_TP", 0)
                fp += stats.get(f"{cat}_FP", 0)
                fn += stats.get(f"{cat}_FN", 0)
            p = tp / (tp + fp) if (tp + fp) else 0
            r = tp / (tp + fn) if (tp + fn) else 0
            f1 = 2 * p * r / (p + r) if (p + r) else 0
            return p, r, f1

        for cat in type_categories:
            vals = {d: prf(d, cat) for d in decompilers}
            lines.append("      <tr>")
            lines.append(f"        <td class='metric-name'>{cat}</td>")
            for d in decompilers:
                p, r, f1 = vals[d]
                other = [dd for dd in decompilers if dd != d][0]
                op, or_, of1 = vals[other]
                p_cls = " class='winner'" if p > op else ""
                r_cls = " class='winner'" if r > or_ else ""
                f_cls = " class='winner'" if f1 > of1 else ""
                lines.append(f"        <td{p_cls}>{p*100:.1f}%</td>")
                lines.append(f"        <td{r_cls}>{r*100:.1f}%</td>")
                lines.append(f"        <td{f_cls}>{f1*100:.1f}%</td>")
            lines.append("      </tr>")

        # Overall row
        ovals = {d: overall_prf(d) for d in decompilers}
        lines.append("      <tr class='overall-row'>")
        lines.append("        <td class='metric-name'>Overall</td>")
        for d in decompilers:
            p, r, f1 = ovals[d]
            other = [dd for dd in decompilers if dd != d][0]
            op, or_, of1 = ovals[other]
            p_cls = " class='winner'" if p > op else ""
            r_cls = " class='winner'" if r > or_ else ""
            f_cls = " class='winner'" if f1 > of1 else ""
            lines.append(f"        <td{p_cls}>{p*100:.1f}%</td>")
            lines.append(f"        <td{r_cls}>{r*100:.1f}%</td>")
            lines.append(f"        <td{f_cls}>{f1*100:.1f}%</td>")
        lines.append("      </tr>")

        lines.append("    </tbody></table>")
        lines.append("</div>")
        return "\n".join(lines)

    # ── Ground truth type distribution ──

    def _html_gt_type_distribution(self) -> str:
        type_categories = [
            "primitive", "struct", "enum", "array", "Result", "Option",
            "&primitive", "&struct", "&enum", "&Result", "&Option", "&array",
            "&reference", "reference",
        ]
        counts = defaultdict(int)

        for comp in self.comparisons:
            gt = comp.ground_truth
            if gt is None:
                continue

            # Count variable types
            for var in gt.variable_types:
                category, _ = _normalize_dwarf_type(var.type)
                if category:
                    if category.startswith("&"):
                        counts["reference"] += 1
                    counts[category] += 1

            # Count prototype argument types
            for arg_ty in gt.prototype.args:
                if arg_ty is not None:
                    category, _ = _normalize_dwarf_type(arg_ty)
                    if category:
                        if category.startswith("&"):
                            counts["reference"] += 1
                        counts[category] += 1

            # Count return type
            if gt.prototype.returnty is not None:
                category, _ = _normalize_dwarf_type(gt.prototype.returnty)
                if category:
                    if category.startswith("&"):
                        counts["reference"] += 1
                    counts[category] += 1

        # "reference" is an aggregate of all &X categories, so exclude it to avoid double-counting
        total = sum(counts.get(cat, 0) for cat in type_categories if cat != "reference")

        lines = []
        lines.append("<div class='section'>")
        lines.append("  <h2>Ground Truth Type Distribution</h2>")
        lines.append("  <table>")
        lines.append("    <thead><tr><th>Type Category</th><th>Count</th><th>Percentage</th></tr></thead>")
        lines.append("    <tbody>")

        for cat in type_categories:
            c = counts.get(cat, 0)
            if c == 0:
                continue
            pct = c / total * 100 if total > 0 else 0
            lines.append(f"      <tr><td class='metric-name'>{cat}</td><td>{c}</td><td>{pct:.1f}%</td></tr>")

        lines.append(f"      <tr class='overall-row'><td class='metric-name'>Total</td><td>{total}</td><td>100%</td></tr>")
        lines.append("    </tbody></table>")
        lines.append("</div>")
        return "\n".join(lines)

    # ── Per-function section ──

    def _html_function(self, comp: FunctionComparison) -> str:
        lines = []
        lines.append(f"<div class='function-section' id='func_{comp.func_addr}'>")
        lines.append(f"  <h2>0x{comp.func_addr} – {escape_html(comp.func_name)}</h2>")

        # Per-function metrics bar
        lines.append("  <h3>Metrics</h3>")
        lines.append("  <table class='compact-table'>")
        lines.append("    <thead><tr><th>Metric</th><th>Source</th><th>Oxidizer</th><th>IDA</th></tr></thead>")
        lines.append("    <tbody>")

        higher_is_better = {"Matched Strings", "Matched Calls", "Matched Macros"}
        for metric_name, vals in comp.metrics.items():
            src = vals.get("Source")
            oxi = vals.get("Oxidizer")
            ida = vals.get("IDA")

            ida_cls = oxi_cls = ""
            if ida is not None and oxi is not None:
                if metric_name in higher_is_better:
                    if ida > oxi:
                        ida_cls = " class='winner'"
                    elif oxi > ida:
                        oxi_cls = " class='winner'"
                else:
                    if ida < oxi:
                        ida_cls = " class='winner'"
                    elif oxi < ida:
                        oxi_cls = " class='winner'"

            fmt_val = lambda v: str(v) if v is not None else "–"
            lines.append(f"      <tr><td>{metric_name}</td><td>{fmt_val(src)}</td>"
                         f"<td{oxi_cls}>{fmt_val(oxi)}</td><td{ida_cls}>{fmt_val(ida)}</td></tr>")

        lines.append("    </tbody></table>")

        # Per-function type recovery: Oxidizer vs Ground Truth variable table
        if comp.oxidizer_result and comp.ground_truth:
            lines.append(self._html_oxidizer_vs_gt_types(comp))

        # Side-by-side decompilation
        lines.append("  <h3>Decompiled Code</h3>")
        lines.append("  <div class='side-by-side'>")

        lang_map = {"Oxidizer": "rust", "IDA": "c"}
        for label, result in [("Oxidizer", comp.oxidizer_result), ("IDA", comp.ida_result)]:
            lang = lang_map[label]
            lines.append(f"    <div class='code-column'>")
            lines.append(f"      <div class='col-header'>{label}</div>")
            if result:
                code = escape_html(result.decompilation)
                lines.append(f"      <pre class='code-block'><code class='language-{lang}'>{code}</code></pre>")
            else:
                lines.append("      <pre class='code-block unavailable'>Not available</pre>")
            lines.append("    </div>")

        lines.append("  </div>")  # side-by-side
        lines.append("</div>")  # function-section
        return "\n".join(lines)

    def _html_oxidizer_vs_gt_types(self, comp: FunctionComparison) -> str:
        """Generate a table showing Oxidizer predicted types vs ground truth per variable."""
        gt = comp.ground_truth
        oxi = comp.oxidizer_result

        lines = []
        lines.append("  <h3>Oxidizer Type Recovery vs Ground Truth</h3>")
        lines.append("  <table class='compact-table'>")
        lines.append("    <thead><tr>")
        lines.append("      <th>Variable</th><th>Ground Truth Type</th>")
        lines.append("      <th>Normalized (category, size)</th>")
        lines.append("      <th>Oxidizer Prediction</th><th>Match</th>")
        lines.append("    </tr></thead><tbody>")

        # Collect ground truth variables
        gt_vars = []
        for var in gt.variable_types:
            if var.category == "stack":
                ident = f"stack_{var.location}"
            elif var.category == "register":
                ident = f"reg_{var.location}"
            else:
                ident = var.name
            gt_vars.append((ident, var.name, var.type))

        # Function arguments
        for i, arg_ty in enumerate(gt.prototype.args):
            if arg_ty is not None:
                gt_vars.append((f"arg_{i}", f"arg_{i}", arg_ty))

        # Return type
        if gt.prototype.returnty is not None:
            gt_vars.append(("return_type", "return_type", gt.prototype.returnty))

        oxi_var_types = oxi.variable_types if oxi else {}
        matched_oxi_idents = set()

        for ident, var_name, gt_type in gt_vars:
            gt_normalized = _normalize_dwarf_type(gt_type)
            gt_type_str = escape_html(str(gt_type))
            norm_str = f"{gt_normalized[0]}, {gt_normalized[1]}" if gt_normalized[0] else "–"

            pred_types = oxi_var_types.get(ident, [])
            matched_oxi_idents.add(ident)

            if pred_types:
                pred_str = ", ".join(f"{p[0]}({p[1]})" for p in pred_types)
                match = any(tuple(p) == gt_normalized for p in pred_types)
                match_str = "<span class='match-yes'>Yes</span>" if match else "<span class='match-no'>No</span>"
                row_cls = " class='type-correct'" if match else " class='type-incorrect'"
            else:
                pred_str = "–"
                match_str = "<span class='match-miss'>Missing</span>"
                row_cls = " class='type-missing'"

            lines.append(f"      <tr{row_cls}>")
            lines.append(f"        <td><code>{escape_html(ident)}</code></td>")
            lines.append(f"        <td>{gt_type_str}</td>")
            lines.append(f"        <td>{escape_html(norm_str)}</td>")
            lines.append(f"        <td>{escape_html(pred_str)}</td>")
            lines.append(f"        <td>{match_str}</td>")
            lines.append(f"      </tr>")

        # Show Oxidizer-only predictions (FP) that have no ground truth match
        for ident, pred_types in oxi_var_types.items():
            if ident in matched_oxi_idents:
                continue
            pred_str = ", ".join(f"{p[0]}({p[1]})" for p in pred_types)
            lines.append(f"      <tr class='type-extra'>")
            lines.append(f"        <td><code>{escape_html(ident)}</code></td>")
            lines.append(f"        <td><em>no ground truth</em></td>")
            lines.append(f"        <td>–</td>")
            lines.append(f"        <td>{escape_html(pred_str)}</td>")
            lines.append(f"        <td><span class='match-extra'>Extra</span></td>")
            lines.append(f"      </tr>")

        lines.append("    </tbody></table>")
        return "\n".join(lines)


# ───────────────────────── Tiny HTML builder ─────────────────────────

class _HtmlBuilder:
    def __init__(self):
        self._parts: List[str] = []

    def raw(self, text: str):
        self._parts.append(text)

    def build(self) -> str:
        return "\n".join(self._parts)


# ───────────────────────── CSS ─────────────────────────

_CSS = """
* { box-sizing: border-box; }
body {
    font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
    margin: 0; padding: 20px; background: #f0f2f5; color: #222; font-size: 14px;
}
h1 { margin-top: 0; }
h2 { border-bottom: 2px solid #4CAF50; padding-bottom: 6px; }
.timestamp { color: #888; font-size: 0.9em; }
.summary { background: #fff; padding: 16px 20px; border-radius: 6px; margin-bottom: 20px;
           box-shadow: 0 1px 3px rgba(0,0,0,.1); }

/* ── tables ── */
table { border-collapse: collapse; width: 100%; background: #fff; margin-bottom: 16px;
        box-shadow: 0 1px 3px rgba(0,0,0,.08); border-radius: 4px; overflow: hidden; }
th, td { padding: 10px 14px; text-align: left; border-bottom: 1px solid #eee; }
th { background: #4CAF50; color: #fff; font-weight: 600; position: sticky; top: 0; }
tr:hover { background: #f9f9f9; }
.metric-name { font-weight: 600; }
.winner { font-weight: 700; color: #2e7d32; }
.overall-row { background: #e8f5e9; font-weight: 700; }
.compact-table { font-size: 13px; }
.compact-table th, .compact-table td { padding: 6px 12px; }

/* ── sections ── */
.section { background: #fff; padding: 20px; border-radius: 6px; margin-bottom: 24px;
           box-shadow: 0 1px 3px rgba(0,0,0,.1); }
.function-section { background: #fff; padding: 20px; border-radius: 6px; margin-bottom: 30px;
                    box-shadow: 0 1px 3px rgba(0,0,0,.1); }

/* ── nav ── */
.nav { position: sticky; top: 0; z-index: 100; background: #fff; padding: 10px 16px;
       box-shadow: 0 2px 4px rgba(0,0,0,.12); margin-bottom: 24px; border-radius: 4px;
       display: flex; flex-wrap: wrap; gap: 8px; align-items: center; }
.nav a { text-decoration: none; color: #1976d2; font-family: monospace; font-size: 13px; }
.nav a:hover { text-decoration: underline; }

/* ── metric cards ── */
.metric-cards { display: flex; gap: 16px; margin-bottom: 16px; }
.metric-card { flex: 1; background: #f5f7fa; border-radius: 6px; padding: 14px 18px;
               border: 1px solid #e0e0e0; }
.card-title { font-weight: 700; font-size: 15px; margin-bottom: 8px; color: #333; }
.card-row { display: flex; justify-content: space-between; padding: 3px 0; }
.card-row.muted { color: #888; font-size: 12px; }

/* ── code ── */
.side-by-side { display: flex; gap: 16px; }
.code-column { flex: 1; min-width: 0; }
.col-header { text-align: center; font-weight: 700; padding: 8px; background: #4CAF50;
              color: #fff; border-radius: 4px 4px 0 0; }
.code-block { background: #fafafa; border: 1px solid #ddd; border-top: none;
              border-radius: 0 0 4px 4px; padding: 0; overflow-x: auto;
              white-space: pre; font-family: 'JetBrains Mono', 'Fira Code', 'Consolas', monospace;
              font-size: 12px; line-height: 1.5; margin: 0; max-height: 600px; overflow-y: auto; }
.code-block code { display: block; padding: 14px; background: #fafafa; }
.code-block.unavailable { color: #999; font-style: italic; }

/* ── type recovery table ── */
.type-correct { background: #e8f5e9; }
.type-incorrect { background: #ffebee; }
.type-missing { background: #fff8e1; }
.type-extra { background: #f3e5f5; }
.match-yes { color: #2e7d32; font-weight: 700; }
.match-no { color: #c62828; font-weight: 700; }
.match-miss { color: #f57f17; font-weight: 600; }
.match-extra { color: #7b1fa2; font-weight: 600; }
"""


# ───────────────────────── CLI ─────────────────────────

def main():
    parser = argparse.ArgumentParser(
        description="Compare IDA and Oxidizer decompilation results, output an HTML report."
    )
    parser.add_argument("--tag", default="nightly-2025-05-22-O3-inline", help="Result tag / dataset name")
    parser.add_argument("--binary", default="fmt", help="Binary name")
    parser.add_argument("--output", default=None, help="Output HTML path (default: auto)")
    args = parser.parse_args()

    cmp = IDAOxidizerComparison(args.tag, args.binary)
    cmp.load_and_compare()

    if args.output:
        out_path = args.output
    else:
        out_dir = Path(__file__).parent.parent.parent / "output" / "html" / "comparisons"
        out_path = str(out_dir / f"{args.binary}_IDA_vs_Oxidizer_{args.tag}.html")

    cmp.generate_html(out_path)


if __name__ == "__main__":
    main()