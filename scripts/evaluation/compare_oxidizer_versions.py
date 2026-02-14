#!/usr/bin/env python3
"""
Compare decompilation results between two Oxidizer result directories.
Generates an HTML report with unified diffs for each function.
"""

import os
import sys
import json
import argparse
import datetime
from pathlib import Path


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


def load_json_data(path: Path) -> dict | None:
    if not path.exists():
        return None
    with open(path, "r") as f:
        return json.load(f)


def generate_diff_html(dir_a: Path, dir_b: Path, label_a: str, label_b: str, output_path: str):
    # Collect function files from both directories
    files_a = {f.stem for f in dir_a.glob("*.json")} if dir_a.exists() else set()
    files_b = {f.stem for f in dir_b.glob("*.json")} if dir_b.exists() else set()
    all_funcs = sorted(files_a | files_b)

    if not all_funcs:
        print(f"No JSON files found in either directory.")
        return

    print(f"Found {len(all_funcs)} functions ({len(files_a)} in {label_a}, {len(files_b)} in {label_b})")

    functions = []
    for func_addr in all_funcs:
        data_a = load_json_data(dir_a / f"{func_addr}.json")
        data_b = load_json_data(dir_b / f"{func_addr}.json")

        decomp_a = data_a.get("decompilation") if data_a else None
        decomp_b = data_b.get("decompilation") if data_b else None
        macros_a = data_a.get("macro_call_counts", {}) if data_a else {}
        macros_b = data_b.get("macro_call_counts", {}) if data_b else {}

        lines_a = decomp_a.splitlines(keepends=True) if decomp_a else []
        lines_b = decomp_b.splitlines(keepends=True) if decomp_b else []

        status = "unchanged"
        if func_addr not in files_b:
            status = "added"
        elif func_addr not in files_a:
            status = "removed"
        elif decomp_a != decomp_b:
            status = "changed"

        functions.append({
            "addr": func_addr,
            "status": status,
            "decomp_a": decomp_a,
            "decomp_b": decomp_b,
            "macros_a": macros_a,
            "macros_b": macros_b,
            "lines_a": len(lines_a),
            "lines_b": len(lines_b),
        })

    changed = sum(1 for f in functions if f["status"] == "changed")
    added = sum(1 for f in functions if f["status"] == "added")
    removed = sum(1 for f in functions if f["status"] == "removed")
    unchanged = sum(1 for f in functions if f["status"] == "unchanged")

    # Build HTML
    parts = []
    parts.append("<!DOCTYPE html>")
    parts.append("<html lang='en'>")
    parts.append("<head>")
    parts.append("  <meta charset='UTF-8'>")
    parts.append("  <meta name='viewport' content='width=device-width, initial-scale=1.0'>")
    parts.append(f"  <title>Diff: {escape_html(label_a)} vs {escape_html(label_b)}</title>")
    parts.append(f"  <style>{CSS}</style>")
    parts.append("  <link rel='stylesheet' href='https://cdnjs.cloudflare.com/ajax/libs/highlight.js/11.9.0/styles/github.min.css'>")
    parts.append("  <script src='https://cdnjs.cloudflare.com/ajax/libs/highlight.js/11.9.0/highlight.min.js'></script>")
    parts.append("  <script src='https://cdnjs.cloudflare.com/ajax/libs/highlight.js/11.9.0/languages/rust.min.js'></script>")
    parts.append("</head>")
    parts.append("<body>")

    parts.append(f"<h1>Decompilation Diff</h1>")
    parts.append(f"<p class='subtitle'>{escape_html(label_b)} &rarr; {escape_html(label_a)}</p>")
    parts.append(f"<p class='timestamp'>Generated: {datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S')}</p>")

    parts.append("<div class='summary'>")
    parts.append(f"  <span class='badge badge-changed'>{changed} changed</span>")
    parts.append(f"  <span class='badge badge-added'>{added} added</span>")
    parts.append(f"  <span class='badge badge-removed'>{removed} removed</span>")
    parts.append(f"  <span class='badge badge-unchanged'>{unchanged} unchanged</span>")
    parts.append("</div>")

    # Navigation - only show non-unchanged functions
    parts.append("<div class='nav'>")
    parts.append("  <b>Functions:</b> ")
    for func in functions:
        if func["status"] == "unchanged":
            continue
        cls = f"nav-{func['status']}"
        parts.append(f"  <a href='#func_{func['addr']}' class='{cls}'>0x{func['addr']}</a>")
    parts.append("</div>")

    # Function diffs
    for func in functions:
        if func["status"] == "unchanged":
            continue

        status_label = func["status"].capitalize()
        status_cls = f"status-{func['status']}"

        parts.append(f"<div class='function-section' id='func_{func['addr']}'>")
        parts.append(f"  <h2>0x{func['addr']} <span class='{status_cls}'>[{status_label}]</span></h2>")
        parts.append(f"  <p class='loc-info'>{label_b}: {func['lines_b']} lines &rarr; {label_a}: {func['lines_a']} lines</p>")

        # Macro calls comparison
        macros_a = func["macros_a"]
        macros_b = func["macros_b"]
        all_macros = sorted(set(macros_a) | set(macros_b))
        if all_macros:
            parts.append("  <h3>Macro Calls</h3>")
            parts.append("  <table class='macro-table'>")
            parts.append(f"    <thead><tr><th>Macro</th><th>{escape_html(label_b)}</th><th>{escape_html(label_a)}</th><th>Change</th></tr></thead>")
            parts.append("    <tbody>")
            for macro in all_macros:
                cnt_b = macros_b.get(macro, 0)
                cnt_a = macros_a.get(macro, 0)
                diff_val = cnt_a - cnt_b
                if diff_val > 0:
                    change = f"<span class='macro-added'>+{diff_val}</span>"
                elif diff_val < 0:
                    change = f"<span class='macro-removed'>{diff_val}</span>"
                else:
                    change = "<span class='macro-same'>0</span>"
                parts.append(f"      <tr><td><code>{escape_html(macro)}</code></td><td>{cnt_b}</td><td>{cnt_a}</td><td>{change}</td></tr>")
            parts.append("    </tbody></table>")

        # Side-by-side decompilation
        parts.append("  <h3>Decompiled Code</h3>")
        parts.append("  <div class='side-by-side'>")
        for side_label, decomp in [(label_b, func["decomp_b"]), (label_a, func["decomp_a"])]:
            parts.append("    <div class='code-column'>")
            parts.append(f"      <div class='col-header'>{escape_html(side_label)}</div>")
            if decomp:
                parts.append(f"      <pre class='code-block'><code class='language-rust'>{escape_html(decomp)}</code></pre>")
            else:
                parts.append("      <pre class='code-block unavailable'>Not available</pre>")
            parts.append("    </div>")
        parts.append("  </div>")

        parts.append("</div>")

    parts.append("<script>hljs.highlightAll();</script>")
    parts.append("</body></html>")

    Path(output_path).parent.mkdir(parents=True, exist_ok=True)
    with open(output_path, "w", encoding="utf-8") as f:
        f.write("\n".join(parts))
    print(f"HTML report saved to: {output_path}")


CSS = """
* { box-sizing: border-box; }
body {
    font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
    margin: 0; padding: 20px; background: #f0f2f5; color: #222; font-size: 14px;
}
h1 { margin-top: 0; margin-bottom: 4px; }
.subtitle { margin: 0 0 4px; font-size: 1.1em; color: #555; }
.timestamp { color: #888; font-size: 0.9em; margin-top: 0; }

.summary { margin: 16px 0; display: flex; gap: 12px; flex-wrap: wrap; }
.badge { padding: 6px 14px; border-radius: 16px; font-weight: 700; font-size: 13px; }
.badge-changed { background: #fff3e0; color: #e65100; }
.badge-added { background: #e8f5e9; color: #2e7d32; }
.badge-removed { background: #ffebee; color: #c62828; }
.badge-unchanged { background: #e3f2fd; color: #1565c0; }

.nav { position: sticky; top: 0; z-index: 100; background: #fff; padding: 10px 16px;
       box-shadow: 0 2px 4px rgba(0,0,0,.12); margin-bottom: 24px; border-radius: 4px;
       display: flex; flex-wrap: wrap; gap: 8px; align-items: center; }
.nav a { text-decoration: none; font-family: monospace; font-size: 13px; padding: 2px 6px;
         border-radius: 3px; }
.nav a:hover { text-decoration: underline; }
.nav-changed { color: #e65100; background: #fff3e0; }
.nav-added { color: #2e7d32; background: #e8f5e9; }
.nav-removed { color: #c62828; background: #ffebee; }

.function-section { background: #fff; padding: 20px; border-radius: 6px; margin-bottom: 24px;
                    box-shadow: 0 1px 3px rgba(0,0,0,.1); }
.function-section h2 { border-bottom: 2px solid #4CAF50; padding-bottom: 6px; margin-top: 0; }
.loc-info { color: #666; font-size: 13px; margin: 4px 0 12px; }
.status-changed { color: #e65100; font-size: 0.8em; }
.status-added { color: #2e7d32; font-size: 0.8em; }
.status-removed { color: #c62828; font-size: 0.8em; }

/* ── macro table ── */
.macro-table { width: auto; margin-bottom: 16px; }
.macro-table th, .macro-table td { padding: 6px 14px; }
.macro-added { color: #2e7d32; font-weight: 700; }
.macro-removed { color: #c62828; font-weight: 700; }
.macro-same { color: #888; }

/* ── side-by-side code ── */
.side-by-side { display: flex; gap: 16px; margin-bottom: 16px; }
.code-column { flex: 1; min-width: 0; }
.col-header { text-align: center; font-weight: 700; padding: 8px; background: #4CAF50;
              color: #fff; border-radius: 4px 4px 0 0; }
.code-block { background: #fafafa; border: 1px solid #ddd; border-top: none;
              border-radius: 0 0 4px 4px; padding: 0; overflow-x: auto;
              white-space: pre; font-family: 'JetBrains Mono', 'Fira Code', 'Consolas', monospace;
              font-size: 12px; line-height: 1.5; margin: 0; max-height: 800px; overflow-y: auto; }
.code-block code { display: block; padding: 14px; background: #fafafa; }
.code-block.unavailable { color: #999; font-style: italic; padding: 14px; }
h3 { margin-top: 20px; margin-bottom: 8px; color: #333; }
"""


def main():
    parser = argparse.ArgumentParser(
        description="Compare decompilation results between two Oxidizer result directories."
    )
    parser.add_argument("dir_a", help="Path to the first (new) result directory")
    parser.add_argument("dir_b", help="Path to the second (old/baseline) result directory")
    parser.add_argument("--label-a", default=None, help="Label for dir_a (default: directory name)")
    parser.add_argument("--label-b", default=None, help="Label for dir_b (default: directory name)")
    parser.add_argument("-o", "--output", default=None, help="Output HTML path")
    args = parser.parse_args()

    dir_a = Path(args.dir_a)
    dir_b = Path(args.dir_b)
    label_a = args.label_a or dir_a.parent.name + "/" + dir_a.name
    label_b = args.label_b or dir_b.parent.name + "/" + dir_b.name

    if args.output:
        out_path = args.output
    else:
        project_root = Path(__file__).parent.parent.parent
        out_dir = project_root / "output" / "html" / "diffs"
        out_path = str(out_dir / f"diff_{dir_a.name}_{label_a.replace('/', '_')}_vs_{label_b.replace('/', '_')}.html")

    generate_diff_html(dir_a, dir_b, label_a, label_b, out_path)


if __name__ == "__main__":
    main()