"""
Compare the number of recovered `match` and `if let` expressions between
Oxidizer and Oxidizer_no_prototype_inference on nightly-2025-05-22-O3.

Only functions that both variants successfully decompiled are included.
Counts are extracted via regex from the decompilation text.
"""

import json
import os
import re
import sys

RESULT_DIR = "output/result/nightly-2025-05-22-O3"
OXIDIZER_DIR = os.path.join(RESULT_DIR, "Oxidizer")
NO_PROTO_DIR = os.path.join(RESULT_DIR, "Oxidizer_no_prototype_inference")

# Patterns: match <expr> { and if let <pattern> = <expr> {
MATCH_PATTERN = re.compile(r"\bmatch\b\s+")
IF_LET_PATTERN = re.compile(r"\bif\s+let\b\s+")


def count_patterns(decompilation: str) -> tuple[int, int]:
    """Return (match_count, if_let_count) for a decompilation string."""
    return (
        len(MATCH_PATTERN.findall(decompilation)),
        len(IF_LET_PATTERN.findall(decompilation)),
    )


def load_decompilation(path: str) -> str | None:
    """Load decompilation text from a result JSON. Returns None on failure."""
    try:
        with open(path) as f:
            data = json.load(f)
        d = data.get("decompilation")
        if d and isinstance(d, str):
            return d
    except (json.JSONDecodeError, OSError):
        pass
    return None


def main():
    for d in (OXIDIZER_DIR, NO_PROTO_DIR):
        if not os.path.isdir(d):
            print(f"Error: directory not found: {d}", file=sys.stderr)
            sys.exit(1)

    # Gather per-binary stats
    totals = {
        "oxidizer": {"match": 0, "if_let": 0, "funcs": 0},
        "no_proto": {"match": 0, "if_let": 0, "funcs": 0},
    }
    per_binary = {}

    targets = sorted(
        set(os.listdir(OXIDIZER_DIR)) & set(os.listdir(NO_PROTO_DIR))
    )

    for target in targets:
        ox_dir = os.path.join(OXIDIZER_DIR, target)
        np_dir = os.path.join(NO_PROTO_DIR, target)
        if not os.path.isdir(ox_dir) or not os.path.isdir(np_dir):
            continue

        ox_files = set(os.listdir(ox_dir))
        np_files = set(os.listdir(np_dir))
        common = sorted(ox_files & np_files)

        bin_ox = {"match": 0, "if_let": 0, "funcs": 0}
        bin_np = {"match": 0, "if_let": 0, "funcs": 0}

        for fname in common:
            if not fname.endswith(".json"):
                continue
            ox_decomp = load_decompilation(os.path.join(ox_dir, fname))
            np_decomp = load_decompilation(os.path.join(np_dir, fname))
            if ox_decomp is None or np_decomp is None:
                continue

            ox_m, ox_il = count_patterns(ox_decomp)
            np_m, np_il = count_patterns(np_decomp)

            bin_ox["match"] += ox_m
            bin_ox["if_let"] += ox_il
            bin_ox["funcs"] += 1
            bin_np["match"] += np_m
            bin_np["if_let"] += np_il
            bin_np["funcs"] += 1

        if bin_ox["funcs"] > 0:
            per_binary[target] = {"oxidizer": bin_ox, "no_proto": bin_np}
            for key in ("match", "if_let", "funcs"):
                totals["oxidizer"][key] += bin_ox[key]
                totals["no_proto"][key] += bin_np[key]

    # Print results
    print("=" * 90)
    print("match / if let Recovery: Oxidizer vs Oxidizer_no_prototype_inference")
    print("nightly-2025-05-22-O3  (only functions both decompiled successfully)")
    print("=" * 90)
    print()

    header = f"{'Binary':<25} {'Funcs':>6}  {'Ox match':>9} {'NP match':>9}  {'Ox if let':>10} {'NP if let':>10}"
    print(header)
    print("-" * len(header))

    for target in sorted(per_binary):
        ox = per_binary[target]["oxidizer"]
        np = per_binary[target]["no_proto"]
        print(
            f"{target:<25} {ox['funcs']:>6}  {ox['match']:>9} {np['match']:>9}  {ox['if_let']:>10} {np['if_let']:>10}"
        )

    print("-" * len(header))
    ox_t = totals["oxidizer"]
    np_t = totals["no_proto"]
    print(
        f"{'TOTAL':<25} {ox_t['funcs']:>6}  {ox_t['match']:>9} {np_t['match']:>9}  {ox_t['if_let']:>10} {np_t['if_let']:>10}"
    )
    print()

    # Summary
    print("Summary:")
    for label, key in [("match", "match"), ("if let", "if_let")]:
        ox_val = ox_t[key]
        np_val = np_t[key]
        diff = ox_val - np_val
        sign = "+" if diff > 0 else ""
        pct = (diff / np_val * 100) if np_val else float("inf")
        print(
            f"  {label:>8}: Oxidizer={ox_val}  NoProto={np_val}  "
            f"diff={sign}{diff} ({sign}{pct:.1f}%)"
        )

    combined_ox = ox_t["match"] + ox_t["if_let"]
    combined_np = np_t["match"] + np_t["if_let"]
    diff = combined_ox - combined_np
    sign = "+" if diff > 0 else ""
    pct = (diff / combined_np * 100) if combined_np else float("inf")
    print(
        f"  {'total':>8}: Oxidizer={combined_ox}  NoProto={combined_np}  "
        f"diff={sign}{diff} ({sign}{pct:.1f}%)"
    )


if __name__ == "__main__":
    main()
