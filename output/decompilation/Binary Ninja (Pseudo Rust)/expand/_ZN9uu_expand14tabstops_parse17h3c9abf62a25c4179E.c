
  fn uu_expand::tabstops_parse::h3c9abf62a25c4179(arg1: *mut i64, arg2: i64, arg3: i64) -> u64

{
    let mut rax: i64;
    let mut result_1: i64;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h3f8868b9dde7cd08(arg2, arg3);
    let mut result: u64;
    
    if result_1 == 0
    {
        result = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 8);
        
        if result == 0
        {
            alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
            /* no return */
        }
        
        *result = 8;
        arg1[1] = 0;
        arg1[2] = 1;
        arg1[3] = result;
        arg1[4] = 1;
    }
    else
    {
        let mut var_b0: i64 = 0;
        let var_a8_1: i64 = 8;
        let mut var_a0_1: i64 = 0;
        let mut var_60: ();
        _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h6a95b1eba25f4921(&var_60, rax, result_1);
        let mut var_70: i64 = 0;
        let var_38_1: i16 = 1;
        let mut i: *mut i8;
        let mut rdx: i64;
        i = core::str::iter::SplitInternal$LT$P$GT$::next::hd5aa6ed9cb5d9e11(&var_70);
        let mut r12_1: i8;
        
        if i == 0
        {
            'label_45c40e:
            let rax_7: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 8);
            
            if rax_7 == 0
            {
                alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                /* no return */
            }
            
            *rax_7 = 8;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::hc30dd728aaf6d8a0(var_b0, 
                var_a8_1);
            var_b0 = 1;
            let var_a8_2: u64 = rax_7;
            var_a0_1 = 1;
            r12_1 = 0;
        }
        else
        {
            let mut r15_1: bool = false;
            r12_1 = 0;
            
            do
            {
                if rdx != 0
                {
                    loop
                    {
                        let rsi_2: u32 = *i;
                        let mut rcx_1: i8 = 2;
                        
                        if rsi_2 != 0x2b
                        {
                            if rsi_2 != 0x2f
                            {
                                let mut var_c8: i32;
                                core::str::converts::from_utf8::h8a6dc80f786921e0(&var_c8, i, rdx);
                                let mut rax_1: *mut i8;
                                let mut rdx_1: u64;
                                rax_1 =
                                    core::result::Result$LT$T$C$E$GT$::unwrap::h8151a0d689da0fc1(
                                    &var_c8);
                                let mut var_80: i8;
                                core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_80, rax_1, rdx_1);
                                let var_b8: i64;
                                
                                if var_80 != 1
                                {
                                    let var_78: i64;
                                    
                                    if var_78 == 0
                                    {
                                        *arg1 = -0x7ffffffffffffffd;
                                        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::hc30dd728aaf6d8a0(var_b0, var_a8_1);
                                    }
                                    
                                    let rax_4: *mut c_void = (var_a0_1 << 3) + var_a8_1;
                                    
                                    if (rax_4 == 8 | var_a0_1 == 0) == 0
                                        && *rax_4.byte_offset(-8) >= var_78
                                    {
                                        *arg1 = -0x7ffffffffffffffb;
                                        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::hc30dd728aaf6d8a0(var_b0, var_a8_1);
                                    }
                                    
                                    if (r15_1 & 1) != 0
                                    {
                                        if r12_1 != 1
                                        {
                                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h79dbf9cf7e5723fa(&var_c8, "+src/uu/expand/src/expand.rs, --…", 1);
                                        }
                                        else
                                        {
                                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h79dbf9cf7e5723fa(&var_c8, "/+src/uu/expand/src/expand.rs, -…", 1);
                                        }
                                        
                                        let zmm0_3: i128 = var_c8;
                                        *arg1 = -0x7ffffffffffffffe;
                                        *arg1.byte_offset(8) = zmm0_3;
                                        arg1[3] = var_b8;
                                        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::hc30dd728aaf6d8a0(var_b0, var_a8_1);
                                    }
                                    
                                    alloc::vec::Vec$LT$T$C$A$GT$::push::h894fc2c36cd49a87(&var_b0, 
                                        var_78);
                                    r15_1 = r12_1 != 0;
                                    break;
                                }
                                
                                let var_7f: i8;
                                
                                if var_7f == 2
                                {
                                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h79dbf9cf7e5723fa(&var_c8, rax_1, rdx_1);
                                    arg1[3] = var_b8;
                                    *arg1.byte_offset(8) = var_c8;
                                    *arg1 = -0x7ffffffffffffffc;
                                    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::hc30dd728aaf6d8a0(var_b0, var_a8_1);
                                }
                                
                                let mut rax_11: *mut i8;
                                let mut rdx_4: u64;
                                rax_11 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h181a115f6b6d6f52(rax_1, rdx_1);
                                var_c8 = 0;
                                let rax_13: i8 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::ha15791ca10e43217(rax_11, rdx_4, 
                                    core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2f, 
                                        &var_c8));
                                let mut rax_15: i8;
                                
                                if rax_13 == 0
                                {
                                    var_c8 = 0;
                                    rax_15 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::ha15791ca10e43217(rax_11, rdx_4, 
                                        core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(
                                            0x2b, &var_c8));
                                }
                                
                                if rax_13 == 0 && rax_15 == 0
                                {
                                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h79dbf9cf7e5723fa(&var_c8, rax_11, rdx_4);
                                    arg1[3] = var_b8;
                                    *arg1.byte_offset(8) = var_c8;
                                    *arg1 = -0x8000000000000000;
                                    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::hc30dd728aaf6d8a0(var_b0, var_a8_1);
                                }
                                
                                let rax_16: i64 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_11, rdx_4);
                                
                                if rax_16 == 0
                                {
                                    core::str::slice_error_fail::h1a2885084e28d077(rax_11, rdx_4, 
                                        0, 1);
                                    /* no return */
                                }
                                
                                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h79dbf9cf7e5723fa(&var_c8, rax_16, 1);
                                let r13_2: i64 = var_c8;
                                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h79dbf9cf7e5723fa(&var_c8, rax_11, rdx_4);
                                arg1[5] = var_b8;
                                *arg1.byte_offset(0x18) = var_c8;
                                *arg1 = r13_2;
                                let var_c0: i64;
                                arg1[1] = var_c0;
                                arg1[2] = var_b8;
                                return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::hc30dd728aaf6d8a0(var_b0, var_a8_1);
                            }
                            
                            rcx_1 = 1;
                        }
                        
                        i = &i[1];
                        r12_1 = rcx_1;
                        let temp0_1: i64 = rdx;
                        rdx -= 1;
                        
                        if temp0_1 == 1
                        {
                            r12_1 = rcx_1;
                            break;
                        }
                    }
                }
                
                i = core::str::iter::SplitInternal$LT$P$GT$::next::hd5aa6ed9cb5d9e11(&var_70);
            } while i != 0;
            
            if var_a0_1 == 1
            {
                r12_1 = 0;
            }
            else if var_a0_1 == 0
            {
                goto 'label_45c40e;
            }
        }
        
        *var_70[7] = var_b0;
        arg1[1] = r12_1;
        result = result_1;
        *arg1.byte_offset(9) = var_70;
        arg1[3] = result;
        arg1[4] = var_a0_1;
    }
    
    *arg1 = -0x7ffffffffffffffa;
    result
}
