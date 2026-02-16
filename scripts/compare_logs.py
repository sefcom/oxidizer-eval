#!/usr/bin/env python3
"""
Compare macro recovery rates between O3 (non-inline) and O3-inline log files.
Parses per-binary evaluation blocks from each log and produces 5 analyses.

NOTE: "matched" and "total" come from the per-binary "Oxidizer covered X out of Y"
lines. The sum of these per-binary values may differ from the overall summary in the
log (which pools all functions and re-evaluates). For O3, the overall summary says
2203/8061 but the per-binary sum is 1942/8061. We use per-binary sums for
apples-to-apples comparison.
"""

import re
import sys
from collections import defaultdict

O3_LOG = "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/output/log/nightly-2025-05-22-O3/2025-11-12-23-54-45.log"
O3_INLINE_LOG = "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/output/log/nightly-2025-05-22-O3-inline/2026-02-16-01-20-43.log"


def parse_log(filepath, binary_path_pattern):
    """
    Parse a log file and extract per-binary evaluation blocks.

    Returns a dict: binary_name -> {
        'functions': int,
        'matched': int,    # from "Oxidizer covered X out of Y"
        'total': int,      # from "Oxidizer covered X out of Y"
        'gt_macros': {macro_name: count},
        'ox_macros': {macro_name: count},
    }
    """
    with open(filepath, 'r') as f:
        content = f.read()

    task_pattern = re.compile(
        r'\d{4}-\d{2}-\d{2} \d{2}:\d{2}:\d{2},\d+ \[INFO\] Task completed: .+ on .+/' + binary_path_pattern + r'/(\S+)'
    )
    overall_pattern = re.compile(r'Overall Evaluation Result for tag')

    lines = content.split('\n')
    binaries = {}
    current_binary = None
    current_block_lines = []

    for i, line in enumerate(lines):
        if overall_pattern.search(line):
            if current_binary and current_block_lines:
                _process_block(current_binary, current_block_lines, binaries)
            break

        m = task_pattern.search(line)
        if m:
            if current_binary and current_block_lines:
                _process_block(current_binary, current_block_lines, binaries)
            current_binary = m.group(1)
            current_block_lines = [line]
        else:
            if current_binary:
                current_block_lines.append(line)
    else:
        # End of file without overall summary (O3-inline case)
        if current_binary and current_block_lines:
            _process_block(current_binary, current_block_lines, binaries)

    return binaries


def _process_block(binary_name, block_lines, binaries):
    """Process a single evaluation block and store results."""
    block_text = '\n'.join(block_lines)

    func_match = re.search(r'# Functions: (\d+)', block_text)
    num_functions = int(func_match.group(1)) if func_match else 0

    covered_match = re.search(r'Oxidizer covered (\d+) out of (\d+) macro calls in ground truth', block_text)
    matched = int(covered_match.group(1)) if covered_match else 0
    total = int(covered_match.group(2)) if covered_match else 0

    gt_macros = {}
    gt_section = re.search(r'Ground Truth Macro Call Counts:\n((?:  \S+: \d+\n)*)', block_text)
    if gt_section:
        for m in re.finditer(r'  (\S+): (\d+)', gt_section.group(1)):
            macro_name = m.group(1)
            count = int(m.group(2))
            gt_macros[macro_name] = gt_macros.get(macro_name, 0) + count

    ox_macros = {}
    ox_section = re.search(r'Oxidizer Macro Call Counts:\n((?:  \S+: \d+\n)*)', block_text)
    if ox_section:
        for m in re.finditer(r'  (\S+): (\d+)', ox_section.group(1)):
            macro_name = m.group(1)
            count = int(m.group(2))
            ox_macros[macro_name] = ox_macros.get(macro_name, 0) + count

    # If binary already exists, keep the entry with more functions
    if binary_name in binaries:
        existing = binaries[binary_name]
        if num_functions <= existing['functions']:
            return

    binaries[binary_name] = {
        'functions': num_functions,
        'matched': matched,
        'total': total,
        'gt_macros': gt_macros,
        'ox_macros': ox_macros,
    }


def main():
    print("=" * 110)
    print("MACRO RECOVERY COMPARISON: O3 (non-inline) vs O3-inline")
    print("=" * 110)
    print()
    print("NOTE: 'matched' and 'total' come from per-binary 'Oxidizer covered X out of Y' lines.")
    print("The O3 overall summary reports 2203/8061 but per-binary sum is 1942/8061 (the overall")
    print("evaluation re-pools all functions). We use per-binary sums for consistent comparison.")

    # Parse both logs
    o3 = parse_log(O3_LOG, r'nightly-2025-05-22-O3')
    o3i = parse_log(O3_INLINE_LOG, r'nightly-2025-05-22-O3-inline')

    o3_names = set(o3.keys())
    o3i_names = set(o3i.keys())
    common = o3_names & o3i_names
    only_o3 = o3_names - o3i_names
    only_o3i = o3i_names - o3_names

    # =========================================================================
    # ANALYSIS 1: Dataset comparison
    # =========================================================================
    print("\n" + "=" * 110)
    print("ANALYSIS 1: DATASET COMPARISON")
    print("=" * 110)

    print(f"\nO3 (non-inline): {len(o3_names)} binaries")
    print(f"O3-inline:       {len(o3i_names)} binaries")
    print(f"Common:          {len(common)} binaries")
    print(f"Only in O3:      {len(only_o3)} binaries")
    print(f"Only in O3-inline: {len(only_o3i)} binaries")

    o3_total_funcs = sum(v['functions'] for v in o3.values())
    o3i_total_funcs = sum(v['functions'] for v in o3i.values())
    o3_total_matched = sum(v['matched'] for v in o3.values())
    o3_total_gt = sum(v['total'] for v in o3.values())
    o3i_total_matched = sum(v['matched'] for v in o3i.values())
    o3i_total_gt = sum(v['total'] for v in o3i.values())

    print(f"\nO3 total functions:   {o3_total_funcs}")
    print(f"O3i total functions:  {o3i_total_funcs}")
    print(f"\nO3 per-binary sum matched/GT:   {o3_total_matched}/{o3_total_gt} = {o3_total_matched/o3_total_gt*100:.1f}%")
    print(f"O3i per-binary sum matched/GT:  {o3i_total_matched}/{o3i_total_gt} = {o3i_total_matched/o3i_total_gt*100:.1f}%")

    if only_o3:
        print(f"\nBinaries ONLY in O3 ({len(only_o3)}):")
        for name in sorted(only_o3):
            d = o3[name]
            print(f"  {name:40s}  funcs={d['functions']:5d}  matched/total={d['matched']:4d}/{d['total']:4d}")
        only_o3_matched = sum(o3[n]['matched'] for n in only_o3)
        only_o3_total = sum(o3[n]['total'] for n in only_o3)
        only_o3_funcs = sum(o3[n]['functions'] for n in only_o3)
        print(f"  {'SUBTOTAL':40s}  funcs={only_o3_funcs:5d}  matched/total={only_o3_matched:4d}/{only_o3_total:4d}")

    if only_o3i:
        print(f"\nBinaries ONLY in O3-inline ({len(only_o3i)}):")
        for name in sorted(only_o3i):
            d = o3i[name]
            print(f"  {name:40s}  funcs={d['functions']:5d}  matched/total={d['matched']:4d}/{d['total']:4d}")
        only_o3i_matched = sum(o3i[n]['matched'] for n in only_o3i)
        only_o3i_total = sum(o3i[n]['total'] for n in only_o3i)
        only_o3i_funcs = sum(o3i[n]['functions'] for n in only_o3i)
        print(f"  {'SUBTOTAL':40s}  funcs={only_o3i_funcs:5d}  matched/total={only_o3i_matched:4d}/{only_o3i_total:4d}")

    # =========================================================================
    # ANALYSIS 2: Per-binary side-by-side comparison
    # =========================================================================
    print("\n" + "=" * 110)
    print("ANALYSIS 2: PER-BINARY SIDE-BY-SIDE (common binaries, sorted by absolute matched drop)")
    print("=" * 110)

    rows = []
    for name in common:
        d3 = o3[name]
        di = o3i[name]
        o3_rate = (d3['matched'] / d3['total'] * 100) if d3['total'] > 0 else 0.0
        oi_rate = (di['matched'] / di['total'] * 100) if di['total'] > 0 else 0.0
        rate_diff = oi_rate - o3_rate
        matched_drop = d3['matched'] - di['matched']
        rows.append((
            name,
            d3['functions'], di['functions'],
            d3['matched'], d3['total'],
            di['matched'], di['total'],
            o3_rate, oi_rate, rate_diff,
            matched_drop
        ))

    rows.sort(key=lambda r: r[10], reverse=True)

    header = f"{'Binary':40s} {'O3_Fn':>6s} {'O3i_Fn':>6s} {'O3_M/T':>10s} {'O3i_M/T':>10s} {'O3_%':>7s} {'O3i_%':>7s} {'Diff%':>7s} {'MDrop':>6s}"
    print(f"\n{header}")
    print("-" * len(header))

    for row in rows[:30]:
        name, o3f, oif, o3m, o3t, oim, oit, o3r, oir, rd, md = row
        print(f"{name:40s} {o3f:6d} {oif:6d} {o3m:4d}/{o3t:<5d} {oim:4d}/{oit:<5d} {o3r:6.1f}% {oir:6.1f}% {rd:+6.1f}% {md:6d}")

    common_o3_matched = sum(o3[n]['matched'] for n in common)
    common_o3_total = sum(o3[n]['total'] for n in common)
    common_o3i_matched = sum(o3i[n]['matched'] for n in common)
    common_o3i_total = sum(o3i[n]['total'] for n in common)
    print(f"\n  Common binaries totals:")
    print(f"    O3:       {common_o3_matched}/{common_o3_total} matched ({common_o3_matched/common_o3_total*100:.1f}%)" if common_o3_total else "    O3: 0/0")
    print(f"    O3-inline: {common_o3i_matched}/{common_o3i_total} matched ({common_o3i_matched/common_o3i_total*100:.1f}%)" if common_o3i_total else "    O3-inline: 0/0")

    # =========================================================================
    # ANALYSIS 3: Per-macro-type comparison
    # =========================================================================
    print("\n" + "=" * 110)
    print("ANALYSIS 3: PER-MACRO-TYPE COMPARISON (all binaries)")
    print("=" * 110)
    print()
    print("'GT' = Ground Truth count (total across all binaries)")
    print("'OxOut' = Oxidizer raw output count (what Oxidizer emitted, may exceed GT)")
    print("'Cov~' = Approximate covered = sum of min(GT_per_binary, OxOut_per_binary) per macro")
    print("         (This is an upper-bound proxy; actual matching is per-function)")

    # Aggregate GT and Oxidizer output counts per macro type
    o3_gt_by_macro = defaultdict(int)
    o3_ox_by_macro = defaultdict(int)
    o3i_gt_by_macro = defaultdict(int)
    o3i_ox_by_macro = defaultdict(int)
    # Also compute per-binary min for approximate coverage
    o3_cov_by_macro = defaultdict(int)
    o3i_cov_by_macro = defaultdict(int)

    for name, d in o3.items():
        all_macros_in_binary = set(d['gt_macros'].keys()) | set(d['ox_macros'].keys())
        for macro in all_macros_in_binary:
            gt = d['gt_macros'].get(macro, 0)
            ox = d['ox_macros'].get(macro, 0)
            o3_gt_by_macro[macro] += gt
            o3_ox_by_macro[macro] += ox
            o3_cov_by_macro[macro] += min(gt, ox)

    for name, d in o3i.items():
        all_macros_in_binary = set(d['gt_macros'].keys()) | set(d['ox_macros'].keys())
        for macro in all_macros_in_binary:
            gt = d['gt_macros'].get(macro, 0)
            ox = d['ox_macros'].get(macro, 0)
            o3i_gt_by_macro[macro] += gt
            o3i_ox_by_macro[macro] += ox
            o3i_cov_by_macro[macro] += min(gt, ox)

    all_macros = set(o3_gt_by_macro.keys()) | set(o3i_gt_by_macro.keys()) | set(o3_ox_by_macro.keys()) | set(o3i_ox_by_macro.keys())

    macro_rows = []
    for macro in all_macros:
        o3_gt = o3_gt_by_macro.get(macro, 0)
        o3_ox = o3_ox_by_macro.get(macro, 0)
        o3_cov = o3_cov_by_macro.get(macro, 0)
        o3i_gt = o3i_gt_by_macro.get(macro, 0)
        o3i_ox = o3i_ox_by_macro.get(macro, 0)
        o3i_cov = o3i_cov_by_macro.get(macro, 0)
        cov_diff = o3_cov - o3i_cov
        macro_rows.append((macro, o3_gt, o3_ox, o3_cov, o3i_gt, o3i_ox, o3i_cov, cov_diff))

    # Sort by difference in approximate coverage descending
    macro_rows.sort(key=lambda r: r[7], reverse=True)

    # Only show macros with nonzero GT or output in either dataset
    macro_rows_filtered = [r for r in macro_rows if r[1] > 0 or r[2] > 0 or r[4] > 0 or r[5] > 0]

    # Show top rows (nonzero coverage in either or large GT)
    header = f"{'Macro':30s} {'O3_GT':>7s} {'O3_Ox':>7s} {'O3_Cov':>7s} {'O3i_GT':>7s} {'O3i_Ox':>7s} {'O3i_Cov':>7s} {'CovDiff':>8s}"
    print(f"\n{header}")
    print("-" * len(header))

    # Show macros with nonzero coverage or significant GT, sorted by coverage diff
    shown = 0
    for row in macro_rows_filtered:
        macro, o3_gt, o3_ox, o3_cov, o3i_gt, o3i_ox, o3i_cov, cov_diff = row
        if o3_cov > 0 or o3i_cov > 0 or o3_gt >= 20 or o3i_gt >= 20:
            print(f"{macro:30s} {o3_gt:7d} {o3_ox:7d} {o3_cov:7d} {o3i_gt:7d} {o3i_ox:7d} {o3i_cov:7d} {cov_diff:+8d}")
            shown += 1

    total_o3_gt = sum(r[1] for r in macro_rows)
    total_o3_ox = sum(r[2] for r in macro_rows)
    total_o3_cov = sum(r[3] for r in macro_rows)
    total_o3i_gt = sum(r[4] for r in macro_rows)
    total_o3i_ox = sum(r[5] for r in macro_rows)
    total_o3i_cov = sum(r[6] for r in macro_rows)
    print("-" * len(header))
    print(f"{'TOTAL (all macros)':30s} {total_o3_gt:7d} {total_o3_ox:7d} {total_o3_cov:7d} {total_o3i_gt:7d} {total_o3i_ox:7d} {total_o3i_cov:7d} {total_o3_cov - total_o3i_cov:+8d}")
    print(f"\n  ({len(macro_rows_filtered)} total distinct macro types; {shown} shown above)")
    print(f"  Note: Actual per-binary matched sum: O3={o3_total_matched}, O3i={o3i_total_matched}")
    print(f"  Approx coverage sum:                 O3={total_o3_cov}, O3i={total_o3i_cov}")
    print(f"  (Difference is because actual matching is per-function, not per-binary-aggregate)")

    # =========================================================================
    # ANALYSIS 4: Root cause breakdown
    # =========================================================================
    print("\n" + "=" * 110)
    print("ANALYSIS 4: ROOT CAUSE BREAKDOWN")
    print("=" * 110)

    total_gap = o3_total_matched - o3i_total_matched
    print(f"\nTotal gap: {o3_total_matched} - {o3i_total_matched} = {total_gap} fewer recovered macros in O3-inline")
    print(f"  (Using per-binary sum of 'Oxidizer covered X out of Y' lines)")

    # (d) Macros lost from binaries in O3 but not in O3-inline
    lost_from_removed = sum(o3[n]['matched'] for n in only_o3)
    gt_from_removed = sum(o3[n]['total'] for n in only_o3)
    print(f"\n(d) Macros from binaries in O3 but NOT in O3-inline:")
    print(f"    Lost matched: {lost_from_removed}  (GT total: {gt_from_removed})")
    if only_o3:
        for n in sorted(only_o3):
            print(f"      {n}: matched={o3[n]['matched']}, total={o3[n]['total']}, funcs={o3[n]['functions']}")

    # (c) Macros from new binaries in O3-inline
    gained_from_new = sum(o3i[n]['matched'] for n in only_o3i)
    gt_from_new = sum(o3i[n]['total'] for n in only_o3i)
    print(f"\n(c) Macros from NEW binaries in O3-inline (not in O3):")
    print(f"    Gained matched: {gained_from_new}  (GT total: {gt_from_new})")

    # Decompose common binary gap into (a) GT shrinkage and (b) recovery capability
    func_matching_loss = 0.0
    recovery_loss = 0.0
    gt_grew_extra_matched = 0.0
    gt_grew_extra_missed = 0.0

    common_gap = 0
    detail_rows = []
    for name in common:
        d3 = o3[name]
        di = o3i[name]
        binary_gap = d3['matched'] - di['matched']
        common_gap += binary_gap

        o3_rate = d3['matched'] / d3['total'] if d3['total'] > 0 else 0.0
        gt_diff = d3['total'] - di['total']

        if gt_diff > 0:
            # GT shrank: attribute o3_rate * gt_diff to function matching loss
            func_loss = o3_rate * gt_diff
        else:
            func_loss = 0.0

        recovery = binary_gap - func_loss
        func_matching_loss += func_loss
        recovery_loss += recovery

        detail_rows.append((name, binary_gap, func_loss, recovery, d3['total'], di['total'], gt_diff, o3_rate))

    print(f"\n  --- Decomposition for COMMON binaries ({len(common)}) ---")
    print(f"  Common binary gap (O3_matched - O3i_matched): {common_gap}")

    print(f"\n(a) GT shrinkage loss (estimated):         {func_matching_loss:+8.0f}")
    print(f"    Macros lost because O3-inline has fewer GT macros per binary,")
    print(f"    weighted by that binary's O3 recovery rate.")
    print(f"    This reflects fewer functions being matched to source in O3-inline,")
    print(f"    meaning the evaluator sees fewer opportunities for macro matching.")

    print(f"\n(b) Recovery capability loss (estimated):   {recovery_loss:+8.0f}")
    print(f"    Residual gap: on available GT macros, the recovery rate also dropped.")
    print(f"    This includes cases where GT grew but Oxidizer didn't recover them,")
    print(f"    AND cases where the same GT was present but fewer were matched.")

    print(f"\n  --- Full decomposition ---")
    print(f"  (a) GT shrinkage loss (common):           {func_matching_loss:+8.0f}")
    print(f"  (b) Recovery capability loss (common):    {recovery_loss:+8.0f}")
    print(f"  (c) Gained from new O3i-only binaries:    {-gained_from_new:+8d}")
    print(f"  (d) Lost from removed O3-only binaries:   {+lost_from_removed:+8d}")
    print(f"  {'':40s}                      --------")
    total_check = func_matching_loss + recovery_loss + lost_from_removed - gained_from_new
    print(f"  Total:                                    {total_check:+8.0f}  (should = {total_gap})")

    # Show biggest individual binary contributors to the gap
    detail_rows.sort(key=lambda r: r[1], reverse=True)
    print(f"\n  Top 15 binaries contributing to common binary gap:")
    print(f"  {'Binary':35s} {'Gap':>6s} {'GTshrink':>8s} {'RecLoss':>8s} {'O3_GT':>6s} {'O3i_GT':>6s} {'O3Rate':>7s}")
    print(f"  {'-'*35} {'-'*6} {'-'*8} {'-'*8} {'-'*6} {'-'*6} {'-'*7}")
    for row in detail_rows[:15]:
        name, gap, fl, rl, o3t, oit, gtd, rate = row
        print(f"  {name:35s} {gap:+6d} {fl:+8.0f} {rl:+8.0f} {o3t:6d} {oit:6d} {rate:6.1%}")

    # Additional context
    common_o3_gt_total = sum(o3[n]['total'] for n in common)
    common_o3i_gt_total = sum(o3i[n]['total'] for n in common)
    common_o3_func_total = sum(o3[n]['functions'] for n in common)
    common_o3i_func_total = sum(o3i[n]['functions'] for n in common)
    print(f"\n  Context for common binaries:")
    print(f"    GT total: O3={common_o3_gt_total}, O3i={common_o3i_gt_total}, diff={common_o3_gt_total - common_o3i_gt_total}")
    print(f"    Func total: O3={common_o3_func_total}, O3i={common_o3i_func_total}, diff={common_o3_func_total - common_o3i_func_total}")
    print(f"    NOTE: O3i has {common_o3i_gt_total - common_o3_gt_total} MORE GT macros overall despite matching FEWER.")
    print(f"    This means O3-inline binaries are larger (more inlined code => more macro calls in GT)")
    print(f"    but the evaluator matches fewer functions, and recovery is worse on matched functions.")

    # Count binaries where GT grew vs shrank
    gt_grew = sum(1 for n in common if o3i[n]['total'] > o3[n]['total'])
    gt_shrank = sum(1 for n in common if o3i[n]['total'] < o3[n]['total'])
    gt_same = sum(1 for n in common if o3i[n]['total'] == o3[n]['total'])
    print(f"\n    Binaries where GT grew in O3i:  {gt_grew}")
    print(f"    Binaries where GT shrank in O3i: {gt_shrank}")
    print(f"    Binaries where GT unchanged:    {gt_same}")

    # =========================================================================
    # ANALYSIS 5: Function count comparison
    # =========================================================================
    print("\n" + "=" * 110)
    print("ANALYSIS 5: FUNCTION COUNT COMPARISON (common binaries, sorted by biggest drop)")
    print("=" * 110)

    func_rows = []
    for name in common:
        d3 = o3[name]
        di = o3i[name]
        func_drop = d3['functions'] - di['functions']
        if d3['functions'] > 0:
            pct = func_drop / d3['functions'] * 100
        else:
            pct = 0.0
        func_rows.append((name, d3['functions'], di['functions'], func_drop, pct, d3['total'], di['total']))

    func_rows.sort(key=lambda r: r[3], reverse=True)

    header = f"{'Binary':40s} {'O3_Fn':>7s} {'O3i_Fn':>7s} {'FnDrop':>7s} {'Drop%':>7s} {'O3_GT':>7s} {'O3i_GT':>7s}"
    print(f"\n{header}")
    print("-" * len(header))

    for row in func_rows[:30]:
        name, o3f, oif, drop, pct, o3gt, oigt = row
        print(f"{name:40s} {o3f:7d} {oif:7d} {drop:+7d} {pct:+6.1f}% {o3gt:7d} {oigt:7d}")

    drops = [r[3] for r in func_rows]
    increased = sum(1 for d in drops if d < 0)
    decreased = sum(1 for d in drops if d > 0)
    unchanged = sum(1 for d in drops if d == 0)
    total_drop = sum(drops)
    print(f"\n  Summary: {decreased} binaries lost functions, {increased} gained, {unchanged} unchanged")
    print(f"  Net function change across common binaries: {total_drop:+d}")
    print(f"    (O3 total: {common_o3_func_total}, O3i total: {common_o3i_func_total})")

    # Binaries that GAINED functions
    print(f"\n  --- Binaries with BIGGEST function GAINS in O3-inline (top 15) ---")
    header2 = f"  {'Binary':40s} {'O3_Fn':>7s} {'O3i_Fn':>7s} {'FnGain':>7s} {'O3_GT':>7s} {'O3i_GT':>7s} {'O3_M':>5s} {'O3i_M':>5s}"
    print(header2)
    print(f"  " + "-" * (len(header2) - 2))
    gainers = [(name, d3f, dif, d3f - dif, o3gt, oigt) for name, d3f, dif, _, _, o3gt, oigt in func_rows if d3f < dif]
    gainers.sort(key=lambda r: r[3])  # Most negative = biggest gain
    for row in gainers[:15]:
        name, o3f, oif, drop, o3gt, oigt = row
        print(f"  {name:40s} {o3f:7d} {oif:7d} {oif-o3f:+7d} {o3gt:7d} {oigt:7d} {o3[name]['matched']:5d} {o3i[name]['matched']:5d}")

    # Correlation analysis
    print(f"\n  --- Correlation: function change vs matched macro change ---")
    import statistics
    func_changes = []
    matched_changes = []
    for name in common:
        fc = o3i[name]['functions'] - o3[name]['functions']
        mc = o3i[name]['matched'] - o3[name]['matched']
        func_changes.append(fc)
        matched_changes.append(mc)

    # Simple correlation
    n = len(func_changes)
    mean_fc = statistics.mean(func_changes)
    mean_mc = statistics.mean(matched_changes)
    cov = sum((fc - mean_fc) * (mc - mean_mc) for fc, mc in zip(func_changes, matched_changes)) / n
    std_fc = statistics.pstdev(func_changes)
    std_mc = statistics.pstdev(matched_changes)
    corr = cov / (std_fc * std_mc) if std_fc > 0 and std_mc > 0 else 0
    print(f"  Pearson correlation(func_change, matched_change): {corr:.3f}")
    print(f"  Mean function change: {mean_fc:+.1f}")
    print(f"  Mean matched macro change: {mean_mc:+.1f}")

    print("\n" + "=" * 110)
    print("END OF ANALYSIS")
    print("=" * 110)


if __name__ == '__main__':
    main()
