def _extract_function_body(output):
    body = []
    for line in output:
        if len(body) == 0 and line.startswith("fn ") and line.endswith("{"):
            body.append(line)
            continue
        elif len(body):
            body.append(line)
    return "\n".join(body)
