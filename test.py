from elftools.elf.elffile import ELFFile

def resolve_type_name_and_size(die, dwarfinfo):
    """Helper function to resolve type name and size from a DIE."""
    
    # Check for struct type
    if die.tag == 'DW_TAG_pointer_type':
        # Resolve the type it points to
        pointed_to_type = die.attributes.get('DW_AT_type', None)
        if pointed_to_type:
            try:
                pointed_to_die = dwarfinfo.get_DIE_from_refaddr(pointed_to_type.value)
            except Exception:
                return "*None", None
                
            pointed_to_name, pointed_to_size = resolve_type_name_and_size(pointed_to_die, dwarfinfo)
        else:
            pointed_to_name = "void", None  # Default if no pointed-to type is specified
        
        return f"*{pointed_to_name}", pointed_to_size
    
    # Check for struct type
    elif die.tag == 'DW_TAG_structure_type':
        struct_name = die.attributes.get('DW_AT_name', None)
        struct_name = struct_name.value.decode('utf-8') if struct_name and struct_name.value != None else "<Unnamed struct>"
        struct_size = die.attributes.get('DW_AT_byte_size', None)
        struct_size = struct_size.value if struct_size else None
        # return f"struct {struct_name}", struct_size
        return f"struct {struct_name}", struct_size
    
    # Handle other types
    type_name_attr = die.attributes.get('DW_AT_name', None)
    type_name = type_name_attr.value.decode('utf-8') if type_name_attr and type_name_attr.value != None else f"Unnamed type ({die.tag})"
    type_size = die.attributes.get('DW_AT_byte_size', None)
    type_size = type_size.value if type_size else None
    return type_name, type_size

def extract_function_and_variable_types(file_path):
    with open(file_path, 'rb') as f:
        elffile = ELFFile(f)
        dwarfinfo = elffile.get_dwarf_info()
        
        for CU in dwarfinfo.iter_CUs():
            for DIE in CU.iter_DIEs():
                if DIE.tag == 'DW_TAG_subprogram':
                    #skip inline function
                    if(DIE.attributes.get('DW_AT_inline', None)):
                        continue 
                    # Extract function name
                    func_name = DIE.attributes.get('DW_AT_linkage_name', None)
                    func_name = func_name.value.decode('utf-8') if func_name else "<Unnamed function>"
                    # if func_name == "_ZN4core3num62_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$8from_str17h35e67cae0c0452a5E":
                    #     print(func_name + ":")
                    #     print(DIE)
                    # else:
                    #     continue
                    print( )
                    print(f"Function: {func_name}")
                    if "extract_width" in func_name:
                        import ipdb
                        ipdb.set_trace()
                     # Extract return type
                    return_type = DIE.attributes.get('DW_AT_type', None)
                    if return_type:
                        try:
                            return_type_die = dwarfinfo.get_DIE_from_refaddr(return_type.value)
                        except KeyError:
                            continue    
                
                        if return_type_die.tag == 'DW_TAG_subprogram':
                            continue
                
                        return_type_name, return_type_size = resolve_type_name_and_size(return_type_die, dwarfinfo)
                    
                    else:
                        return_type_name = "void"
                        
                    print(f"Return Type:{return_type_name}, {return_type_size} bytes")
                    
                    # Separate parameters and local variables
                    parameters = []
                    local_variables = []

                    for child in DIE.iter_children():
                        if child.tag == 'DW_TAG_formal_parameter':
                            # param_name = child.attributes.get('DW_AT_name', None)
                            # param_name = param_name.value.decode('utf-8') if param_name else "<Unnamed parameter>"
                            
                            param_type = child.attributes.get('DW_AT_type', None)
                            if param_type:
                                try:
                                    param_type_die = dwarfinfo.get_DIE_from_refaddr(param_type.value)
                                except Exception:
                                    continue
                                param_type_name, param_type_size = resolve_type_name_and_size(param_type_die, dwarfinfo)
                            else:
                                param_type_name, param_type_size = "Unknown type", None

                            size_info = f", {param_type_size} bytes" if param_type_size else ""
                            parameters.append(f"    {param_type_name}{size_info}")

                        elif child.tag == 'DW_TAG_variable':
                            # var_name = child.attributes.get('DW_AT_name', None)
                            # var_name = var_name.value.decode('utf-8') if var_name else "<Unnamed variable>"
                            
                            var_type = child.attributes.get('DW_AT_type', None)
                            if var_type:
                                try:
                                    var_type_die = dwarfinfo.get_DIE_from_refaddr(var_type.value)
                                except KeyError:
                                    continue
                                var_type_name, var_type_size = resolve_type_name_and_size(var_type_die, dwarfinfo)
                            else:
                                var_type_name, var_type_size = "Unknown type", None

                            size_info = f", {var_type_size} bytes" if var_type_size else ""
                            local_variables.append(f"  {var_type_name}{size_info}")

                    # Print parameters and variables separately
                    if parameters:
                        print("Parameters:")
                        for param in parameters:
                            print(param)
                    if local_variables:
                        print("Local Variables:")
                        for var in local_variables:
                            print(var)
                        

# Replace 'your_binary' with the path to your ELF binary file
extract_function_and_variable_types('fmt')