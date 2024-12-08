import json
import re


def LoC(output):
    return output.count("\n")


def num_ptr_deref(output):
    return output.count("*(")


def num_variables(output):
    num_variables = 0
    for line in output.split("\n"):
        if "//" in line:
            num_variables += 1
    return num_variables


def num_whiles(output):
    return len(re.findall(r"while \(.*\)", output))


def num_gotos(output):
    return len(re.findall(r"goto .*;", output))


def num_assignments(output):
    return output.count(" = ")


def num_call_counts(output):
    call_counts = json.loads(output)
    return sum(call_counts.values())
