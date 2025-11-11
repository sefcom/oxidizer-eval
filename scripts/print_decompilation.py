import json

dir_path = "/home/ubuntu/workspace/oxidizer-eval/output/result"

toolchain = "nightly-2025-05-22-O0"
binary_name = "hashsum"
func_addr = "1034b0"

path = f"{dir_path}/{toolchain}/Oxidizer.old/{binary_name}/{func_addr}.json"
with open(path, "r") as fd:
    result = json.load(fd)
    print(result["decompilation"])
