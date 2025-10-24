import json

with open("tmp/fmt-stripped.json", "r", encoding="utf-8") as f:
    recovered_functions = json.load(f)

with open("tmp/fmt.json", "r", encoding="utf-8") as f:
    real_functions = json.load(f)

# Only key Rust standard library functions
real_functions = {
    addr: name
    for addr, name in real_functions.items()
    if (
        name.startswith("std::")
        or name.startswith("core::")
        or name.startswith("alloc::")
        or name.startswith("<core::")
        or name.startswith("<std::")
        or name.startswith("<alloc::")
        or name.startswith("<&alloc::")
        or name.startswith("<&std::")
        or name.startswith("<&core::")
    )
    # and "<" not in name
}

# Print total real functions
print("Total real functions:", len(real_functions))
# Print total recovered functions
print("Total recovered functions:", len(recovered_functions))
# Print total matched functions
matched_count = sum(
    1 for addr in real_functions if addr in recovered_functions and recovered_functions[addr] == real_functions[addr]
)
print("Total matched functions:", matched_count)
