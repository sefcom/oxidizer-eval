from elftools.elf.elffile import ELFFile
from elftools.dwarf.die import DIE
from elftools.dwarf.descriptions import describe_form_class

def get_type_name(dwarfinfo, type_offset):
    for CU in dwarfinfo.iter_CUs():
        die = CU.get_DIE_from_refaddr(type_offset)
        if die and die.tag == 'DW_TAG_base_type':
            return die.get('DW_AT_name', 'unknown')
        elif die and die.tag == 'DW_TAG_typedef':
            return die.get('DW_AT_name', 'unknown')
        elif die and die.tag == 'DW_TAG_pointer_type':
            return get_type_name(dwarfinfo, die.get('DW_AT_type').value)
        elif die and die.tag == 'DW_TAG_const_type':
            return 'const ' + get_type_name(dwarfinfo, die.get('DW_AT_type').value)
        elif die and die.tag == 'DW_TAG_volatile_type':
            return 'volatile ' + get_type_name(dwarfinfo, die.get('DW_AT_type').value)
        elif die and die.tag == 'DW_TAG_structure_type':
            return 'struct ' + die.get('DW_AT_name', 'unknown')
        elif die and die.tag == 'DW_TAG_union_type':
            return 'union ' + die.get('DW_AT_name', 'unknown')
        elif die and die.tag == 'DW_TAG_enumeration_type':
            return 'enum ' + die.get('DW_AT_name', 'unknown')
    return 'unknown'

def process_type_die(die: DIE, indent_level=0):
    if "subprogram" in die.tag:
        for child in die.iter_children():
            param_type_offset = child.get('DW_AT_type').value
            param_type = get_type_name(dwarfinfo, param_type_offset)
            param_name = child.get('DW_AT_name', 'unknown').decode('utf-8')
    return
    indent = '  ' * indent_level
    if die.tag == 'DW_TAG_typedef':
        print(f"{indent}Typedef: {die.attributes['DW_AT_name'].value.decode('utf-8')}")
    elif die.tag == 'DW_TAG_base_type':
        print(f"{indent}Base Type: {die.attributes['DW_AT_name'].value.decode('utf-8')}")
    elif die.tag == 'DW_TAG_pointer_type':
        print(f"{indent}Pointer Type")
    elif die.tag == 'DW_TAG_const_type':
        print(f"{indent}Const Type")
    elif die.tag == 'DW_TAG_volatile_type':
        print(f"{indent}Volatile Type")
    elif die.tag == 'DW_TAG_array_type':
        print(f"{indent}Array Type")
    elif die.tag == 'DW_TAG_structure_type':
        print(f"{indent}Structure Type: {die.attributes['DW_AT_name'].value.decode('utf-8')}")
    elif die.tag == 'DW_TAG_union_type':
        print(f"{indent}Union Type: {die.attributes['DW_AT_name'].value.decode('utf-8')}")
    elif die.tag == 'DW_TAG_enumeration_type':
        print(f"{indent}Enumeration Type: {die.attributes['DW_AT_name'].value.decode('utf-8')}")

    for child in die.iter_children():
        process_type_die(child, indent_level + 1)

def main(elf_file_path):
    with open(elf_file_path, 'rb') as f:
        elffile = ELFFile(f)
        if not elffile.has_dwarf_info():
            print(f"{elf_file_path} has no DWARF info.")
            return

        dwarf_info = elffile.get_dwarf_info()
        for CU in dwarf_info.iter_CUs():
            top_die = CU.get_top_DIE()
            for die in top_die.iter_children():
                if die.tag == "DW_TAG_subprogram":
                    for child in die.iter_children():
                        if child.tag == "DW_TAG_formal_parameter":
                            print(list(CU.get_DIE_from_refaddr(child.attributes["DW_AT_type"].value).iter_children()))
                    

if __name__ == '__main__':
    elf_file_path = 'oxdizer-test'
    main(elf_file_path)