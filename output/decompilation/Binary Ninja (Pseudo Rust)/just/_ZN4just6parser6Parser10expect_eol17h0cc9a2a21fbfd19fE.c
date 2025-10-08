
  fn just::parser::Parser::expect_eol::h0cc9a2a21fbfd19f(arg1: *mut i128, arg2: *mut c_void) -> i64

{
    let mut var_a8: i128;
    just::parser::Parser::accept::hbdbbefbcb8377711(&var_a8, arg2, 0x10);
    let var_98: i128;
    let var_88: i128;
    let var_78: i128;
    let var_68: i64;
    let var_60: i8;
    
    if var_60 != 0x25
    {
        let zmm0: i128 = var_a8;
        let var_5c: i32;
        *arg1.byte_offset(0x4c) = var_5c;
        let var_5f: i32;
        *arg1.byte_offset(0x49) = var_5f;
        arg1[4] = var_68;
        arg1[3] = var_78;
        arg1[2] = var_88;
        arg1[1] = var_98;
        *arg1 = zmm0;
        *arg1.byte_offset(0x48) = var_60;
        return var_60;
    }
    
    let mut rax_1: i8 = just::parser::Parser::next_is::hc7c4171067e02951(arg2, 0x13);
    
    if rax_1 == 0
    {
        rax_1 = just::parser::Parser::expect::h35e1151927597ac7(&var_a8, arg2, 0x14);
        
        if var_60 != 0x25
        {
            arg1[4] = var_68;
            let zmm0_1: i128 = var_a8;
            arg1[3] = var_78;
            arg1[2] = var_88;
            arg1[1] = var_98;
            *arg1 = zmm0_1;
            return rax_1;
        }
    }
    
    *arg1.byte_offset(0x48) = 0x25;
    rax_1
}
