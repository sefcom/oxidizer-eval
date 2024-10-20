import re


def LoC(output):
    return output.count("\n")


def num_ptr_deref(output):
    return output.count("*(")


def num_variables_oxidizer(output):
    num_variables = 0
    for line in output.split("\n"):
        if line.strip().startswith("let "):
            num_variables += 1
    return num_variables


def num_variables_ida(output):
    num_variables = 0
    for line in output.split("\n"):
        if re.match(r".*v[0-9]+; //.*", line):
            num_variables += 1
    return num_variables


def num_variables_angr(output):
    num_variables = 0
    for line in output.split("\n"):
        if re.match(r".*v[0-9]+;  //.*", line):
            num_variables += 1
    return num_variables


def num_whiles(output):
    return len(re.findall(r"while \(.*\)", output))


def num_gotos(output):
    return len(re.findall(r"goto .*;", output))
