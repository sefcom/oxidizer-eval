#!/usr/bin/env python3
"""
Analyze why Oxidizer fails to recover macros for 'just' binary in O3-inline dataset.
"""

import json
import os
import glob
from collections import Counter, defaultdict

# Paths
GT_O3_INLINE = "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/merged_ground_truth/nightly-2025-05-22-O3-inline/just/"
OX_O3_INLINE = "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/output/result/nightly-2025-05-22-O3-inline/Oxidizer/just/"
GT_O3 = "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/merged_ground_truth/nightly-2025-05-22-O3/just/"
OX_O3 = "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/output/result/nightly-2025-05-22-O3/Oxidizer/just/"


def load_jsons(directory):
    """Load all JSON files from a directory, keyed by filename (address)."""
    result = {}
    if not os.path.isdir(directory):
        return result
    for fpath in glob.glob(os.path.join(directory, "*.json")):
        fname = os.path.basename(fpath)
        addr = fname.replace(".json", "")
        with open(fpath) as f:
            result[addr] = json.load(f)
    return result


def build_name_index(gt_data):
    """Build a mapping from function name -> addr for GT data."""
    index = {}
    for addr, data in gt_data.items():
        name = data.get("name", "")
        if name:
            index[name] = addr
    return index


# ============================================================
# STEP 1: Load all data
# ============================================================
print("=" * 80)
print("LOADING DATA")
print("=" * 80)

gt_inline = load_jsons(GT_O3_INLINE)
ox_inline = load_jsons(OX_O3_INLINE)
gt_o3 = load_jsons(GT_O3)
ox_o3 = load_jsons(OX_O3)

print(f"O3-inline GT functions:       {len(gt_inline)}")
print(f"O3-inline Oxidizer results:   {len(ox_inline)}")
print(f"O3 GT functions:              {len(gt_o3)}")
print(f"O3 Oxidizer results:          {len(ox_o3)}")

# ============================================================
# STEP 2: Find all GT functions with macros (O3-inline)
# ============================================================
print("\n" + "=" * 80)
print("STEP 1: GT FUNCTIONS WITH MACROS (O3-inline)")
print("=" * 80)

gt_with_macros = {}
all_macro_types = Counter()
total_macro_instances = 0

for addr, data in gt_inline.items():
    macros = data.get("macros", {})
    if macros:
        gt_with_macros[addr] = data
        for macro_name, count in macros.items():
            all_macro_types[macro_name] += count
            total_macro_instances += count

print(f"\nGT functions with macros: {len(gt_with_macros)} / {len(gt_inline)}")
print(f"Total macro instances across all GT functions: {total_macro_instances}")
print(f"\nMacro types in GT (name -> total count across all functions):")
for macro, count in all_macro_types.most_common():
    print(f"  {macro}: {count}")

# ============================================================
# STEP 3: Check Oxidizer results for those functions
# ============================================================
print("\n" + "=" * 80)
print("STEP 2: OXIDIZER COVERAGE FOR GT FUNCTIONS WITH MACROS")
print("=" * 80)

has_ox_result = 0
has_ox_macros = 0
ox_recovered_macro_types = Counter()
ox_recovered_total = 0

missing_ox = []
ox_empty_macros = []
ox_nonempty_macros = []

for addr, gt_data in gt_with_macros.items():
    if addr in ox_inline:
        has_ox_result += 1
        ox_data = ox_inline[addr]
        ox_macros = ox_data.get("macro_call_counts", {})
        if ox_macros:
            has_ox_macros += 1
            ox_nonempty_macros.append((addr, gt_data, ox_data))
            for macro_name, count in ox_macros.items():
                ox_recovered_macro_types[macro_name] += count
                ox_recovered_total += count
        else:
            ox_empty_macros.append((addr, gt_data, ox_data))
    else:
        missing_ox.append((addr, gt_data))

print(f"\nGT functions with macros that have Oxidizer results: {has_ox_result} / {len(gt_with_macros)}")
print(f"Of those, Oxidizer results with non-empty macro_call_counts: {has_ox_macros}")
print(f"Of those, Oxidizer results with EMPTY macro_call_counts: {len(ox_empty_macros)}")
print(f"GT functions with macros but NO Oxidizer result: {len(missing_ox)}")

if ox_recovered_macro_types:
    print(f"\nMacro types recovered by Oxidizer (for GT-macro functions):")
    for macro, count in ox_recovered_macro_types.most_common():
        print(f"  {macro}: {count}")
else:
    print(f"\nOxidizer recovered ZERO macros for any GT function that has macros!")

# ============================================================
# STEP 4: Check ALL Oxidizer results for any macro recovery
# ============================================================
print("\n" + "=" * 80)
print("OXIDIZER MACRO RECOVERY ACROSS ALL FUNCTIONS (not just GT-macro ones)")
print("=" * 80)

all_ox_macro_types = Counter()
all_ox_macro_count = 0
ox_funcs_with_macros = 0

for addr, ox_data in ox_inline.items():
    ox_macros = ox_data.get("macro_call_counts", {})
    if ox_macros:
        ox_funcs_with_macros += 1
        for macro_name, count in ox_macros.items():
            all_ox_macro_types[macro_name] += count
            all_ox_macro_count += count

print(f"\nOxidizer functions with any macros detected: {ox_funcs_with_macros} / {len(ox_inline)}")
print(f"Total macro instances detected by Oxidizer: {all_ox_macro_count}")
if all_ox_macro_types:
    print(f"\nAll macro types detected by Oxidizer:")
    for macro, count in all_ox_macro_types.most_common():
        print(f"  {macro}: {count}")
else:
    print("Oxidizer detected ZERO macros across ALL functions!")

# ============================================================
# STEP 5: Sample analysis - top 5 GT functions by macro count
# ============================================================
print("\n" + "=" * 80)
print("STEP 3: SAMPLE ANALYSIS - TOP 5 GT FUNCTIONS BY MACRO COUNT")
print("=" * 80)

# Sort GT functions by total macro count
sorted_gt = sorted(
    gt_with_macros.items(),
    key=lambda x: sum(x[1].get("macros", {}).values()),
    reverse=True
)

for i, (addr, gt_data) in enumerate(sorted_gt[:5]):
    print(f"\n{'─' * 70}")
    print(f"#{i+1}: Address={addr}")
    print(f"  Function name: {gt_data.get('name', 'N/A')}")
    print(f"  GT macros: {gt_data.get('macros', {})}")
    print(f"  GT LOC: {gt_data.get('loc', 'N/A')}")

    if addr in ox_inline:
        ox_data = ox_inline[addr]
        ox_macros = ox_data.get("macro_call_counts", {})
        decomp = ox_data.get("decompilation", "")
        print(f"  Oxidizer macro_call_counts: {ox_macros}")
        print(f"  Oxidizer decompilation (first 500 chars):")
        print(f"    {decomp[:500]}")

        # Look for macro-like patterns in decompilation
        macro_keywords = ["format!", "println!", "print!", "write!", "writeln!",
                          "vec!", "panic!", "assert!", "assert_eq!", "assert_ne!",
                          "eprintln!", "eprint!", "todo!", "unimplemented!", "cfg!",
                          "format_args!", "concat!", "env!", "include!", "macro_rules!"]
        found_patterns = []
        for kw in macro_keywords:
            if kw in decomp:
                found_patterns.append(kw)
        # Also check without the !
        for kw in ["format(", "println(", "print(", "write(", "writeln(",
                    "vec[", "panic(", "assert(", "assert_eq(", "eprintln("]:
            if kw in decomp:
                found_patterns.append(kw)
        if found_patterns:
            print(f"  Macro-like patterns in decompilation: {found_patterns}")
        else:
            print(f"  No macro-like patterns found in decompilation text")

        # Check what function calls exist
        fn_calls = ox_data.get("function_call_counts", {})
        print(f"  Oxidizer function_call_counts ({len(fn_calls)} calls): ", end="")
        # Show first few
        items = list(fn_calls.items())[:10]
        print(dict(items))
    else:
        print(f"  ** NO Oxidizer result for this address **")

# ============================================================
# STEP 6: Compare with O3 (non-inline)
# ============================================================
print("\n" + "=" * 80)
print("STEP 4: COMPARISON WITH O3 (NON-INLINE)")
print("=" * 80)

if not gt_o3:
    print("\nNo O3 GT data found for 'just'")
elif not ox_o3:
    print(f"\nO3 GT has {len(gt_o3)} functions but NO Oxidizer results exist for O3/just")

    # Build name index for O3 GT
    o3_name_index = build_name_index(gt_o3)

    print("\nCross-referencing top 5 O3-inline functions by name in O3 GT:")
    for i, (addr, gt_data) in enumerate(sorted_gt[:5]):
        fname = gt_data.get("name", "")
        print(f"\n  #{i+1}: {fname}")
        print(f"    O3-inline addr: {addr}, macros: {gt_data.get('macros', {})}")

        if fname in o3_name_index:
            o3_addr = o3_name_index[fname]
            o3_data = gt_o3[o3_addr]
            print(f"    O3 addr: {o3_addr}, macros: {o3_data.get('macros', {})}")
            print(f"    O3 LOC: {o3_data.get('loc', 'N/A')} vs O3-inline LOC: {gt_data.get('loc', 'N/A')}")
        else:
            print(f"    ** Function NOT found in O3 GT **")
else:
    o3_name_index = build_name_index(gt_o3)
    o3_ox_name_to_addr = {}
    for addr, data in ox_o3.items():
        # Oxidizer results don't have names, match by addr through GT
        if addr in gt_o3:
            name = gt_o3[addr].get("name", "")
            if name:
                o3_ox_name_to_addr[name] = addr

    print(f"\nO3 has {len(gt_o3)} GT functions and {len(ox_o3)} Oxidizer results")

    # Count O3 GT macros
    o3_gt_with_macros = sum(1 for d in gt_o3.values() if d.get("macros"))
    o3_ox_with_macros = sum(1 for d in ox_o3.values() if d.get("macro_call_counts"))
    print(f"O3 GT functions with macros: {o3_gt_with_macros}")
    print(f"O3 Oxidizer functions with macros: {o3_ox_with_macros}")

    print("\nCross-referencing top 5 O3-inline functions:")
    for i, (addr, gt_data) in enumerate(sorted_gt[:5]):
        fname = gt_data.get("name", "")
        print(f"\n  #{i+1}: {fname}")
        print(f"    O3-inline: addr={addr}, macros={gt_data.get('macros', {})}")

        if fname in o3_name_index:
            o3_addr = o3_name_index[fname]
            o3_gt_data = gt_o3[o3_addr]
            print(f"    O3 GT: addr={o3_addr}, macros={o3_gt_data.get('macros', {})}")

            if o3_addr in ox_o3:
                o3_ox_data = ox_o3[o3_addr]
                print(f"    O3 Oxidizer: macro_call_counts={o3_ox_data.get('macro_call_counts', {})}")
            else:
                print(f"    O3 Oxidizer: ** no result **")
        else:
            print(f"    ** NOT in O3 GT **")

# ============================================================
# STEP 7: Deeper investigation - what does Oxidizer decompilation look like?
# ============================================================
print("\n" + "=" * 80)
print("STEP 5: DEEPER INVESTIGATION - DECOMPILATION PATTERNS")
print("=" * 80)

# Check a few functions where GT has "format" or "println" macros
format_fns = [(addr, data) for addr, data in gt_with_macros.items()
              if "format" in data.get("macros", {}) or "write" in data.get("macros", {})]

print(f"\nGT functions with 'format' or 'write' macros: {len(format_fns)}")

# For those that have Oxidizer results, look at decompilation for formatting patterns
print("\nSampling 3 'format'/'write' macro functions with Oxidizer results:")
shown = 0
for addr, gt_data in format_fns:
    if addr in ox_inline and shown < 3:
        shown += 1
        ox_data = ox_inline[addr]
        decomp = ox_data.get("decompilation", "")
        print(f"\n  Address: {addr}")
        print(f"  Name: {gt_data.get('name', 'N/A')}")
        print(f"  GT macros: {gt_data.get('macros', {})}")
        print(f"  Oxidizer macros: {ox_data.get('macro_call_counts', {})}")

        # Look for string literals that might indicate format strings
        gt_strings = gt_data.get("string_literals", {})
        if gt_strings:
            print(f"  GT string_literals: {dict(list(gt_strings.items())[:5])}")

        # Check for common Rust formatting function names in decompilation
        fmt_patterns = ["fmt", "format", "Display", "write", "Arguments",
                        "Formatter", "rt::Argument", "core::fmt"]
        found = [p for p in fmt_patterns if p.lower() in decomp.lower()]
        print(f"  Format-related patterns in decomp: {found}")

        # Check function call counts for formatting-related addresses
        fn_calls = ox_data.get("function_call_counts", {})
        print(f"  Total function calls in Oxidizer result: {len(fn_calls)}")
        print(f"  Decompilation length: {len(decomp)} chars")

# ============================================================
# STEP 8: Look at what Oxidizer detects as function calls vs macros
# ============================================================
print("\n" + "=" * 80)
print("ANALYSIS: GT MACRO CALL COUNTS BREAKDOWN")
print("=" * 80)

# For each GT macro type, how often does Oxidizer have a result but no macros?
for macro_type in all_macro_types.most_common():
    macro_name = macro_type[0]
    fns_with_this_macro = [(a, d) for a, d in gt_with_macros.items()
                           if macro_name in d.get("macros", {})]
    has_ox = sum(1 for a, _ in fns_with_this_macro if a in ox_inline)
    has_ox_recovered = sum(1 for a, _ in fns_with_this_macro
                          if a in ox_inline and
                          macro_name in ox_inline[a].get("macro_call_counts", {}))
    print(f"  {macro_name}: GT has {len(fns_with_this_macro)} functions, "
          f"Oxidizer has result for {has_ox}, "
          f"Oxidizer recovered '{macro_name}' in {has_ox_recovered}")

# ============================================================
# STEP 9: Missing Oxidizer results analysis
# ============================================================
print("\n" + "=" * 80)
print("FUNCTIONS WITH MACROS BUT NO OXIDIZER RESULT")
print("=" * 80)

if missing_ox:
    print(f"\n{len(missing_ox)} GT-macro functions have no Oxidizer result:")
    for addr, gt_data in missing_ox[:10]:
        print(f"  {addr}: {gt_data.get('name', 'N/A')} - macros: {gt_data.get('macros', {})}")
    if len(missing_ox) > 10:
        print(f"  ... and {len(missing_ox) - 10} more")

# ============================================================
# FINAL SUMMARY
# ============================================================
print("\n" + "=" * 80)
print("FINAL SUMMARY")
print("=" * 80)
print(f"""
O3-inline 'just' binary:
  Total GT functions: {len(gt_inline)}
  Total Oxidizer results: {len(ox_inline)}
  GT functions with macros: {len(gt_with_macros)} ({100*len(gt_with_macros)/len(gt_inline):.1f}%)
  Total macro instances in GT: {total_macro_instances}
  Unique macro types in GT: {len(all_macro_types)}

  Of {len(gt_with_macros)} GT functions with macros:
    - {has_ox_result} have Oxidizer results ({100*has_ox_result/len(gt_with_macros):.1f}%)
    - {has_ox_macros} of those have non-empty Oxidizer macro_call_counts ({100*has_ox_macros/max(1,has_ox_result):.1f}% of results)
    - {len(missing_ox)} have NO Oxidizer result

  Across ALL {len(ox_inline)} Oxidizer results:
    - {ox_funcs_with_macros} have any macros detected
    - Total Oxidizer macro instances: {all_ox_macro_count}
    - Unique Oxidizer macro types: {len(all_ox_macro_types)}

  Macro recovery rate: {has_ox_macros}/{len(gt_with_macros)} = {100*has_ox_macros/max(1,len(gt_with_macros)):.1f}% of GT-macro functions
  Instance recovery rate: {ox_recovered_total}/{total_macro_instances} = {100*ox_recovered_total/max(1,total_macro_instances):.1f}% of GT macro instances
""")
