#!/usr/bin/env python3
"""
Evaluate Oxidizer decompilation results against ground truth.
Reads pre-computed results and generates an HTML report with per-function
comparisons showing decompilation code, type recovery metrics, function
call matching, string literal matching, and macro matching.

Usage:
    python scripts/test/eval_oxidizer.py
    python scripts/test/eval_oxidizer.py --tag nightly-2025-05-22-O3-inline
    python scripts/test/eval_oxidizer.py --tag nightly-2025-05-22-O3-inline --binary base64
    python scripts/test/eval_oxidizer.py --tag nightly-2025-05-22-O3-inline --binary base64 --binary ruff
"""

import sys
import json
import datetime
import argparse
import html
import statistics
from pathlib import Path
from collections import defaultdict
from typing import Dict, List, Optional, Tuple

SCRIPT_DIR = Path(__file__).parent
PROJECT_ROOT = SCRIPT_DIR.parent.parent
sys.path.insert(0, str(PROJECT_ROOT))

from eval.result import DecompileResult
from eval.metrics.ground_truth import FunctionGroundTruth
from eval.metrics.calc import (
    generate_type_eval_result,
    _normalize_dwarf_type,
    LoC,
    mcc,
    num_variables,
    num_operators,
    num_gotos,
    num_matched_string_literals,
    num_matched_function_calls,
    num_matched_macro_calls,
    collect_string_literals,
)

RESULT_DIR = PROJECT_ROOT / "output" / "result"
GT_DIR = PROJECT_ROOT / "targets" / "merged_ground_truth"
OUTPUT_DIR = PROJECT_ROOT / "results"

TYPE_CATEGORIES = [
    "primitive", "struct", "enum", "array", "Result", "Option",
    "&primitive", "&struct", "&enum", "&Result", "&Option", "&array",
    "&reference", "reference",
]


def load_oxidizer_result(path: Path) -> Optional[DecompileResult]:
    if not path.exists():
        return None
    try:
        return DecompileResult.load_json(str(path))
    except Exception:
        return None


def load_ground_truth(path: Path) -> Optional[Tuple[FunctionGroundTruth, str]]:
    """Load ground truth and the function name from the JSON file."""
    if not path.exists():
        return None
    try:
        gt = FunctionGroundTruth.load(str(path))
        with open(path) as f:
            raw = json.load(f)
        name = raw.get("name", "")
        return gt, name
    except Exception:
        return None


def compute_type_metrics(type_eval: dict) -> Tuple[float, float, float]:
    """Compute overall precision, recall, F1 from a type_eval dict."""
    total_tp = sum(v for k, v in type_eval.items() if k.endswith("_TP"))
    total_fp = sum(v for k, v in type_eval.items() if k.endswith("_FP"))
    total_fn = sum(v for k, v in type_eval.items() if k.endswith("_FN"))
    precision = total_tp / (total_tp + total_fp) if (total_tp + total_fp) > 0 else 0
    recall = total_tp / (total_tp + total_fn) if (total_tp + total_fn) > 0 else 0
    f1 = 2 * precision * recall / (precision + recall) if (precision + recall) > 0 else 0
    return precision, recall, f1


def collect_data(tag: str, binaries_filter: Optional[List[str]] = None):
    """
    Collect Oxidizer results and ground truth for all matching functions.
    Returns list of binary dicts with per-function comparison data.
    """
    ox_dir = RESULT_DIR / tag / "Oxidizer"
    gt_tag_dir = GT_DIR / tag

    if not ox_dir.exists():
        print(f"Error: Oxidizer result directory not found: {ox_dir}")
        return []
    if not gt_tag_dir.exists():
        print(f"Error: Ground truth directory not found: {gt_tag_dir}")
        return []

    # Discover binaries present in both Oxidizer results and ground truth
    ox_bins = {d.name for d in ox_dir.iterdir() if d.is_dir()}
    gt_bins = {d.name for d in gt_tag_dir.iterdir() if d.is_dir()}
    common_bins = sorted(ox_bins & gt_bins)

    if binaries_filter:
        common_bins = [b for b in common_bins if b in binaries_filter]

    binaries = []
    agg_type_eval = defaultdict(int)

    for binary_name in common_bins:
        ox_bin_dir = ox_dir / binary_name
        gt_bin_dir = gt_tag_dir / binary_name

        # Find functions that exist in both
        ox_funcs = {f.stem for f in ox_bin_dir.glob("*.json")}
        gt_funcs = {f.stem for f in gt_bin_dir.glob("*.json")}
        common_funcs = sorted(ox_funcs & gt_funcs)

        if not common_funcs:
            continue

        functions = []
        for func_addr in common_funcs:
            ox_result = load_oxidizer_result(ox_bin_dir / f"{func_addr}.json")
            gt_data = load_ground_truth(gt_bin_dir / f"{func_addr}.json")

            if ox_result is None or gt_data is None:
                continue

            gt, func_name = gt_data

            # Type evaluation
            type_eval, dwarf_var_mapping = generate_type_eval_result(
                ox_result.variable_types,
                gt.variable_types,
                gt.prototype,
                debug=False,
            )
            for k, v in type_eval.items():
                agg_type_eval[k] += v

            p, r, f1 = compute_type_metrics(type_eval)

            # Code metrics
            decomp = ox_result.decompilation or ""
            ox_loc = LoC(decomp)
            ox_mcc = mcc(decomp)
            ox_nvars = num_variables(decomp)
            ox_nops = num_operators(decomp)
            ox_ngotos = num_gotos(decomp)

            # Fidelity metrics
            matched_strings = num_matched_string_literals(decomp, gt.string_literals)
            matched_calls = num_matched_function_calls(ox_result.function_call_counts, gt.calls)
            matched_macros = num_matched_macro_calls(ox_result.macro_call_counts, gt.macros)
            gt_total_strings = sum(gt.string_literals.values())
            gt_total_calls = sum(gt.calls.values())
            gt_total_macros = sum(gt.macros.values())

            functions.append({
                "addr": func_addr,
                "name": func_name or f"0x{func_addr}",
                "decompilation": decomp,
                "type_eval": type_eval,
                "dwarf_var_mapping": dwarf_var_mapping,
                "precision": p,
                "recall": r,
                "f1": f1,
                "gt": gt,
                "ox_result": ox_result,
                # Code metrics
                "ox_loc": ox_loc,
                "gt_loc": gt.loc,
                "ox_mcc": ox_mcc,
                "gt_mcc": gt.mcc,
                "ox_nvars": ox_nvars,
                "gt_nvars": gt.nvars,
                "ox_nops": ox_nops,
                "gt_nofops": gt.nofops,
                "ox_ngotos": ox_ngotos,
                # Fidelity
                "matched_strings": matched_strings,
                "gt_total_strings": gt_total_strings,
                "matched_calls": matched_calls,
                "gt_total_calls": gt_total_calls,
                "matched_macros": matched_macros,
                "gt_total_macros": gt_total_macros,
            })

        if functions:
            binaries.append({
                "name": binary_name,
                "functions": functions,
            })

    return binaries, agg_type_eval


def _esc(text) -> str:
    if text is None:
        return ""
    return html.escape(str(text))


def _prf_badge(p, r, f1) -> str:
    """Produce inline P/R/F1 badges."""
    def _color(val):
        if val >= 0.8:
            return "#22c55e"
        elif val >= 0.5:
            return "#eab308"
        else:
            return "#ef4444"
    return (
        f'<span class="badge" style="background:{_color(p)}">{p*100:.1f}%</span>'
        f'<span class="badge" style="background:{_color(r)}">{r*100:.1f}%</span>'
        f'<span class="badge" style="background:{_color(f1)}">{f1*100:.1f}%</span>'
    )


def _metric_cell(ox_val, gt_val, lower_is_better=True) -> str:
    """Render a metric cell comparing Oxidizer vs GT."""
    if ox_val is None:
        return '<td class="na">-</td>'
    if gt_val is None or gt_val == 0:
        return f"<td>{ox_val}</td>"
    if lower_is_better:
        cls = "metric-good" if ox_val <= gt_val else "metric-bad"
    else:
        cls = "metric-good" if ox_val >= gt_val else "metric-bad"
    ratio = ox_val / gt_val if gt_val != 0 else 0
    return f'<td class="{cls}">{ox_val} <small>({ratio:.1f}x)</small></td>'


def _fidelity_cell(matched, total) -> str:
    if total == 0:
        return '<td class="na">-</td>'
    pct = matched / total * 100
    cls = "metric-good" if pct >= 80 else ("metric-warn" if pct >= 50 else "metric-bad")
    return f'<td class="{cls}">{matched}/{total} <small>({pct:.0f}%)</small></td>'


def generate_html(tag: str, binaries: list, agg_type_eval: dict) -> str:
    ts = datetime.datetime.now().strftime("%Y-%m-%d %H:%M:%S")
    total_funcs = sum(len(b["functions"]) for b in binaries)

    p = []
    p.append("<!DOCTYPE html>")
    p.append("<html lang='en'>")
    p.append("<head>")
    p.append("  <meta charset='UTF-8'>")
    p.append("  <meta name='viewport' content='width=device-width, initial-scale=1.0'>")
    p.append(f"  <title>Oxidizer Eval: {_esc(tag)} - {ts}</title>")
    p.append("  <link rel='stylesheet' href='https://cdnjs.cloudflare.com/ajax/libs/highlight.js/11.9.0/styles/vs2015.min.css'>")
    p.append("  <script src='https://cdnjs.cloudflare.com/ajax/libs/highlight.js/11.9.0/highlight.min.js'></script>")
    p.append("  <script src='https://cdnjs.cloudflare.com/ajax/libs/highlight.js/11.9.0/languages/rust.min.js'></script>")
    p.append(f"  <style>{CSS}</style>")
    p.append("</head>")
    p.append("<body>")

    # Header
    p.append("<div class='container'>")
    p.append(f"  <h1>Oxidizer Evaluation Report</h1>")
    p.append(f"  <p class='subtitle'>Dataset: <b>{_esc(tag)}</b> | {len(binaries)} binaries | {total_funcs} functions | {ts}</p>")

    # Aggregate type recovery table
    p.append(_html_aggregate_type_table(agg_type_eval))

    # Aggregate conciseness summary
    p.append(_html_aggregate_metrics(binaries))

    # Binary navigation
    p.append("  <div class='nav'>")
    p.append("    <b>Binaries:</b> ")
    for b in binaries:
        p.append(f"    <a href='#bin_{b['name']}'>{_esc(b['name'])} ({len(b['functions'])})</a>")
    p.append("  </div>")

    # Per-binary sections
    for b in binaries:
        p.append(_html_binary_section(b))

    p.append("</div>")  # container

    p.append("<script>hljs.highlightAll();</script>")
    p.append(_js_toggle())
    p.append("</body></html>")

    return "\n".join(p)


def _html_aggregate_type_table(agg: dict) -> str:
    lines = []
    lines.append("<div class='section'>")
    lines.append("  <h2>Overall Type Recovery</h2>")
    lines.append("  <table class='data-table'>")
    lines.append("    <thead><tr>")
    lines.append("      <th>Type Category</th><th>TP</th><th>FP</th><th>FN</th><th>Precision</th><th>Recall</th><th>F1</th>")
    lines.append("    </tr></thead><tbody>")

    # Overall row first
    total_tp = sum(agg.get(f"{c}_TP", 0) for c in TYPE_CATEGORIES)
    total_fp = sum(agg.get(f"{c}_FP", 0) for c in TYPE_CATEGORIES)
    total_fn = sum(agg.get(f"{c}_FN", 0) for c in TYPE_CATEGORIES)
    op = total_tp / (total_tp + total_fp) if (total_tp + total_fp) > 0 else 0
    or_ = total_tp / (total_tp + total_fn) if (total_tp + total_fn) > 0 else 0
    of1 = 2 * op * or_ / (op + or_) if (op + or_) > 0 else 0
    lines.append(f"    <tr class='overall-row'><td><b>Overall</b></td><td>{total_tp}</td><td>{total_fp}</td><td>{total_fn}</td>")
    lines.append(f"      <td><b>{op*100:.2f}%</b></td><td><b>{or_*100:.2f}%</b></td><td><b>{of1*100:.2f}%</b></td></tr>")

    for cat in TYPE_CATEGORIES:
        tp = agg.get(f"{cat}_TP", 0)
        fp = agg.get(f"{cat}_FP", 0)
        fn = agg.get(f"{cat}_FN", 0)
        if tp + fp + fn == 0:
            continue
        pr = tp / (tp + fp) if (tp + fp) > 0 else 0
        rc = tp / (tp + fn) if (tp + fn) > 0 else 0
        f1 = 2 * pr * rc / (pr + rc) if (pr + rc) > 0 else 0
        lines.append(f"    <tr><td>{cat}</td><td>{tp}</td><td>{fp}</td><td>{fn}</td>")
        lines.append(f"      <td>{pr*100:.2f}%</td><td>{rc*100:.2f}%</td><td>{f1*100:.2f}%</td></tr>")

    lines.append("  </tbody></table>")
    lines.append("</div>")
    return "\n".join(lines)


def _html_aggregate_metrics(binaries: list) -> str:
    all_funcs = [f for b in binaries for f in b["functions"]]
    if not all_funcs:
        return ""

    locs = [f["ox_loc"] for f in all_funcs]
    mccs = [f["ox_mcc"] for f in all_funcs if f["ox_mcc"] is not None]
    gt_locs = [f["gt_loc"] for f in all_funcs]
    gt_mccs = [f["gt_mcc"] for f in all_funcs if f["gt_mcc"] is not None]

    total_matched_strings = sum(f["matched_strings"] for f in all_funcs)
    total_gt_strings = sum(f["gt_total_strings"] for f in all_funcs)
    total_matched_calls = sum(f["matched_calls"] for f in all_funcs)
    total_gt_calls = sum(f["gt_total_calls"] for f in all_funcs)
    total_matched_macros = sum(f["matched_macros"] for f in all_funcs)
    total_gt_macros = sum(f["gt_total_macros"] for f in all_funcs)

    lines = []
    lines.append("<div class='section'>")
    lines.append("  <h2>Aggregate Metrics</h2>")
    lines.append("  <div class='metrics-grid'>")

    def _box(label, ox_val, gt_val, fmt=".2f"):
        return (
            f"<div class='metric-box'>"
            f"  <div class='metric-label'>{label}</div>"
            f"  <div class='metric-value'>Ox: {ox_val:{fmt}}</div>"
            f"  <div class='metric-gt'>GT: {gt_val:{fmt}}</div>"
            f"</div>"
        )

    def _fid_box(label, matched, total):
        pct = matched / total * 100 if total > 0 else 0
        return (
            f"<div class='metric-box'>"
            f"  <div class='metric-label'>{label}</div>"
            f"  <div class='metric-value'>{matched}/{total}</div>"
            f"  <div class='metric-gt'>{pct:.1f}%</div>"
            f"</div>"
        )

    lines.append(_box("Avg LoC", statistics.mean(locs), statistics.mean(gt_locs)))
    if mccs and gt_mccs:
        lines.append(_box("Avg MCC", statistics.mean(mccs), statistics.mean(gt_mccs)))
    lines.append(_fid_box("Matched Strings", total_matched_strings, total_gt_strings))
    lines.append(_fid_box("Matched Calls", total_matched_calls, total_gt_calls))
    lines.append(_fid_box("Matched Macros", total_matched_macros, total_gt_macros))

    lines.append("  </div>")
    lines.append("</div>")
    return "\n".join(lines)


def _html_binary_section(binary: dict) -> str:
    lines = []
    bname = binary["name"]
    funcs = binary["functions"]

    lines.append(f"<div class='binary-section' id='bin_{bname}'>")
    lines.append(f"  <h2>{_esc(bname)} <span class='func-count'>({len(funcs)} functions)</span></h2>")

    # Function navigation
    if len(funcs) > 1:
        lines.append("  <div class='func-nav'>")
        for f in funcs:
            name = f["name"]
            short = name if len(name) <= 50 else name[:47] + "..."
            lines.append(f"    <a href='#func_{bname}_{f['addr']}' title='{_esc(name)}'>0x{f['addr']}</a>")
        lines.append("  </div>")

    for f in funcs:
        lines.append(_html_function_section(bname, f))

    lines.append("</div>")
    return "\n".join(lines)


def _html_function_section(bname: str, func: dict) -> str:
    lines = []
    fid = f"{bname}_{func['addr']}"
    addr = func["addr"]
    name = func["name"]
    p, r, f1 = func["precision"], func["recall"], func["f1"]

    lines.append(f"<div class='function-section' id='func_{fid}'>")

    # Header
    lines.append(f"  <h3>")
    lines.append(f"    <span class='func-addr-badge'>0x{addr}</span>")
    lines.append(f"    <span class='func-name'>{_esc(name)}</span>")
    lines.append(f"    <span class='prf-badges'>P:{_prf_badge(p, r, f1)}</span>")
    lines.append(f"  </h3>")

    # Metrics comparison table
    lines.append("  <div class='metrics-row'>")
    lines.append("    <table class='compact-table'>")
    lines.append("      <thead><tr><th>Metric</th><th>Oxidizer</th><th>Ground Truth</th><th>Ratio</th></tr></thead>")
    lines.append("      <tbody>")

    metrics = [
        ("LoC", func["ox_loc"], func["gt_loc"], True),
        ("MCC", func["ox_mcc"], func["gt_mcc"], True),
        ("# Variables", func["ox_nvars"], func["gt_nvars"], True),
        ("# Operators", func["ox_nops"], None, True),
        ("# Gotos", func["ox_ngotos"], None, True),
        ("# Function Ops (GT)", func.get("gt_nofops", None), func["gt_nofops"], False),
    ]
    for mname, ox_v, gt_v, lower_is_better in metrics:
        if ox_v is None and gt_v is None:
            continue
        ox_str = str(ox_v) if ox_v is not None else "-"
        gt_str = str(gt_v) if gt_v is not None else "-"
        if ox_v is not None and gt_v is not None and gt_v != 0:
            ratio = ox_v / gt_v
            ratio_str = f"{ratio:.2f}x"
            if lower_is_better:
                cls = "metric-good" if ratio <= 1.2 else ("metric-warn" if ratio <= 2.0 else "metric-bad")
            else:
                cls = "metric-good" if ratio >= 0.8 else ("metric-warn" if ratio >= 0.5 else "metric-bad")
        else:
            ratio_str = "-"
            cls = ""
        lines.append(f"        <tr><td>{mname}</td><td>{ox_str}</td><td>{gt_str}</td><td class='{cls}'>{ratio_str}</td></tr>")

    lines.append("      </tbody></table>")

    # Fidelity table
    lines.append("    <table class='compact-table'>")
    lines.append("      <thead><tr><th>Fidelity</th><th>Matched</th><th>GT Total</th><th>Rate</th></tr></thead>")
    lines.append("      <tbody>")
    fidelity = [
        ("String Literals", func["matched_strings"], func["gt_total_strings"]),
        ("Function Calls", func["matched_calls"], func["gt_total_calls"]),
        ("Macro Calls", func["matched_macros"], func["gt_total_macros"]),
    ]
    for fname, matched, total in fidelity:
        if total == 0:
            lines.append(f"        <tr><td>{fname}</td><td>-</td><td>0</td><td class='na'>-</td></tr>")
        else:
            pct = matched / total * 100
            cls = "metric-good" if pct >= 80 else ("metric-warn" if pct >= 50 else "metric-bad")
            lines.append(f"        <tr><td>{fname}</td><td>{matched}</td><td>{total}</td><td class='{cls}'>{pct:.0f}%</td></tr>")
    lines.append("      </tbody></table>")
    lines.append("  </div>")

    # Variable types detail table
    lines.append(_html_variable_types_table(func))

    # Decompilation code (collapsible)
    lines.append(f"  <button class='toggle-btn' onclick='toggleCode(\"{fid}\")'>Show / Hide Code</button>")
    lines.append(f"  <div class='code-container' id='code_{fid}'>")
    if func["decompilation"]:
        lines.append(f"    <pre class='code-block'><code class='language-rust'>{_esc(func['decompilation'])}</code></pre>")
    else:
        lines.append("    <pre class='code-block unavailable'>No decompilation output</pre>")
    lines.append("  </div>")

    lines.append("</div>")
    return "\n".join(lines)


def _html_variable_types_table(func: dict) -> str:
    lines = []
    gt = func["gt"]
    ox_result = func["ox_result"]

    lines.append("  <details class='var-details'>")
    lines.append("    <summary>Variable Types Detail</summary>")
    lines.append("    <table class='type-table'>")
    lines.append("      <thead><tr><th>Variable</th><th>Ground Truth</th><th>Oxidizer</th><th>Match</th></tr></thead>")
    lines.append("      <tbody>")

    # Variables from ground truth
    for gt_var in gt.variable_types:
        if gt_var.category == "stack":
            var_ident = f"stack_{gt_var.location}"
        elif gt_var.category == "register":
            var_ident = f"reg_{gt_var.location}"
        else:
            var_ident = gt_var.name or "unknown"

        gt_normalized = _normalize_dwarf_type(gt_var.type)
        gt_type_str = f"{gt_normalized[0]}({gt_normalized[1]})" if gt_normalized[0] else str(gt_var.type)

        pred_types = ox_result.variable_types.get(var_ident, [])
        pred_str = ", ".join(f"{p[0]}({p[1]})" for p in pred_types) if pred_types else "N/A"

        match = any(tuple(p) == gt_normalized for p in pred_types)
        match_cls = "type-correct" if match else ("type-incorrect" if pred_types else "type-missing")
        match_icon = "&#10003;" if match else ("&#10007;" if pred_types else "?")

        lines.append(f"        <tr class='{match_cls}'><td>{_esc(var_ident)}</td><td>{_esc(gt_type_str)}</td><td>{_esc(pred_str)}</td><td>{match_icon}</td></tr>")

    # Function arguments
    for i, arg_ty in enumerate(gt.prototype.args):
        if arg_ty is None:
            continue
        var_ident = f"arg_{i}"
        gt_normalized = _normalize_dwarf_type(arg_ty)
        gt_type_str = f"{gt_normalized[0]}({gt_normalized[1]})" if gt_normalized[0] else str(arg_ty)

        pred_types = ox_result.variable_types.get(var_ident, [])
        pred_str = ", ".join(f"{p[0]}({p[1]})" for p in pred_types) if pred_types else "N/A"
        match = any(tuple(p) == gt_normalized for p in pred_types)
        match_cls = "type-correct" if match else ("type-incorrect" if pred_types else "type-missing")
        match_icon = "&#10003;" if match else ("&#10007;" if pred_types else "?")

        lines.append(f"        <tr class='{match_cls}'><td><em>{_esc(var_ident)}</em></td><td>{_esc(gt_type_str)}</td><td>{_esc(pred_str)}</td><td>{match_icon}</td></tr>")

    # Return type
    if gt.prototype.returnty is not None:
        gt_normalized = _normalize_dwarf_type(gt.prototype.returnty)
        gt_type_str = f"{gt_normalized[0]}({gt_normalized[1]})" if gt_normalized[0] else str(gt.prototype.returnty)

        pred_types = ox_result.variable_types.get("return_type", [])
        pred_str = ", ".join(f"{p[0]}({p[1]})" for p in pred_types) if pred_types else "N/A"
        match = any(tuple(p) == gt_normalized for p in pred_types)
        match_cls = "type-correct" if match else ("type-incorrect" if pred_types else "type-missing")
        match_icon = "&#10003;" if match else ("&#10007;" if pred_types else "?")

        lines.append(f"        <tr class='{match_cls}'><td><em>return_type</em></td><td>{_esc(gt_type_str)}</td><td>{_esc(pred_str)}</td><td>{match_icon}</td></tr>")

    lines.append("      </tbody></table>")
    lines.append("  </details>")
    return "\n".join(lines)


def _js_toggle() -> str:
    return """
<script>
function toggleCode(fid) {
    var el = document.getElementById('code_' + fid);
    if (el.style.display === 'none') {
        el.style.display = 'block';
    } else {
        el.style.display = 'none';
    }
}
document.addEventListener('DOMContentLoaded', function() {
    var total = document.querySelectorAll('.code-container').length;
    if (total > 20) {
        document.querySelectorAll('.code-container').forEach(function(el) {
            el.style.display = 'none';
        });
    }
});
</script>
"""


CSS = """
* { box-sizing: border-box; margin: 0; padding: 0; }
body {
    font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
    background: #f0f2f5; color: #222; font-size: 14px; padding: 20px;
}
.container { max-width: 1600px; margin: 0 auto; }
h1 { margin-bottom: 4px; color: #1a1a2e; }
h2 { margin-top: 0; border-bottom: 2px solid #37474f; padding-bottom: 6px; }
.subtitle { color: #555; margin-bottom: 16px; }
.func-count { font-size: 0.8em; color: #888; font-weight: normal; }

/* sections */
.section { background: #fff; padding: 20px; border-radius: 6px; margin-bottom: 20px;
           box-shadow: 0 1px 3px rgba(0,0,0,.1); }

/* nav */
.nav { position: sticky; top: 0; z-index: 100; background: #fff; padding: 10px 16px;
       box-shadow: 0 2px 4px rgba(0,0,0,.12); margin-bottom: 20px; border-radius: 4px;
       display: flex; flex-wrap: wrap; gap: 8px; align-items: center; }
.nav a { text-decoration: none; font-family: monospace; font-size: 13px; padding: 2px 8px;
         border-radius: 3px; color: #1565c0; background: #e3f2fd; }
.nav a:hover { background: #bbdefb; }

/* tables */
table { border-collapse: collapse; width: 100%; }
.data-table { background: #fff; margin-bottom: 16px; box-shadow: 0 1px 3px rgba(0,0,0,.08);
              border-radius: 4px; overflow: hidden; }
.data-table th, .data-table td { padding: 8px 12px; text-align: left; border-bottom: 1px solid #eee; }
.data-table th { background: #37474f; color: #fff; font-weight: 600; position: sticky; top: 0; }
.data-table tr:hover { background: #f9f9f9; }
.overall-row { background: #e8f5e9 !important; }
.overall-row:hover { background: #c8e6c9 !important; }

/* compact table for per-function metrics */
.compact-table { font-size: 13px; background: #fff; border-radius: 4px; overflow: hidden; margin-bottom: 8px; }
.compact-table th, .compact-table td { padding: 5px 10px; border-bottom: 1px solid #eee; }
.compact-table th { background: #546e7a; color: #fff; font-size: 12px; }

/* metrics row */
.metrics-row { display: flex; gap: 16px; margin-bottom: 12px; flex-wrap: wrap; }
.metrics-row table { flex: 1; min-width: 280px; }

/* metric colors */
.metric-good { color: #2e7d32; font-weight: 600; }
.metric-warn { color: #f57f17; font-weight: 600; }
.metric-bad { color: #c62828; font-weight: 600; }
.na { color: #bbb; }

/* aggregate metrics grid */
.metrics-grid { display: flex; gap: 16px; flex-wrap: wrap; }
.metric-box { background: #f5f5f5; border-radius: 8px; padding: 14px 20px; min-width: 140px; text-align: center; }
.metric-label { font-size: 12px; color: #666; font-weight: 600; text-transform: uppercase; margin-bottom: 4px; }
.metric-value { font-size: 20px; font-weight: 700; color: #1565c0; }
.metric-gt { font-size: 13px; color: #888; }

/* binary */
.binary-section { background: #fff; padding: 20px; border-radius: 6px; margin-bottom: 24px;
                  box-shadow: 0 1px 3px rgba(0,0,0,.1); border-left: 4px solid #1565c0; }
.func-nav { margin-bottom: 16px; display: flex; flex-wrap: wrap; gap: 6px; }
.func-nav a { text-decoration: none; font-family: monospace; font-size: 12px; padding: 2px 6px;
              border-radius: 3px; color: #555; background: #f5f5f5; }
.func-nav a:hover { background: #e0e0e0; }

/* function */
.function-section { margin-bottom: 24px; padding: 16px; border: 1px solid #e0e0e0;
                    border-radius: 6px; background: #fafafa; }
.function-section h3 { margin-bottom: 10px; display: flex; align-items: center; gap: 10px; flex-wrap: wrap; }
.func-addr-badge { background: #e94560; color: #fff; padding: 3px 10px; border-radius: 12px;
                   font-size: 0.85em; font-weight: 700; font-family: monospace; }
.func-name { font-family: 'JetBrains Mono', 'Fira Code', monospace; font-size: 13px; color: #333; }
.prf-badges { margin-left: auto; font-size: 12px; }

/* badges */
.badge { display: inline-block; padding: 2px 8px; border-radius: 10px; font-size: 11px;
         font-weight: 700; color: #fff; margin-left: 2px; }

/* type table */
.type-table { font-size: 12px; width: 100%; }
.type-table th, .type-table td { padding: 4px 8px; border-bottom: 1px solid #eee; }
.type-table th { background: #78909c; color: #fff; font-size: 11px; }
.type-correct { background: #e8f5e9; }
.type-incorrect { background: #ffebee; }
.type-missing { background: #fff8e1; }
.var-details { margin-bottom: 10px; }
.var-details summary { cursor: pointer; font-weight: 600; font-size: 13px; color: #1565c0; margin-bottom: 6px; }

/* toggle / code */
.toggle-btn { background: #e3f2fd; border: 1px solid #90caf9; color: #1565c0; padding: 4px 14px;
              border-radius: 4px; cursor: pointer; font-size: 12px; font-weight: 600; margin-bottom: 8px; }
.toggle-btn:hover { background: #bbdefb; }
.code-container { margin-top: 4px; }
.code-block { background: #1e1e1e; border-radius: 4px; padding: 0; overflow-x: auto;
              white-space: pre; font-family: 'JetBrains Mono', 'Fira Code', 'Consolas', monospace;
              font-size: 12px; line-height: 1.5; margin: 0; max-height: 600px; overflow-y: auto; }
.code-block code { display: block; padding: 14px; }
.code-block.unavailable { color: #999; font-style: italic; padding: 14px; background: #f5f5f5; }

@media (max-width: 900px) {
    .metrics-row { flex-direction: column; }
    .metrics-grid { flex-direction: column; }
}
"""


def main():
    parser = argparse.ArgumentParser(description="Evaluate Oxidizer results against ground truth")
    parser.add_argument("--tag", default="nightly-2025-05-22-O3-inline", help="Dataset tag")
    parser.add_argument("--binary", action="append", default=None, dest="binaries",
                        help="Filter to specific binary (can be repeated). Default: all binaries.")
    parser.add_argument("--output", default=None, help="Output HTML file path")
    args = parser.parse_args()

    print(f"[*] Dataset: {args.tag}")
    print(f"[*] Binaries filter: {args.binaries or 'all'}")
    print(f"[*] Collecting data...")

    binaries, agg_type_eval = collect_data(args.tag, args.binaries)

    if not binaries:
        print("No functions found. Check paths.")
        return

    total_funcs = sum(len(b["functions"]) for b in binaries)
    print(f"[*] Found {len(binaries)} binaries, {total_funcs} functions")

    html_content = generate_html(args.tag, binaries, agg_type_eval)

    if args.output:
        out_path = Path(args.output)
    else:
        OUTPUT_DIR.mkdir(parents=True, exist_ok=True)
        ts = datetime.datetime.now().strftime("%Y%m%d_%H%M%S")
        out_path = OUTPUT_DIR / f"oxidizer_eval_{args.tag}_{ts}.html"

    out_path.parent.mkdir(parents=True, exist_ok=True)
    with open(out_path, "w", encoding="utf-8") as f:
        f.write(html_content)

    # Also save as latest
    latest_path = OUTPUT_DIR / f"latest_oxidizer_eval_{args.tag}.html"
    with open(latest_path, "w", encoding="utf-8") as f:
        f.write(html_content)

    # Clean up old reports (keep 10 most recent)
    pattern = f"oxidizer_eval_{args.tag}_*.html"
    html_files = sorted(OUTPUT_DIR.glob(pattern), key=lambda x: x.stat().st_mtime, reverse=True)
    for old_file in html_files[10:]:
        old_file.unlink()

    print(f"[*] HTML report: {out_path}")
    print(f"[*] Latest link: {latest_path}")


if __name__ == "__main__":
    main()
