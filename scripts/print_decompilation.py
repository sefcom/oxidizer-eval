import json

dir_path = "output/result"

toolchain = "nightly-2025-05-22-O3"
binary_name = "fmt"
func_addr = "9d430"

path = f"{dir_path}/{toolchain}/Oxidizer.normal/{binary_name}/{func_addr}.json"
print(path)
with open(path, "r") as fd:
    result = json.load(fd)
    print(result["decompilation"])
