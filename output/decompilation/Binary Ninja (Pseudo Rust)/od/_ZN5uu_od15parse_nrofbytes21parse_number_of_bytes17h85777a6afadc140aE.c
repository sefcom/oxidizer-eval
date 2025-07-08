
  fn uu_od::parse_nrofbytes::parse_number_of_bytes::h85777a6afadc140a(arg1: *mut i64, arg2: *mut i8, arg3: u64) -> *mut i64

{
    let mut r12: *mut c_void = 2;
    let mut rbp: i32 = 0x10;
    let mut rbx: u64;
    rbx = 1;
    
    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(arg2, arg3, 
        "0x0X", 2) != 0
    {
        goto 'label_4d79df;
    }
    
    r12 = 2;
    
    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(arg2, arg3, "0X", 
        2) != 0
    {
        goto 'label_4d79df;
    }
    
    let mut var_50: i32 = 0;
    let mut rax_2: i64;
    let mut rdx: u64;
    rax_2 = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x30, &var_50);
    
    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(arg2, arg3, 
        rax_2, rdx) == 0
    {
        let mut rax_6: *mut c_void;
        let mut rdx_4: u64;
        rax_6 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(arg2);
        
        if rax_6 == 0
        {
            core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, nullptr, arg3);
            /* no return */
        }
        
        uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(arg1, rax_6, rdx_4);
    }
    else
    {
        rbp = 8;
        r12 = nullptr;
        rbx = 0;
        'label_4d79df:
        let mut var_40: *mut i8 = arg2;
        let var_38_1: *mut c_void = &arg2[arg3];
        let mut rax_5: i32;
        let mut rdx_2: i32;
        rax_5 = core::str::validations::next_code_point_reverse::hff7c38eb44570652(&var_40, rbx);
        let mut r13_1: i64 = 1;
        let mut rbp_1: u64;
        
        if rax_5 == 0
        {
            'label_4d7a28:
            rbp_1 = arg3;
            'label_4d7b29:
            let mut rax_12: *mut c_void;
            let mut rdx_8: i64;
            rax_12 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(r12, rbp_1, arg2, arg3);
            
            if rax_12 == 0
            {
                core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, r12, rbp_1);
                /* no return */
            }
            
            core::num::_$LT$impl$u20$u64$GT$::from_str_radix::h99ae39453f343bd7(&var_50, rax_12, 
                rdx_8, rbp);
            
            if var_50 == 0
            {
                let var_48: i64;
                let mut rax_16: i64;
                
                if (r13_1 * var_48) >> 0x40 == {0}
                {
                    arg1[1] = r13_1 * var_48;
                    rax_16 = 3;
                }
                else
                {
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(
                        &arg1[1], arg2, arg3);
                    rax_16 = 2;
                }
                
                *arg1 = rax_16;
            }
            else
            {
                let mut var_61: i8 = *var_50[1];
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h3f1d93ee7475dcc4(
                    &arg1[1], &var_61);
                *arg1 = 1;
            }
        }
        else
        {
            let rdx_3: u64 = rdx_2 - 0x42;
            
            if rdx_3 > 0x2b
            {
                goto 'label_4d7a28;
            }
            
            match rdx_3
            {
                0 =>
                {
                    rbp_1 = arg3;
                    
                    if rbx != 0
                    {
                        goto 'label_4d7b29;
                    }
                    
                    let mut rax_7: i32;
                    let mut rdx_5: i32;
                    rax_7 = core::str::validations::next_code_point_reverse::hff7c38eb44570652(
                        &var_40, rbx);
                    
                    if rax_7 == 0
                    {
                        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(&arg1[1], arg2, arg3);
                        *arg1 = 1;
                    }
                    else
                    {
                        let rdx_6: u64 = rdx_5 - 0x45;
                        
                        if rdx_6 > 0x28
                        {
                            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(&arg1[1], arg2, arg3);
                            *arg1 = 1;
                        }
                        else
                        {
                            rbp_1 = arg3 - 2;
                            
                            match rdx_6
                            {
                                0 =>
                                {
                                    r13_1 = 0xde0b6b3a7640000;
                                    goto 'label_4d7b29;
                                }
                                1 | 3 | 4 | 5 | 7 | 9 | 0xa | 0xc | 0xd | 0xe | 0x10 | 0x11 | 0x12
                                    | 0x13 | 0x14 | 0x15 | 0x16 | 0x17 | 0x18 | 0x19 | 0x1a | 0x1b
                                    | 0x1c | 0x1d | 0x1e | 0x1f | 0x20 | 0x21 | 0x22 | 0x23 | 0x24
                                    | 0x25 | 0x27 =>
                                {
                                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(&arg1[1], arg2, arg3);
                                    *arg1 = 1;
                                }
                                2 =>
                                {
                                    r13_1 = 0x3b9aca00;
                                    goto 'label_4d7b29;
                                }
                                6 | 0x26 =>
                                {
                                    r13_1 = 0x3e8;
                                    goto 'label_4d7b29;
                                }
                                8 | 0x28 =>
                                {
                                    r13_1 = 0xf4240;
                                    goto 'label_4d7b29;
                                }
                                0xb =>
                                {
                                    r13_1 = 0x38d7ea4c68000;
                                    goto 'label_4d7b29;
                                }
                                0xf =>
                                {
                                    r13_1 = 0xe8d4a51000;
                                    goto 'label_4d7b29;
                                }
                            }
                        }
                    }
                }
                1 | 2 | 4 | 6 | 7 | 8 | 0xa | 0xc | 0xd | 0xf | 0x10 | 0x11 | 0x13 | 0x14 | 0x15 |
                    0x16 | 0x17 | 0x18 | 0x19 | 0x1a | 0x1b | 0x1c | 0x1d | 0x1e | 0x1f | 0x21 |
                    0x22 | 0x23 | 0x24 | 0x25 | 0x26 | 0x27 | 0x28 | 0x2a =>
                {
                    goto 'label_4d7a28;
                }
                3 =>
                {
                    rbp_1 = arg3 - (rbx ^ 1);
                    r13_1 = 0x1000000000000000;
                    
                    if rbx != 0
                    {
                        r13_1 = 1;
                    }
                    
                    goto 'label_4d7b29;
                }
                5 =>
                {
                    rbp_1 = arg3 - 1;
                    r13_1 = 0x40000000;
                    goto 'label_4d7b29;
                }
                9 | 0x29 =>
                {
                    rbp_1 = arg3 - 1;
                    r13_1 = 0x400;
                    goto 'label_4d7b29;
                }
                0xb | 0x2b =>
                {
                    rbp_1 = arg3 - 1;
                    r13_1 = 0x100000;
                    goto 'label_4d7b29;
                }
                0xe =>
                {
                    rbp_1 = arg3 - 1;
                    r13_1 = 0x4000000000000;
                    goto 'label_4d7b29;
                }
                0x12 =>
                {
                    rbp_1 = arg3 - 1;
                    r13_1 = 0x10000000000;
                    goto 'label_4d7b29;
                }
                0x20 =>
                {
                    rbp_1 = arg3 - (rbx ^ 1);
                    r13_1 = 0x200;
                    
                    if rbx != 0
                    {
                        r13_1 = 1;
                    }
                    
                    goto 'label_4d7b29;
                }
            }
        }
    }
    
    arg1
}
