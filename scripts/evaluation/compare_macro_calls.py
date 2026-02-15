#!/usr/bin/env python3
"""
Compare macro_call_counts and decompilation between Oxidizer and Oxidizer.normal
for a specific binary. Generates an HTML report highlighting differences.
"""

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


def generate_report(result_dir: Path, binary: str, output_path: str):
    dir_ox = result_dir / "Oxidizer" / binary
    dir_normal = result_dir / "Oxidizer.normal" / binary

    if not dir_ox.exists():
        print(f"Error: {dir_ox} does not exist")
        return
    if not dir_normal.exists():
        print(f"Error: {dir_normal} does not exist")
        return

    files_ox = {f.stem for f in dir_ox.glob("*.json")}
    files_normal = {f.stem for f in dir_normal.glob("*.json")}
    all_funcs = sorted(files_ox | files_normal)

    if not all_funcs:
        print("No JSON files found.")
        return

    functions = []
    for addr in all_funcs:
        data_ox = load_json_data(dir_ox / f"{addr}.json")
        data_normal = load_json_data(dir_normal / f"{addr}.json")

        decomp_ox = data_ox.get("decompilation") if data_ox else None
        decomp_normal = data_normal.get("decompilation") if data_normal else None
        macros_ox = data_ox.get("macro_call_counts", {}) if data_ox else {}
        macros_normal = data_normal.get("macro_call_counts", {}) if data_normal else {}

        macro_diff = macros_ox != macros_normal
        decomp_diff = decomp_ox != decomp_normal

        functions.append({
            "addr": addr,
            "decomp_ox": decomp_ox,
            "decomp_normal": decomp_normal,
            "macros_ox": macros_ox,
            "macros_normal": macros_normal,
            "macro_diff": macro_diff,
            "decomp_diff": decomp_diff,
            "lines_ox": len(decomp_ox.splitlines()) if decomp_ox else 0,
            "lines_normal": len(decomp_normal.splitlines()) if decomp_normal else 0,
        })

    # Sort: macro diffs first, then by address
    functions.sort(key=lambda f: (not f["macro_diff"], f["addr"]))

    n_macro_diff = sum(1 for f in functions if f["macro_diff"])
    n_decomp_diff = sum(1 for f in functions if f["decomp_diff"])
    dataset = result_dir.name

    parts = []
    parts.append("<!DOCTYPE html>")
    parts.append("<html lang='en'>")
    parts.append("<head>")
    parts.append("  <meta charset='UTF-8'>")
    parts.append("  <meta name='viewport' content='width=device-width, initial-scale=1.0'>")
    parts.append(f"  <title>Macro Diff: {escape_html(binary)} ({escape_html(dataset)})</title>")
    parts.append(f"  <style>{CSS}</style>")
    parts.append("  <link rel='stylesheet' href='https://cdnjs.cloudflare.com/ajax/libs/highlight.js/11.9.0/styles/github.min.css'>")
    parts.append("  <script src='https://cdnjs.cloudflare.com/ajax/libs/highlight.js/11.9.0/highlight.min.js'></script>")
    parts.append("  <script src='https://cdnjs.cloudflare.com/ajax/libs/highlight.js/11.9.0/languages/rust.min.js'></script>")
    parts.append("</head>")
    parts.append("<body>")

    parts.append(f"<h1>Macro Call Diff: <code>{escape_html(binary)}</code></h1>")
    parts.append(f"<p class='subtitle'>Dataset: {escape_html(dataset)} &mdash; Oxidizer vs Oxidizer.normal</p>")
    parts.append(f"<p class='timestamp'>Generated: {datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S')}</p>")

    parts.append("<div class='summary'>")
    parts.append(f"  <span class='badge badge-total'>{len(functions)} functions</span>")
    parts.append(f"  <span class='badge badge-macro-diff'>{n_macro_diff} macro diffs</span>")
    parts.append(f"  <span class='badge badge-decomp-diff'>{n_decomp_diff} decompilation diffs</span>")
    parts.append("</div>")

    # Navigation
    parts.append("<div class='nav'>")
    parts.append("  <b>Functions:</b> ")
    for func in functions:
        cls = "nav-diff" if func["macro_diff"] else "nav-same"
        parts.append(f"  <a href='#func_{func['addr']}' class='{cls}'>0x{func['addr']}</a>")
    parts.append("</div>")

    # Per-function sections
    for func in functions:
        has_macro_diff = func["macro_diff"]
        border_cls = "section-diff" if has_macro_diff else "section-same"

        parts.append(f"<div class='function-section {border_cls}' id='func_{func['addr']}'>")
        if has_macro_diff:
            parts.append(f"  <h2>0x{func['addr']} <span class='status-diff'>[Macro Diff]</span></h2>")
        else:
            parts.append(f"  <h2>0x{func['addr']} <span class='status-same'>[Same]</span></h2>")

        # Macro calls table
        macros_ox = func["macros_ox"]
        macros_normal = func["macros_normal"]
        all_macros = sorted(set(macros_ox) | set(macros_normal))

        parts.append("  <h3>Macro Calls</h3>")
        if all_macros:
            parts.append("  <table class='macro-table'>")
            parts.append("    <thead><tr><th>Macro</th><th>Oxidizer</th><th>Oxidizer.normal</th><th>Diff</th></tr></thead>")
            parts.append("    <tbody>")
            for macro in all_macros:
                cnt_ox = macros_ox.get(macro, 0)
                cnt_normal = macros_normal.get(macro, 0)
                diff_val = cnt_ox - cnt_normal
                if diff_val > 0:
                    change = f"<span class='macro-added'>+{diff_val}</span>"
                elif diff_val < 0:
                    change = f"<span class='macro-removed'>{diff_val}</span>"
                else:
                    change = "<span class='macro-same'>0</span>"
                row_cls = ' class="row-diff"' if diff_val != 0 else ""
                parts.append(f"      <tr{row_cls}><td><code>{escape_html(macro)}</code></td><td>{cnt_ox}</td><td>{cnt_normal}</td><td>{change}</td></tr>")
            parts.append("    </tbody></table>")
        else:
            parts.append("  <p class='no-macros'>No macros detected in either version.</p>")

        # Side-by-side decompilation
        parts.append(f"  <h3>Decompilation ({func['lines_ox']} / {func['lines_normal']} lines)</h3>")
        parts.append("  <div class='side-by-side'>")
        for label, decomp in [("Oxidizer", func["decomp_ox"]), ("Oxidizer.normal", func["decomp_normal"])]:
            parts.append("    <div class='code-column'>")
            parts.append(f"      <div class='col-header'>{escape_html(label)}</div>")
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
h1 code { background: #e8eaf6; padding: 2px 8px; border-radius: 4px; }
.subtitle { margin: 0 0 4px; font-size: 1.1em; color: #555; }
.timestamp { color: #888; font-size: 0.9em; margin-top: 0; }

.summary { margin: 16px 0; display: flex; gap: 12px; flex-wrap: wrap; }
.badge { padding: 6px 14px; border-radius: 16px; font-weight: 700; font-size: 13px; }
.badge-total { background: #e3f2fd; color: #1565c0; }
.badge-macro-diff { background: #fff3e0; color: #e65100; }
.badge-decomp-diff { background: #f3e5f5; color: #7b1fa2; }

.nav { position: sticky; top: 0; z-index: 100; background: #fff; padding: 10px 16px;
       box-shadow: 0 2px 4px rgba(0,0,0,.12); margin-bottom: 24px; border-radius: 4px;
       display: flex; flex-wrap: wrap; gap: 8px; align-items: center; }
.nav a { text-decoration: none; font-family: monospace; font-size: 13px; padding: 2px 6px;
         border-radius: 3px; }
.nav a:hover { text-decoration: underline; }
.nav-diff { color: #e65100; background: #fff3e0; }
.nav-same { color: #888; background: #f5f5f5; }

.function-section { background: #fff; padding: 20px; border-radius: 6px; margin-bottom: 24px;
                    box-shadow: 0 1px 3px rgba(0,0,0,.1); }
.section-diff { border-left: 4px solid #e65100; }
.section-same { border-left: 4px solid #ccc; }
.function-section h2 { border-bottom: 2px solid #4CAF50; padding-bottom: 6px; margin-top: 0; }
.status-diff { color: #e65100; font-size: 0.8em; }
.status-same { color: #888; font-size: 0.8em; }

.macro-table { width: auto; margin-bottom: 16px; border-collapse: collapse; }
.macro-table th, .macro-table td { padding: 6px 14px; border: 1px solid #e0e0e0; }
.macro-table thead { background: #f5f5f5; }
.row-diff { background: #fff8e1; }
.macro-added { color: #2e7d32; font-weight: 700; }
.macro-removed { color: #c62828; font-weight: 700; }
.macro-same { color: #888; }
.no-macros { color: #999; font-style: italic; }

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
        description="Compare macro_call_counts between Oxidizer and Oxidizer.normal for a binary."
    )
    parser.add_argument("result_dir", help="Path to the result dataset directory (e.g. output/result/nightly-2025-05-22-O3)")
    parser.add_argument("binary", help="Binary name (e.g. nl)")
    parser.add_argument("-o", "--output", default=None, help="Output HTML path")
    args = parser.parse_args()

    result_dir = Path(args.result_dir)
    binary = args.binary

    if args.output:
        out_path = args.output
    else:
        project_root = Path(__file__).parent.parent.parent
        out_dir = project_root / "output" / "html" / "macro_diffs"
        out_path = str(out_dir / f"{result_dir.name}_{binary}.html")

    generate_report(result_dir, binary, out_path)


if __name__ == "__main__":
    main()
