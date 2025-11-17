from pathlib import Path
import json

ghidra_path = Path("output/result/nightly-2025-05-22-O0/Ghidra").absolute()
ida_path = Path("output/result/nightly-2025-05-22-O0/IDA").absolute()


def loc(code):
    return len([line for line in code.splitlines() if line.strip() != ""])


if __name__ == "__main__":
    for ghidra_file in ghidra_path.rglob("*.json"):
        relative_path = ghidra_file.relative_to(ghidra_path)
        ida_file = ida_path.joinpath(relative_path)
        if not ida_file.exists():
            print(f"IDA file not found for {relative_path}")
            continue

        with open(ghidra_file, "r") as gf:
            ghidra_data = json.load(gf)

        with open(ida_file, "r") as inf:
            ida_data = json.load(inf)

        if loc(ghidra_data["decompilation"]) - loc(ida_data["decompilation"]) < -30:
            print(ghidra_data["decompilation"])
            break
