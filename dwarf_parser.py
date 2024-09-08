from elftools.elf.elffile import ELFFile
from elftools.dwarf.die import DIE

def extract_prototype():
    pass
    
def main(path):
    with open(path, "rb") as fd:
        elf = ELFFile(fd)
        dwarf_info = elf.get_dwarf_info()
        for cu in dwarf_info.iter_CUs():
            top_die = cu.get_top_DIE()
            for child in top_die.iter_children():
                if child.tag == "DW_TAG_subprogram":
                    print(child)

if __name__ == "__main__":
    elf_file_path = 'oxdizer-test'
    main(elf_file_path)