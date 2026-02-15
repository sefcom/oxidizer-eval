import json

dir_path = "output/result"

toolchain = "nightly-2025-05-22-O3"
binary_name = "fmt"
func_addr = "a1d30"

path = f"{dir_path}/{toolchain}/GhidRust/{binary_name}/{func_addr}.json"
print(path)
with open(path, "r") as fd:
    result = json.load(fd)
    print(result["decompilation"])
