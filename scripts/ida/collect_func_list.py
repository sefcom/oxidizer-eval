import json
import os
from collections import defaultdict

import idaapi
import idautils
import idc
import ida_nalt


if __name__ == "__main__":
    out_path = os.path.join("output", "func_list", os.path.basename(ida_nalt.get_input_file_path() + ".json"))
    os.makedirs(os.path.dirname(out_path), exist_ok=True)
    for function_ea in idautils.Functions():
        f_name = idc.get_func_name(function_ea)
