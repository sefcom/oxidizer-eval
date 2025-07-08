
  fn uu_test::files::h2d66ad67db33f3bc(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: *mut i8, arg7: i64) -> i64

{
    let mut var_258: i32;
    std::fs::metadata::h59562c409af00ed3(&var_258, arg2);
    
    if var_258 != 2
    {
        let mut var_248: i128;
        let var_188_1: i128 = var_248;
        let mut var_198: i128 = var_258;
        let var_228: i128;
        let var_168_1: i128 = var_228;
        let var_218: i128;
        let var_158_1: i128 = var_218;
        let var_208: i128;
        let var_148_1: i128 = var_208;
        let var_1f8: i128;
        let var_138_1: i128 = var_1f8;
        let var_1e8: i128;
        let var_128_1: i128 = var_1e8;
        let var_1d8: i128;
        let var_118_1: i128 = var_1d8;
        let var_1c8: i128;
        let var_108_1: i128 = var_1c8;
        let var_1b8: i128;
        let var_f8_1: i128 = var_1b8;
        let var_238: i64;
        let var_178_1: i64 = var_238;
        let var_230: i64;
        let var_170_1: i64 = var_230;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h7bbe7bfe3f1c8d8f(&var_258);
        std::fs::metadata::h59562c409af00ed3(&var_258, arg4);
        
        if var_258 != 2
        {
            let var_d8_1: i128 = var_248;
            let mut var_e8: i128 = var_258;
            let var_b8_1: i128 = var_228;
            let var_a8_1: i128 = var_218;
            let var_98_1: i128 = var_208;
            let var_88_1: i128 = var_1f8;
            let var_78_1: i128 = var_1e8;
            let var_68_1: i128 = var_1d8;
            let var_58_1: i128 = var_1c8;
            let var_48_1: i128 = var_1b8;
            let var_c8_1: i64 = var_238;
            let var_c0_1: i64 = var_230;
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h7bbe7bfe3f1c8d8f(&var_258);
            std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_258, arg6, arg7);
            let mut result: i64;
            
            if var_258 == 0
            {
                let rsi_3: u64 = var_248;
                let var_250: i64;
                result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_250, rsi_3, "-ef-nt-ot", 3);
                
                if result == 0
                {
                    let mut rcx: bool;
                    
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_250, rsi_3, "-nt-ot", 3) == 0
                    {
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_250, rsi_3, "-ot", 3) == 0
                        {
                            goto 'label_4ad29b;
                        }
                        
                        std::fs::Metadata::modified::h6f16921acf618ae6(&var_258, &var_198);
                        let mut rax_5: i64;
                        let mut rdx_4: i32;
                        rax_5 =
                            core::result::Result$LT$T$C$E$GT$::unwrap::ha257e6c7d5c79a00(&var_258);
                        std::fs::Metadata::modified::h6f16921acf618ae6(&var_258, &var_e8);
                        let mut rdx_5: i32;
                        result =
                            core::result::Result$LT$T$C$E$GT$::unwrap::ha257e6c7d5c79a00(&var_258);
                        rcx = rax_5 < result;
                        
                        if rax_5 == result
                        {
                            rcx = rdx_4 < rdx_5;
                        }
                        
                        arg1[1] = rcx;
                        *arg1 = 7;
                    }
                    else
                    {
                        std::fs::Metadata::modified::h6f16921acf618ae6(&var_258, &var_198);
                        let mut rax_3: i64;
                        let mut rdx_2: i32;
                        rax_3 =
                            core::result::Result$LT$T$C$E$GT$::unwrap::ha257e6c7d5c79a00(&var_258);
                        std::fs::Metadata::modified::h6f16921acf618ae6(&var_258, &var_e8);
                        let mut rdx_3: i32;
                        result =
                            core::result::Result$LT$T$C$E$GT$::unwrap::ha257e6c7d5c79a00(&var_258);
                        rcx = rax_3 != result;
                        
                        if rax_3 < result
                        {
                            rcx = true;
                        }
                        
                        let mut rsi_9: bool = rdx_2 != rdx_3;
                        
                        if rdx_2 < rdx_3
                        {
                            rsi_9 = true;
                        }
                        
                        if rcx != 0
                        {
                            rsi_9 = rcx;
                        }
                        
                        arg1[1] = rsi_9 == 1;
                        *arg1 = 7;
                    }
                }
                else
                {
                    arg1[1] = 0 == 0;
                    *arg1 = 7;
                }
            }
            else
            {
                'label_4ad29b:
                var_258 = 1;
                let var_250_1: *mut i8 = arg6;
                var_248 = arg7;
                *var_248[8] = 1;
                result =
                    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h0530b763d48a6791(
                    &arg1[1], &var_258);
                *arg1 = 4;
            }
            
            return result;
        }
    }
    
    arg1[1] = 0;
    *arg1 = 7;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h7bbe7bfe3f1c8d8f(&var_258)
}
