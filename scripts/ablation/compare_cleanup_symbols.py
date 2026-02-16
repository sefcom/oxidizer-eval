"""
Compare cleanup function symbol recovery accuracy between propagation and no_propagation.

A function is considered a cleanup function if its normalized name (with generic parameters stripped)
matches one of the CLEANUP_FUNCTIONS defined in cleanup_code_remover.py.

A recovery is correct if both the ground truth name AND the recovered name are cleanup functions.
"""

import json
import os
import re
import sys

CLEANUP_FUNCTIONS = {
    "free",
    "__rust_dealloc",
    "__rustc::__rust_dealloc",
    "close",
    "_close",
    "core::ptr::drop_in_place",
    "core::ops::drop::Drop::drop",
    "alloc::raw_vec::RawVecInner::deallocate",
    "smallvec::deallocate",
}

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


def is_cleanup_function(name: str) -> bool:
    return strip_generics(name) in CLEANUP_FUNCTIONS


def load_json(path: str) -> dict[str, str]:
    with open(path) as f:
        return json.load(f)


def evaluate(ground_truth_dir: str, recovered_dir: str) -> dict:
    total_cleanup = 0
    correct = 0
    per_binary = {}

    for filename in sorted(os.listdir(ground_truth_dir)):
        if not filename.endswith(".json"):
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
            if not is_cleanup_function(gt_name):
                continue
            binary_total += 1
            rec_name = rec.get(addr)
            if rec_name and is_cleanup_function(rec_name):
                binary_correct += 1

        if binary_total > 0:
            per_binary[filename] = {
                "total": binary_total,
                "correct": binary_correct,
                "accuracy": binary_correct / binary_total,
            }

        total_cleanup += binary_total
        correct += binary_correct

    return {
        "total_cleanup": total_cleanup,
        "correct": correct,
        "accuracy": correct / total_cleanup if total_cleanup > 0 else 0.0,
        "per_binary": per_binary,
    }


def main():
    for d in [GROUND_TRUTH_DIR, PROPAGATION_DIR, NO_PROPAGATION_DIR]:
        if not os.path.isdir(d):
            print(f"Error: directory not found: {d}", file=sys.stderr)
            sys.exit(1)

    prop_result = evaluate(GROUND_TRUTH_DIR, PROPAGATION_DIR)
    no_prop_result = evaluate(GROUND_TRUTH_DIR, NO_PROPAGATION_DIR)

    print("=" * 70)
    print("Cleanup Function Symbol Recovery Accuracy")
    print("=" * 70)
    print()
    print(f"{'Method':<20} {'Correct':>10} {'Total':>10} {'Accuracy':>10}")
    print("-" * 50)
    print(f"{'propagation':<20} {prop_result['correct']:>10} {prop_result['total_cleanup']:>10} {prop_result['accuracy']:>10.2%}")
    print(f"{'no_propagation':<20} {no_prop_result['correct']:>10} {no_prop_result['total_cleanup']:>10} {no_prop_result['accuracy']:>10.2%}")
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
