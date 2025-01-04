from typing import Dict
from elftools.elf.elffile import ELFFile

from .function_prototype import FunctionPrototype, Type


def resolve_type(die, dwarfinfo) -> Type:
    """Helper function to resolve type name and size from a DIE."""
    # Check for pointer type
    if die.tag == "DW_TAG_pointer_type":
        # Resolve the type it points to
        pointed_to_type = die.attributes.get("DW_AT_type", None)
        if pointed_to_type:
            pointed_to_type_refaddr = pointed_to_type.value + die.cu.cu_offset
            pointed_to_die = dwarfinfo.get_DIE_from_refaddr(pointed_to_type_refaddr)
            pointed_to = resolve_type(pointed_to_die, dwarfinfo)
        else:
            pointed_to = Type(None, None)  # Default if no pointed-to type is specified

        return pointed_to.to_pointer()

    # Check for struct type
    elif die.tag == "DW_TAG_structure_type":
        struct_name = die.attributes.get("DW_AT_name", None)
        struct_name = (
            struct_name.value.decode("utf-8") if struct_name and struct_name.value != None else "<Unnamed struct>"
        )
        struct_size = die.attributes.get("DW_AT_byte_size", None)
        struct_size = struct_size.value if struct_size else None

        if struct_name.startswith("Result<"):
            struct_name = "Result"
        elif struct_name.startswith("Option<"):
            struct_name = "Option"
        else:
            struct_name = "struct"
        return Type(struct_name, struct_size)

    # Handle other types
    type_size = die.attributes.get("DW_AT_byte_size", None)
    type_size = type_size.value if type_size else None
    return Type("primitive", type_size)


def extract_function_prototypes(binary_path, function_list) -> Dict[str, FunctionPrototype]:
    prototypes = {}
    with open(binary_path, "rb") as f:
        elffile = ELFFile(f)
        dwarfinfo = elffile.get_dwarf_info()

        for CU in dwarfinfo.iter_CUs():
            for DIE in CU.iter_DIEs():
                if DIE.tag == "DW_TAG_subprogram":
                    # skip inline function
                    if DIE.attributes.get("DW_AT_inline", None):
                        continue

                    # Extract function name
                    func_name = DIE.attributes.get("DW_AT_linkage_name", None)
                    func_name = func_name.value.decode("utf-8") if func_name else None

                    if func_name not in function_list:
                        continue

                    # Extract return type
                    return_type = DIE.attributes.get("DW_AT_type", None)
                    if return_type:
                        return_refaddr = return_type.value + DIE.cu.cu_offset
                        return_type_die = dwarfinfo.get_DIE_from_refaddr(return_refaddr)
                        return_type = resolve_type(return_type_die, dwarfinfo)
                    else:
                        return_type = Type("void", 0)

                    parameters = []
                    for child in DIE.iter_children():
                        if child.tag == "DW_TAG_formal_parameter":
                            param_type = child.attributes.get("DW_AT_type", None)
                            if param_type:
                                param_refaddr = param_type.value + DIE.cu.cu_offset
                                param_type_die = dwarfinfo.get_DIE_from_refaddr(param_refaddr)
                                param_type = resolve_type(param_type_die, dwarfinfo)
                                parameters.append(param_type)
                            else:
                                parameters.append(Type(None, None))
                    if func_name:
                        prototypes[func_name] = FunctionPrototype(func_name, return_type, parameters)
    return prototypes
