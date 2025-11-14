"""
This script is to measure the failure rate of GhidRust
Result: 1157/1330
"""

import subprocess
import json
from pathlib import Path

ROOT_PATH = Path(__file__).parent.parent
GHIDRUST_PATH = ROOT_PATH.joinpath("tools/GhidRust.jar").joinpath("").absolute()
DECOMPILATION_PATH = ROOT_PATH.joinpath("output/result/nightly-2025-05-22-O3/Ghidra").absolute()

failed = 0
total = 0

for path in DECOMPILATION_PATH.rglob("*.json"):
    with open(path, "rb") as fd:
        data = json.load(fd)
        code = data["decompilation"].encode()
    process = subprocess.Popen(
        ["java", "-cp", GHIDRUST_PATH, "ghidrust.decompiler.parser.Run"],
        shell=False,
        stdin=subprocess.PIPE,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
    )
    out, err = process.communicate(code)
    if len(err.decode()):
        failed += 1
    total += 1
    print(f"Processed {total} files, failed {failed}")
    if not err:
        print("Output:")
        print(out.decode())
        print(code.decode())

print(f"{failed}/{total}")
