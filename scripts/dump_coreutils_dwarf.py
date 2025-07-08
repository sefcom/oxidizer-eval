import os
import sys

sys.path.append(os.path.abspath("."))

from eval.utils.dwarf_parser import *


if __name__ == "__main__":
    std_dir = "dataset-debug/o3"
    files = list(os.listdir(std_dir))
    for i, file in enumerate(files):
        if i < 14:
            continue
        print(f"Processing {file} ... ({i+1}/{len(files)})")
        parser = DwarfParser()
        path = os.path.join(std_dir, file)
        parser.parse(path)
        output_path = f"output/dwarf/{file}.json"
        parser.dump_json(output_path)
