import json
import os
import subprocess
import time

from collections import defaultdict
from eval.config import CACHED_GROUND_TRUTH_PATH


def walk_error():
    print("sb")


if __name__ == "__main__":
    src_path = os.path.abspath("dataset-src/coreutils/src/uu/")
    os.chdir("source-analyzer/output")
    ground_truth = defaultdict(dict)
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
                        data = obj[key]
                        if key.startswith(module + "::"):
                            key = key[key.index("::") + 2 :]
                        if key == "uumain":
                            key = "uumain::uumain"
                        func_name = f"uu_{module}::{key}"
                        assert func_name not in ground_truth
                        ground_truth[module][func_name] = data
    os.chdir("../..")
    os.makedirs(CACHED_GROUND_TRUTH_PATH)
    for module in ground_truth:
        with open(os.path.join(CACHED_GROUND_TRUTH_PATH, f"{module}.json"), "w") as fd:
            json.dump(ground_truth[module], fd, indent=2)
