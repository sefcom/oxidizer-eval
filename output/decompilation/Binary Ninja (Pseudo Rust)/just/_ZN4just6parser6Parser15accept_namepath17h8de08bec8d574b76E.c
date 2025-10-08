
  fn just::parser::Parser::accept_namepath::h8de08bec8d574b76(arg1: *mut i128, arg2: *mut c_void) -> i64

{
    let mut rax: i64 = just::parser::Parser::next_is::hc7c4171067e02951(arg2, 0x18);
    
    if rax == 0
    {
        *arg1 = -0x8000000000000000;
    }
    else
    {
        let mut var_60: i128;
        just::parser::Parser::parse_namepath::hf7b725240a87d50f(&var_60, arg2);
        let var_50: i128;
        let var_18: i8;
        let mut zmm0_1: i128;
        
        if var_18 != 0x25
        {
            zmm0_1 = var_60;
            let var_14: i32;
            *arg1.byte_offset(0x4c) = var_14;
            let var_17: i32;
            *arg1.byte_offset(0x49) = var_17;
            let var_20: i64;
            arg1[4] = var_20;
            let var_30: i128;
            arg1[3] = var_30;
            let var_40: i128;
            arg1[2] = var_40;
            arg1[1] = var_50;
            *arg1 = zmm0_1;
            *arg1.byte_offset(0x48) = var_18;
            return var_18;
        }
        
        rax = var_50;
        let mut var_98: i128;
        var_98 = rax;
        zmm0_1 = var_60;
        let var_a8_1: i128 = zmm0_1;
        arg1[1] = rax;
        *arg1 = zmm0_1;
    }
    
    *arg1.byte_offset(0x48) = 0x25;
    rax
}
