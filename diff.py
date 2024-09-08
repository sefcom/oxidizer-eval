from collections import defaultdict
import json
import os
from pprint import pprint

from angr.rust.utils.library import demangle


def demangle_all(counts):
    demangled_counts = {}
    for caller_name in counts:
        demangled_caller_name = demangle(caller_name)
        demangled_counts[demangled_caller_name] = defaultdict(int)
        for callee_name in counts[caller_name]:
            demangled_callee_name = demangle(callee_name)
            demangled_counts[demangled_caller_name][demangled_callee_name] = counts[caller_name][callee_name]
    return demangled_counts


def is_std_function(func_name):
    prefixes = ["<alloc::", "<core::", "<std::", "alloc::", "core::", "std::"]
    return any(func_name.startswith(prefix) for prefix in prefixes) or not "::" in func_name


def main():
    counts = defaultdict(int)
    path1 = os.path.join("output", "call_counts", "ida", "simple-http-server.json")
    path2 = os.path.join("output", "call_counts", "source", "simple-http-server.json")
    if os.path.exists(path2):
        with open(path1, "r") as fd:
            json1 = demangle_all(json.load(fd))
        with open(path2, "r") as fd:
            json2 = json.load(fd)
        keys = json1.keys() | json2.keys()
        for key in keys:
            if key in json1 and key in json2:
                callees1 = json1[key]
                callees2 = json2[key]
                for callee in callees1:
                    if callee not in callees2:
                        counts[callee] += callees1[callee]
    counts = {k: v for k, v in counts.items() if is_std_function(k)}
    items = sorted(counts.items(), key=lambda item: item[1], reverse=True)
    for k, v in items[:50]:
        print(f"{k}: {v}")


if __name__ == "__main__":
    main()
