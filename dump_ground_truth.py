import json
import os
import subprocess
import time


def walk_error():
    print("sb")


if __name__ == "__main__":
    src_path = os.path.abspath("dataset-src/coreutils/src/uu/")
    os.chdir("source-analyzer/output")
    for root, _, files in os.walk(src_path, onerror=walk_error):
        if root.endswith("/src"):
            for file in files:
                if file.endswith(".rs"):
                    path = os.path.join(root, file)
                    subprocess.run(["cargo", "run", "--release", path])
                    json_path = f"{file[:-3]}_analysis.json"
                    while not os.path.exists(json_path):
                        time.sleep(0.5)
                    with open(f"{file[:-3]}_analysis.json", "r") as fd:
                        obj = json.load(fd)
                        print(obj.keys())
                    os.unlink(json_path)
                    module = os.path.relpath(root, src_path)
                    module = module[: module.index("/src")]
                    for key in obj:
                        if key.startswith(module + "::"):
                            key = key[key.index("::") + 2 :]
                        func_name = f"uu_{module}::{key}"
                        print(func_name)
    # for root, _, files in os.walk("source-analyzer/output"):
    #     for file in files:
    #         module_name = "uu_" + file[: file.index("_")]
    #         print(module_name)
    #         if module_name == "uu_fmt":
    #             with open(os.path.join(root, file), "r") as fd:
    #                 obj = json.load(fd)
    #                 for key in obj:
    #                     func_name = module_name + key[key.index("::") :]
    #                     print(func_name)
    #             break
