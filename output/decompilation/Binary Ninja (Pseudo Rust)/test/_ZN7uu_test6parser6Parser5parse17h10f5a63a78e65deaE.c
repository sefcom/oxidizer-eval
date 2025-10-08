
  fn uu_test::parser::Parser::parse::h10f5a63a78e65dea(arg1: *mut i64, arg2: *mut i64) -> *mut i128

{
    let mut var_70: i32;
    let mut result: *mut i128 = uu_test::parser::Parser::expr::hea95ff6631384a05(&var_70, arg2);
    let mut var_60: i128;
    
    if var_70 != 7
    {
        let zmm0_1: i128 = var_70;
        *arg1.byte_offset(0x10) = var_60;
        *arg1 = zmm0_1;
    }
    else
    {
        let mut r14_1: i64 = arg2[3];
        arg2[3] = -0x7fffffffffffffff;
        
        if r14_1 != -0x7fffffffffffffff
        {
            let var_48: i128 = *arg2.byte_offset(0x20);
            
            if r14_1 != -0x8000000000000000
            {
                'label_4583cf:
                let r15_2: i64 = var_48;
                var_70 = 1;
                let var_68_1: i64 = r15_2;
                var_60 = *var_48[8];
                *var_60[8] = 1;
                let mut var_38: i128;
                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h47d193bf63b6bc9a(&var_38, &var_70);
                let var_28: i64;
                arg1[3] = var_28;
                *arg1.byte_offset(8) = var_38;
                *arg1 = 2;
                return 
                    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc3c00042d8510b40(
                    r14_1, r15_2);
            }
        }
        else
        {
            let mut var_50: i64;
            result = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4dcbdc82a201ae23(&var_50, &arg2[6]);
            r14_1 = var_50;
            
            if r14_1 != -0x8000000000000000
            {
                goto 'label_4583cf;
            }
        }
        
        *arg1 = 7;
    }
    result
}
