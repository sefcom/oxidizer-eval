
  fn uu_test::parser::Parser::parse::h4b01a6d19b3f40db(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let mut var_88: i32;
    let mut result: i64 = uu_test::parser::Parser::expr::h14b244d6254724ab(&var_88, arg2);
    let mut var_78: i128;
    
    if var_88 != 7
    {
        let zmm0_1: i128 = var_88;
        *arg1.byte_offset(0x10) = var_78;
        *arg1 = zmm0_1;
    }
    else
    {
        result = arg2[3];
        arg2[3] = -0x7fffffffffffffff;
        let mut result_1: i64;
        let mut var_40: i128;
        
        if result != -0x7fffffffffffffff
        {
            var_40 = *arg2.byte_offset(0x20);
            result_1 = result;
        }
        else
        {
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h64663e472b050a2b(&result_1, &arg2[6]);
            result = result_1;
        }
        
        if result != -0x8000000000000000
        {
            let mut var_68: i128 = result_1;
            var_88 = 1;
            let var_80_1: i64 = *var_68[8];
            var_78 = *var_40[8];
            *var_78[8] = 1;
            let mut var_30: i128;
            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h0530b763d48a6791(&var_30, 
                &var_88);
            let var_20: i64;
            arg1[3] = var_20;
            *arg1.byte_offset(8) = var_30;
            *arg1 = 2;
            return core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(
                &var_68);
        }
        
        *arg1 = 7;
    }
    result
}
