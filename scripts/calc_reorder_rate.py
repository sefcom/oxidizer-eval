import os
from collections import defaultdict
from pprint import pformat

from dwarfparser import *
import angr


if __name__ == "__main__":
    std_parser = DwarfParser()
    std_parser.parse_json("output/dwarf/fmt.json")

    proj = angr.Project("dataset/o3/fmt", auto_load_libs=False)

    # fmt_parser = DwarfParser()
    # fmt_parser.parse_json("output/dwarf/fmt.json")
    same = defaultdict(int)
    diff = defaultdict(int)
    for struct_name in std_parser.structs:
        struct = std_parser.structs[struct_name]
        if isinstance(struct, Struct):
            num_fields = 0
            for _, (_, field_ty) in struct.fields.items():
                if isinstance(field_ty, Struct) and field_ty.size == 0:
                    pass
                else:
                    num_fields += 1
            if num_fields <= 1:
                continue
            if list(struct.fields.items()) != list(sorted(struct.fields.items(), key=lambda t: t[0])):
                print(pformat(struct))
                diff[num_fields] += 1
            else:
                same[num_fields] += 1
    same_total, diff_total = 0, 0
    for key in sorted(set(same.keys()) | set(diff.keys())):
        same_total += same[key]
        diff_total += diff[key]
        print(f"{key} -> {same[key]}/{diff[key]}")

    total = same_total + diff_total
    print(f"{diff_total}/{total} ({diff_total / total * 100}%)")
    diff_total -= diff[2]
    total -= diff[2] + same[2]
    print(f"{diff_total}/{total} ({diff_total / total * 100}%)")
