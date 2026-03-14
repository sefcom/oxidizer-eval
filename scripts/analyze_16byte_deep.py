"""
Deep analysis of 16-byte Result→Option misclassification and struct→primitive(8) pattern.
"""

import json
import os
from collections import defaultdict, Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
GT_DIR = ROOT / "targets" / "merged_ground_truth" / "nightly-2025-05-22-O3"
RESULT_DIR = ROOT / "output" / "result" / "nightly-2025-05-22-O3" / "Oxidizer"


def normalize_dwarf_type(type_data, recursive=True):
    if type_data is None:
        return None, None
    kind = type_data.get("kind")
    if kind == "Struct":
        return "struct", type_data["size"]
    elif kind == "Enumeration":
        name = type_data.get("name", "")
        if name.startswith("core::result::Result<") or name.startswith("Result<"):
            return "Result", type_data["size"]
        elif name.startswith("core::option::Option<") or name.startswith("Option<"):
            return "Option", type_data["size"]
        else:
            return "enum", type_data["size"]
    elif kind == "Primitive":
        return "primitive", type_data["size"]
    elif kind == "Array":
        ele_ty = type_data.get("ele_type")
        length = type_data.get("length")
        if ele_ty and isinstance(ele_ty, dict) and ele_ty.get("size") and length:
            return "array", length * ele_ty["size"]
        return None, None
    elif kind == "Pointer":
        pts_to = type_data.get("pts_to")
        if recursive and pts_to:
            pts_category, _ = normalize_dwarf_type(pts_to, recursive=False)
            if pts_category:
                return f"&{pts_category}", 8
        elif not recursive:
            return "reference", 8
    return None, None


def main():
    # Collect all function data
    result_to_option = []   # GT=Result, Pred=Option
    result_to_struct = []   # GT=Result, Pred=struct
    struct_to_prim8 = []    # GT=struct(16), Pred=primitive(8)
    option_to_prim8 = []    # GT=Option(16), Pred=primitive(8)
    option_to_result = []   # GT=Option(16), Pred=Result(16)

    binaries = sorted(os.listdir(GT_DIR))
    for binary in binaries:
        gt_binary_dir = GT_DIR / binary
        result_binary_dir = RESULT_DIR / binary
        if not gt_binary_dir.is_dir() or not result_binary_dir.is_dir():
            continue

        gt_files = set(f for f in os.listdir(gt_binary_dir) if f.endswith(".json"))
        result_files = set(f for f in os.listdir(result_binary_dir) if f.endswith(".json"))
        common = gt_files & result_files

        for fname in sorted(common):
            with open(gt_binary_dir / fname) as f:
                gt = json.load(f)
            with open(result_binary_dir / fname) as f:
                res = json.load(f)

            func_name = gt.get("name", "unknown")
            pred_vars = res.get("variable_types", {})
            prototype = gt.get("prototype")
            decompilation = res.get("decompilation", "")

            # Check return type
            if prototype and prototype.get("returnty"):
                ret_cat, ret_size = normalize_dwarf_type(prototype["returnty"])
                if ret_size == 16:
                    preds = pred_vars.get("return_type", [])
                    for p in preds:
                        entry = {
                            "binary": binary, "func_file": fname, "func_name": func_name,
                            "location": "return_type",
                            "gt_type_name": prototype["returnty"].get("name", ""),
                            "gt_category": ret_cat,
                            "pred": p,
                            "decompilation_snippet": decompilation[:300] if decompilation else "",
                        }
                        if ret_cat == "Result" and p[0] == "Option" and p[1] == 16:
                            result_to_option.append(entry)
                        elif ret_cat == "Result" and p[0] == "struct" and p[1] == 16:
                            result_to_struct.append(entry)
                        elif ret_cat == "Option" and p[0] == "Result" and p[1] == 16:
                            option_to_result.append(entry)

            # Check arguments
            if prototype and prototype.get("args"):
                for i, arg in enumerate(prototype["args"]):
                    if arg is None:
                        continue
                    arg_cat, arg_size = normalize_dwarf_type(arg)
                    if arg_size == 16:
                        preds = pred_vars.get(f"arg_{i}", [])
                        for p in preds:
                            entry = {
                                "binary": binary, "func_file": fname, "func_name": func_name,
                                "location": f"arg_{i}",
                                "gt_type_name": arg.get("name", ""),
                                "gt_category": arg_cat,
                                "pred": p,
                            }
                            if arg_cat == "struct" and p[0] == "primitive" and p[1] == 8:
                                struct_to_prim8.append(entry)
                            elif arg_cat == "Option" and p[0] == "primitive" and p[1] == 8:
                                option_to_prim8.append(entry)

            # Check local vars
            for var in gt.get("variables", []):
                var_type = var.get("type")
                if var_type is None:
                    continue
                var_cat, var_size = normalize_dwarf_type(var_type)
                if var_size != 16:
                    continue
                cat = var.get("category", "unknown")
                loc = var.get("location")
                if cat == "stack":
                    ident = f"stack_{loc}"
                elif cat == "register":
                    ident = f"reg_{loc}"
                else:
                    continue
                preds = pred_vars.get(ident, [])
                for p in preds:
                    entry = {
                        "binary": binary, "func_file": fname, "func_name": func_name,
                        "location": ident,
                        "gt_type_name": var_type.get("name", ""),
                        "gt_category": var_cat,
                        "pred": p,
                        "var_name": var.get("name", ""),
                    }
                    if var_cat == "struct" and p[0] == "primitive" and p[1] == 8:
                        struct_to_prim8.append(entry)
                    elif var_cat == "Result" and p[0] == "Option" and p[1] == 16:
                        result_to_option.append(entry)
                    elif var_cat == "Result" and p[0] == "struct" and p[1] == 16:
                        result_to_struct.append(entry)

    # =========== ANALYSIS ===========

    print("=" * 80)
    print("DEEP ANALYSIS OF 16-BYTE TYPE MISCLASSIFICATION PATTERNS")
    print("=" * 80)

    # ---- Pattern 1: Result → Option (150 cases) ----
    print(f"\n{'='*80}")
    print(f"PATTERN 1: Result(16) → Option(16)  [{len(result_to_option)} cases]")
    print(f"{'='*80}")

    # Break down by location type
    loc_counter = Counter()
    for e in result_to_option:
        loc_type = "return_type" if e["location"] == "return_type" else \
                   "argument" if e["location"].startswith("arg_") else "local_var"
        loc_counter[loc_type] += 1
    print("\nBy location:")
    for loc, cnt in loc_counter.most_common():
        print(f"  {loc}: {cnt}")

    # By GT type name
    gt_names = Counter(e["gt_type_name"] for e in result_to_option)
    print("\nBy Result type name:")
    for name, cnt in gt_names.most_common(10):
        print(f"  [{cnt:>4}] {name[:100]}")

    # By binary
    bin_counter = Counter(e["binary"] for e in result_to_option)
    print("\nTop binaries:")
    for b, cnt in bin_counter.most_common(10):
        print(f"  [{cnt:>4}] {b}")

    # ---- Pattern 2: Result → struct(16) (93 cases) ----
    print(f"\n{'='*80}")
    print(f"PATTERN 2: Result(16) → struct(16)  [{len(result_to_struct)} cases]")
    print(f"{'='*80}")

    loc_counter2 = Counter()
    for e in result_to_struct:
        loc_type = "return_type" if e["location"] == "return_type" else \
                   "argument" if e["location"].startswith("arg_") else "local_var"
        loc_counter2[loc_type] += 1
    print("\nBy location:")
    for loc, cnt in loc_counter2.most_common():
        print(f"  {loc}: {cnt}")

    gt_names2 = Counter(e["gt_type_name"] for e in result_to_struct)
    print("\nBy Result type name:")
    for name, cnt in gt_names2.most_common(10):
        print(f"  [{cnt:>4}] {name[:100]}")

    bin_counter2 = Counter(e["binary"] for e in result_to_struct)
    print("\nTop binaries:")
    for b, cnt in bin_counter2.most_common(10):
        print(f"  [{cnt:>4}] {b}")

    # ---- Pattern 3: struct(16) → primitive(8)  (628 cases - THE BIGGEST PROBLEM) ----
    print(f"\n{'='*80}")
    print(f"PATTERN 3: struct(16) → primitive(8)  [{len(struct_to_prim8)} cases]")
    print(f"{'='*80}")

    loc_counter3 = Counter()
    for e in struct_to_prim8:
        loc_type = "return_type" if e["location"] == "return_type" else \
                   "argument" if e["location"].startswith("arg_") else "local_var"
        loc_counter3[loc_type] += 1
    print("\nBy location:")
    for loc, cnt in loc_counter3.most_common():
        print(f"  {loc}: {cnt}")

    # The key insight: what are these 16-byte structs?
    gt_names3 = Counter(e["gt_type_name"] for e in struct_to_prim8)
    print("\nBy struct type name (THIS IS KEY):")
    for name, cnt in gt_names3.most_common(20):
        print(f"  [{cnt:>4}] {name[:100]}")

    # ---- Pattern 4: Option(16) → primitive(8) (40 cases) ----
    print(f"\n{'='*80}")
    print(f"PATTERN 4: Option(16) → primitive(8)  [{len(option_to_prim8)} cases]")
    print(f"{'='*80}")

    gt_names4 = Counter(e["gt_type_name"] for e in option_to_prim8)
    print("\nBy Option type name:")
    for name, cnt in gt_names4.most_common(10):
        print(f"  [{cnt:>4}] {name[:100]}")

    # ---- Pattern 5: Option(16) → Result(16) ----
    print(f"\n{'='*80}")
    print(f"PATTERN 5: Option(16) → Result(16)  [{len(option_to_result)} cases]")
    print(f"{'='*80}")

    gt_names5 = Counter(e["gt_type_name"] for e in option_to_result)
    print("\nBy Option type name:")
    for name, cnt in gt_names5.most_common(10):
        print(f"  [{cnt:>4}] {name[:100]}")

    # =========== ROOT CAUSE ANALYSIS ===========
    print(f"\n{'='*80}")
    print("ROOT CAUSE ANALYSIS")
    print(f"{'='*80}")

    print("""
Problem Breakdown (all 1088 unmatched 16-byte instances):

1. struct(16) → primitive(8): ~628 cases (57.7% of all unmatched)
   ROOT CAUSE: Fat pointers (&str, &[u8], &Path, trait objects) are 16-byte structs
   in DWARF but Oxidizer sees the two 8-byte halves (ptr + len/vtable) separately
   as independent primitive(8) values.

   Top types: &str (282), &Path (187), Cloned<..Iter..> (113), &[u8] (79),
   Box<dyn UError> (53), &[String] (25), &OsStr (21)

2. Result(16) → Option(16): ~150 cases (13.8% of all unmatched)
   ROOT CAUSE: Oxidizer's 16-byte calling convention analysis infers Option
   instead of Result. Both have similar discriminant+payload layout at 16 bytes.
   The heuristic may be biased towards Option.

   Almost all are Result<(), Box<dyn UError>> return types (the uumain pattern).

3. Result(16) → struct(16): ~93 cases (8.5% of all unmatched)
   ROOT CAUSE: Oxidizer recognizes it's a 16-byte composite type but doesn't
   identify it as an enum/Result. Falls back to generic struct.

4. Option(16) → primitive(8): ~40 cases (3.7%)
   ROOT CAUSE: Similar to struct→prim8, Option<usize>, Option<&str> etc.
   The 16-byte Option is split into two 8-byte values.

5. Other patterns: ~177 cases (16.3%)
   Various misclassifications including Result→prim8, Result→Result(24), etc.
""")

    # =========== ACTIONABLE IMPROVEMENTS ===========
    print(f"{'='*80}")
    print("SUGGESTED IMPROVEMENTS BY IMPACT")
    print(f"{'='*80}")
    print("""
PRIORITY 1 - Fat Pointer Recognition (would fix ~628 of 1088 = 57.7%)
  - &str, &[u8], &Path, trait objects, slices are all 16-byte fat pointers
  - Oxidizer currently splits them into two primitive(8) values
  - Need: Recognize when two consecutive 8-byte values form a fat pointer
    (ptr+len for slices/str, ptr+vtable for trait objects)
  - Especially critical for function arguments where the calling convention
    passes fat pointers in two registers (rdi+rsi, rdx+rcx, etc.)

PRIORITY 2 - Result vs Option Discrimination (would fix ~150 of 1088 = 13.8%)
  - The RustCallingConventionAnalysis already tries to distinguish Result/Option
  - But 150 Result types are misclassified as Option
  - Key insight: Almost all are Result<(), Box<dyn UError>> - the standard
    Rust error pattern where discriminant=0 means Ok(()) and discriminant≠0
    means Err(Box<dyn UError>)
  - Possible heuristic: If the non-zero discriminant value is a heap pointer
    (likely Box<>), it's more likely Result than Option
  - Possible heuristic: Track which functions call .map_err(), .unwrap_or_else(),
    or propagate with ? operator → those suggest Result

PRIORITY 3 - Result/Enum Recognition (would fix ~93 of 1088 = 8.5%)
  - 93 Result types are recognized as struct(16) instead of Result
  - These are being identified as composite types but not as enums
  - Could improve by looking at discriminant access patterns
""")


if __name__ == "__main__":
    main()
