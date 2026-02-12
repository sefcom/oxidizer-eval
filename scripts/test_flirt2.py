import os
import angr
from angr.rust.utils.demangler import demangle


def parse_version(filename):
    """Parse version and opt level from filename like '1.87.0-O3.sig'"""
    name = filename.replace(".sig", "")
    parts = name.rsplit("-O", 1)
    version = parts[0]
    opt_level = parts[1] if len(parts) > 1 else ""
    # Parse version tuple
    v_parts = version.split(".")
    return tuple(int(x) for x in v_parts), opt_level


def match_signature(proj, sig_path):
    """Match a single signature file and return count."""
    try:
        fa = proj.analyses.Flirt(sig_path, dry_run=True)
        matched_functions = fa.matched_suggestions["Temporary"][1].values()
        matched_functions = [demangle(name) for name in matched_functions]
        matched_functions = [
            name
            for name in matched_functions
            if name.startswith("core::") or name.startswith("std::") or name.startswith("alloc::")
        ]
        return len(matched_functions)
    except Exception:
        return 0


if __name__ == "__main__":
    binary_path = "targets/stripped/nightly-2025-05-22-O3/just"
    sig_dir = "targets/flirt_sigs"

    # Load binary and generate CFG
    print("Loading binary and generating CFG...")
    proj = angr.Project(binary_path, auto_load_libs=False)
    proj.analyses.CFGFast(normalize=True)

    # Get all sig files and group by version and opt level
    sig_files = [f for f in os.listdir(sig_dir) if f.endswith(".sig")]

    # Group by opt level
    opt_levels = ["0", "1", "2", "3", "s", "z"]
    sigs_by_opt = {opt: [] for opt in opt_levels}
    for f in sig_files:
        _, opt = parse_version(f)
        if opt in sigs_by_opt:
            sigs_by_opt[opt].append(f)

    # Sort each opt level by version (newest first)
    for opt in opt_levels:
        sigs_by_opt[opt].sort(key=lambda x: parse_version(x)[0], reverse=True)

    # Cache tested results
    cache = {}

    def cached_count(sig_file):
        if sig_file not in cache:
            sig_path = os.path.join(sig_dir, sig_file)
            count = match_signature(proj, sig_path)
            cache[sig_file] = count
            print(f"  [{len(cache)}] Testing {sig_file}: {count} matches")
        return cache[sig_file]

    # Phase 1: Rough scan to find approximate version range
    # Pick one opt level to do version search first and find high-match region
    print("\n=== Phase 1: Find approximate version range ===")
    # Use O2 as probe (O2/O3 are usually similar)
    probe_opt = "2"
    probe_sigs = sigs_by_opt[probe_opt]

    # Sample more version points
    n_samples = min(10, len(probe_sigs))
    step = max(1, len(probe_sigs) // n_samples)
    sample_indices = list(range(0, len(probe_sigs), step))[:n_samples]

    version_scores = []
    for idx in sample_indices:
        count = cached_count(probe_sigs[idx])
        version_scores.append((idx, count))

    # Find the version index with highest score
    best_probe_idx = max(version_scores, key=lambda x: x[1])[0]
    best_probe_version = parse_version(probe_sigs[best_probe_idx])[0]
    print(f"Best probe version: {probe_sigs[best_probe_idx]} at index {best_probe_idx}")

    # Phase 2: Compare all opt levels around the found version
    print("\n=== Phase 2: Determine opt level around best version ===")
    opt_scores = {}
    for opt in opt_levels:
        sigs = sigs_by_opt[opt]
        if not sigs:
            continue
        # Find the closest version to best_probe_version
        closest_idx = 0
        closest_diff = float("inf")
        for i, sig in enumerate(sigs):
            v, _ = parse_version(sig)
            diff = abs(
                v[0] * 1000000
                + v[1] * 1000
                + v[2]
                - best_probe_version[0] * 1000000
                - best_probe_version[1] * 1000
                - best_probe_version[2]
            )
            if diff < closest_diff:
                closest_diff = diff
                closest_idx = i

        # Test a few versions around this version
        test_range = range(max(0, closest_idx - 2), min(len(sigs), closest_idx + 3))
        scores = [cached_count(sigs[i]) for i in test_range]
        opt_scores[opt] = max(scores)
        print(f"  O{opt}: max score = {opt_scores[opt]}")

    best_opt = max(opt_scores, key=opt_scores.get)
    print(f"\nBest opt level: O{best_opt}")

    # Phase 3: Use ternary search to find best version in the optimal opt level
    print(f"\n=== Phase 3: Ternary search in O{best_opt} ===")
    filtered_sigs = sigs_by_opt[best_opt]

    def cached_count_idx(idx):
        return cached_count(filtered_sigs[idx])

    left, right = 0, len(filtered_sigs) - 1

    while right - left > 3:
        mid1 = left + (right - left) // 3
        mid2 = right - (right - left) // 3

        c1 = cached_count_idx(mid1)
        c2 = cached_count_idx(mid2)

        if c1 < c2:
            left = mid1
        else:
            right = mid2

    # Fine search in the remaining small range
    print(f"\n=== Fine search in range [{left}, {right}] ===")
    best_idx = left
    best_count = cached_count_idx(left)
    for i in range(left, right + 1):
        c = cached_count_idx(i)
        if c > best_count:
            best_count = c
            best_idx = i

    print(f"\n=== Best match ===")
    print(f"Version: {filtered_sigs[best_idx].replace('.sig', '')}, matched: {best_count} functions")
    print(f"Total sig files tested: {len(cache)} / {len(sig_files)}")
