from pathlib import Path
import json
from concurrent.futures import ProcessPoolExecutor


def check_json(json_path: Path):
    try:
        with open(json_path, "r", encoding="utf-8") as fd:
            json.load(fd)
    except json.JSONDecodeError as e:
        print(f"Error decoding JSON in {json_path}: {e}")
    except Exception as e:
        print(f"Error reading {json_path}: {e}")


if __name__ == "__main__":
    dirs = [
        Path("targets/dwarf").absolute(),
        Path("targets/ground_truth").absolute(),
        Path("targets/merged_ground_truth").absolute(),
    ]

    json_files = []
    for d in dirs:
        json_files.extend(d.rglob("*.json"))

    with ProcessPoolExecutor(20) as executor:
        executor.map(check_json, json_files)
