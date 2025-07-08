import os
import sys

sys.path.append(os.path.abspath("."))

from eval.utils.dwarf_parser import *


if __name__ == "__main__":
    path = "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/running-example/target/release/running-example-debug"
    parser = DwarfParser()
    parser.parse(path)
    output_path = "output/dwarf/running-example.json"
    parser.dump_json(output_path)
