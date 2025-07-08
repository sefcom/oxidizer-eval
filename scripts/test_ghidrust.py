"""
This script is to measure the failure rate of GhidRust
Result: 1157/1330
"""

import subprocess
import os
from pathlib import Path

ROOT_PATH = Path(__file__).parent.parent
GHIDRUST_PATH = ROOT_PATH.joinpath("tools/GhidRust.jar").joinpath("").absolute()
DECOMPILATION_PATH = ROOT_PATH.joinpath("output/decompilation/ghidra").absolute()

failed = 0
total = 0

for root, _, filenames in os.walk(DECOMPILATION_PATH):
    for filename in filenames:
        path = os.path.join(root, filename)
        with open(path, "rb") as fd:
            code = fd.read()
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

print(f"{failed}/{total}")
