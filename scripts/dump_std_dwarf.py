import os
import sys

sys.path.append(os.path.abspath("."))

from eval.utils.dwarf_parser import *


if __name__ == "__main__":
    std_dir = "dataset-debug/std"
    parser = DwarfParser()
    for file in os.listdir(std_dir):
        path = os.path.join(std_dir, file)
        parser.parse(path)
    output_path = "output/dwarf/std.json"
    parser.dump_json(output_path)
