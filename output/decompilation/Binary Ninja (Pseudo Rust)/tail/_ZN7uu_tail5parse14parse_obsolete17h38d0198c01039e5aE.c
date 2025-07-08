
  fn uu_tail::parse::parse_obsolete::h38d0198c01039e5a(arg1: *mut i8, arg2: *mut c_void) -> *mut i8

{
    let mut var_58: *mut c_void;
    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_58, *arg2.byte_offset(8), *arg2.byte_offset(0x10));
    
    if var_58 == 0
    {
        var_58 = 0;
        let var_50: i64;
        let var_48: i64;
        let mut rax_3: *mut i8;
        let mut rdx_2: *mut c_void;
        rax_3 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hdb721c8cd5e22968(core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2d, &var_58), var_50, 
            var_48);
        let mut rbp_1: *mut i8;
        let mut r13_1: *mut c_void;
        
        if rax_3 == 0
        {
            var_58 = 0;
            let mut rax_5: *mut i8;
            let mut rdx_4: *mut c_void;
            rax_5 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hdb721c8cd5e22968(core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2b, &var_58), var_50, 
                var_48);
            
            if rax_5 != 0
            {
                rbp_1 = rax_5;
                r13_1 = rdx_4;
                goto 'label_518cc8;
            }
            
            arg1[0xa] = 3;
        }
        else
        {
            r13_1 = rdx_2;
            rbp_1 = rax_3;
            'label_518cc8:
            let mut rax_6: i64;
            let mut rdx_5: *mut c_void;
            rax_6 = core::str::_$LT$impl$u20$str$GT$::find::h006ca70e4214af13(rbp_1, r13_1);
            let mut r15_2: *mut c_void = rdx_5;
            
            if rax_6 == 0
            {
                r15_2 = r13_1;
            }
            
            let mut var_40_1: *mut i8;
            let mut rax_7: i64;
            
            if r15_2 == 0
            {
                var_40_1 = rax_3;
                rax_7 = 0xa;
                'label_518d44:
                let mut rax_8: *mut c_void;
                let mut rdx_8: *mut c_void;
                rax_8 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(r15_2, rbp_1, r13_1);
                
                if rax_8 == 0
                {
                    core::str::slice_error_fail::h5dbb61534404fe7e(rbp_1, r13_1, r15_2, r13_1);
                    /* no return */
                }
                
                let mut r12_2: *mut c_void = rax_8;
                var_58 = 0;
                let mut rax_10: *mut c_void;
                let mut rdx_10: *mut c_void;
                rax_10 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hdb721c8cd5e22968(core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x6c, &var_58), 
                    r12_2, rdx_8);
                let mut rcx_2: bool;
                let mut rdx_14: i64;
                let mut rbp_2: i32;
                let mut rsi_12: *mut i8;
                let mut r14_3: i8;
                
                if rax_10 == 0
                {
                    var_58 = 0;
                    rbp_2 = 0x63;
                    let mut rax_17: *mut c_void;
                    let mut rdx_12: *mut c_void;
                    rax_17 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hdb721c8cd5e22968(
                        core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x63, &var_58), 
                        r12_2, rdx_8);
                    let mut r13_3: *mut c_void;
                    
                    if rax_17 == 0
                    {
                        var_58 = 0;
                        let mut rax_19: *mut c_void;
                        rax_19 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hdb721c8cd5e22968(
                            core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x62, &var_58), 
                            r12_2, rdx_8);
                        rbp_2 = 0x6c;
                        
                        if rax_19 != 0
                        {
                            rbp_2 = 0x62;
                        }
                        
                        if rax_19 == 0
                        {
                            rdx_12 = rdx_8;
                        }
                        
                        if rax_19 != 0
                        {
                            r12_2 = rax_19;
                        }
                        
                        r13_3 = r12_2;
                    }
                    else
                    {
                        r13_3 = rax_17;
                    }
                    
                    r14_3 = _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hf6fa57beb1c3cfdf(r13_3, rdx_12);
                    var_58 = r13_3;
                    let var_50_2: *mut c_void = rdx_12.byte_offset(r13_3);
                    
                    if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::hf44ef79eb3e0c2a2(core::iter::traits::iterator::Iterator::try_fold::h382008777cf9d733(&var_58))
                        == 0
                    {
                        goto 'label_518e7d;
                    }
                    
                    rsi_12 = var_40_1;
                    
                    if rbp_2 != 0x62
                    {
                        goto 'label_518e9e;
                    }
                    
                    rdx_14 = 0x200;
                    rcx_2 = false;
                    goto 'label_518eae;
                }
                
                r14_3 = _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hf6fa57beb1c3cfdf(rax_10, rdx_10);
                var_58 = rax_10;
                let var_50_1: *mut c_void = rax_10.byte_offset(rdx_10);
                
                if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::hf44ef79eb3e0c2a2(core::iter::traits::iterator::Iterator::try_fold::h382008777cf9d733(&var_58))
                    == 0
                {
                    'label_518e7d:
                    
                    if var_40_1 == 0 || r15_2 == 0
                    {
                        arg1[0xa] = 3;
                    }
                    else
                    {
                        *arg1 = 2;
                        arg1[0xa] = 2;
                    }
                }
                else
                {
                    rbp_2 = 0x6c;
                    rsi_12 = var_40_1;
                    'label_518e9e:
                    rcx_2 = rbp_2 == 0x6c;
                    rdx_14 = 1;
                    'label_518eae:
                    
                    if (rax_7 * rdx_14) >> 0x40 == {0}
                    {
                        *arg1 = rax_7 * rdx_14;
                        arg1[8] = rsi_12 == 0;
                        arg1[9] = rcx_2;
                        arg1[0xa] = r14_3;
                    }
                    else
                    {
                        *arg1 = 1;
                        arg1[0xa] = 2;
                    }
                }
            }
            else
            {
                if r15_2 >= r13_1
                {
                    if r15_2 != r13_1
                    {
                        core::str::slice_error_fail::h5dbb61534404fe7e(rbp_1, r13_1, nullptr, 
                            r15_2);
                        /* no return */
                    }
                }
                else if *rbp_1.byte_offset(r15_2) <= 0xbf
                {
                    core::str::slice_error_fail::h5dbb61534404fe7e(rbp_1, r13_1, nullptr, r15_2);
                    /* no return */
                }
                
                core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u64$GT$::from_str::h29411471c0770b67(&var_58, rbp_1, r15_2);
                
                if var_58 == 0
                {
                    var_40_1 = rax_3;
                    rax_7 = var_50;
                    goto 'label_518d44;
                }
                
                *arg1 = 0;
                arg1[0xa] = 2;
            }
        }
    }
    else
    {
        *arg1 = 3;
        arg1[0xa] = 2;
    }
    
    arg1
}
