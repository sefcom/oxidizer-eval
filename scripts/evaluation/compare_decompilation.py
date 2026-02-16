#!/usr/bin/env python3
"""
Compare decompilation results across multiple decompilers for a given dataset.
Generates an HTML report with:
  - Aggregate conciseness metrics (avg/median) per decompiler
  - Per-binary navigation and per-function side-by-side decompilation
  - Metric bars per function with winner highlighting
  - Configurable decompiler set and dataset tag

Usage:
    python scripts/evaluation/compare_decompilation.py --tag malware
    python scripts/evaluation/compare_decompilation.py --tag malware --decompilers Oxidizer IDA angr
    python scripts/evaluation/compare_decompilation.py --tag nightly-2025-05-22-O3 --decompilers Oxidizer IDA
"""

import json
import re
import datetime
import argparse
import statistics
from pathlib import Path
from collections import defaultdict
from typing import Dict, List, Optional, Tuple

SCRIPT_DIR = Path(__file__).parent
PROJECT_ROOT = SCRIPT_DIR.parent.parent
RESULT_DIR = PROJECT_ROOT / "output" / "result"
OUTPUT_DIR = PROJECT_ROOT / "output" / "html" / "comparisons"

# Decompiler display configuration: color, syntax language, abbreviation
DECOMPILER_STYLES = {
    "Oxidizer": {"color": "#4CAF50", "lang": "rust", "short": "Ox"},
    "Oxidizer.ndss": {"color": "#388E3C", "lang": "rust", "short": "Ox.ndss"},
    "IDA": {"color": "#1565c0", "lang": "c", "short": "IDA"},
    "angr": {"color": "#e65100", "lang": "c", "short": "angr"},
    "Ghidra": {"color": "#7b1fa2", "lang": "c", "short": "Ghidra"},
    "Binary Ninja": {"color": "#00838f", "lang": "c", "short": "BN"},
    "Binary Ninja (Pseudo Rust)": {"color": "#00695c", "lang": "rust", "short": "BN-Rust"},
    "GhidRust": {"color": "#558b2f", "lang": "rust", "short": "GhidRust"},
}

DEFAULT_COLOR = "#607d8b"
DEFAULT_LANG = "c"


# ─────────────────────── Metric computation ───────────────────────


def compute_loc(code: str) -> int:
    return code.count("\n")


def compute_num_variables(code: str) -> int:
    n = 0
    started = False
    for line in code.splitlines():
        if line.endswith("{"):
            started = True
        elif started:
            if line.strip() == "":
                break
            n += 1
    return n


def compute_num_gotos(code: str) -> int:
    return len(re.findall(r"goto .*;", code))


def compute_num_operators(code: str) -> int:
    output = code
    pointer_types = [
        "***", "**", "void *", "char *", "const char *", "unsigned char *",
        "_BYTE *", "_WORD *", "_DWORD *", "_QWORD *", "_OWORD *",
        "&i8", "&i16", "&i32", "&i64", "&i128", "&isize",
        "&u8", "&u16", "&u32", "&u64", "&u128", "&usize",
        "&struct", "*mut", "&str",
    ]
    for pt in pointer_types:
        output = output.replace(pt, "")
    output = re.sub(r'"(\\.|[^"\\])*"', '""', output)
    output = re.sub(r"//.*|/\*.*?\*/", "", output)
    output = output.replace("->", "")
    operators = [
        " + ", " -", " * ", " / ", " % ", " == ", " != ",
        " > ", " < ", " >= ", " <= ", " && ", " || ",
        " & ", " | ", "!", "^", "~", " << ", " >> ",
        " += ", " -= ", " *= ", " /= ", " %= ",
        " &= ", " |= ", " ^= ", " <<= ", " >>= ",
    ]
    result = sum(output.count(op) for op in operators)
    for op in operators:
        output = output.replace(op, "")
    result += sum(output.count(op) for op in ["*", "&"])
    return result


def compute_mcc(code: str) -> Optional[int]:
    """McCabe Cyclomatic Complexity (regex-based, same logic as eval)."""
    code = code.replace("/* no return */", "").replace("__noreturn", "").replace("/* do not return */", "")

    control_regexes = [
        r"if .*", r"  for .*", r" while .*", r"  loop",
        r"\) =>", r"_ =>", r"&&", r"\|\|", r" \? ",
        r"case .*:", r"default:",
    ]
    decision_points = 0
    for regex in control_regexes:
        decision_points += len(re.findall(regex, code))

    # Match arms: 1 | 3 | 5 =>
    cleaned = " ".join(code.replace("\n", " ").split())
    arm_pattern = r"((?:0x[a-fA-F0-9]+|\d+)(?:\s*\|\s*(?:0x[a-fA-F0-9]+|\d+))*)\s*=>"
    for match in re.findall(arm_pattern, cleaned):
        arms = [p.strip() for p in match.split("|") if p.strip()]
        decision_points += len(arms)

    # Count exits
    returns = re.findall(r"return\b", code)
    exits = len(returns)
    code_lines = code.split("\n")

    for i, line in enumerate(code_lines[::-1]):
        if line.startswith("}"):
            break
    else:
        return None

    last_line = code_lines[-(i + 2)]
    for line in reversed(code_lines[: -(i + 2)]):
        if not line.strip().endswith(";"):
            last_line = line.strip() + " " + last_line
        else:
            break

    for idx in range(len(code_lines) - (i + 3)):
        line = code_lines[idx].strip()
        next_line = code_lines[idx + 1].strip() if idx + 1 < len(code_lines) else ""
        if not line.endswith(";") and line != "}" and next_line == "}":
            exits += 1

    if not re.findall(r"return\b", last_line):
        exits += 1

    if exits <= 1:
        return decision_points + 1
    return decision_points - exits + 2


# All metrics: (name, function, lower_is_better)
METRICS = [
    ("MCC", compute_mcc, True),
    ("LoC", compute_loc, True),
    ("# Variables", compute_num_variables, True),
    ("# Operators", compute_num_operators, True),
    ("# Gotos", compute_num_gotos, True),
]


# ─────────────────────── Data loading ───────────────────────


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


def load_decompilation(path: Path) -> Optional[str]:
    if not path.exists():
        return None
    try:
        with open(path) as f:
            data = json.load(f)
        decomp = data.get("decompilation", "")
        return decomp if decomp else None
    except (json.JSONDecodeError, KeyError):
        return None


def discover_decompilers(tag_dir: Path) -> List[str]:
    """Auto-discover available decompilers for a tag."""
    if not tag_dir.exists():
        return []
    return sorted(d.name for d in tag_dir.iterdir() if d.is_dir())


def collect_data(
    tag: str, decompilers: List[str]
) -> Tuple[List[dict], Dict[str, Dict[str, float]]]:
    """
    Returns:
      binaries: list of {name, functions: [{addr, decomps: {dec: code}, metrics: {metric: {dec: val}}}]}
      aggregate: {metric: {dec: [values]}}
    """
    tag_dir = RESULT_DIR / tag

    # Find binaries present in ALL requested decompilers
    bin_sets = []
    for dec in decompilers:
        dec_dir = tag_dir / dec
        if dec_dir.exists():
            bin_sets.append({d.name for d in dec_dir.iterdir() if d.is_dir()})
        else:
            bin_sets.append(set())

    if not bin_sets:
        return [], {}

    # Use union of binaries; a function needs at least 2 decompilers to be included
    all_bins = sorted(set().union(*bin_sets))

    binaries = []
    aggregate = {m_name: defaultdict(list) for m_name, _, _ in METRICS}

    for binary in all_bins:
        # Find functions: union of all decompilers
        func_sets = {}
        for dec in decompilers:
            func_dir = tag_dir / dec / binary
            if func_dir.exists():
                func_sets[dec] = {f.stem for f in func_dir.glob("*.json")}
            else:
                func_sets[dec] = set()

        all_funcs = sorted(set().union(*func_sets.values()))
        if not all_funcs:
            continue

        functions = []
        for addr in all_funcs:
            decomps = {}
            available_count = 0
            for dec in decompilers:
                if addr in func_sets.get(dec, set()):
                    code = load_decompilation(tag_dir / dec / binary / f"{addr}.json")
                    if code:
                        decomps[dec] = code
                        available_count += 1

            # Need at least 2 decompilers for meaningful comparison
            if available_count < 2:
                continue

            # Compute metrics
            func_metrics = {}
            for m_name, m_func, _ in METRICS:
                func_metrics[m_name] = {}
                for dec, code in decomps.items():
                    val = m_func(code)
                    if val is not None:
                        func_metrics[m_name][dec] = val
                        aggregate[m_name][dec].append(val)

            # Extract function name from first decompiler that has it
            func_name = f"0x{addr}"
            for dec in decompilers:
                code = decomps.get(dec, "")
                if code:
                    first_line = code.split("\n")[0]
                    if "fn " in first_line:
                        func_name = first_line.split("fn ")[1].split("(")[0].strip()
                    elif "__fastcall" in first_line or "__int64" in first_line:
                        # IDA style: extract name after return type
                        m = re.search(r"(?:__fastcall\s+)?(\S+::\S+)\s*\(", first_line)
                        if m:
                            func_name = m.group(1)
                    break

            functions.append({
                "addr": addr,
                "name": func_name,
                "decomps": decomps,
                "metrics": func_metrics,
            })

        if functions:
            binaries.append({
                "name": binary,
                "functions": functions,
            })

    return binaries, aggregate


# ─────────────────────── HTML generation ───────────────────────


def dec_color(dec: str) -> str:
    return DECOMPILER_STYLES.get(dec, {}).get("color", DEFAULT_COLOR)


def dec_lang(dec: str) -> str:
    return DECOMPILER_STYLES.get(dec, {}).get("lang", DEFAULT_LANG)


def dec_short(dec: str) -> str:
    return DECOMPILER_STYLES.get(dec, {}).get("short", dec[:6])


def generate_html(
    tag: str,
    decompilers: List[str],
    binaries: List[dict],
    aggregate: Dict[str, Dict[str, list]],
) -> str:
    total_funcs = sum(len(b["functions"]) for b in binaries)
    ts = datetime.datetime.now().strftime("%Y-%m-%d %H:%M:%S")

    p = []  # parts
    p.append("<!DOCTYPE html>")
    p.append("<html lang='en'>")
    p.append("<head>")
    p.append("  <meta charset='UTF-8'>")
    p.append("  <meta name='viewport' content='width=device-width, initial-scale=1.0'>")
    p.append(f"  <title>Decompilation Comparison: {escape_html(tag)}</title>")
    p.append(f"  <style>{CSS}</style>")
    p.append("  <link rel='stylesheet' href='https://cdnjs.cloudflare.com/ajax/libs/highlight.js/11.9.0/styles/github.min.css'>")
    p.append("  <script src='https://cdnjs.cloudflare.com/ajax/libs/highlight.js/11.9.0/highlight.min.js'></script>")
    p.append("  <script src='https://cdnjs.cloudflare.com/ajax/libs/highlight.js/11.9.0/languages/rust.min.js'></script>")
    p.append("  <script src='https://cdnjs.cloudflare.com/ajax/libs/highlight.js/11.9.0/languages/c.min.js'></script>")
    p.append("</head>")
    p.append("<body>")

    # ── Header ──
    p.append(f"<h1>Decompilation Comparison</h1>")
    p.append(f"<p class='subtitle'>Dataset: <b>{escape_html(tag)}</b></p>")
    p.append(f"<p class='timestamp'>Generated: {ts}</p>")

    # ── Summary badges ──
    p.append("<div class='summary-badges'>")
    p.append(f"  <span class='badge badge-total'>{len(binaries)} binaries</span>")
    p.append(f"  <span class='badge badge-funcs'>{total_funcs} functions</span>")
    for dec in decompilers:
        n = sum(len(aggregate[METRICS[0][0]].get(dec, [])) for _ in [1])
        n = len(aggregate["LoC"].get(dec, []))
        color = dec_color(dec)
        p.append(f"  <span class='badge' style='background:{color}22;color:{color};border:1px solid {color}'>{escape_html(dec)}: {n} funcs</span>")
    p.append("</div>")

    # ── Aggregate metrics table ──
    p.append(_html_aggregate_table(decompilers, aggregate))

    # ── Binary navigation ──
    p.append("<div class='nav' id='top-nav'>")
    p.append("  <b>Binaries:</b> ")
    for b in binaries:
        short_name = b["name"][:20] + ("..." if len(b["name"]) > 20 else "")
        p.append(
            f"  <a href='#bin_{b['name']}' title='{escape_html(b['name'])}'>"
            f"{escape_html(short_name)} ({len(b['functions'])})</a>"
        )
    p.append("</div>")

    # ── Per-binary sections ──
    for b in binaries:
        p.append(_html_binary_section(b, decompilers))

    p.append("<script>hljs.highlightAll();</script>")
    p.append(_js_toggle())
    p.append("</body></html>")

    return "\n".join(p)


def _html_aggregate_table(decompilers: List[str], aggregate: Dict[str, Dict[str, list]]) -> str:
    lines = []
    lines.append("<div class='section'>")
    lines.append("  <h2>Aggregate Conciseness Metrics</h2>")
    lines.append("  <table class='agg-table'>")

    # Header row
    lines.append("    <thead><tr>")
    lines.append("      <th rowspan='2'>Metric</th>")
    for dec in decompilers:
        color = dec_color(dec)
        lines.append(f"      <th colspan='2' style='text-align:center;border-bottom:3px solid {color}'>{escape_html(dec)}</th>")
    lines.append("    </tr><tr>")
    for _ in decompilers:
        lines.append("      <th>Avg.</th><th>Med.</th>")
    lines.append("    </tr></thead>")

    lines.append("    <tbody>")
    for m_name, _, lower_is_better in METRICS:
        vals_per_dec = {}
        for dec in decompilers:
            v = aggregate.get(m_name, {}).get(dec, [])
            if v:
                vals_per_dec[dec] = (statistics.mean(v), statistics.median(v))
            else:
                vals_per_dec[dec] = (None, None)

        # Find winner (best average)
        valid_avgs = {d: v[0] for d, v in vals_per_dec.items() if v[0] is not None}
        if valid_avgs:
            if lower_is_better:
                best_avg = min(valid_avgs.values())
            else:
                best_avg = max(valid_avgs.values())
        else:
            best_avg = None

        lines.append("      <tr>")
        lines.append(f"        <td class='metric-name'>{m_name}</td>")
        for dec in decompilers:
            avg, med = vals_per_dec[dec]
            if avg is not None:
                avg_cls = " class='winner'" if avg == best_avg and len(valid_avgs) > 1 else ""
                lines.append(f"        <td{avg_cls}><b>{avg:.2f}</b></td>")
                lines.append(f"        <td>{med:.0f}</td>")
            else:
                lines.append("        <td>–</td><td>–</td>")
        lines.append("      </tr>")

    lines.append("    </tbody></table>")
    lines.append("</div>")
    return "\n".join(lines)


def _html_binary_section(binary: dict, decompilers: List[str]) -> str:
    lines = []
    bname = binary["name"]
    funcs = binary["functions"]

    lines.append(f"<div class='binary-section' id='bin_{bname}'>")
    lines.append(f"  <h2>{escape_html(bname)} <span class='func-count'>({len(funcs)} functions)</span></h2>")

    # Function navigation
    if len(funcs) > 1:
        lines.append("  <div class='func-nav'>")
        for func in funcs:
            label = f"0x{func['addr']}"
            lines.append(f"    <a href='#func_{bname}_{func['addr']}' title='{escape_html(func['name'])}'>{label}</a>")
        lines.append("  </div>")

    # Per-function
    for func in funcs:
        lines.append(_html_function_section(bname, func, decompilers))

    lines.append("</div>")
    return "\n".join(lines)


def _html_function_section(bname: str, func: dict, decompilers: List[str]) -> str:
    lines = []
    fid = f"{bname}_{func['addr']}"
    addr = func["addr"]
    name = func["name"]
    decomps = func["decomps"]
    metrics = func["metrics"]

    lines.append(f"<div class='function-section' id='func_{fid}'>")

    # Header with function name and available decompiler badges
    avail_badges = ""
    for dec in decompilers:
        color = dec_color(dec)
        if dec in decomps:
            loc = compute_loc(decomps[dec])
            avail_badges += f" <span class='dec-badge' style='background:{color}'>{dec_short(dec)} {loc}L</span>"
        else:
            avail_badges += f" <span class='dec-badge dec-badge-missing' style='border-color:{color};color:{color}'>{dec_short(dec)}</span>"
    lines.append(f"  <h3>0x{addr} – <span class='fname'>{escape_html(name)}</span>{avail_badges}</h3>")

    # Metric bar
    lines.append("  <div class='metric-bar'>")
    lines.append("    <table class='compact-table'>")
    lines.append("      <thead><tr><th>Metric</th>")
    for dec in decompilers:
        lines.append(f"        <th>{escape_html(dec)}</th>")
    lines.append("      </tr></thead><tbody>")

    for m_name, _, lower_is_better in METRICS:
        m_vals = metrics.get(m_name, {})
        valid = {d: v for d, v in m_vals.items() if v is not None}
        if valid:
            best = min(valid.values()) if lower_is_better else max(valid.values())
        else:
            best = None

        lines.append("        <tr>")
        lines.append(f"          <td class='metric-name'>{m_name}</td>")
        for dec in decompilers:
            val = m_vals.get(dec)
            if val is not None:
                cls = " class='winner'" if val == best and len(valid) > 1 else ""
                lines.append(f"          <td{cls}>{val}</td>")
            else:
                lines.append("          <td class='na'>–</td>")
        lines.append("        </tr>")

    lines.append("      </tbody></table>")
    lines.append("  </div>")

    # Side-by-side code (collapsible)
    lines.append(f"  <button class='toggle-btn' onclick='toggleCode(\"{fid}\")'>Show / Hide Code</button>")
    lines.append(f"  <div class='code-container' id='code_{fid}'>")
    lines.append("    <div class='side-by-side'>")

    for dec in decompilers:
        color = dec_color(dec)
        lang = dec_lang(dec)
        lines.append("      <div class='code-column'>")
        lines.append(f"        <div class='col-header' style='background:{color}'>{escape_html(dec)}</div>")
        code = decomps.get(dec)
        if code:
            lines.append(f"        <pre class='code-block'><code class='language-{lang}'>{escape_html(code)}</code></pre>")
        else:
            lines.append("        <pre class='code-block unavailable'>Not available</pre>")
        lines.append("      </div>")

    lines.append("    </div>")  # side-by-side
    lines.append("  </div>")  # code-container
    lines.append("</div>")  # function-section
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
// Collapse all code blocks by default for large reports
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


# ─────────────────────── CSS ───────────────────────


CSS = """
* { box-sizing: border-box; }
body {
    font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
    margin: 0; padding: 20px; background: #f0f2f5; color: #222; font-size: 14px;
}
h1 { margin-top: 0; margin-bottom: 4px; }
.subtitle { margin: 0 0 2px; font-size: 1.1em; color: #555; }
.timestamp { color: #888; font-size: 0.9em; margin-top: 0; margin-bottom: 16px; }

/* ── badges ── */
.summary-badges { margin-bottom: 20px; display: flex; gap: 10px; flex-wrap: wrap; }
.badge { padding: 6px 14px; border-radius: 16px; font-weight: 700; font-size: 13px; }
.badge-total { background: #e3f2fd; color: #1565c0; }
.badge-funcs { background: #e8f5e9; color: #2e7d32; }

/* ── tables ── */
table { border-collapse: collapse; width: 100%; background: #fff; margin-bottom: 16px;
        box-shadow: 0 1px 3px rgba(0,0,0,.08); border-radius: 4px; overflow: hidden; }
th, td { padding: 10px 14px; text-align: left; border-bottom: 1px solid #eee; }
th { background: #37474f; color: #fff; font-weight: 600; }
tr:hover { background: #f9f9f9; }
.metric-name { font-weight: 600; white-space: nowrap; }
.winner { font-weight: 700; color: #2e7d32; background: #e8f5e9; }
.na { color: #bbb; }
.agg-table th { position: sticky; top: 0; z-index: 2; }
.compact-table { font-size: 13px; }
.compact-table th, .compact-table td { padding: 6px 12px; }

/* ── sections ── */
.section { background: #fff; padding: 20px; border-radius: 6px; margin-bottom: 24px;
           box-shadow: 0 1px 3px rgba(0,0,0,.1); }

/* ── nav ── */
.nav { position: sticky; top: 0; z-index: 100; background: #fff; padding: 10px 16px;
       box-shadow: 0 2px 4px rgba(0,0,0,.12); margin-bottom: 24px; border-radius: 4px;
       display: flex; flex-wrap: wrap; gap: 8px; align-items: center; }
.nav a { text-decoration: none; font-family: monospace; font-size: 13px; padding: 2px 8px;
         border-radius: 3px; color: #1565c0; background: #e3f2fd; }
.nav a:hover { text-decoration: underline; background: #bbdefb; }

/* ── binary ── */
.binary-section { background: #fff; padding: 20px; border-radius: 6px; margin-bottom: 24px;
                  box-shadow: 0 1px 3px rgba(0,0,0,.1); border-left: 4px solid #1565c0; }
.binary-section h2 { border-bottom: 2px solid #37474f; padding-bottom: 6px; margin-top: 0; }
.func-count { font-size: 0.8em; color: #888; font-weight: normal; }

.func-nav { margin-bottom: 16px; display: flex; flex-wrap: wrap; gap: 6px; }
.func-nav a { text-decoration: none; font-family: monospace; font-size: 12px; padding: 2px 6px;
              border-radius: 3px; color: #555; background: #f5f5f5; }
.func-nav a:hover { text-decoration: underline; background: #e0e0e0; }

/* ── function ── */
.function-section { margin-bottom: 24px; padding: 16px; border: 1px solid #e0e0e0;
                    border-radius: 6px; background: #fafafa; }
.function-section h3 { margin-top: 0; margin-bottom: 10px; color: #333; font-size: 15px; }
.fname { font-family: 'JetBrains Mono', 'Fira Code', monospace; font-size: 13px; color: #555; }

.dec-badge { display: inline-block; padding: 2px 8px; border-radius: 10px; font-size: 11px;
             font-weight: 700; color: #fff; margin-left: 4px; vertical-align: middle; }
.dec-badge-missing { background: transparent !important; border: 1px dashed; font-weight: 400; }

.metric-bar { margin-bottom: 10px; }

/* ── toggle ── */
.toggle-btn { background: #e3f2fd; border: 1px solid #90caf9; color: #1565c0; padding: 4px 14px;
              border-radius: 4px; cursor: pointer; font-size: 12px; font-weight: 600;
              margin-bottom: 8px; }
.toggle-btn:hover { background: #bbdefb; }

/* ── code ── */
.code-container { margin-top: 4px; }
.side-by-side { display: flex; gap: 12px; }
.code-column { flex: 1; min-width: 0; }
.col-header { text-align: center; font-weight: 700; padding: 8px; color: #fff;
              border-radius: 4px 4px 0 0; font-size: 13px; }
.code-block { background: #fafafa; border: 1px solid #ddd; border-top: none;
              border-radius: 0 0 4px 4px; padding: 0; overflow-x: auto;
              white-space: pre; font-family: 'JetBrains Mono', 'Fira Code', 'Consolas', monospace;
              font-size: 12px; line-height: 1.5; margin: 0; max-height: 800px; overflow-y: auto; }
.code-block code { display: block; padding: 14px; background: #fafafa; }
.code-block.unavailable { color: #999; font-style: italic; padding: 14px; }

/* ── responsive ── */
@media (max-width: 1200px) {
    .side-by-side { flex-direction: column; }
}
"""


# ─────────────────────── CLI ───────────────────────


def main():
    parser = argparse.ArgumentParser(
        description="Compare decompilation results across multiple decompilers. Generates an HTML report.",
    )
    parser.add_argument(
        "--tag",
        default="malware",
        help="Dataset tag (subdirectory under output/result/). Default: malware",
    )
    parser.add_argument(
        "--decompilers",
        nargs="+",
        default=None,
        help="Decompilers to compare (default: auto-detect all available). "
             "Example: --decompilers Oxidizer IDA angr",
    )
    parser.add_argument(
        "--output",
        default=None,
        help="Output HTML path (default: output/html/comparisons/<tag>_comparison.html)",
    )
    args = parser.parse_args()

    tag_dir = RESULT_DIR / args.tag
    if not tag_dir.exists():
        print(f"Error: result directory not found: {tag_dir}")
        return

    # Discover or use specified decompilers
    if args.decompilers:
        decompilers = args.decompilers
    else:
        decompilers = discover_decompilers(tag_dir)

    if not decompilers:
        print("No decompilers found.")
        return

    print(f"Dataset:      {args.tag}")
    print(f"Decompilers:  {', '.join(decompilers)}")
    print(f"Collecting data...")

    binaries, aggregate = collect_data(args.tag, decompilers)

    if not binaries:
        print("No functions found with at least 2 decompilers. Nothing to compare.")
        return

    total_funcs = sum(len(b["functions"]) for b in binaries)
    print(f"Found {len(binaries)} binaries, {total_funcs} functions")

    html = generate_html(args.tag, decompilers, binaries, aggregate)

    if args.output:
        out_path = Path(args.output)
    else:
        out_path = OUTPUT_DIR / f"{args.tag}_comparison.html"

    out_path.parent.mkdir(parents=True, exist_ok=True)
    with open(out_path, "w", encoding="utf-8") as f:
        f.write(html)

    print(f"HTML report saved to: {out_path}")


if __name__ == "__main__":
    main()
