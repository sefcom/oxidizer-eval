from itertools import count
from pathlib import Path
import json

symbols_path = Path("targets/symbols/nightly-2025-05-22-O3").resolve()
ground_truth_path = Path("targets/merged_ground_truth/nightly-2025-05-22-O3").resolve()

print(sum(1 for _ in ground_truth_path.rglob("*.json")))
total_functions = 0
for symbol in symbols_path.rglob("*.json"):
    if symbol.is_file():
        with open(symbol, "r") as f:
            data = json.load(f)
            total_functions += len(data)

print(f"Total functions in symbols: {total_functions}")
