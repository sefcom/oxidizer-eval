import json
import os
import re
from datetime import datetime
from html import escape

dir_path = "output/result"

toolchain = "nightly-2025-05-22-O3"
binary_name = "fmt"
func_addr = "9d430"

new_dir = f"{dir_path}/{toolchain}/Oxidizer/{binary_name}"
old_dir = f"{dir_path}/{toolchain}/Oxidizer.normal/{binary_name}"

# Load symbol table (address -> symbol name)
symbol_file = f"targets/symbols/{toolchain}/{binary_name}.json"
with open(symbol_file, "r") as fd:
    symbols = json.load(fd)  # keys are decimal address strings


def resolve_symbol(addr_str):
    """Resolve a decimal address string to a symbol name"""
    if addr_str in symbols:
        return symbols[addr_str]
    try:
        return f"sub_{int(addr_str):x}"
    except ValueError:
        return addr_str


def resolve_call_counts(call_counts):
    """Convert address-keyed call counts to symbol-keyed call counts"""
    return {resolve_symbol(addr): count for addr, count in call_counts.items()}


# Store mismatched results
mismatches = []


def extract_function_calls(decompilation):
    """Extract function calls from decompiled code"""
    # Match function call patterns like: func_name(...) or obj->func_name(...)
    pattern = r"\b([a-zA-Z_][a-zA-Z0-9_]*)\s*\("
    calls = re.findall(pattern, decompilation)
    return calls


def count_calls(calls_list):
    """Count the number of function calls"""
    from collections import Counter

    return Counter(calls_list)


def highlight_decompilation(decompilation, extra_calls=None, is_new=False):
    """Highlight decompiled code and mark extra function calls"""
    if decompilation == "N/A":
        return escape(decompilation)

    # HTML escape first
    code = escape(decompilation)

    extra_call_set = set(extra_calls.keys()) if extra_calls and is_new else set()

    RUST_KEYWORDS = {
        "as",
        "async",
        "await",
        "break",
        "const",
        "continue",
        "crate",
        "dyn",
        "else",
        "enum",
        "extern",
        "false",
        "fn",
        "for",
        "if",
        "impl",
        "in",
        "let",
        "loop",
        "match",
        "mod",
        "move",
        "mut",
        "pub",
        "ref",
        "return",
        "self",
        "Self",
        "static",
        "struct",
        "super",
        "trait",
        "true",
        "type",
        "unsafe",
        "use",
        "where",
        "while",
        "yield",
        "i8",
        "i16",
        "i32",
        "i64",
        "i128",
        "isize",
        "u8",
        "u16",
        "u32",
        "u64",
        "u128",
        "usize",
        "f32",
        "f64",
        "bool",
        "char",
        "str",
        "String",
        "Vec",
        "Option",
        "Result",
        "Box",
        "Rc",
        "Arc",
        "Some",
        "None",
        "Ok",
        "Err",
    }

    # Single-pass tokenizer to avoid regex passes clobbering each other's HTML tags.
    # After html.escape(): " → &quot;  ' → &#x27;  & → &amp;  < → &lt;  > → &gt;
    token_re = re.compile(
        r"(//[^\n]*)"  # group 1: single-line comment
        r"|(/\*.*?\*/)"  # group 2: multi-line comment
        r"|(&quot;(?:(?!&quot;).)*?&quot;)"  # group 3: string literal ("...")
        r"|(&#x27;(?:(?!&#x27;).)*?&#x27;)"  # group 4: char literal ('x')
        r"|(&amp;&#x27;[a-zA-Z_]\w*)"  # group 5: lifetime (&'a)
        r"|(\b[a-zA-Z_]\w*!)"  # group 6: macro
        r"|(\b(?:0x[0-9a-fA-F_]+|0b[01_]+|0o[0-7_]+|\d[\d_]*)\b)"  # group 7: number
        r"|(&(?:#x?\w+|\w+);)"  # group 8: HTML entity (pass through)
        r"|(\b[a-zA-Z_]\w*)",  # group 9: identifier/keyword
        re.DOTALL,
    )

    def replace_token(m):
        if m.group(1):
            return f'<span class="comment">{m.group(1)}</span>'
        if m.group(2):
            return f'<span class="comment">{m.group(2)}</span>'
        if m.group(3):
            return f'<span class="string">{m.group(3)}</span>'
        if m.group(4):
            return f'<span class="string">{m.group(4)}</span>'
        if m.group(5):
            return f'<span class="lifetime">{m.group(5)}</span>'
        if m.group(6):
            return f'<span class="macro">{m.group(6)}</span>'
        if m.group(7):
            return f'<span class="number">{m.group(7)}</span>'
        if m.group(8):
            return m.group(8)  # HTML entity, pass through unchanged
        if m.group(9):
            word = m.group(9)
            if word in RUST_KEYWORDS:
                return f'<span class="keyword">{word}</span>'
            # Check if followed by '(' to identify as a function call
            if word in extra_call_set and re.match(r"\s*\(", code[m.end() :]):
                return f'<mark class="extra-call" title="Extra call">{word}</mark>'
            return word
        return m.group(0)

    return token_re.sub(replace_token, code)


for file in os.listdir(new_dir):
    new_path = os.path.join(new_dir, file)
    old_path = os.path.join(old_dir, file)
    if os.path.isfile(new_path) and os.path.isfile(old_path):
        with open(new_path, "r") as fd:
            result = json.load(fd)
        with open(old_path, "r") as fd:
            old_result = json.load(fd)

        if result["function_call_counts"] != old_result["function_call_counts"]:
            print("-" * 80)
            print(f"Function: {file}")
            # Resolve addresses to symbols
            old_resolved = resolve_call_counts(old_result["function_call_counts"])
            new_resolved = resolve_call_counts(result["function_call_counts"])
            print(f"Old result: {old_resolved}")
            print(f"New result: {new_resolved}")

            old_decompilation = old_result.get("decompilation", "N/A")
            new_decompilation = result.get("decompilation", "N/A")

            # Find extra function calls from function_call_counts (resolved symbols)
            extra_calls = {}
            for sym, count in new_resolved.items():
                old_count = old_resolved.get(sym, 0)
                if count > old_count:
                    extra_calls[sym] = count - old_count

            # Save mismatch information
            mismatches.append(
                {
                    "function": file,
                    "old_count": old_resolved,
                    "new_count": new_resolved,
                    "old_decompilation": old_decompilation,
                    "new_decompilation": new_decompilation,
                    "extra_calls": extra_calls,
                }
            )

# Generate HTML report
html_content = f"""
<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <title>Function Call Count Comparison Report</title>
    <style>
        body {{
            font-family: Arial, sans-serif;
            margin: 20px;
            background-color: #f5f5f5;
        }}
        h1 {{
            color: #333;
        }}
        .summary {{
            background-color: #fff;
            padding: 15px;
            margin-bottom: 20px;
            border-radius: 5px;
            box-shadow: 0 2px 4px rgba(0,0,0,0.1);
        }}
        .function-block {{
            background-color: #fff;
            padding: 20px;
            margin-bottom: 20px;
            border-radius: 5px;
            box-shadow: 0 2px 4px rgba(0,0,0,0.1);
        }}
        .function-name {{
            font-size: 1.2em;
            font-weight: bold;
            color: #2c3e50;
            margin-bottom: 10px;
        }}
        .count-info {{
            margin-bottom: 15px;
            padding: 10px;
            background-color: #f8f9fa;
            border-left: 4px solid #007bff;
        }}
        .extra-calls-info {{
            margin-bottom: 15px;
            padding: 10px;
            background-color: #fff3cd;
            border-left: 4px solid #ffc107;
        }}
        .extra-calls-info ul {{
            margin: 5px 0;
            padding-left: 20px;
        }}
        .decompilation {{
            display: flex;
            gap: 20px;
            margin-top: 15px;
        }}
        .decompilation-section {{
            flex: 1;
        }}
        .decompilation-section h3 {{
            color: #555;
            margin-top: 0;
        }}
        pre {{
            background-color: #1e1e1e;
            color: #d4d4d4;
            padding: 15px;
            border-radius: 4px;
            overflow-x: auto;
            font-size: 0.9em;
            line-height: 1.6;
            white-space: pre-wrap;
            word-wrap: break-word;
        }}
        .count-table {{
            width: 100%;
            border-collapse: collapse;
            font-size: 0.9em;
        }}
        .count-table th, .count-table td {{
            padding: 4px 10px;
            border: 1px solid #dee2e6;
            text-align: left;
        }}
        .count-table th {{
            background-color: #e9ecef;
        }}
        .count-table tr.added {{
            background-color: #d4edda;
        }}
        .count-table tr.removed {{
            background-color: #f8d7da;
        }}
        .old {{
            border-left: 4px solid #dc3545;
        }}
        .new {{
            border-left: 4px solid #28a745;
        }}
        /* Rust syntax highlighting */
        .keyword {{
            color: #569cd6;
            font-weight: bold;
        }}
        .string {{
            color: #ce9178;
        }}
        .number {{
            color: #b5cea8;
        }}
        .comment {{
            color: #6a9955;
            font-style: italic;
        }}
        .lifetime {{
            color: #4ec9b0;
            font-style: italic;
        }}
        .macro {{
            color: #dcdcaa;
        }}
        /* Mark extra function calls */
        mark.extra-call {{
            background-color: #ffeb3b;
            padding: 2px 4px;
            border-radius: 3px;
            font-weight: bold;
            cursor: help;
        }}
    </style>
</head>
<body>
    <h1>Function Call Count Comparison Report</h1>
    <div class="summary">
        <p><strong>Toolchain:</strong> {toolchain}</p>
        <p><strong>Binary:</strong> {binary_name}</p>
        <p><strong>Generated:</strong> {datetime.now().strftime("%Y-%m-%d %H:%M:%S")}</p>
        <p><strong>Total Mismatches:</strong> {len(mismatches)}</p>
    </div>
"""

for mismatch in mismatches:
    extra_calls_html = ""
    if mismatch["extra_calls"]:
        extra_calls_list = (
            "<ul>"
            + "".join(
                [f"<li><code>{func}</code>: +{count} call(s)</li>" for func, count in mismatch["extra_calls"].items()]
            )
            + "</ul>"
        )
        extra_calls_html = f"""
        <div class="extra-calls-info">
            <strong>Extra Function Calls in New Version:</strong>
            {extra_calls_list}
        </div>
        """

    old_code_highlighted = highlight_decompilation(mismatch["old_decompilation"], None, False)
    new_code_highlighted = highlight_decompilation(mismatch["new_decompilation"], mismatch["extra_calls"], True)

    # Build call count comparison table
    all_symbols = sorted(set(list(mismatch["old_count"].keys()) + list(mismatch["new_count"].keys())))
    count_rows = ""
    for sym in all_symbols:
        old_c = mismatch["old_count"].get(sym, 0)
        new_c = mismatch["new_count"].get(sym, 0)
        diff = new_c - old_c
        diff_str = f"+{diff}" if diff > 0 else str(diff)
        row_class = ' class="added"' if diff > 0 else (' class="removed"' if diff < 0 else "")
        count_rows += f"<tr{row_class}><td><code>{escape(sym)}</code></td><td>{old_c}</td><td>{new_c}</td><td>{diff_str}</td></tr>\n"

    html_content += f"""
    <div class="function-block">
        <div class="function-name">{escape(mismatch['function'])}</div>
        <div class="count-info">
            <table class="count-table">
                <tr><th>Symbol</th><th>Old</th><th>New</th><th>Diff</th></tr>
                {count_rows}
            </table>
        </div>
        {extra_calls_html}
        <div class="decompilation">
            <div class="decompilation-section">
                <h3>Old Decompilation</h3>
                <pre class="old">{old_code_highlighted}</pre>
            </div>
            <div class="decompilation-section">
                <h3>New Decompilation (Extra calls highlighted)</h3>
                <pre class="new">{new_code_highlighted}</pre>
            </div>
        </div>
    </div>
"""

html_content += """
</body>
</html>
"""

# Save HTML file
output_file = f"output/comparison_report_{binary_name}_{datetime.now().strftime('%Y%m%d_%H%M%S')}.html"
os.makedirs(os.path.dirname(output_file), exist_ok=True)
with open(output_file, "w", encoding="utf-8") as f:
    f.write(html_content)

print(f"\nHTML report generated: {output_file}")
print(f"Total mismatches found: {len(mismatches)}")
