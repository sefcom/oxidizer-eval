
  fn just::parser::Parser::accepted::h762a87b5f98dff30(arg1: *mut bool, arg2: *mut c_void, arg3: i8) -> i64

{
    let mut var_98: i128;
    just::parser::Parser::accept::hbdbbefbcb8377711(&var_98, arg2, arg3);
    let var_58: i8;
    let result: i8;
    
    if result == 0x25
    {
        *arg1 = var_58 != 0x25;
        arg1[0x48] = result;
        return result;
    }
    
    let zmm0: i128 = var_98;
    let var_57: i32;
    let var_a0: i32 = var_57;
    let var_4c: i32;
    *arg1.byte_offset(0x4c) = var_4c;
    let var_4f: i32;
    *arg1.byte_offset(0x49) = var_4f;
    let var_68: i128;
    *arg1.byte_offset(0x30) = var_68;
    let var_78: i128;
    *arg1.byte_offset(0x20) = var_78;
    let var_88: i128;
    *arg1.byte_offset(0x10) = var_88;
    *arg1 = zmm0;
    *arg1.byte_offset(0x41) = var_57;
    *arg1.byte_offset(0x44) = var_57;
    arg1[0x40] = var_58;
    arg1[0x48] = result;
    result
}
