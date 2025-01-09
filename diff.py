from collections import defaultdict
import json
import os
from pprint import pprint
import statistics

from angr.rust.utils.library import normalize


def normalize_all(counts):
    demangled_counts = {}
    for caller_name in counts:
        demangled_caller_name = normalize(caller_name, remove_polymorphism=True)
        if demangled_caller_name not in demangled_counts:
            demangled_counts[demangled_caller_name] = defaultdict(int)
        for callee_name in counts[caller_name]:
            demangled_callee_name = normalize(callee_name, remove_polymorphism=True)
            demangled_counts[demangled_caller_name][demangled_callee_name] += counts[caller_name][callee_name]
    return demangled_counts


def is_std_function(func_name):
    prefixes = ["<alloc::", "<core::", "<std::", "alloc::", "core::", "std::"]
    return any(func_name.startswith(prefix) for prefix in prefixes) or not "::" in func_name


def diff_non_existent_calls(ida_result, source_result):
    counts = defaultdict(int)
    keys = ida_result.keys() | source_result.keys()
    for key in keys:
        if key in ida_result and key in source_result:
            ida_callees = ida_result[key]
            source_callees = source_result[key]
            for callee in ida_callees:
                if callee not in source_callees:
                    counts[callee] += ida_callees[callee]

    counts = {k: v for k, v in counts.items() if is_std_function(k) and v > 5}
    items = sorted(counts.items(), key=lambda item: item[1], reverse=True)
    for k, v in items:
        print(f"{k}: {v}")


def calc_edit_distance(ida_result, source_result):
    result = defaultdict(int)
    callers = ida_result.keys() & source_result.keys()
    for caller in callers:
        callees = ida_result[caller].keys() | source_result[caller].keys()
        edit_distance = 0
        for callee in callees:
            edit_distance += abs(ida_result[caller].get(callee, 0) - source_result[caller].get(callee, 0))
        result[caller] = edit_distance
    return dict(result)


def main():
    ida_result_path = os.path.join("output", "call_counts", "ida", "coreutils.json")
    source_result_path = os.path.join("output", "call_counts", "source", "coreutils.json")

    assert os.path.exists(ida_result_path)
    assert os.path.exists(source_result_path)

    with open(ida_result_path, "r") as fd:
        ida_result = normalize_all(json.load(fd))
    with open(source_result_path, "r") as fd:
        source_result = json.load(fd)

    # diff_non_existent_calls(ida_result, source_result)
    diff_non_existent_calls(source_result, ida_result)
    # result = calc_edit_distance(ida_result, source_result)
    # print(f"Average edit distance: {result['uu_cat::uumain']} (total number: {len(result)})")


if __name__ == "__main__":
    main()
