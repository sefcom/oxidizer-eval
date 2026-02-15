#!/usr/bin/env python3
"""
Compare Ghidra and GhidRust decompilation output side-by-side.
Generates an HTML report across all binaries in a result dataset.
"""

import json
import datetime
import argparse
from pathlib import Path


RESULT_DIR = Path(__file__).parent.parent.parent / "output" / "result"
OUTPUT_DIR = Path(__file__).parent.parent.parent / "output" / "html" / "ghidra_vs_ghidrust"


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


def load_json(path: Path) -> dict | None:
    if not path.exists():
        return None
    with open(path, "r") as f:
        return json.load(f)


def generate_report(tag: str):
    ghidra_dir = RESULT_DIR / tag / "Ghidra"
    ghidrust_dir = RESULT_DIR / tag / "GhidRust"

    if not ghidra_dir.exists():
        print(f"Error: {ghidra_dir} does not exist")
        return
    if not ghidrust_dir.exists():
        print(f"Error: {ghidrust_dir} does not exist")
        return

    # Find binaries present in both
    ghidra_bins = {d.name for d in ghidra_dir.iterdir() if d.is_dir()}
    ghidrust_bins = {d.name for d in ghidrust_dir.iterdir() if d.is_dir()}
    common_bins = sorted(ghidra_bins & ghidrust_bins)

    if not common_bins:
        print("No common binaries found.")
        return

    # Collect all function comparisons grouped by binary
    binaries = []
    total_funcs = 0
    ghidra_only_count = 0
    ghidrust_only_count = 0

    for binary in common_bins:
        ghidra_funcs = {f.stem for f in (ghidra_dir / binary).glob("*.json")}
        ghidrust_funcs = {f.stem for f in (ghidrust_dir / binary).glob("*.json")}
        common_funcs = sorted(ghidra_funcs & ghidrust_funcs)
        ghidra_only = ghidra_funcs - ghidrust_funcs
        ghidrust_only = ghidrust_funcs - ghidra_funcs
        ghidra_only_count += len(ghidra_only)
        ghidrust_only_count += len(ghidrust_only)

        if not common_funcs and not ghidra_only and not ghidrust_only:
            continue

        functions = []
        for addr in common_funcs:
            data_ghidra = load_json(ghidra_dir / binary / f"{addr}.json")
            data_ghidrust = load_json(ghidrust_dir / binary / f"{addr}.json")

            decomp_ghidra = data_ghidra.get("decompilation", "") if data_ghidra else ""
            decomp_ghidrust = data_ghidrust.get("decompilation", "") if data_ghidrust else ""

            functions.append({
                "addr": addr,
                "decomp_ghidra": decomp_ghidra,
                "decomp_ghidrust": decomp_ghidrust,
                "lines_ghidra": len(decomp_ghidra.splitlines()) if decomp_ghidra else 0,
                "lines_ghidrust": len(decomp_ghidrust.splitlines()) if decomp_ghidrust else 0,
            })

        total_funcs += len(functions)
        binaries.append({
            "name": binary,
            "functions": functions,
            "ghidra_only": sorted(ghidra_only),
            "ghidrust_only": sorted(ghidrust_only),
        })

    # Build HTML
    parts = []
    parts.append("<!DOCTYPE html>")
    parts.append("<html lang='en'>")
    parts.append("<head>")
    parts.append("  <meta charset='UTF-8'>")
    parts.append("  <meta name='viewport' content='width=device-width, initial-scale=1.0'>")
    parts.append(f"  <title>Ghidra vs GhidRust: {escape_html(tag)}</title>")
    parts.append(f"  <style>{CSS}</style>")
    parts.append("  <link rel='stylesheet' href='https://cdnjs.cloudflare.com/ajax/libs/highlight.js/11.9.0/styles/github.min.css'>")
    parts.append("  <script src='https://cdnjs.cloudflare.com/ajax/libs/highlight.js/11.9.0/highlight.min.js'></script>")
    parts.append("  <script src='https://cdnjs.cloudflare.com/ajax/libs/highlight.js/11.9.0/languages/rust.min.js'></script>")
    parts.append("  <script src='https://cdnjs.cloudflare.com/ajax/libs/highlight.js/11.9.0/languages/c.min.js'></script>")
    parts.append("</head>")
    parts.append("<body>")

    parts.append(f"<h1>Ghidra vs GhidRust</h1>")
    parts.append(f"<p class='subtitle'>Dataset: {escape_html(tag)}</p>")
    parts.append(f"<p class='timestamp'>Generated: {datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S')}</p>")

    parts.append("<div class='summary'>")
    parts.append(f"  <span class='badge badge-total'>{len(common_bins)} binaries</span>")
    parts.append(f"  <span class='badge badge-common'>{total_funcs} common functions</span>")
    parts.append(f"  <span class='badge badge-ghidra-only'>{ghidra_only_count} Ghidra-only</span>")
    parts.append(f"  <span class='badge badge-ghidrust-only'>{ghidrust_only_count} GhidRust-only</span>")
    parts.append("</div>")

    # Binary navigation
    parts.append("<div class='nav'>")
    parts.append("  <b>Binaries:</b> ")
    for b in binaries:
        parts.append(f"  <a href='#bin_{b['name']}'>{escape_html(b['name'])} ({len(b['functions'])})</a>")
    parts.append("</div>")

    # Per-binary sections
    for b in binaries:
        parts.append(f"<div class='binary-section' id='bin_{b['name']}'>")
        parts.append(f"  <h2>{escape_html(b['name'])} <span class='func-count'>({len(b['functions'])} functions)</span></h2>")

        if b["ghidra_only"]:
            parts.append(f"  <p class='only-note'>Ghidra-only: {', '.join('0x' + a for a in b['ghidra_only'])}</p>")
        if b["ghidrust_only"]:
            parts.append(f"  <p class='only-note'>GhidRust-only: {', '.join('0x' + a for a in b['ghidrust_only'])}</p>")

        # Function navigation within binary
        if len(b["functions"]) > 1:
            parts.append("  <div class='func-nav'>")
            for func in b["functions"]:
                parts.append(f"    <a href='#func_{b['name']}_{func['addr']}'>0x{func['addr']}</a>")
            parts.append("  </div>")

        for func in b["functions"]:
            fid = f"{b['name']}_{func['addr']}"
            parts.append(f"  <div class='function-section' id='func_{fid}'>")
            parts.append(f"    <h3>0x{func['addr']} <span class='line-info'>({func['lines_ghidra']} / {func['lines_ghidrust']} lines)</span></h3>")
            parts.append("    <div class='side-by-side'>")

            # Ghidra column
            parts.append("      <div class='code-column'>")
            parts.append("        <div class='col-header ghidra-header'>Ghidra</div>")
            if func["decomp_ghidra"]:
                parts.append(f"        <pre class='code-block'><code class='language-c'>{escape_html(func['decomp_ghidra'])}</code></pre>")
            else:
                parts.append("        <pre class='code-block unavailable'>Not available</pre>")
            parts.append("      </div>")

            # GhidRust column
            parts.append("      <div class='code-column'>")
            parts.append("        <div class='col-header ghidrust-header'>GhidRust</div>")
            if func["decomp_ghidrust"]:
                parts.append(f"        <pre class='code-block'><code class='language-rust'>{escape_html(func['decomp_ghidrust'])}</code></pre>")
            else:
                parts.append("        <pre class='code-block unavailable'>Not available</pre>")
            parts.append("      </div>")

            parts.append("    </div>")
            parts.append("  </div>")

        parts.append("</div>")

    parts.append("<script>hljs.highlightAll();</script>")
    parts.append("</body></html>")

    OUTPUT_DIR.mkdir(parents=True, exist_ok=True)
    out_path = OUTPUT_DIR / f"{tag}.html"
    with open(out_path, "w", encoding="utf-8") as f:
        f.write("\n".join(parts))
    print(f"HTML report saved to: {out_path}")


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
.badge-total { background: #e3f2fd; color: #1565c0; }
.badge-common { background: #e8f5e9; color: #2e7d32; }
.badge-ghidra-only { background: #fff3e0; color: #e65100; }
.badge-ghidrust-only { background: #f3e5f5; color: #7b1fa2; }

.nav { position: sticky; top: 0; z-index: 100; background: #fff; padding: 10px 16px;
       box-shadow: 0 2px 4px rgba(0,0,0,.12); margin-bottom: 24px; border-radius: 4px;
       display: flex; flex-wrap: wrap; gap: 8px; align-items: center; }
.nav a { text-decoration: none; font-family: monospace; font-size: 13px; padding: 2px 6px;
         border-radius: 3px; color: #1565c0; background: #e3f2fd; }
.nav a:hover { text-decoration: underline; }

.binary-section { background: #fff; padding: 20px; border-radius: 6px; margin-bottom: 24px;
                  box-shadow: 0 1px 3px rgba(0,0,0,.1); border-left: 4px solid #1565c0; }
.binary-section h2 { border-bottom: 2px solid #4CAF50; padding-bottom: 6px; margin-top: 0; }
.func-count { font-size: 0.8em; color: #888; font-weight: normal; }
.only-note { font-size: 0.85em; color: #888; font-family: monospace; margin: 4px 0; }

.func-nav { margin-bottom: 16px; display: flex; flex-wrap: wrap; gap: 6px; }
.func-nav a { text-decoration: none; font-family: monospace; font-size: 12px; padding: 2px 6px;
              border-radius: 3px; color: #555; background: #f5f5f5; }
.func-nav a:hover { text-decoration: underline; background: #e0e0e0; }

.function-section { margin-bottom: 20px; padding-bottom: 16px; border-bottom: 1px solid #eee; }
.function-section:last-child { border-bottom: none; margin-bottom: 0; padding-bottom: 0; }
.function-section h3 { margin-top: 8px; margin-bottom: 8px; color: #333; }
.line-info { font-size: 0.8em; color: #888; font-weight: normal; }

.side-by-side { display: flex; gap: 16px; margin-bottom: 8px; }
.code-column { flex: 1; min-width: 0; }
.col-header { text-align: center; font-weight: 700; padding: 8px; color: #fff;
              border-radius: 4px 4px 0 0; }
.ghidra-header { background: #e65100; }
.ghidrust-header { background: #4CAF50; }
.code-block { background: #fafafa; border: 1px solid #ddd; border-top: none;
              border-radius: 0 0 4px 4px; padding: 0; overflow-x: auto;
              white-space: pre; font-family: 'JetBrains Mono', 'Fira Code', 'Consolas', monospace;
              font-size: 12px; line-height: 1.5; margin: 0; max-height: 800px; overflow-y: auto; }
.code-block code { display: block; padding: 14px; background: #fafafa; }
.code-block.unavailable { color: #999; font-style: italic; padding: 14px; }
"""


def main():
    parser = argparse.ArgumentParser(
        description="Compare Ghidra and GhidRust decompilation output."
    )
    parser.add_argument(
        "--tag",
        default="nightly-2025-05-22-O3",
        help="Dataset tag (default: nightly-2025-05-22-O3)",
    )
    args = parser.parse_args()
    generate_report(args.tag)


if __name__ == "__main__":
    main()
