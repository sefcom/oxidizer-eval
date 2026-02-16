#!/usr/bin/env python3
"""Analyze macro recovery from Oxidizer evaluation log."""

import re
import sys
from collections import defaultdict

LOG_PATH = "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/output/log/nightly-2025-05-22-O3-inline/2026-02-16-01-20-43.log"


def parse_log(path):
    with open(path, "r") as f:
        text = f.read()

    # Split into per-binary blocks by "Task completed" lines
    # Pattern: timestamp + Task completed: Oxidizer on .../BINARY_NAME
    task_pattern = re.compile(
        r'\d{4}-\d{2}-\d{2} \d{2}:\d{2}:\d{2},\d+ \[INFO\] Task completed: Oxidizer on .*/([^\s/]+)\s*\n'
    )

    # Find all task-completed positions
    matches = list(task_pattern.finditer(text))
    if not matches:
        print("No binary blocks found!")
        sys.exit(1)

    binaries = []

    for i, m in enumerate(matches):
        binary_name = m.group(1)
        start = m.start()
        end = matches[i + 1].start() if i + 1 < len(matches) else len(text)
        block = text[start:end]

        # Parse Ground Truth Macro Call Counts
        gt_macros = {}
        gt_match = re.search(r'Ground Truth Macro Call Counts:\n((?:  \w[\w:]*: \d+\n)*)', block)
        if gt_match:
            for line in gt_match.group(1).strip().split('\n'):
                line = line.strip()
                if line:
                    parts = line.rsplit(':', 1)
                    if len(parts) == 2:
                        macro_name = parts[0].strip()
                        count = int(parts[1].strip())
                        gt_macros[macro_name] = count

        # Parse Oxidizer Macro Call Counts
        ox_macros = {}
        ox_match = re.search(r'Oxidizer Macro Call Counts:\n((?:  \w[\w:]*: \d+\n)*)', block)
        if ox_match:
            for line in ox_match.group(1).strip().split('\n'):
                line = line.strip()
                if line:
                    parts = line.rsplit(':', 1)
                    if len(parts) == 2:
                        macro_name = parts[0].strip()
                        count = int(parts[1].strip())
                        ox_macros[macro_name] = count

        # Parse "Oxidizer covered X out of Y"
        covered_match = re.search(r'Oxidizer covered (\d+) out of (\d+) macro calls in ground truth', block)
        if covered_match:
            matched = int(covered_match.group(1))
            total = int(covered_match.group(2))
        else:
            matched = 0
            total = 0

        binaries.append({
            'name': binary_name,
            'gt_macros': gt_macros,
            'ox_macros': ox_macros,
            'matched': matched,
            'total': total,
            'missed': total - matched,
        })

    return binaries


def print_table1(binaries):
    """Top 20 binaries by absolute missed macros."""
    # Filter out binaries with 0 total macros
    with_macros = [b for b in binaries if b['total'] > 0]
    sorted_bins = sorted(with_macros, key=lambda b: b['missed'], reverse=True)

    total_missed_all = sum(b['missed'] for b in binaries)

    print("=" * 100)
    print("TABLE 1: Top 20 Binaries by Absolute Missed Macros (sorted descending)")
    print("=" * 100)
    print(f"{'Binary':<40} {'Matched/Total':>15} {'Recovery%':>10} {'Missed':>8} {'% Total Missed':>15}")
    print("-" * 100)

    for b in sorted_bins[:20]:
        rate = (b['matched'] / b['total'] * 100) if b['total'] > 0 else 0.0
        pct_of_total = (b['missed'] / total_missed_all * 100) if total_missed_all > 0 else 0.0
        print(f"{b['name']:<40} {b['matched']:>6}/{b['total']:<8} {rate:>9.1f}% {b['missed']:>8} {pct_of_total:>14.1f}%")

    print("-" * 100)
    total_matched = sum(b['matched'] for b in binaries)
    total_gt = sum(b['total'] for b in binaries)
    overall_rate = (total_matched / total_gt * 100) if total_gt > 0 else 0.0
    print(f"{'OVERALL (all binaries)':<40} {total_matched:>6}/{total_gt:<8} {overall_rate:>9.1f}% {total_missed_all:>8} {'100.0%':>15}")
    print()


def print_table2(binaries):
    """Global missed macro breakdown by macro type."""
    # Aggregate ground truth and oxidizer counts per macro type across all binaries
    gt_global = defaultdict(int)
    ox_global = defaultdict(int)

    for b in binaries:
        for macro, count in b['gt_macros'].items():
            gt_global[macro] += count
        for macro, count in b['ox_macros'].items():
            ox_global[macro] += count

    # For each macro type, compute stats
    # NOTE: Oxidizer may recover macros not in ground truth (false positives).
    # We only care about ground truth macros here.
    all_macro_types = set(gt_global.keys())

    rows = []
    for macro in all_macro_types:
        gt_count = gt_global[macro]
        # Cap recovered at ground truth count (Oxidizer can't recover more than GT has)
        ox_count = min(ox_global.get(macro, 0), gt_count)
        missed = gt_count - ox_count
        rate = (ox_count / gt_count * 100) if gt_count > 0 else 0.0
        rows.append((macro, gt_count, ox_count, rate, missed))

    rows.sort(key=lambda r: r[4], reverse=True)

    total_gt = sum(r[1] for r in rows)
    total_ox = sum(r[2] for r in rows)
    total_missed = sum(r[4] for r in rows)

    print("=" * 100)
    print("TABLE 2: Global Missed Macro Breakdown by Macro Type")
    print("=" * 100)
    print(f"{'Macro Type':<30} {'GT Total':>10} {'Recovered':>10} {'Recovery%':>10} {'Missed':>10} {'% of Missed':>12}")
    print("-" * 100)

    for macro, gt_count, ox_count, rate, missed in rows:
        pct = (missed / total_missed * 100) if total_missed > 0 else 0.0
        print(f"{macro:<30} {gt_count:>10} {ox_count:>10} {rate:>9.1f}% {missed:>10} {pct:>11.1f}%")

    print("-" * 100)
    overall_rate = (total_ox / total_gt * 100) if total_gt > 0 else 0.0
    print(f"{'TOTAL':<30} {total_gt:>10} {total_ox:>10} {overall_rate:>9.1f}% {total_missed:>10} {'100.0%':>12}")
    print()


def print_table3(binaries):
    """Per-binary macro type breakdown for top 5 worst binaries."""
    with_macros = [b for b in binaries if b['total'] > 0]
    sorted_bins = sorted(with_macros, key=lambda b: b['missed'], reverse=True)

    print("=" * 100)
    print("TABLE 3: Per-Binary Macro Type Breakdown for Top 5 Worst Binaries")
    print("=" * 100)

    for b in sorted_bins[:5]:
        rate = (b['matched'] / b['total'] * 100) if b['total'] > 0 else 0.0
        print(f"\n--- {b['name']} (Matched: {b['matched']}/{b['total']}, Recovery: {rate:.1f}%, Missed: {b['missed']}) ---")
        print(f"  {'Macro Type':<30} {'GT Count':>10} {'Ox Count':>10} {'Recovered':>10} {'Missed':>10}")
        print(f"  {'-'*80}")

        # Collect all macro types from both GT and OX
        all_macros = set(b['gt_macros'].keys()) | set(b['ox_macros'].keys())
        rows = []
        for macro in all_macros:
            gt = b['gt_macros'].get(macro, 0)
            ox_raw = b['ox_macros'].get(macro, 0)
            recovered = min(ox_raw, gt)
            missed = gt - recovered
            rows.append((macro, gt, ox_raw, recovered, missed))

        rows.sort(key=lambda r: r[4], reverse=True)

        for macro, gt, ox_raw, recovered, missed in rows:
            flag = " *" if ox_raw > 0 and gt == 0 else ""
            print(f"  {macro:<30} {gt:>10} {ox_raw:>10} {recovered:>10} {missed:>10}{flag}")

        sub_gt = sum(r[1] for r in rows)
        sub_rec = sum(min(r[2], r[1]) for r in rows)
        sub_missed = sum(r[4] for r in rows)
        print(f"  {'-'*80}")
        print(f"  {'SUBTOTAL':<30} {sub_gt:>10} {'':>10} {sub_rec:>10} {sub_missed:>10}")
        print(f"  (* = Oxidizer produced this macro but it was not in ground truth)")

    print()


def main():
    binaries = parse_log(LOG_PATH)

    # Check if the last block is a summary (many functions) vs per-binary
    # The last block with # Functions > some threshold might be an aggregate summary
    # Let's check the last entry
    last = binaries[-1]
    print(f"Total binary blocks parsed: {len(binaries)}")
    print(f"Last block: {last['name']} (matched={last['matched']}, total={last['total']})")

    # Check if any block looks like an aggregate (we'll keep all blocks)
    # The summary at end of file has "# Functions: 931" etc., it's still a per-binary block
    print()

    print_table1(binaries)
    print_table2(binaries)
    print_table3(binaries)

    # Extra summary stats
    total_matched = sum(b['matched'] for b in binaries)
    total_gt = sum(b['total'] for b in binaries)
    bins_with_macros = sum(1 for b in binaries if b['total'] > 0)
    bins_perfect = sum(1 for b in binaries if b['total'] > 0 and b['matched'] == b['total'])
    bins_zero = sum(1 for b in binaries if b['total'] > 0 and b['matched'] == 0)

    print("=" * 100)
    print("SUMMARY STATISTICS")
    print("=" * 100)
    print(f"Total binaries evaluated:         {len(binaries)}")
    print(f"Binaries with macro ground truth: {bins_with_macros}")
    print(f"Binaries with perfect recovery:   {bins_perfect}")
    print(f"Binaries with zero recovery:      {bins_zero}")
    print(f"Total GT macro calls:             {total_gt}")
    print(f"Total matched macro calls:        {total_matched}")
    print(f"Overall recovery rate:            {total_matched/total_gt*100:.1f}%" if total_gt > 0 else "N/A")
    print(f"Total missed:                     {total_gt - total_matched}")


if __name__ == "__main__":
    main()
