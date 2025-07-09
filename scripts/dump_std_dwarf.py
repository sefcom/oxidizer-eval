import os
import sys

sys.path.append(os.path.abspath("."))

from eval.utils.dwarf_parser import *


if __name__ == "__main__":
    major_version = "<major version>"
    std_dir = f"dataset-debug/std-{major_version}"
    parser = DwarfParser()
    for file in os.listdir(std_dir):
        path = os.path.join(std_dir, file)
        parser.parse(path)
    output_path = f"output/dwarf/std-{major_version}.json"
    parser.dump_json(output_path)
