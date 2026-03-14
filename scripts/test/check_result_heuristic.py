"""
Check the accuracy of the Result variant heuristic on DWARF ground truth data.

Heuristic (niche case, one discriminant missing):
  the larger variant (by field size) is Ok

Usage:
    python check_result_heuristic.py [target_dir]

Default: targets/dwarf/nightly-2025-05-22-O3-inline
"""

import json
import glob
import os
import sys
from multiprocessing import Pool


def get_variant_size(fields):
    if not fields:
        return 0
    return sum(ftype.get("size") or 0 for _, ftype in fields)


def process_file(fpath) -> dict:
    """Return {result_type_name: (ok_disc, err_disc, ok_size, err_size, disc_size)} for this file."""
    with open(fpath) as f:
        d = json.load(f)

    # Collect Result type names that appear as function return types
    return_result_names = set()
    for fn in d.get("functions", []):
        rt = fn.get("prototype", {}).get("returnty", {})
        if "core::result::Result" in rt.get("name", ""):
            return_result_names.add(rt["name"])

    entries = {}
    for name, ty in d.get("structs", {}).items():
        if name not in return_result_names:
            continue
        if ty.get("kind") != "Enumeration" or ty.get("variants") is None:
            continue
        variants = ty["variants"]
        if "Ok" not in variants or "Err" not in variants:
            continue
        entries[name] = (
            variants["Ok"][0],
            variants["Err"][0],
            get_variant_size(variants["Ok"][1]),
            get_variant_size(variants["Err"][1]),
            ty.get("discriminant_size") or 0,
        )
    return entries


def main():
    script_dir = os.path.dirname(os.path.abspath(__file__))
    repo_root = os.path.join(script_dir, "..", "..")
    default_dir = os.path.join(repo_root, "targets", "dwarf", "nightly-2025-05-22-O3-inline")
    target_dir = sys.argv[1] if len(sys.argv) > 1 else default_dir

    files = glob.glob(os.path.join(target_dir, "*.json"))
    if not files:
        print(f"No JSON files found in {target_dir}")
        sys.exit(1)

    print(f"Target: {target_dir}")
    print(f"Files:  {len(files)}")

    merged: dict = {}
    with Pool(16) as pool:
        for file_entries in pool.imap_unordered(process_file, files):
            for name, data in file_entries.items():
                if name not in merged:
                    merged[name] = data

    # Compute statistics
    ok_larger = ok_smaller = 0

    for ok_disc, err_disc, ok_size, err_size, disc_size in merged.values():
        if (ok_disc is None) == (err_disc is None):
            continue
        if ok_disc is not None:
            ok_size += disc_size
        if err_disc is not None:
            err_size += disc_size
        if ok_size > err_size:
            ok_larger += 1
        elif ok_size < err_size:
            ok_smaller += 1

    total = ok_larger + ok_smaller
    pct = lambda n: f"{n/total*100:.1f}%" if total else "N/A"
    print(f"Ok > Err: {ok_larger} ({pct(ok_larger)})")
    print(f"Ok < Err: {ok_smaller} ({pct(ok_smaller)})")
    print(f"Total (sizes differ): {total}")


if __name__ == "__main__":
    main()
