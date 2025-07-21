import os
from collections import Counter
from pprint import pformat
import sys

import angr

sys.path.append(os.path.abspath("."))

from eval.utils.dwarf_parser import *


if __name__ == "__main__":
    std_parser = DwarfParser()
    std_parser.parse_json("output/dwarf/std-1.80.0.json")
    discriminants = []

    for enum in std_parser.structs.values():
        if isinstance(enum, Enumeration):
            valid_discriminants = [
                discriminant for discriminant, _ in enum.variants.values() if discriminant is not None
            ]
            if valid_discriminants:
                discriminants.append(min(valid_discriminants))

    counter = Counter(discriminants)
    import ipdb

    ipdb.set_trace()
