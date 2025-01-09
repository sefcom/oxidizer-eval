from elftools.elf.elffile import ELFFile
from elftools.dwarf.locationlists import LocationParser
from elftools.dwarf.descriptions import ExprDumper
from elftools.dwarf.die import *
from elftools.dwarf.locationlists import *
from elftools.dwarf.descriptions import *
from typing import *


class DwarfLocation:
    pass


class CfaLocation(DwarfLocation):
    def __init__(self, arg: int):
        self.arg = arg

    def __str__(self):
        return f"cfa {self.arg}"

    def __repr__(self):
        return f"CfaLocation({self.arg})"


class RegLocation(DwarfLocation):
    def __init__(self, reg_num: int):
        self.reg_num = reg_num
        self.reg_name = describe_reg_name(reg_num)

    def __str__(self):
        return f"reg{self.reg_num} ({self.reg_name})"

    def __repr__(self):
        return f"RegLocation({self.reg_num})"


class BregLocation(DwarfLocation):
    def __init__(self, reg_num: int, arg: int):
        self.reg_num = reg_num
        self.reg_name = describe_reg_name(reg_num)
        self.arg = arg

    def __str__(self):
        return f"breg{self.reg_num} ({self.reg_name}) {self.arg}"

    def __repr__(self):
        return f"BregLocation({self.reg_num}, {self.arg})"


class AddrLocation(DwarfLocation):
    def __init__(self, arg: int):
        self.arg = arg

    def __str__(self):
        return f"addr {self.arg}"

    def __repr__(self):
        return f"AddrLocation({self.arg})"


class StackValueLocation(DwarfLocation):
    def __str__(self):
        return f"stack_value"

    def __repr__(self):
        return f"StackValueLocation()"


def parse_dwarf_expr_op(dwarf_expr_op, machine_arch):
    op_name = dwarf_expr_op.op_name
    args = dwarf_expr_op.args

    if op_name == "DW_OP_stack_value":
        return StackValueLocation()

    elif op_name.startswith("DW_OP_fbreg") and len(args) == 1:
        return CfaLocation(args[0])

    # Technically breg6 means "the value held in reg6",
    # but in this case we know what it corresponds to for x64 machine
    elif op_name == "DW_OP_breg6" and machine_arch == "x64" and len(args) == 1:
        return CfaLocation(args[0])

    # Similarly for breg5 on x86
    elif op_name == "DW_OP_breg5" and machine_arch == "x86" and len(args) == 1:
        return CfaLocation(args[0])

    # Generic breg handling
    elif op_name.startswith("DW_OP_breg") and len(args) == 1:
        reg_num = int("".join([d for d in op_name if d.isdigit()]))
        return BregLocation(reg_num, args[0])

    elif op_name.startswith("DW_OP_regx") and len(args) == 1:
        return RegLocation(args[0])

    elif op_name.startswith("DW_OP_reg") and len(args) == 0:
        reg_num = int("".join([d for d in op_name if d.isdigit()]))
        return RegLocation(reg_num)

    elif op_name.startswith("DW_OP_addr") and len(args) == 1:
        # import ipdb; ipdb.set_trace()
        return AddrLocation(args[0])
    elif op_name == "DW_OP_GNU_entry_value":
        return parse_dwarf_expr_op(dwarf_expr_op.args[0][0], machine_arch)
    # else:
    #     import ipdb; ipdb.set_trace()


def iter_die(die: DIE) -> Iterator[DIE]:
    yield die
    for child in die.iter_children():
        for child_die in iter_die(child):
            yield child_die


def get_variable_location(die, loc_parser, expr_dumper):
    def parse_loc_expr(loc_expr):
        try:
            dw_expr_ops = expr_dumper.expr_parser.parse_expr(loc_expr)
        except KeyError:
            dw_expr_ops = None

        if dw_expr_ops is not None and len(dw_expr_ops) > 0:
            return dw_expr_ops

    """Extract the location information for a variable."""
    if "DW_AT_location" not in die.attributes:
        # print(die)
        return "NO_AT_LOCATION"

    loc_attr = die.attributes.get("DW_AT_location")
    loc = loc_parser.parse_from_attribute(loc_attr, die.cu["version"])
    machine_arch = die.dwarfinfo.config.machine_arch
    set_global_machine_arch(machine_arch)
    dwloc = None

    # We look for DWARFExprOp lists of only 1 element;
    # This guarantees we can avoid those DW_OP_stack_value ones which don't exist
    if isinstance(loc, LocationExpr):
        dw_expr_ops = parse_loc_expr(loc.loc_expr)
        if dw_expr_ops is not None:
            dwloc = parse_dwarf_expr_op(dw_expr_ops[0], machine_arch)

    elif isinstance(loc, list):
        for elem in loc:
            if isinstance(elem, LocationEntry):
                dw_expr_ops = parse_loc_expr(elem.loc_expr)
                if dw_expr_ops is not None:
                    dwloc = parse_dwarf_expr_op(dw_expr_ops[0], machine_arch)

    return dwloc


def resolve_type_name_and_size(die, dwarfinfo):
    """Helper function to resolve type name and size from a DIE."""
    # Check for pointer type
    if die.tag == "DW_TAG_pointer_type":
        # Resolve the type it points to
        pointed_to_type = die.attributes.get("DW_AT_type", None)
        if pointed_to_type:
            pointed_to_type_refaddr = pointed_to_type.value + die.cu.cu_offset
            pointed_to_die = dwarfinfo.get_DIE_from_refaddr(pointed_to_type_refaddr)
            pointed_to_name, pointed_to_size = resolve_type_name_and_size(pointed_to_die, dwarfinfo)
        else:
            pointed_to_name = "void", None  # Default if no pointed-to type is specified

        return f"*{pointed_to_name}", pointed_to_size

    # Check for struct type
    elif die.tag == "DW_TAG_structure_type":
        struct_name = die.attributes.get("DW_AT_name", None)
        struct_name = (
            struct_name.value.decode("utf-8") if struct_name and struct_name.value != None else "<Unnamed struct>"
        )
        struct_size = die.attributes.get("DW_AT_byte_size", None)
        struct_size = struct_size.value if struct_size else None
        # return f"struct {struct_name}", struct_size
        return f"struct {struct_name}", struct_size

    # Handle other types
    type_name_attr = die.attributes.get("DW_AT_name", None)
    type_name = (
        type_name_attr.value.decode("utf-8")
        if type_name_attr and type_name_attr.value != None
        else f"Unnamed type ({die.tag})"
    )
    type_size = die.attributes.get("DW_AT_byte_size", None)
    type_size = type_size.value if type_size else None
    return type_name, type_size


def extract_function_and_variable_types(file_path):
    with open(file_path, "rb") as f:
        elffile = ELFFile(f)
        dwarf_info = elffile.get_dwarf_info()
        loc_parser = LocationParser(dwarf_info.location_lists())
        expr_dumper = ExprDumper(dwarf_info.structs)

        for cu in dwarf_info.iter_CUs():
            for sub_die in cu.iter_DIEs():
                if sub_die.tag == "DW_TAG_subprogram":
                    # skip inline function
                    if sub_die.attributes.get("DW_AT_inline", None):
                        continue

                    # Extract function name
                    func_name = sub_die.attributes.get("DW_AT_linkage_name", None)
                    func_name = func_name.value.decode("utf-8") if func_name else "<Unnamed function>"

                    # if func_name != "_ZN3fmt4main17hf5c5453080299118E":
                    #     continue

                    print()
                    print(f"Function: {func_name}")

                    # if "DW_AT_main_subprogram" in sub_die.attributes:
                    #     sub_die = sub_die.attributes.get('DW_AT_main_subprogram')

                    # Extract return type
                    return_type = sub_die.attributes.get("DW_AT_type", None)
                    if return_type:
                        return_refaddr = return_type.value + sub_die.cu.cu_offset
                        return_type_die = dwarf_info.get_DIE_from_refaddr(return_refaddr)
                        return_type_name, return_type_size = resolve_type_name_and_size(return_type_die, dwarf_info)
                    else:
                        return_type_name = "void"
                        return_type_size = 0

                    print(f"Return Type:{return_type_name}, {return_type_size} bytes")

                    # Separate parameters and local variables
                    parameters = []
                    local_variables = []
                    for child in iter_die(sub_die):
                        # import ipdb; ipdb.set_trace()
                        if child.tag == "DW_TAG_formal_parameter":
                            param_type = child.attributes.get("DW_AT_type", None)
                            if param_type:
                                param_refaddr = param_type.value + sub_die.cu.cu_offset
                                param_type_die = dwarf_info.get_DIE_from_refaddr(param_refaddr)
                                param_type_name, param_type_size = resolve_type_name_and_size(
                                    param_type_die, dwarf_info
                                )
                            else:
                                param_type_name, param_type_size = "Unknown type", None

                            size_info = f", {param_type_size} bytes" if param_type_size else ""
                            param_loc = get_variable_location(child, loc_parser, expr_dumper)
                            parameters.append(f"    {param_type_name}{size_info}, loc:{param_loc}")

                        elif child.tag == "DW_TAG_variable":
                            var_type = child.attributes.get("DW_AT_type", None)
                            if var_type:
                                var_refaddr = var_type.value + sub_die.cu.cu_offset
                                var_type_die = dwarf_info.get_DIE_from_refaddr(var_refaddr)
                                var_type_name, var_type_size = resolve_type_name_and_size(var_type_die, dwarf_info)
                            else:
                                var_type_name, var_type_size = "Unknown type", None

                            size_info = f", {var_type_size} bytes" if var_type_size else ""
                            local_loc = get_variable_location(child, loc_parser, expr_dumper)
                            local_variables.append(f"  {var_type_name}{size_info}, loc:{local_loc}")

                    # Print parameters and variables separately
                    if parameters:
                        print("Parameters:")
                        for param in parameters:
                            print(param)
                    if local_variables:
                        print("Local Variables:")
                        for var in local_variables:
                            print(var)


extract_function_and_variable_types("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-debug/o3/fmt")
