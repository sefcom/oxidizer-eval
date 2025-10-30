from eval.decompilers.angr import _angr_dec_base


def _extract_function_body(output):
    body = []
    for line in output:
        if len(body) == 0 and line.startswith("fn ") and line.endswith("{"):
            body.append(line)
            continue
        elif len(body):
            body.append(line)
    return "\n".join(body)


def oxidizer_dec(binary_path, function_list, tag):
    return _angr_dec_base(binary_path, function_list, tag, _extract_function_body, True)
