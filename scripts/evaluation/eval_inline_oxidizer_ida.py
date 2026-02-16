#!/usr/bin/env python3
"""
Generate evaluation result tables (Markdown) for a given dataset tag.

Replicates the exact same evaluation pipeline as eval.py, computing:
  - Conciseness & Fidelity metrics (avg per function)
  - Type Recovery (Precision / Recall per category and overall)

Usage:
    python scripts/evaluation/generate_eval_tables.py --tag nightly-2025-05-22-O3-inline
    python scripts/evaluation/generate_eval_tables.py --tag nightly-2025-05-22-O3-inline --decompilers Oxidizer IDA
"""

import json
import os
import sys
import argparse
import datetime
import statistics
import logging
from collections import defaultdict
from pathlib import Path
from typing import Dict, List, Optional, Tuple

# Add project root to path
PROJECT_ROOT = Path(__file__).parent.parent.parent
sys.path.insert(0, str(PROJECT_ROOT))

from eval.result import DecompileResult
from eval.metrics.ground_truth import FunctionGroundTruth
from eval.metrics.calc import (
    LoC,
    mcc,
    num_operators,
    num_gotos,
    num_matched_string_literals,
    num_matched_function_calls,
    num_extraneous_function_calls,
    num_matched_macro_calls,
    generate_type_eval_result,
)
from eval.metrics import *

logging.basicConfig(level=logging.WARNING)
l = logging.getLogger("generate_eval_tables")

DISPLAY_NAMES = {"IDA": "Hex-Rays"}


def _dn(dec: str) -> str:
    return DISPLAY_NAMES.get(dec, dec)


TARGET_GROUND_TRUTH_DIR = PROJECT_ROOT / "targets" / "merged_ground_truth"
TARGET_SYMBOLS_DIR = PROJECT_ROOT / "targets" / "symbols"
RESULT_DIR = PROJECT_ROOT / "output" / "result"
HTML_OUTPUT_DIR = PROJECT_ROOT / "output" / "html" / "eval_tables"


# ─────────────────────── Evaluation ───────────────────────


def evaluate_tag(
    tag: str,
    decompilers: List[str],
) -> Tuple[Dict, Dict, int]:
    """
    Run the full evaluation pipeline for a tag.

    Returns:
        metrics_agg: {metric_name: {decompiler: [values]}}
        type_agg:    {decompiler: {cat_TP: sum, cat_FP: sum, cat_FN: sum, ...}}
        total_funcs: number of functions evaluated
    """
    gt_dir = TARGET_GROUND_TRUTH_DIR / tag
    result_dir = RESULT_DIR / tag

    if not gt_dir.exists():
        print(f"Error: ground truth directory not found: {gt_dir}")
        sys.exit(1)

    # Discover binaries from ground truth
    binaries = sorted(d.name for d in gt_dir.iterdir() if d.is_dir())
    print(f"Tag: {tag}")
    print(f"Decompilers: {', '.join(decompilers)}")
    print(f"Binaries with ground truth: {len(binaries)}")

    # Metrics storage
    metrics_agg = defaultdict(lambda: defaultdict(list))
    type_agg = defaultdict(lambda: defaultdict(int))
    total_funcs = 0
    skipped = 0

    for binary in binaries:
        # Load symbols
        symbols = {}
        symbols_path = TARGET_SYMBOLS_DIR / tag / f"{binary}.json"
        if symbols_path.exists():
            with open(symbols_path) as f:
                symbols = json.load(f)

        # Get function addresses from ground truth
        binary_gt_dir = gt_dir / binary
        func_addrs = sorted(int(f.stem, 16) for f in binary_gt_dir.glob("*.json"))

        # For each function, compute metrics across all decompilers
        for func_addr in func_addrs:
            gt_path = binary_gt_dir / f"{func_addr:x}.json"
            try:
                func_gt = FunctionGroundTruth.load(str(gt_path))
            except Exception as e:
                l.warning(f"Failed to load ground truth {gt_path}: {e}")
                continue

            # Check all non-Source decompilers have results
            all_have_result = True
            for dec in decompilers:
                if dec == "Source":
                    continue
                rp = result_dir / dec / binary / f"{func_addr:x}.json"
                if not rp.exists():
                    all_have_result = False
                    break

            if not all_have_result:
                skipped += 1
                continue

            # Check for UnresolvableJumpTarget in any decompiler
            skip_func = False
            for dec in decompilers:
                if dec == "Source":
                    continue
                rp = result_dir / dec / binary / f"{func_addr:x}.json"
                try:
                    fr = DecompileResult.load_json(str(rp))
                    if "fn UnresolvableJumpTarget" in fr.decompilation:
                        skip_func = True
                        break
                    # Also check MCC computable
                    if mcc(fr.decompilation) is None:
                        skip_func = True
                        break
                except Exception:
                    skip_func = True
                    break

            if skip_func:
                skipped += 1
                continue

            total_funcs += 1

            for dec in decompilers:
                if dec == "Source":
                    # Source baseline
                    metrics_agg[MCC][dec].append(func_gt.mcc)
                    metrics_agg[LOC][dec].append(func_gt.loc)
                    metrics_agg[NUM_VARIABLES][dec].append(func_gt.nvars)
                    metrics_agg[NUM_OPERATORS][dec].append(func_gt.nofops)
                    metrics_agg[NUM_GOTOS][dec].append(0)
                    metrics_agg[NUM_MATCHED_STRING_LITERALS][dec].append(sum(func_gt.string_literals.values()))
                    metrics_agg[NUM_MATCHED_FUNCTION_CALLS][dec].append(sum(func_gt.calls.values()))
                    metrics_agg[NUM_EXTRANEOUS_FUNCTION_CALLS][dec].append(0)
                    metrics_agg[NUM_MATCHED_MACRO_CALLS][dec].append(sum(func_gt.macros.values()))
                    continue

                rp = result_dir / dec / binary / f"{func_addr:x}.json"
                fr = DecompileResult.load_json(str(rp))
                decomp = fr.decompilation

                # Conciseness
                metrics_agg[MCC][dec].append(mcc(decomp))
                metrics_agg[LOC][dec].append(LoC(decomp))

                # Variables: same logic as eval.py
                nvar = sum(
                    len(types)
                    for var, types in fr.variable_types.items()
                    if not var.startswith("arg_") and not var.startswith("return_type")
                )
                metrics_agg[NUM_VARIABLES][dec].append(nvar)
                metrics_agg[NUM_OPERATORS][dec].append(num_operators(decomp))

                # Fidelity
                metrics_agg[NUM_GOTOS][dec].append(num_gotos(decomp))
                metrics_agg[NUM_MATCHED_STRING_LITERALS][dec].append(
                    num_matched_string_literals(decomp, func_gt.string_literals)
                )

                # Resolve function call addresses to names (same as eval.py)
                function_call_counts = {}
                for call_target in fr.function_call_counts:
                    try:
                        call_addr = int(call_target, 16)
                        func_name = symbols.get(call_target, f"sub_{call_addr:x}")
                    except ValueError:
                        func_name = call_target
                    function_call_counts[func_name] = fr.function_call_counts[call_target]

                metrics_agg[NUM_MATCHED_FUNCTION_CALLS][dec].append(
                    num_matched_function_calls(function_call_counts, func_gt.calls)
                )
                metrics_agg[NUM_EXTRANEOUS_FUNCTION_CALLS][dec].append(
                    num_extraneous_function_calls(function_call_counts, func_gt.calls)
                )
                metrics_agg[NUM_MATCHED_MACRO_CALLS][dec].append(
                    num_matched_macro_calls(
                        fr.macro_call_counts if fr.macro_call_counts else {},
                        func_gt.macros,
                    )
                )

                # Type recovery
                type_eval, _ = generate_type_eval_result(
                    fr.variable_types,
                    func_gt.variable_types,
                    func_gt.prototype,
                )
                for k, v in type_eval.items():
                    type_agg[dec][k] += v

    print(f"Functions evaluated: {total_funcs} (skipped: {skipped})")
    return dict(metrics_agg), dict(type_agg), total_funcs


# ─────────────────────── Formatting ───────────────────────


def fmt_val(v: float, bold: bool = False) -> str:
    s = f"{v:.2f}"
    return f"**{s}**" if bold else s


def generate_metrics_table(
    metrics_agg: Dict,
    decompilers: List[str],
    total_funcs: int,
) -> str:
    """Generate the conciseness & fidelity markdown table."""
    metric_display = [
        (MCC, "MCC", True),
        (LOC, "LoC", True),
        (NUM_VARIABLES, "Variables", True),
        (NUM_OPERATORS, "Operators", True),
        (NUM_GOTOS, "Gotos", True),
        (NUM_MATCHED_STRING_LITERALS, "Matched Strings", False),
        (NUM_MATCHED_FUNCTION_CALLS, "Matched Functions", False),
        (NUM_EXTRANEOUS_FUNCTION_CALLS, "Extraneous Calls", True),
        (NUM_MATCHED_MACRO_CALLS, "Matched Macros", False),
    ]

    # Header
    header = "| Metric | " + " | ".join(_dn(d) for d in decompilers) + " |"
    sep = "|---" * (len(decompilers) + 1) + "|"

    rows = []
    for metric_key, display_name, lower_is_better in metric_display:
        vals = {}
        for dec in decompilers:
            v_list = metrics_agg.get(metric_key, {}).get(dec, [])
            vals[dec] = statistics.mean(v_list) if v_list else 0.0

        # Determine winner among non-Source decompilers
        non_source = {d: v for d, v in vals.items() if d != "Source"}
        if non_source:
            if lower_is_better:
                best_val = min(non_source.values())
            else:
                best_val = max(non_source.values())
        else:
            best_val = None

        cells = []
        for dec in decompilers:
            v = vals[dec]
            is_best = (
                dec != "Source"
                and best_val is not None
                and v == best_val
                and sum(1 for d, vv in non_source.items() if vv == best_val) < len(non_source)
            )
            cells.append(fmt_val(v, bold=is_best))

        rows.append(f"| {display_name} | " + " | ".join(cells) + " |")

    return f"{header}\n{sep}\n" + "\n".join(rows)


def generate_type_table(
    type_agg: Dict,
    decompilers: List[str],
) -> str:
    """Generate the type recovery markdown table."""
    type_categories = ["struct", "Result", "Option"]

    # Header
    non_source = [d for d in decompilers if d != "Source"]
    header = "| Type | " + " | ".join(f"{_dn(d)} Precision/Recall" for d in non_source) + " |"
    sep = "|---" * (len(non_source) + 1) + "|"

    def prf(dec: str, cat: str):
        stats = type_agg.get(dec, {})
        tp = stats.get(f"{cat}_TP", 0)
        fp = stats.get(f"{cat}_FP", 0)
        fn = stats.get(f"{cat}_FN", 0)
        p = tp / (tp + fp) * 100 if (tp + fp) else 0
        r = tp / (tp + fn) * 100 if (tp + fn) else 0
        return p, r

    def overall_prf(dec: str):
        stats = type_agg.get(dec, {})
        tp = fp = fn = 0
        for cat in type_categories:
            tp += stats.get(f"{cat}_TP", 0)
            fp += stats.get(f"{cat}_FP", 0)
            fn += stats.get(f"{cat}_FN", 0)
        p = tp / (tp + fp) * 100 if (tp + fp) else 0
        r = tp / (tp + fn) * 100 if (tp + fn) else 0
        return p, r

    rows = []
    for cat in type_categories:
        vals = {d: prf(d, cat) for d in non_source}
        # Skip if all zeros
        if all(v[0] == 0 and v[1] == 0 for v in vals.values()):
            continue

        # Find best F1 for bolding
        f1s = {}
        for d in non_source:
            p, r = vals[d]
            f1s[d] = 2 * p * r / (p + r) if (p + r) else 0
        best_d = max(f1s, key=f1s.get) if f1s else None

        cells = []
        for d in non_source:
            p, r = vals[d]
            s = f"{p:.2f}%/{r:.2f}%"
            if d == best_d and f1s[best_d] > 0 and len(set(f1s.values())) > 1:
                s = f"**{s}**"
            cells.append(s)

        rows.append(f"| {cat} | " + " | ".join(cells) + " |")

    # Overall row
    ovals = {d: overall_prf(d) for d in non_source}
    of1s = {}
    for d in non_source:
        p, r = ovals[d]
        of1s[d] = 2 * p * r / (p + r) if (p + r) else 0
    best_d = max(of1s, key=of1s.get) if of1s else None

    cells = []
    for d in non_source:
        p, r = ovals[d]
        s = f"{p:.2f}%/{r:.2f}%"
        if d == best_d and of1s[best_d] > 0 and len(set(of1s.values())) > 1:
            s = f"**{s}**"
        cells.append(s)
    rows.append(f"| **Overall** | " + " | ".join(cells) + " |")

    return f"{header}\n{sep}\n" + "\n".join(rows)


# ─────────────────────── HTML ───────────────────────


def escape_html(text: str) -> str:
    return text.replace("&", "&amp;").replace("<", "&lt;").replace(">", "&gt;")


def _prf(type_agg: Dict, dec: str, cat: str):
    stats = type_agg.get(dec, {})
    tp = stats.get(f"{cat}_TP", 0)
    fp = stats.get(f"{cat}_FP", 0)
    fn = stats.get(f"{cat}_FN", 0)
    p = tp / (tp + fp) * 100 if (tp + fp) else 0
    r = tp / (tp + fn) * 100 if (tp + fn) else 0
    f1 = 2 * p * r / (p + r) if (p + r) else 0
    return p, r, f1


def _overall_prf(type_agg: Dict, dec: str, categories: List[str]):
    stats = type_agg.get(dec, {})
    tp = fp = fn = 0
    for cat in categories:
        tp += stats.get(f"{cat}_TP", 0)
        fp += stats.get(f"{cat}_FP", 0)
        fn += stats.get(f"{cat}_FN", 0)
    p = tp / (tp + fp) * 100 if (tp + fp) else 0
    r = tp / (tp + fn) * 100 if (tp + fn) else 0
    f1 = 2 * p * r / (p + r) if (p + r) else 0
    return p, r, f1


def generate_html(
    tag: str,
    decompilers: List[str],
    metrics_agg: Dict,
    type_agg: Dict,
    total_funcs: int,
) -> str:
    ts = datetime.datetime.now().strftime("%Y-%m-%d %H:%M:%S")
    non_source = [d for d in decompilers if d != "Source"]

    type_categories = ["struct", "Result", "Option"]

    metric_display = [
        (MCC, "McCabe Cyclomatic Complexity", True),
        (LOC, "Lines of Code", True),
        (NUM_VARIABLES, "Number of Variables", True),
        (NUM_OPERATORS, "Number of Operators", True),
        (NUM_GOTOS, "Number of Gotos", True),
        (NUM_MATCHED_STRING_LITERALS, "Matched String Literals", False),
        (NUM_MATCHED_FUNCTION_CALLS, "Matched Function Calls", False),
        (NUM_EXTRANEOUS_FUNCTION_CALLS, "Extraneous Function Calls", True),
        (NUM_MATCHED_MACRO_CALLS, "Matched Macro Calls", False),
    ]

    # ── Build metrics table rows ──
    metrics_rows = []
    for metric_key, display_name, lower_is_better in metric_display:
        vals = {}
        for dec in decompilers:
            v_list = metrics_agg.get(metric_key, {}).get(dec, [])
            vals[dec] = (
                statistics.mean(v_list) if v_list else 0.0,
                statistics.median(v_list) if v_list else 0.0,
            )

        ns_avgs = {d: vals[d][0] for d in non_source}
        if ns_avgs:
            best = min(ns_avgs.values()) if lower_is_better else max(ns_avgs.values())
        else:
            best = None

        # For Source, show percentage relative to source avg
        src_avg = vals.get("Source", (0, 0))[0]

        cells = []
        for dec in decompilers:
            avg, med = vals[dec]
            is_best = (
                dec != "Source"
                and best is not None
                and avg == best
                and sum(1 for v in ns_avgs.values() if v == best) < len(ns_avgs)
            )
            cls = ' class="winner"' if is_best else ""

            if dec == "Source":
                cells.append(f"<td>{avg:.2f}</td><td>{med:.0f}</td>")
            else:
                pct = f"({avg / src_avg * 100:.1f}%)" if src_avg > 0 else ""
                pct_html = f' <span class="pct">{pct}</span>' if pct else ""
                cells.append(f"<td{cls}>{avg:.2f}{pct_html}</td><td>{med:.0f}</td>")
        metrics_rows.append((display_name, cells))

    # ── Build type table rows ──
    type_rows = []
    for cat in type_categories:
        vals = {d: _prf(type_agg, d, cat) for d in non_source}
        if all(v[0] == 0 and v[1] == 0 for v in vals.values()):
            continue

        f1s = {d: vals[d][2] for d in non_source}
        best_d = max(f1s, key=f1s.get) if f1s else None

        ps = {d: vals[d][0] for d in non_source}
        rs = {d: vals[d][1] for d in non_source}
        best_p = max(ps.values()) if ps else 0
        best_r = max(rs.values()) if rs else 0
        best_f1 = max(f1s.values()) if f1s else 0

        cells = []
        for d in non_source:
            p, r, f1 = vals[d]
            p_cls = ' class="winner"' if (p == best_p and p > 0 and len(set(ps.values())) > 1) else ""
            r_cls = ' class="winner"' if (r == best_r and r > 0 and len(set(rs.values())) > 1) else ""
            f1_cls = ' class="winner"' if (f1 == best_f1 and f1 > 0 and len(set(f1s.values())) > 1) else ""
            cells.append(f"<td{p_cls}>{p:.2f}%</td><td{r_cls}>{r:.2f}%</td><td{f1_cls}>{f1:.2f}%</td>")

        type_rows.append((cat, cells))

    # Overall
    ovals = {d: _overall_prf(type_agg, d, type_categories) for d in non_source}
    of1s = {d: ovals[d][2] for d in non_source}
    best_d = max(of1s, key=of1s.get) if of1s else None
    ops = {d: ovals[d][0] for d in non_source}
    ors = {d: ovals[d][1] for d in non_source}
    best_op = max(ops.values()) if ops else 0
    best_or = max(ors.values()) if ors else 0
    best_of1 = max(of1s.values()) if of1s else 0

    overall_cells = []
    for d in non_source:
        p, r, f1 = ovals[d]
        p_cls = ' class="winner"' if (p == best_op and p > 0 and len(set(ops.values())) > 1) else ""
        r_cls = ' class="winner"' if (r == best_or and r > 0 and len(set(ors.values())) > 1) else ""
        f1_cls = ' class="winner"' if (f1 == best_of1 and f1 > 0 and len(set(of1s.values())) > 1) else ""
        overall_cells.append(f"<td{p_cls}>{p:.2f}%</td><td{r_cls}>{r:.2f}%</td><td{f1_cls}>{f1:.2f}%</td>")

    # ── Assemble HTML ──
    p = []
    p.append("<!DOCTYPE html><html lang='en'><head><meta charset='UTF-8'>")
    p.append("<meta name='viewport' content='width=device-width, initial-scale=1.0'>")
    p.append(f"<title>Evaluation: {escape_html(tag)}</title>")
    p.append(f"<style>{_HTML_CSS}</style></head><body>")

    p.append(f"<h1>Evaluation Results</h1>")
    p.append(
        f"<p class='subtitle'>Dataset: <b>{escape_html(tag)}</b> &nbsp;|&nbsp; "
        f"Functions: <b>{total_funcs}</b> &nbsp;|&nbsp; "
        f"Generated: {ts}</p>"
    )

    # Metrics table
    p.append("<h2>Conciseness and Fidelity Metrics</h2>")
    p.append("<table><thead><tr>")
    p.append("<th rowspan='2' class='metric-col'>Metric</th>")
    for dec in decompilers:
        p.append(f"<th colspan='2' class='sep'>{escape_html(_dn(dec))}</th>")
    p.append("</tr><tr>")
    for _ in decompilers:
        p.append("<th>Average</th><th>Median</th>")
    p.append("</tr></thead><tbody>")

    for display_name, cells in metrics_rows:
        p.append(f"<tr><td class='metric-name'>{display_name}</td>{''.join(cells)}</tr>")

    p.append("</tbody></table>")

    # Type table
    p.append("<h2>Type Recovery Evaluation</h2>")
    p.append("<table><thead><tr>")
    p.append("<th rowspan='2' class='metric-col'>Type Category</th>")
    for d in non_source:
        p.append(f"<th colspan='3' class='sep'>{escape_html(_dn(d))}</th>")
    p.append("</tr><tr>")
    for _ in non_source:
        p.append("<th>Precision</th><th>Recall</th><th>F1</th>")
    p.append("</tr></thead><tbody>")

    for cat, cells in type_rows:
        p.append(f"<tr><td class='metric-name'>{escape_html(cat)}</td>{''.join(cells)}</tr>")

    p.append(f"<tr class='overall-row'><td class='metric-name'>Overall</td>{''.join(overall_cells)}</tr>")
    p.append("</tbody></table>")

    p.append("</body></html>")
    return "\n".join(p)


_HTML_CSS = """
* { box-sizing: border-box; }
body {
    font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
    margin: 0; padding: 24px 32px; background: #f5f5f5; color: #222; font-size: 14px;
}
h1 { margin: 0 0 4px; }
h2 { border-bottom: 2px solid #4CAF50; padding-bottom: 6px; margin-top: 32px; }
.subtitle { color: #666; font-size: 0.95em; margin: 0 0 20px; }

table { border-collapse: collapse; width: 100%; background: #fff; margin-bottom: 24px;
        box-shadow: 0 1px 3px rgba(0,0,0,.1); border-radius: 4px; overflow: hidden; }
th, td { padding: 10px 16px; text-align: left; border-bottom: 1px solid #eee; }
th { background: #4CAF50; color: #fff; font-weight: 600; }
th.sep { border-left: 2px solid rgba(255,255,255,.3); }
th.metric-col { background: #388E3C; }
tr:hover { background: #f9f9f9; }
.metric-name { font-weight: 600; }
.winner { font-weight: 700; color: #2e7d32; }
.pct { color: #888; font-size: 0.85em; }
.overall-row { background: #e8f5e9; font-weight: 700; }
"""


# ─────────────────────── CLI ───────────────────────


def main():
    parser = argparse.ArgumentParser(
        description="Generate evaluation result tables (Markdown + HTML) for a dataset tag."
    )
    parser.add_argument(
        "--tag",
        default="nightly-2025-05-22-O3-inline",
        help="Dataset tag (default: nightly-2025-05-22-O3-inline)",
    )
    parser.add_argument(
        "--decompilers",
        nargs="+",
        default=["Source", "Oxidizer", "IDA"],
        help="Decompilers to evaluate (default: Source Oxidizer IDA)",
    )
    parser.add_argument(
        "--output",
        default=None,
        help="Output HTML path (default: output/html/eval_tables/<tag>.html)",
    )
    args = parser.parse_args()

    metrics_agg, type_agg, total_funcs = evaluate_tag(args.tag, args.decompilers)

    # Markdown output
    print(f"\n{'='*60}")
    print(f"Results for {args.tag} ({total_funcs} functions)")
    print(f"{'='*60}\n")

    print("### Conciseness and Fidelity Metrics\n")
    print(generate_metrics_table(metrics_agg, args.decompilers, total_funcs))

    print(f"\n### Type Recovery (Precision % / Recall %)\n")
    print(generate_type_table(type_agg, args.decompilers))

    # HTML output
    html = generate_html(args.tag, args.decompilers, metrics_agg, type_agg, total_funcs)

    if args.output:
        out_path = Path(args.output)
    else:
        out_path = HTML_OUTPUT_DIR / f"{args.tag}.html"

    out_path.parent.mkdir(parents=True, exist_ok=True)
    with open(out_path, "w", encoding="utf-8") as f:
        f.write(html)
    print(f"\nHTML report saved to: {out_path}")


if __name__ == "__main__":
    main()
