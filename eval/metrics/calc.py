from collections import defaultdict
import json
import re

from angr.rust.utils.library import demangle

from eval.utils.dwarf_parser import *


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
    pointer_types = [
        "void *",
        "char *",
        "const char *",
        "unsigned char *",
        "signed char *",
        "short *",
        "unsigned short *",
        "signed short *",
        "int *",
        "unsigned int *",
        "signed int *",
        "long *",
        "unsigned long *",
        "signed long *",
        "long long *",
        "unsigned long long *",
        "signed long long *",
        "float *",
        "double *",
        "long double *",
        "int8_t *",
        "uint8_t *",
        "int16_t *",
        "uint16_t *",
        "int32_t *",
        "uint32_t *",
        "int64_t *",
        "uint64_t *",
        "size_t *",
        "ssize_t *",
        "intptr_t *",
        "uintptr_t *",
        "bool *",
        "_Bool *",
        "struct *",
        "struct name *",
        "union *",
        "union name *",
        "enum *",
        "enum name *",
        "FILE *",
        "jmp_buf *",
        "pthread_t *",
        "time_t *",
        "HANDLE *",
        "DWORD *",
        "LPVOID *",
        "LPCSTR *",
        "LPSTR *",
        "_BYTE *",
        "_WORD *",
        "_DWORD *",
        "_QWORD *",
        "unk_ *",
        "undefined *",
        "undefined4 *",
        "undefined8 *",
        "&i8",
        "&i16",
        "&i32",
        "&i64",
        "&i128",
        "&isize",
        "&u8",
        "&u16",
        "&u32",
        "&u64",
        "&u128",
        "&usize",
        "&struct",
        "*mut",
        "&str",
    ]
    for pointer_type in pointer_types:
        output = output.replace(pointer_type, "")

    string_pattern = r'"(\\.|[^"\\])*"'
    output = re.sub(string_pattern, '""', output)
    operators = [
        " + ",
        " -",
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
        " & ",
        " | ",
        "!",
        "^",
        "~",
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
    ]
    result = sum(output.count(operator) for operator in operators)
    other_operators = ["*", "&"]
    for operator in operators:
        output = output.replace(operator, "")
    result += sum(output.count(operator) for operator in other_operators)
    return result


def num_call_counts(function_call_counts):
    return sum(function_call_counts.values())


def collect_string_literals(output):
    string_literals = defaultdict(int)
    pattern = r'"(?:\\.|[^"\\])*"'
    matches = re.findall(pattern, output)

    for match in matches:
        string_literals[match[1:-1]] += 1
    return string_literals


def _num_matched(d1, d2):
    keys = set(d1.keys()).union(d2.keys())
    result = 0
    for key in keys:
        result += min(d1.get(key, 0), d2.get(key, 0))
    return result


def _num_extraneous(d1, d2):
    keys = d1.keys()
    result = 0
    for key in keys:
        result += max(d1.get(key, 0) - d2.get(key, 0), 0)
    return result


def num_matched_string_literals(output, ground_truth):
    string_literals = collect_string_literals(output)
    return _num_matched(string_literals, ground_truth)


def _normalize(counts):
    if counts == 0:
        counts = {}
    result = {}
    for k, v in counts.items():
        k = demangle(k)
        result[k.split("::")[-1]] = v
    return result


def num_matched_function_calls(function_call_counts, ground_truth):
    return _num_matched(_normalize(function_call_counts), ground_truth)


def num_extraneous_function_calls(function_call_counts, ground_truth):
    return _num_extraneous(_normalize(function_call_counts), ground_truth)


def num_matched_macro_calls(macro_call_counts, ground_truth):
    return _num_matched(_normalize(macro_call_counts), ground_truth)


# Type recovery evaluation
def _normalize_dwarf_type(dwarf_type: Type, recursive=True):
    match dwarf_type:
        case Struct():
            return "struct", dwarf_type.size
        case Enumeration(name):
            if name.startswith("core::result::Result<"):
                return "Result", dwarf_type.size
            elif name.startswith("core::option::Option<"):
                return "Option", dwarf_type.size
            else:
                return "enum", dwarf_type.size
        case Primitive():
            return "primitive", dwarf_type.size
        case Pointer(pts_to):
            if recursive:
                pts_category, _ = _normalize_dwarf_type(pts_to, recursive=False)
                if pts_category:
                    return f"&{pts_category}", 8
            else:
                return "reference", 8
    return None, None


def generate_type_eval_result(variable_types, ground_truth):
    result = defaultdict(int)
    ident_to_dwarf_vars = defaultdict(list)
    for var in ground_truth:
        if var.category == "stack":
            ident = f"stack_{var.location}"
        elif var.category == "register":
            ident = f"reg_{var.location}"
        else:
            continue
        ident_to_dwarf_vars[ident].append(var)

    ident_to_matched_pred = defaultdict(set)
    dwarf_var_to_predicted_types = defaultdict(list)

    for ident, dwarf_vars in ident_to_dwarf_vars.items():
        dwarf_vars = set(dwarf_vars)
        predicted_types = variable_types.get(ident, [])  # List of normalized (kind, size) tuples

        matched_gt = set()
        matched_pred = set()

        # First pass: match predictions to GTs
        for i, pred_type in enumerate(predicted_types):
            for j, dwarf_var in enumerate(dwarf_vars):
                true_type = _normalize_dwarf_type(dwarf_var.type)
                category = true_type[0]

                if j in matched_gt:
                    continue  # This GT is already matched

                if tuple(pred_type) == true_type:
                    matched_gt.add(j)
                    matched_pred.add(i)
                    result[f"{category}_TP"] += 1
                    if category and category.startswith("&"):
                        result[f"reference_TP"] += 1
                    break  # Move to next prediction

        ident_to_matched_pred[ident] = matched_pred

        # Second pass: unmatched GTs → FN
        for j, dwarf_var in enumerate(dwarf_vars):
            dwarf_var_to_predicted_types[dwarf_var] = predicted_types
            if j not in matched_gt:
                true_type = _normalize_dwarf_type(dwarf_var.type)
                category = true_type[0]
                result[f"{category}_FN"] += 1
                if category and category.startswith("&"):
                    result[f"reference_FN"] += 1

    for ident, predicted_types in variable_types.items():
        # Third pass: unmatched predictions → FP
        matched_pred = ident_to_matched_pred[ident]
        for i, pred_type in enumerate(predicted_types):
            if i not in matched_pred:
                category = pred_type[0]
                result[f"{category}_FP"] += 1
                if category and category.startswith("&"):
                    result[f"reference_FP"] += 1
    return result, dwarf_var_to_predicted_types
