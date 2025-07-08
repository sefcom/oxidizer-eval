
  fn uu_seq::numberparse::parse_hexadecimal::ha820262dcdf3b692(arg1: *mut i64, arg2: *mut i8, arg3: *mut c_void) -> *mut i64

{
    let mut var_88: i32 = 0;
    let rax_1: i8 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h9cb9db4a84f1050b(
        arg2, arg3, core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2d, &var_88), 1);
    let mut rax_2: *mut c_void;
    let mut rdx_2: *mut c_void;
    
    if rax_1 == 0
    {
        rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(2, arg2, arg3);
        
        if rax_2 == 0
        {
            core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, 2, arg3);
            /* no return */
        }
    }
    else
    {
        rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(3, arg2, arg3);
        
        if rax_2 == 0
        {
            core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, 3, arg3);
            /* no return */
        }
    }
    
    var_88 = 0;
    let rax_4: i8 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h9cb9db4a84f1050b(
        rax_2, rdx_2, core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2d, &var_88), 1);
    let mut rax_6: i8;
    
    if rax_4 == 0
    {
        var_88 = 0;
        rax_6 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h9cb9db4a84f1050b(rax_2, 
            rdx_2, core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2b, &var_88), 1);
    }
    
    if rax_4 == 0 && rax_6 == 0
    {
        num_bigint::bigint::convert::_$LT$impl$u20$num_traits..Num$u20$for$u20$num_bigint..bigint..BigInt$GT$::from_str_radix::hb9365f03b0604201(&var_88, rax_2, rdx_2, 0x10);
        let rax_8: i64 = var_88;
        
        if rax_8 != -0x8000000000000000
        {
            let mut var_58: i64 = rax_8;
            let var_80: i8;
            let var_50_1: i8 = var_80;
            let var_38_1: i64 = 0;
            __builtin_memcpy(&var_88, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x08\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00", 0x20);
            let var_68_1: i64 = 0;
            let rax_9: i8 = bigdecimal::impl_cmp::_$LT$impl$u20$core..cmp..PartialEq$u20$for$u20$bigdecimal..BigDecimal$GT$::eq::h0c7161c8c911041f(&var_58, &var_88);
            let var_7f: i128;
            
            if rax_1 == 0
            {
                arg1[4] = var_38_1;
                let zmm0_2: i128 = var_58;
                *arg1.byte_offset(0x10) = var_7f;
                *arg1 = zmm0_2;
                *arg1.byte_offset(0x28) = {0};
            }
            else if rax_9 == 0
            {
                let var_70: i64;
                let rsi_10: u32 = var_70;
                arg1[2] = *var_7f[7];
                *arg1 = var_58;
                
                if rsi_10 == 0
                {
                    arg1[3] = 2;
                }
                else if rsi_10 != 1
                {
                    arg1[3] = 0;
                }
                else
                {
                    arg1[3] = 1;
                }
                
                *arg1.byte_offset(0x1c) = *var_70[4];
                *arg1.byte_offset(0x19) = *var_70[1];
                __builtin_memset(&arg1[4], 0, 0x18);
            }
            else
            {
                *arg1 = -0x7ffffffffffffffe;
                arg1[5] = 2;
                arg1[6] = 0;
                core::ptr::drop_in_place$LT$bigdecimal..BigDecimal$GT$::h9ea64fcf6ce46304(&var_58);
            }
            core::ptr::drop_in_place$LT$bigdecimal..BigDecimal$GT$::h9ea64fcf6ce46304(&var_88);
        }
        else
        {
            arg1[1] = 2;
            *arg1 = -0x7ffffffffffffffc;
        }
    }
    else
    {
        arg1[1] = 0;
        *arg1 = -0x7ffffffffffffffc;
    }
    
    arg1
}
