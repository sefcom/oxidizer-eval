from collections import defaultdict
import json
import re
import logging
from pprint import pprint, pformat

from angr.rust.utils.demangler import demangle

from eval.utils.dwarf_parser import *

l = logging.getLogger("oxidizer-eval")


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
        "***",
        "**",
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
        "int8 *",
        "int16 *",
        "int32 *",
        "int64 *",
        "int128 *",
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
    comment_pattern = r"//.*|/\*.*?\*/"
    output = re.sub(string_pattern, '""', output)
    output = re.sub(comment_pattern, "", output)
    output = output.replace("->", "")
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


def _normalize_string_literals(string_literals):
    result = defaultdict(int)
    for k, v in string_literals.items():
        result[re.sub(r"\{.+?\}", "{}", k).replace(" ", "").replace("\\\n", "")] += v
    return dict(result)


def num_matched_string_literals(output, ground_truth):
    string_literals = collect_string_literals(output)
    string_literals = _normalize_string_literals(string_literals)
    ground_truth = _normalize_string_literals(ground_truth)
    # l.warning(f"{pformat(string_literals)=}")
    # l.warning(f"{pformat(ground_truth)=}")
    # for key in ground_truth:
    #     if key not in string_literals:
    #         l.warning(f"Ground truth string literal '{key}' not found in output.")
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
            if name.startswith("core::result::Result<") or name.startswith("Result<"):
                return "Result", dwarf_type.size
            elif name.startswith("core::option::Option<") or name.startswith("Option<"):
                return "Option", dwarf_type.size
            else:
                return "enum", dwarf_type.size
        case Primitive():
            return "primitive", dwarf_type.size
        case Array(ele_ty, length):
            if hasattr(ele_ty, "size") and length:
                return "array", length * ele_ty.size
        case Pointer(pts_to):
            if recursive:
                pts_category, _ = _normalize_dwarf_type(pts_to, recursive=False)
                if pts_category:
                    return f"&{pts_category}", 8
            else:
                return "reference", 8
    return None, None


def generate_type_eval_result(variable_types, ground_truth, prototype: Prototype, debug=False):
    result = defaultdict(int)
    ident_to_dwarf_vars = defaultdict(list)
    for var in ground_truth:
        category, _ = _normalize_dwarf_type(var.type)
        if category and category.startswith("&"):
            result[f"reference_total"] += 1
        else:
            result[f"{category}_total"] += 1
        if var.category == "stack":
            ident = f"stack_{var.location}"
        elif var.category == "register":
            ident = f"reg_{var.location}"
        else:
            ident = f"unknown"
        ident_to_dwarf_vars[ident].append(var)

    for i, var_ty in enumerate(prototype.args):
        if var_ty is not None:
            dummy_arg_var = Variable(f"arg_{i}", var_ty, "argument", None)
            ident_to_dwarf_vars[f"arg_{i}"].append(dummy_arg_var)

    if prototype.returnty is not None:
        dummy_ret_var = Variable("ret_var", prototype.returnty, "return", None)
        ident_to_dwarf_vars["return_type"].append(dummy_ret_var)

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
                if pred_type[0] == "enum":
                    if debug:
                        l.info(f"Predicted enum type: {pred_type} GT {true_type}")
                if tuple(pred_type) == true_type or (
                    category == "enum" and pred_type[0] in ("Result", "Option") and true_type[1] == pred_type[1]
                ):
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


class MCCCalculator:
    # based on:
    # https://github.com/mozilla/rust-code-analysis/blob/efe98948323d4965348559ca607838746e6d7e4c/src/metrics/cyclomatic.rs#L190
    IF_REGEX = r"if .*"
    FOR_REGEX = r"  for .*"
    WHILE_REGEX = r" while .*"
    LOOP_REGEX = r"  loop"
    ENUM_ARM_REGEX = r"\) =>"
    DEFAULT_ARM_REGEX = r"_ =>"
    AND_REGEX = r"&&"
    OR_REGEX = r"\|\|"
    TERNARY_REGEX = r" \? "
    # Due to the special way cyclomatic complexity is calculated in programs without CFGs, you can actually ignore
    # counting any question mark operators. Why? The formula below:
    # C = D - E + 2
    #
    # Where:
    # C = Cyclomatic complexity
    # D = Number of decision points in the program
    # E = Number of exits in the program
    #
    # Every question mark operator is a decision point, but it is also an exit. So, it cancels itself out.
    # QUESTION_MARK_REGEX = r"\?;"
    # needed because bug in decompiler:
    SWITCH_CASE_REGEX = r"case .*:"
    DEFAULT_CASE_REGEX = r"default:"

    CONTROL_STRUCTURE_REGEXES = [
        IF_REGEX,
        FOR_REGEX,
        WHILE_REGEX,
        LOOP_REGEX,
        ENUM_ARM_REGEX,
        DEFAULT_ARM_REGEX,
        AND_REGEX,
        OR_REGEX,
        SWITCH_CASE_REGEX,
        DEFAULT_CASE_REGEX,
        TERNARY_REGEX,
        # QUESTION_MARK_REGEX,
    ]

    # returns:
    RETURN_REGEX = r"return\b"

    def _clean_string(self, s: str) -> str:
        s = s.replace("\n", " ").replace("\r", " ")
        lines = s.splitlines()
        cleaned = " ".join(line.strip() for line in lines)
        return " ".join(cleaned.split())

    def _count_match_arms(self, code: str) -> int:
        cleaned_code = self._clean_string(code)

        pattern = r"((?:0x[a-fA-F0-9]+|\d+)(?:\s*\|\s*(?:0x[a-fA-F0-9]+|\d+))*)\s*=>"
        matches = re.findall(pattern, cleaned_code)

        decision_points = 0
        for match in matches:
            arms = [part.strip() for part in match.split("|") if part.strip()]
            decision_points += len(arms)

        return decision_points

    def measure_mcc(self, code) -> int:
        code = code.replace("/* no return */", "").replace("__noreturn", "").replace("/* do not return */", "")
        decision_points = 0

        # count exits
        returns = re.findall(self.RETURN_REGEX, code)
        # we can always have a function that has no return at the end because it is implicit
        # so we need to find out if our current count of returns includes a return at the end.
        # If it does not, we need to add one to the count.
        exits = len(returns)
        code_lines = code.split("\n")
        # find the last line starting from the bottm
        for i, line in enumerate(code_lines[::-1]):
            if line.startswith("}"):
                break
        else:
            return None

        last_line = code_lines[-(i + 2)]
        for line in reversed(code_lines[: -(i + 2)]):
            if not line.strip().endswith(";"):
                last_line = line.strip() + " " + last_line
            else:
                break

        for idx in range(len(code_lines) - (i + 3)):
            line = code_lines[idx]
            next_line = code_lines[idx + 1] if idx + 1 < len(code_lines) else ""
            line = line.strip()
            next_line = next_line.strip()
            if not line.endswith(";") and line != "}" and next_line == "}":
                exits += 1

        # last line has one of the returns?
        if not re.findall(self.RETURN_REGEX, last_line):
            exits += 1

        count = {}
        for regex in self.CONTROL_STRUCTURE_REGEXES:
            matches = re.findall(regex, code)
            count[regex] = len(matches)
            decision_points += len(matches)

        # Special handling for:
        # 1 | 3 | 5 | 7 =>
        decision_points += self._count_match_arms(code)

        if exits <= 1:
            # formula:
            # C = D + 1
            mcc = decision_points + 1
        elif exits > 1:
            # formula:
            # C = D - E + 2
            mcc = decision_points - exits + 2

        return mcc


def mcc(decompilation):
    return MCCCalculator().measure_mcc(decompilation)
