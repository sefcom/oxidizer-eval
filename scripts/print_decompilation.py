import json

dir_path = "/home/ubuntu/workspace/oxidizer-eval/output/result"

toolchain = "nightly-2025-05-22-O3"
binary_name = "dd"
func_addr = "d2280"

path = f"{dir_path}/{toolchain}/Oxidizer/{binary_name}/{func_addr}.json"
with open(path, "r") as fd:
    result = json.load(fd)
    print(result["decompilation"])
