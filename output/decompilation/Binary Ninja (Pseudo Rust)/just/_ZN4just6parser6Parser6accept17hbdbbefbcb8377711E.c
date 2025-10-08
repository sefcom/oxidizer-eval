
  fn just::parser::Parser::accept::hbdbbefbcb8377711(arg1: *mut i128, arg2: *mut c_void, arg3: i8) -> i64

{
    let mut rax: i64 = just::parser::Parser::next_is::hc7c4171067e02951(arg2, arg3);
    
    if rax == 0
    {
        arg1[4] = 0x25;
    }
    else
    {
        let mut var_60: i128;
        just::parser::Parser::advance::ha6fdbb87ccd3a5f7(&var_60, arg2);
        let zmm0_1: i128 = var_60;
        let var_50: i128;
        let var_40: i128;
        let var_30: i128;
        let var_20: i64;
        let var_18: i8;
        
        if var_18 != 0x25
        {
            let var_17: i32;
            *arg1.byte_offset(0x4c) = var_17;
            *arg1.byte_offset(0x49) = var_17;
            arg1[4] = var_20;
            arg1[3] = var_30;
            arg1[2] = var_40;
            arg1[1] = var_50;
            *arg1 = zmm0_1;
            *arg1.byte_offset(0x48) = var_18;
            return var_18;
        }
        
        rax = var_20;
        arg1[4] = rax;
        arg1[3] = var_30;
        arg1[2] = var_40;
        arg1[1] = var_50;
        *arg1 = zmm0_1;
    }
    
    *arg1.byte_offset(0x48) = 0x25;
    rax
}
