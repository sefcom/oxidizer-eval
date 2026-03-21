"""
Check the ratio of std functions (std::, core::, alloc::) among all functions in ground truth.
"""

import json
import os
import re
import sys

STD_PREFIXES = ("std::", "core::", "alloc::", "<std::", "<core::", "<alloc::")

GENERIC_TYPE_PATTERN = re.compile(r"<[^<>]*>")

GROUND_TRUTH_DIR = "targets/symbols/nightly-2025-05-22-O3"


def strip_generics(name: str) -> str:
    old_len = 0
    while old_len != len(name):
        old_len = len(name)
        name = GENERIC_TYPE_PATTERN.sub("", name)
    return name


def is_std_function(name: str) -> bool:
    return strip_generics(name).startswith(STD_PREFIXES)


def main():
    if not os.path.isdir(GROUND_TRUTH_DIR):
        print(f"Error: directory not found: {GROUND_TRUTH_DIR}", file=sys.stderr)
        sys.exit(1)

    total_all = 0
    total_std = 0
    per_binary = {}

    for filename in sorted(os.listdir(GROUND_TRUTH_DIR)):
        if not filename.endswith(".json"):
            continue
        path = os.path.join(GROUND_TRUTH_DIR, filename)
        with open(path) as f:
            gt = json.load(f)

        n_all = len(gt)
        n_std = sum(1 for name in gt.values() if is_std_function(name))

        total_all += n_all
        total_std += n_std

        if n_all > 0:
            per_binary[filename] = {
                "all": n_all,
                "std": n_std,
                "ratio": n_std / n_all,
            }

    print("=" * 70)
    print("Std Function Ratio in Ground Truth (std::, core::, alloc::)")
    print("=" * 70)
    print()
    print(f"Total functions: {total_all}")
    print(f"Std functions:   {total_std}")
    print(f"Ratio:           {total_std / total_all:.2%}" if total_all > 0 else "Ratio:           N/A")
    print()

    if per_binary:
        print(f"{'Binary':<30} {'Std':>8} {'All':>8} {'Ratio':>10}")
        print("-" * 56)
        for binary in sorted(per_binary):
            b = per_binary[binary]
            print(f"{binary:<30} {b['std']:>8} {b['all']:>8} {b['ratio']:>10.2%}")


if __name__ == "__main__":
    main()
