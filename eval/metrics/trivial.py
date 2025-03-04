from collections import defaultdict
import json
import re

from angr.rust.utils.library import demangle


def LoC(output):
    return output.count("\n")


def num_ptr_deref(output):
    return output.count("*(")


def num_variables(output):
    num_variables = 0
    start = False
    for line in output.splitlines():
        if line.endswith("{"):
            start = True
        elif start:
            if line.strip() == "":
                break
            num_variables += 1
    return num_variables


def num_whiles(output):
    return len(re.findall(r"while \(.*\)", output))


def num_gotos(output):
    return len(re.findall(r"goto .*;", output))


def num_assignments(output):
    return output.count(" = ")


def num_operators(output):
    operators = [
        " + ",
        " - ",
        " * ",
        " / ",
        " % ",
        " == ",
        " != ",
        " > ",
        " < ",
        " >= ",
        " <= ",
        " && ",
        " || ",
        " ! ",
        " & ",
        " | ",
        " ^ ",
        " ~",
        " << ",
        " >> ",
        " += ",
        " -= ",
        " *= ",
        " /= ",
        " %= ",
        " &= ",
        " |= ",
        " ^= ",
        " <<= ",
        " >>= ",
        " * ",
        " = ",
    ]
    return sum(output.count(operator) for operator in operators)


def num_call_counts(function_call_counts):
    return sum(function_call_counts.values())


def collect_string_literals(output):
    string_literals = defaultdict(int)
    pattern = r'"(?:\\.|[^"\\])*"'
    matches = re.findall(pattern, output)

    for match in matches:
        string_literals[match[1:-1]] += 1
    return string_literals


def _num_mismatched(d1, d2):
    keys = set(d1.keys()).union(d2.keys())
    result = 0
    for key in keys:
        result += abs(d1.get(key, 0) - d2.get(key, 0))
    return result


def num_mismatched_string_literals(output, ground_truth):
    string_litrals = collect_string_literals(output)
    return _num_mismatched(string_litrals, ground_truth["string_literals"])


def _num_matched(d1, d2):
    keys = set(d1.keys()).union(d2.keys())
    result = 0
    for key in keys:
        result += min(d1.get(key, 0), d2.get(key, 0))
    return result


def num_matched_string_literals(output, ground_truth):
    string_litrals = collect_string_literals(output)

    return _num_matched(string_litrals, ground_truth["string_literals"])


def _normalize(counts):
    if counts == 0:
        counts = {}
    result = {}
    for k, v in counts.items():
        k = demangle(k)
        result[k.split("::")[-1]] = v
    return result


def num_mismatched_function_calls(function_call_counts, ground_truth):
    return _num_mismatched(_normalize(function_call_counts), ground_truth["func_calls"])


def num_mismatched_macro_calls(macro_call_counts, ground_truth):
    return _num_mismatched(_normalize(macro_call_counts), ground_truth["macro_calls"])


def _normalize_malware(counts):
    result = {}
    for k, v in counts.items():
        k = demangle(k)
        result[k] = v
    return result


def num_missed_malware_function_calls(function_calls, ground_truth):
    result = 0
    function_calls = _normalize_malware(function_calls)
    for func_name in ground_truth:
        result += max(0, ground_truth[func_name] - function_calls.get(func_name, 0))
    return result
