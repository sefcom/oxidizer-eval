from pathlib import Path
import time
import os
import sys

sys.path.append(os.path.abspath("."))

from eval.decompilers.binja import binja_dec

path = "targets/release/nightly-2025-05-22-O3/hx"
target_functions = set()
for add in Path("targets/merged_ground_truth/nightly-2025-05-22-O3/hx").rglob("*.json"):
    func_addr = int(add.stem, 16)
    target_functions.add(func_addr)

start = time.time()
binja_dec(path, target_functions, "test")
end = time.time()
print(f"Decompilation time: {end - start:.2f} seconds")
