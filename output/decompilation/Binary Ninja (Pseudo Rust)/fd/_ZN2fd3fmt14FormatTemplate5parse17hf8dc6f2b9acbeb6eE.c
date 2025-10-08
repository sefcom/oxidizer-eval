
  fn fd::fmt::FormatTemplate::parse::hf8dc6f2b9acbeb6e(arg1: *mut i64, arg2: *mut c_void, arg3: *mut c_void) -> i64

{
    let mut r12: *mut c_void = arg3;
    let mut r13: *mut c_void = arg2;
    let mut var_a0: i64 = 0;
    let var_98: i64 = 8;
    let result: i64 = 0;
    let mut var_c0: i64 = 0;
    let var_b8: i64 = 1;
    let mut var_b0: i64 = 0;
    let rax: *mut c_void =
        std::sync::once_lock::OnceLock$LT$T$GT$::get_or_try_init::h77d73ffcdcd8c639();
    
    loop
    {
        let mut var_78: i32;
        aho_corasick::ahocorasick::AhoCorasick::try_find::h7a5fd104737965dc(&var_78, rax, r13);
        let mut var_50: i32;
        core::result::Result$LT$T$C$E$GT$::expect::h853440dbf80ed5f0(&var_50, &var_78);
        
        if var_50 != 1
        {
            break;
        }
        
        let var_48: *mut c_void;
        let mut r15_1: *mut c_void = var_48;
        let var_38: i32;
        let mut rax_1: *mut c_void;
        let mut rdx: *mut c_void;
        let var_40: *mut c_void;
        
        if var_38 >= 2
        {
            let mut rax_4: *mut c_void;
            let mut rdx_7: i64;
            rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(var_40, r13, r12);
            
            if rax_4 == 0
            {
                core::str::slice_error_fail::h1a2885084e28d077(r13, r12, var_40, r12);
                /* no return */
            }
            
            var_78 = 0;
            let mut rax_5: *mut i8;
            let mut rdx_8: u64;
            rax_5 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x7d, &var_78);
            r12 = r12;
            
            if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf20ef8fd404ea81d(rax_4, 
                rdx_7, rax_5, rdx_8) == 0
            {
                let mut rax_8: i64;
                let mut rdx_15: i64;
                rax_8 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(r15_1, r13, r12);
                
                if rax_8 == 0
                {
                    goto 'label_5f5bd6;
                }
                
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hf1e3b0a0715a4abd(&var_c0, rax_8, rdx_15 + rax_8);
                
                if var_b0 != 0
                {
                    let var_68_1: i64 = var_b0;
                    var_78 = var_c0;
                    var_c0 = 0;
                    let var_b8_1: i64 = 1;
                    var_b0 = 0;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hfae91a531911040a(&var_a0, &var_78);
                }
                
                fd::fmt::token_from_pattern_id::h335ee60225c838fa(&var_78, var_38);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hfae91a531911040a(&var_a0, &var_78);
                rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(var_40, r13, r12);
                
                if rax_1 == 0
                {
                    core::str::slice_error_fail::h1a2885084e28d077(r13, r12, var_40, r12);
                    /* no return */
                }
            }
            else
            {
                r15_1 = var_40;
                let mut rax_7: i64;
                let mut rdx_11: i64;
                rax_7 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(r15_1, r13, r12);
                
                if rax_7 == 0
                {
                    goto 'label_5f5bd6;
                }
                
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hf1e3b0a0715a4abd(&var_c0, rax_7, rdx_11 + rax_7);
                rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(var_40.byte_offset(1), r13, r12);
                
                if rax_1 == 0
                {
                    core::str::slice_error_fail::h1a2885084e28d077(r13, r12, var_40.byte_offset(1), 
                        r12);
                    /* no return */
                }
            }
        }
        else
        {
            r15_1 += 1;
            let mut rax_3: i64;
            let mut rdx_3: i64;
            rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(r15_1, r13, r12);
            
            if rax_3 == 0
            {
                'label_5f5bd6:
                core::str::slice_error_fail::h1a2885084e28d077(r13, r12, nullptr, r15_1);
                /* no return */
            }
            
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hf1e3b0a0715a4abd(&var_c0, rax_3, rdx_3 + rax_3);
            rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(var_40, r13, r12);
            
            if rax_1 == 0
            {
                core::str::slice_error_fail::h1a2885084e28d077(r13, r12, var_40, r12);
                /* no return */
            }
        }
        r12 = rdx;
        r13 = rax_1;
    }
    
    if r12 != 0
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hf1e3b0a0715a4abd(&var_c0, r13, r12.byte_offset(r13));
    }
    
    if result == 0
    {
        arg1[3] = var_b0;
        *arg1.byte_offset(8) = var_c0;
        *arg1 = 1;
        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$fd..fmt..Token$GT$$GT$::h54d3355a0c3cb965(&var_a0);
    }
    
    if var_b0 == 0
    {
        arg1[3] = result;
        *arg1.byte_offset(8) = var_a0;
        *arg1 = 0;
        return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h6194a405d9e61c9b(&var_c0);
    }
    
    alloc::vec::Vec$LT$T$C$A$GT$::push::hfae91a531911040a(&var_a0, &var_c0);
    arg1[3] = result;
    *arg1.byte_offset(8) = var_a0;
    *arg1 = 0;
    result
}
