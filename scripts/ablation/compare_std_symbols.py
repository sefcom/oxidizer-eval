"""
Compare standard library function symbol recovery accuracy between propagation and no_propagation.

A function is considered a std function if its normalized name (with generic parameters stripped)
starts with one of the Rust standard library crate prefixes: std::, core::, alloc::.

A recovery is correct if the recovered name matches the ground truth name (after stripping generics).
"""

import json
import os
import re
import sys

STD_PREFIXES = ("std::", "core::", "alloc::", "<std::", "<core::", "<alloc::")

GENERIC_TYPE_PATTERN = re.compile(r"<[^<>]*>")

GROUND_TRUTH_DIR = "targets/symbols/nightly-2025-05-22-O3"
PROPAGATION_DIR = "output/ablation/symbols/propagation"
NO_PROPAGATION_DIR = "output/ablation/symbols/no_propagation"


def strip_generics(name: str) -> str:
    old_len = 0
    while old_len != len(name):
        old_len = len(name)
        name = GENERIC_TYPE_PATTERN.sub("", name)
    return name


def is_std_function(name: str) -> bool:
    stripped = strip_generics(name)
    return stripped.startswith(STD_PREFIXES)


def load_json(path: str) -> dict[str, str]:
    with open(path) as f:
        return json.load(f)


def evaluate(ground_truth_dir: str, recovered_dir: str, allowed_files: set[str] | None = None) -> dict:
    total_std = 0
    correct = 0
    per_binary = {}

    for filename in sorted(os.listdir(ground_truth_dir)):
        if not filename.endswith(".json"):
            continue
        if allowed_files is not None and filename not in allowed_files:
            continue
        gt_path = os.path.join(ground_truth_dir, filename)
        rec_path = os.path.join(recovered_dir, filename)
        if not os.path.exists(rec_path):
            continue

        gt = load_json(gt_path)
        rec = load_json(rec_path)

        binary_total = 0
        binary_correct = 0

        for addr, gt_name in gt.items():
            if not is_std_function(gt_name):
                continue
            binary_total += 1
            rec_name = rec.get(addr)
            if rec_name and strip_generics(rec_name) == strip_generics(gt_name):
                binary_correct += 1

        if binary_total > 0:
            per_binary[filename] = {
                "total": binary_total,
                "correct": binary_correct,
                "accuracy": binary_correct / binary_total,
            }

        total_std += binary_total
        correct += binary_correct

    return {
        "total_std": total_std,
        "correct": correct,
        "accuracy": correct / total_std if total_std > 0 else 0.0,
        "per_binary": per_binary,
    }


def main():
    for d in [GROUND_TRUTH_DIR, PROPAGATION_DIR, NO_PROPAGATION_DIR]:
        if not os.path.isdir(d):
            print(f"Error: directory not found: {d}", file=sys.stderr)
            sys.exit(1)

    # Only evaluate binaries that have JSON files in both directories
    prop_files = {f for f in os.listdir(PROPAGATION_DIR) if f.endswith(".json")}
    no_prop_files = {f for f in os.listdir(NO_PROPAGATION_DIR) if f.endswith(".json")}
    common_files = prop_files & no_prop_files

    prop_result = evaluate(GROUND_TRUTH_DIR, PROPAGATION_DIR, common_files)
    no_prop_result = evaluate(GROUND_TRUTH_DIR, NO_PROPAGATION_DIR, common_files)

    print("=" * 70)
    print("Std Function Symbol Recovery Accuracy (std::, core::, alloc::)")
    print("=" * 70)
    print()
    print(f"{'Method':<20} {'Correct':>10} {'Total':>10} {'Accuracy':>10}")
    print("-" * 50)
    print(
        f"{'propagation':<20} {prop_result['correct']:>10} {prop_result['total_std']:>10} {prop_result['accuracy']:>10.2%}"
    )
    print(
        f"{'no_propagation':<20} {no_prop_result['correct']:>10} {no_prop_result['total_std']:>10} {no_prop_result['accuracy']:>10.2%}"
    )
    print()

    # Per-binary breakdown
    all_binaries = sorted(set(prop_result["per_binary"]) | set(no_prop_result["per_binary"]))
    if all_binaries:
        print(f"{'Binary':<30} {'prop acc':>10} {'no_prop acc':>12} {'diff':>10}")
        print("-" * 62)
        for binary in all_binaries:
            p = prop_result["per_binary"].get(binary, {})
            np_ = no_prop_result["per_binary"].get(binary, {})
            p_acc = p.get("accuracy", 0.0)
            np_acc = np_.get("accuracy", 0.0)
            diff = p_acc - np_acc
            print(f"{binary:<30} {p_acc:>10.2%} {np_acc:>12.2%} {diff:>+10.2%}")


if __name__ == "__main__":
    main()
