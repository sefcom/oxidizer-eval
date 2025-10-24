import tempfile
from pathlib import Path
import sys
import os

sys.path.append(os.path.abspath("."))

from eval.utils.dwarf_parser import DwarfParser


if __name__ == "__main__":
    path = "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/debug/nightly-2025-05-22-O0/fuel-core"
    parser = DwarfParser()
    parser.parse(path)
    parser.dump_json("dwarf.json")
