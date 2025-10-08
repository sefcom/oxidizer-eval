
  fn uu_od::parse_nrofbytes::parse_number_of_bytes::hb463a51f26f3deb1(arg1: *mut i64, arg2: *mut i8, arg3: u64) -> *mut i64

{
    let mut r12: i64 = 2;
    let mut rbp: i32 = 0x10;
    let mut rbx: u64;
    rbx = 1;
    let mut var_50: i32;
    
    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::ha3dd105fff9094a1(arg2, arg3, 
        "0x0Xparse failednulsohstxetxeote…", 2) == 0
    {
        r12 = 2;
        
        if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::ha3dd105fff9094a1(arg2, arg3, 
            "0Xparse failednulsohstxetxeotenq…", 2) == 0
        {
            var_50 = 0;
            
            if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::ha3dd105fff9094a1(arg2, 
                arg3, core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x30, &var_50), 1) == 0
            {
                let mut rax_10: *mut c_void;
                let mut rdx_6: u64;
                rax_10 = std::path::_$LT$impl$u20$core..convert..AsRef$LT$std..path..Path$GT$$u20$for$u20$str$GT$::as_ref::h34cce61f9bef243c(arg2);
                
                if rax_10 != 0
                {
                    return uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(
                        arg1, rax_10, rdx_6);
                }
                
                core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, 0, arg3);
                /* no return */
            }
            
            rbp = 8;
            rbx = 0;
            r12 = 0;
        }
    }
    
    let mut var_40: *mut i8 = arg2;
    let var_38_1: *mut c_void = &arg2[arg3];
    let mut rax_5: i8;
    let mut rdx_1: i32;
    rax_5 = core::str::validations::next_code_point_reverse::h438d37208171f517(&var_40, rbx);
    let mut r13_1: i64 = 1;
    let mut result: *mut i64;
    let mut rbp_1: u64;
    
    if (rax_5 & 1) == 0
    {
        'label_46adbb:
        rbp_1 = arg3;
        'label_46adca:
        let mut rax_6: *mut c_void;
        let mut rdx_4: i64;
        rax_6 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(r12, rbp_1, arg2, arg3);
        
        if rax_6 == 0
        {
            core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, r12, rbp_1);
            /* no return */
        }
        
        core::num::_$LT$impl$u20$u64$GT$::from_ascii_radix::h3a465e09cf2726d1(&var_50, rax_6, 
            rdx_4, rbp);
        
        if var_50 == 0
        {
            let var_48: i64;
            let mut rbx_2: *mut i64;
            
            if (r13_1 * var_48) >> 0x40 == {0}
            {
                rbx_2 = arg1;
                rbx_2[1] = r13_1 * var_48;
                result = 4;
            }
            else
            {
                rbx_2 = arg1;
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h96e753ece9c12536(&rbx_2[1], arg2, arg3);
                result = 2;
            }
            
            *rbx_2 = result;
        }
        else
        {
            let mut var_61: i8 = *var_50[1];
            result = _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h3be401356d22601e(&arg1[1], &var_61);
            *arg1 = 1;
        }
    }
    else
    {
        let rdx_2: u64 = rdx_1 - 0x42;
        
        if rdx_2 > 0x2b
        {
            goto 'label_46adbb;
        }
        
        let mut cond:1_1: bool;
        
        match rdx_2
        {
            0 =>
            {
                rbp_1 = arg3;
                
                if rbx != 0
                {
                    goto 'label_46adca;
                }
                
                let mut rax_11: i8;
                let mut rdx_7: i32;
                rax_11 = core::str::validations::next_code_point_reverse::h438d37208171f517(
                    &var_40, rbx);
                
                if (rax_11 & 1) == 0
                {
                    result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h96e753ece9c12536(&arg1[1], arg2, arg3);
                    *arg1 = 1;
                }
                else
                {
                    let rdx_8: u64 = rdx_7 - 0x45;
                    
                    if rdx_8 > 0x28
                    {
                        result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h96e753ece9c12536(&arg1[1], arg2, arg3);
                        *arg1 = 1;
                    }
                    else
                    {
                        rbp_1 = arg3 - 2;
                        
                        match rdx_8
                        {
                            0 =>
                            {
                                r13_1 = 0xde0b6b3a7640000;
                                goto 'label_46adca;
                            }
                            1 | 3 | 4 | 5 | 7 | 9 | 0xa | 0xc | 0xd | 0xe | 0x10 | 0x11 | 0x12 |
                                0x13 | 0x14 | 0x15 | 0x16 | 0x17 | 0x18 | 0x19 | 0x1a | 0x1b | 0x1c
                                | 0x1d | 0x1e | 0x1f | 0x20 | 0x21 | 0x22 | 0x23 | 0x24 | 0x25 |
                                0x27 =>
                            {
                                result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h96e753ece9c12536(&arg1[1], arg2, arg3);
                                *arg1 = 1;
                            }
                            2 =>
                            {
                                r13_1 = 0x3b9aca00;
                                goto 'label_46adca;
                            }
                            6 | 0x26 =>
                            {
                                r13_1 = 0x3e8;
                                goto 'label_46adca;
                            }
                            8 | 0x28 =>
                            {
                                r13_1 = 0xf4240;
                                goto 'label_46adca;
                            }
                            0xb =>
                            {
                                r13_1 = 0x38d7ea4c68000;
                                goto 'label_46adca;
                            }
                            0xf =>
                            {
                                r13_1 = 0xe8d4a51000;
                                goto 'label_46adca;
                            }
                        }
                    }
                }
            }
            1 | 2 | 4 | 6 | 7 | 8 | 0xa | 0xc | 0xd | 0xf | 0x10 | 0x11 | 0x13 | 0x14 | 0x15 | 0x16
                | 0x17 | 0x18 | 0x19 | 0x1a | 0x1b | 0x1c | 0x1d | 0x1e | 0x1f | 0x21 | 0x22 | 0x23
                | 0x24 | 0x25 | 0x26 | 0x27 | 0x28 | 0x2a =>
            {
                goto 'label_46adbb;
            }
            3 =>
            {
                cond:1_1 = rbx != 0;
                r13_1 = 0x1000000000000000;
                'label_46af0d:
                
                if cond:1_1
                {
                    r13_1 = 1;
                }
                
                rbx ^= 1;
                rbp_1 = arg3 - rbx;
                goto 'label_46adca;
            }
            5 =>
            {
                rbp_1 = arg3 - 1;
                r13_1 = 0x40000000;
                goto 'label_46adca;
            }
            9 | 0x29 =>
            {
                rbp_1 = arg3 - 1;
                r13_1 = 0x400;
                goto 'label_46adca;
            }
            0xb | 0x2b =>
            {
                rbp_1 = arg3 - 1;
                r13_1 = 0x100000;
                goto 'label_46adca;
            }
            0xe =>
            {
                rbp_1 = arg3 - 1;
                r13_1 = 0x4000000000000;
                goto 'label_46adca;
            }
            0x12 =>
            {
                rbp_1 = arg3 - 1;
                r13_1 = 0x10000000000;
                goto 'label_46adca;
            }
            0x20 =>
            {
                cond:1_1 = rbx != 0;
                r13_1 = 0x200;
                goto 'label_46af0d;
            }
        }
    }
    result
}
