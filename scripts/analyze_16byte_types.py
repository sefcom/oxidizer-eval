"""
Analyze 16-byte struct/Result/Option type recovery for nightly-2025-05-22-O3.
Compares Oxidizer predictions against ground truth to find where recovery fails.
"""

import json
import os
import sys
from collections import defaultdict, Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
GT_DIR = ROOT / "targets" / "merged_ground_truth" / "nightly-2025-05-22-O3"
RESULT_DIR = ROOT / "output" / "result" / "nightly-2025-05-22-O3" / "Oxidizer"


def normalize_dwarf_type(type_data, recursive=True):
    """Normalize a ground truth type dict to (category, size)."""
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
        if ele_ty and hasattr(ele_ty, "get") and ele_ty.get("size") and length:
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


def analyze_function(gt_data, result_data):
    """Analyze a single function's 16-byte type recovery."""
    issues = []

    prototype = gt_data.get("prototype")
    variables = gt_data.get("variables", [])
    pred_var_types = result_data.get("variable_types", {})

    func_name = gt_data.get("name", "unknown")

    # Collect all 16-byte ground truth types
    gt_16byte = []

    # Check return type
    if prototype and prototype.get("returnty"):
        ret_cat, ret_size = normalize_dwarf_type(prototype["returnty"])
        if ret_size == 16:
            pred_ret = pred_var_types.get("return_type", [])
            gt_16byte.append({
                "location": "return_type",
                "gt_category": ret_cat,
                "gt_size": ret_size,
                "gt_type_name": prototype["returnty"].get("name", ""),
                "gt_type_kind": prototype["returnty"].get("kind", ""),
                "predictions": pred_ret,
                "func_name": func_name,
            })

    # Check arguments
    if prototype and prototype.get("args"):
        for i, arg in enumerate(prototype["args"]):
            if arg is None:
                continue
            arg_cat, arg_size = normalize_dwarf_type(arg)
            if arg_size == 16:
                pred_arg = pred_var_types.get(f"arg_{i}", [])
                gt_16byte.append({
                    "location": f"arg_{i}",
                    "gt_category": arg_cat,
                    "gt_size": arg_size,
                    "gt_type_name": arg.get("name", ""),
                    "gt_type_kind": arg.get("kind", ""),
                    "predictions": pred_arg,
                    "func_name": func_name,
                })

    # Check local variables
    for var in variables:
        var_type = var.get("type")
        if var_type is None:
            continue
        var_cat, var_size = normalize_dwarf_type(var_type)
        if var_size == 16:
            category = var.get("category", "unknown")
            location = var.get("location")
            if category == "stack":
                ident = f"stack_{location}"
            elif category == "register":
                ident = f"reg_{location}"
            else:
                ident = "unknown"
            pred_var = pred_var_types.get(ident, [])
            gt_16byte.append({
                "location": ident,
                "gt_category": var_cat,
                "gt_size": var_size,
                "gt_type_name": var_type.get("name", ""),
                "gt_type_kind": var_type.get("kind", ""),
                "predictions": pred_var,
                "func_name": func_name,
                "var_name": var.get("name", ""),
            })

    return gt_16byte


def check_match(gt_entry):
    """Check if any prediction matches the ground truth for a 16-byte type."""
    gt_cat = gt_entry["gt_category"]
    gt_size = gt_entry["gt_size"]
    preds = gt_entry["predictions"]

    for pred in preds:
        pred_cat, pred_size = pred[0], pred[1]
        # Exact match
        if pred_cat == gt_cat and pred_size == gt_size:
            return True, "exact", pred
        # Enum rule: predicted Result/Option matches GT enum with same size
        if gt_cat == "enum" and pred_cat in ("Result", "Option") and pred_size == gt_size:
            return True, "enum_relaxed", pred

    return False, "no_match", None


def main():
    binaries = sorted(os.listdir(GT_DIR))

    # Aggregate stats
    total_by_cat = Counter()           # Total 16-byte GT instances by category
    matched_by_cat = Counter()         # Matched 16-byte GT instances by category
    unmatched_details = defaultdict(list)  # Unmatched details by category
    matched_details = defaultdict(list)

    # By location type
    total_by_loc = Counter()           # return_type, arg_N, stack_N, reg_N
    matched_by_loc = Counter()

    # By binary
    total_by_binary = Counter()
    matched_by_binary = Counter()

    # Misclassification patterns
    misclass_patterns = Counter()      # (gt_cat, pred_cat, pred_size) -> count
    no_pred_count = Counter()          # GT category -> count of "no prediction at all"

    # Prediction breakdown for 16-byte unmatched
    wrong_pred_details = []

    all_16byte_entries = []

    for binary in binaries:
        gt_binary_dir = GT_DIR / binary
        result_binary_dir = RESULT_DIR / binary

        if not gt_binary_dir.is_dir() or not result_binary_dir.is_dir():
            continue

        gt_files = set(f for f in os.listdir(gt_binary_dir) if f.endswith(".json"))
        result_files = set(f for f in os.listdir(result_binary_dir) if f.endswith(".json"))

        common_files = gt_files & result_files

        for fname in sorted(common_files):
            with open(gt_binary_dir / fname) as f:
                gt_data = json.load(f)
            with open(result_binary_dir / fname) as f:
                result_data = json.load(f)

            entries = analyze_function(gt_data, result_data)

            for entry in entries:
                entry["binary"] = binary
                entry["func_file"] = fname
                all_16byte_entries.append(entry)

                cat = entry["gt_category"]
                loc_type = "return_type" if entry["location"] == "return_type" else \
                           "argument" if entry["location"].startswith("arg_") else \
                           "local_var"

                total_by_cat[cat] += 1
                total_by_loc[loc_type] += 1
                total_by_binary[binary] += 1

                matched, match_type, matched_pred = check_match(entry)

                if matched:
                    matched_by_cat[cat] += 1
                    matched_by_loc[loc_type] += 1
                    matched_by_binary[binary] += 1
                    matched_details[cat].append(entry)
                else:
                    unmatched_details[cat].append(entry)
                    preds = entry["predictions"]
                    if not preds:
                        no_pred_count[cat] += 1
                    else:
                        for pred in preds:
                            misclass_patterns[(cat, pred[0], pred[1])] += 1
                        wrong_pred_details.append(entry)

    # ===================== REPORT =====================
    print("=" * 80)
    print("16-BYTE TYPE RECOVERY ANALYSIS — nightly-2025-05-22-O3 (Oxidizer)")
    print("=" * 80)

    total_all = sum(total_by_cat.values())
    matched_all = sum(matched_by_cat.values())
    print(f"\nTotal 16-byte ground truth instances: {total_all}")
    print(f"Total matched: {matched_all} ({matched_all/total_all*100:.1f}%)" if total_all else "No 16-byte types found")
    print(f"Total unmatched: {total_all - matched_all}")

    print("\n" + "-" * 80)
    print("BREAKDOWN BY TYPE CATEGORY")
    print("-" * 80)
    print(f"{'Category':<15} {'Total':>8} {'Matched':>8} {'Recall':>8} {'No Pred':>8} {'Wrong Pred':>10}")
    for cat in sorted(total_by_cat.keys()):
        total = total_by_cat[cat]
        matched = matched_by_cat[cat]
        no_p = sum(1 for e in unmatched_details[cat] if not e["predictions"])
        wrong_p = sum(1 for e in unmatched_details[cat] if e["predictions"])
        recall = matched / total * 100 if total else 0
        print(f"{cat:<15} {total:>8} {matched:>8} {recall:>7.1f}% {no_p:>8} {wrong_p:>10}")

    print("\n" + "-" * 80)
    print("BREAKDOWN BY LOCATION TYPE")
    print("-" * 80)
    print(f"{'Location':<15} {'Total':>8} {'Matched':>8} {'Recall':>8}")
    for loc in sorted(total_by_loc.keys()):
        total = total_by_loc[loc]
        matched = matched_by_loc[loc]
        recall = matched / total * 100 if total else 0
        print(f"{loc:<15} {total:>8} {matched:>8} {recall:>7.1f}%")

    print("\n" + "-" * 80)
    print("MISCLASSIFICATION PATTERNS (GT → Predicted)")
    print("-" * 80)
    print(f"{'GT Category':<15} {'Pred Category':<20} {'Pred Size':>10} {'Count':>8}")
    for (gt_cat, pred_cat, pred_size), count in misclass_patterns.most_common(30):
        print(f"{gt_cat:<15} {str(pred_cat):<20} {str(pred_size):>10} {count:>8}")

    print("\n" + "-" * 80)
    print("NO-PREDICTION BREAKDOWN (GT has 16-byte type, Oxidizer has nothing)")
    print("-" * 80)
    for cat in sorted(no_pred_count.keys()):
        print(f"  {cat}: {no_pred_count[cat]} instances")

    # Show detailed unmatched examples
    print("\n" + "-" * 80)
    print("DETAILED UNMATCHED EXAMPLES — Result (16-byte)")
    print("-" * 80)
    result_unmatched = unmatched_details.get("Result", [])
    for entry in result_unmatched[:30]:
        pred_str = str(entry["predictions"]) if entry["predictions"] else "NONE"
        print(f"  [{entry['binary']}/{entry['func_file']}] {entry['func_name']}")
        print(f"    Location: {entry['location']}  GT: ({entry['gt_category']}, {entry['gt_size']}) = {entry['gt_type_name'][:80]}")
        print(f"    Predicted: {pred_str}")
        print()

    print("\n" + "-" * 80)
    print("DETAILED UNMATCHED EXAMPLES — Option (16-byte)")
    print("-" * 80)
    option_unmatched = unmatched_details.get("Option", [])
    for entry in option_unmatched[:30]:
        pred_str = str(entry["predictions"]) if entry["predictions"] else "NONE"
        print(f"  [{entry['binary']}/{entry['func_file']}] {entry['func_name']}")
        print(f"    Location: {entry['location']}  GT: ({entry['gt_category']}, {entry['gt_size']}) = {entry['gt_type_name'][:80]}")
        print(f"    Predicted: {pred_str}")
        print()

    print("\n" + "-" * 80)
    print("DETAILED UNMATCHED EXAMPLES — struct (16-byte)")
    print("-" * 80)
    struct_unmatched = unmatched_details.get("struct", [])
    for entry in struct_unmatched[:30]:
        pred_str = str(entry["predictions"]) if entry["predictions"] else "NONE"
        print(f"  [{entry['binary']}/{entry['func_file']}] {entry['func_name']}")
        print(f"    Location: {entry['location']}  GT: ({entry['gt_category']}, {entry['gt_size']}) = {entry['gt_type_name'][:80]}")
        print(f"    Predicted: {pred_str}")
        print()

    # Per-binary stats for worst performers
    print("\n" + "-" * 80)
    print("TOP 20 BINARIES BY UNMATCHED 16-BYTE COUNT")
    print("-" * 80)
    unmatched_by_binary = {b: total_by_binary[b] - matched_by_binary[b] for b in total_by_binary}
    for binary, unmatched in sorted(unmatched_by_binary.items(), key=lambda x: -x[1])[:20]:
        total = total_by_binary[binary]
        matched = matched_by_binary[binary]
        recall = matched / total * 100 if total else 0
        print(f"  {binary:<30} total={total:>4}  matched={matched:>4}  recall={recall:.1f}%")

    # Analyze GT type names for 16-byte Result
    print("\n" + "-" * 80)
    print("COMMON 16-BYTE RESULT TYPE NAMES (from ground truth)")
    print("-" * 80)
    result_names = Counter()
    for entry in all_16byte_entries:
        if entry["gt_category"] == "Result":
            result_names[entry["gt_type_name"]] += 1
    for name, count in result_names.most_common(20):
        print(f"  [{count:>4}] {name[:100]}")

    print("\n" + "-" * 80)
    print("COMMON 16-BYTE OPTION TYPE NAMES (from ground truth)")
    print("-" * 80)
    option_names = Counter()
    for entry in all_16byte_entries:
        if entry["gt_category"] == "Option":
            option_names[entry["gt_type_name"]] += 1
    for name, count in option_names.most_common(20):
        print(f"  [{count:>4}] {name[:100]}")

    print("\n" + "-" * 80)
    print("COMMON 16-BYTE STRUCT TYPE NAMES (from ground truth)")
    print("-" * 80)
    struct_names = Counter()
    for entry in all_16byte_entries:
        if entry["gt_category"] == "struct":
            struct_names[entry["gt_type_name"]] += 1
    for name, count in struct_names.most_common(20):
        print(f"  [{count:>4}] {name[:100]}")

    # Analyze what Oxidizer predicts INSTEAD of 16-byte types
    print("\n" + "-" * 80)
    print("WHAT OXIDIZER PREDICTS FOR UNMATCHED 16-BYTE RESULT")
    print("-" * 80)
    result_pred_patterns = Counter()
    for entry in unmatched_details.get("Result", []):
        if entry["predictions"]:
            for p in entry["predictions"]:
                result_pred_patterns[f"({p[0]}, {p[1]})"] += 1
        else:
            result_pred_patterns["NO_PREDICTION"] += 1
    for pattern, count in result_pred_patterns.most_common(20):
        print(f"  [{count:>4}] {pattern}")

    print("\n" + "-" * 80)
    print("WHAT OXIDIZER PREDICTS FOR UNMATCHED 16-BYTE OPTION")
    print("-" * 80)
    option_pred_patterns = Counter()
    for entry in unmatched_details.get("Option", []):
        if entry["predictions"]:
            for p in entry["predictions"]:
                option_pred_patterns[f"({p[0]}, {p[1]})"] += 1
        else:
            option_pred_patterns["NO_PREDICTION"] += 1
    for pattern, count in option_pred_patterns.most_common(20):
        print(f"  [{count:>4}] {pattern}")

    print("\n" + "-" * 80)
    print("WHAT OXIDIZER PREDICTS FOR UNMATCHED 16-BYTE STRUCT")
    print("-" * 80)
    struct_pred_patterns = Counter()
    for entry in unmatched_details.get("struct", []):
        if entry["predictions"]:
            for p in entry["predictions"]:
                struct_pred_patterns[f"({p[0]}, {p[1]})"] += 1
        else:
            struct_pred_patterns["NO_PREDICTION"] += 1
    for pattern, count in struct_pred_patterns.most_common(20):
        print(f"  [{count:>4}] {pattern}")

    # Summary of key findings
    print("\n" + "=" * 80)
    print("KEY FINDINGS SUMMARY")
    print("=" * 80)
    for cat in ["Result", "Option", "struct"]:
        total = total_by_cat[cat]
        matched = matched_by_cat[cat]
        no_p = sum(1 for e in unmatched_details.get(cat, []) if not e["predictions"])
        wrong_p = sum(1 for e in unmatched_details.get(cat, []) if e["predictions"])
        if total:
            print(f"\n{cat} (16-byte):")
            print(f"  Recall: {matched}/{total} = {matched/total*100:.1f}%")
            print(f"  Unmatched breakdown: {no_p} no prediction, {wrong_p} wrong prediction")


if __name__ == "__main__":
    main()
