
  fn just::parser::Parser::expect::h35e1151927597ac7(arg1: *mut i128, arg2: *mut c_void, arg3: i8) -> i64

{
    let mut var_100: i128;
    just::parser::Parser::accept::hbdbbefbcb8377711(&var_100, arg2, arg3);
    let zmm0: i128 = var_100;
    let var_bf: i32;
    let var_108: i32 = var_bf;
    let var_f0: i128;
    let var_e0: i128;
    let var_d0: i128;
    let var_c0: i8;
    let var_b8: i8;
    
    if var_b8 != 0x25
    {
        let var_b7: i32;
        *arg1.byte_offset(0x4c) = var_b7;
        *arg1.byte_offset(0x49) = var_b7;
        arg1[3] = var_d0;
        arg1[2] = var_e0;
        arg1[1] = var_f0;
        *arg1 = zmm0;
        *arg1.byte_offset(0x44) = var_bf;
        *arg1.byte_offset(0x41) = var_bf;
        arg1[4] = var_c0;
        *arg1.byte_offset(0x48) = var_b8;
        return var_c0;
    }
    
    if var_c0 != 0x25
    {
        arg1[3] = var_d0;
        arg1[2] = var_e0;
        arg1[1] = var_f0;
        *arg1 = zmm0;
        *arg1.byte_offset(0x41) = var_bf;
        *arg1.byte_offset(0x44) = var_bf;
        arg1[4] = var_c0;
        *arg1.byte_offset(0x48) = 0x25;
        return var_c0;
    }
    
    let rax_1: i64 = just::parser::Parser::unexpected_token::hbee08644eef5d075(&var_100, arg2);
    let zmm0_1: i128 = var_b8;
    let var_28: i128 = zmm0_1;
    let zmm1_1: i128 = var_100;
    let var_38: i128 = var_d0;
    let var_48: i128 = var_e0;
    let var_58: i128 = var_f0;
    let var_68: i128 = zmm1_1;
    arg1[4] = zmm0_1;
    arg1[3] = var_d0;
    arg1[2] = var_e0;
    arg1[1] = var_f0;
    *arg1 = zmm1_1;
    rax_1
}
