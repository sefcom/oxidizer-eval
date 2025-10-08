
  fn uu_tail::parse::parse_obsolete::h9e4918f448acbdfb(arg1: *mut *mut i64) -> *mut i64

{
    let mut result_1: *mut i64;
    let result_2: *mut i64 = result_1;
    let mut var_60: i32;
    let rdx: i64;
    let rsi: *mut i8;
    let mut result: *mut i64 = core::str::converts::from_utf8::h8a6dc80f786921e0(&var_60, rsi, rdx);
    
    if var_60 != 1
    {
        var_60 = 0;
        let mut rax: *mut i8;
        let mut rdx_1: u64;
        rax = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2d, &var_60);
        let var_58: i64;
        let var_50: i64;
        let mut result_3: *mut i64;
        let mut rdx_3: i64;
        result_3 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(rax, rdx_1, var_58, var_50);
        let mut r13_1: i64;
        
        if result_3 == 0
        {
            var_60 = 0;
            let mut rax_1: *mut i8;
            let mut rdx_4: u64;
            rax_1 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2b, &var_60);
            let mut rdx_6: i64;
            result = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(rax_1, rdx_4, var_58, var_50);
            
            if result != 0
            {
                result_1 = result;
                r13_1 = rdx_6;
                goto 'label_4a5d9c;
            }
            
            result_1 = 3;
        }
        else
        {
            r13_1 = rdx_3;
            result_1 = result_3;
            'label_4a5d9c:
            let mut rax_2: i8;
            let mut rdx_7: i64;
            rax_2 = core::str::_$LT$impl$u20$str$GT$::find::h6d420cc14dc8ff1c(result_1, r13_1);
            let mut r12_1: i64 = rdx_7;
            
            if (rax_2 & 1) == 0
            {
                r12_1 = r13_1;
            }
            
            let mut rax_3: i64;
            let mut rdx_9: i64;
            rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(r12_1, result_1, r13_1);
            
            if rax_3 == 0
            {
                core::str::slice_error_fail::h1a2885084e28d077(result_1, r13_1, 0, r12_1);
                /* no return */
            }
            
            let mut var_48_1: i64;
            let mut rax_5: i64;
            
            if rdx_9 == 0
            {
                var_48_1 = rdx_9;
                rax_5 = 0xa;
                'label_4a5e20:
                let mut rax_6: *mut c_void;
                let mut rdx_13: *mut c_void;
                rax_6 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r12_1, result_1, r13_1);
                
                if rax_6 == 0
                {
                    core::str::slice_error_fail::h1a2885084e28d077(result_1, r13_1, r12_1, r13_1);
                    /* no return */
                }
                
                var_60 = 0;
                let mut rax_7: *mut i8;
                let mut rdx_14: u64;
                rax_7 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x6c, &var_60);
                let mut rax_8: *mut i8;
                let mut rdx_16: *mut c_void;
                rax_8 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(rax_7, rdx_14, rax_6, rdx_13);
                let mut rax_11: *mut c_void;
                let mut rcx_4: i8;
                
                if rax_8 == 0
                {
                    var_60 = 0;
                    let mut rax_14: *mut i8;
                    let mut rdx_17: u64;
                    rax_14 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x63, &var_60);
                    let mut rax_15: *mut i8;
                    let mut rdx_19: *mut c_void;
                    rax_15 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(rax_14, rdx_17, rax_6, rdx_13);
                    
                    if rax_15 == 0
                    {
                        var_60 = 0;
                        let mut rax_21: *mut i8;
                        let mut rdx_20: u64;
                        rax_21 =
                            core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x62, &var_60);
                        let mut rax_22: *mut i8;
                        let mut rdx_22: *mut c_void;
                        rax_22 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(rax_21, rdx_20, rax_6, rdx_13);
                        
                        if rax_22 == 0
                        {
                            result_1 = _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(rax_6, rdx_13);
                            rax_11 = rax_6.byte_offset(rdx_13);
                            var_60 = rax_6;
                            goto 'label_4a5e7f;
                        }
                        
                        result_1 = _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(rax_22, rdx_22);
                        var_60 = rax_22;
                        let var_58_3: *mut c_void = rax_22.byte_offset(rdx_22);
                        result = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h73b4defe78430bf3(
                            core::iter::traits::iterator::Iterator::try_fold::hf62db1ed5c254e75(
                            &var_60));
                        
                        if result == 0
                        {
                            goto 'label_4a5fd8;
                        }
                        
                        rcx_4 = 0;
                        result = rax_5 * 0x200;
                        
                        if (rax_5 * 0x200) >> 0x40 == {0}
                        {
                            goto 'label_4a5fcc;
                        }
                        
                        *arg1 = 1;
                        result_1 = 2;
                    }
                    else
                    {
                        result_1 = _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(rax_15, rdx_19);
                        var_60 = rax_15;
                        let var_58_2: *mut c_void = rax_15.byte_offset(rdx_19);
                        result = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h73b4defe78430bf3(
                            core::iter::traits::iterator::Iterator::try_fold::hf62db1ed5c254e75(
                            &var_60));
                        
                        if result == 0
                        {
                            'label_4a5fd8:
                            result_1 = 3;
                            
                            if result_3 != 0 && var_48_1 != 0
                            {
                                *arg1 = 2;
                                result_1 = 2;
                            }
                        }
                        else
                        {
                            rcx_4 = 0;
                            result = rax_5 * 1;
                            
                            if (rax_5 * 1) >> 0x40 == {0}
                            {
                                'label_4a5fcc:
                                *arg1 = result;
                                arg1[1] = result_3 == 0;
                                *arg1.byte_offset(9) = rcx_4;
                            }
                            else
                            {
                                *arg1 = 1;
                                result_1 = 2;
                            }
                        }
                    }
                }
                else
                {
                    result_1 = _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(rax_8, rdx_16);
                    rax_11 = rax_8.byte_offset(rdx_16);
                    var_60 = rax_8;
                    'label_4a5e7f:
                    let var_58_1: *mut c_void = rax_11;
                    result = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h73b4defe78430bf3(core::iter::traits::iterator::Iterator::try_fold::hf62db1ed5c254e75(
                        &var_60));
                    
                    if result == 0
                    {
                        goto 'label_4a5fd8;
                    }
                    
                    rcx_4 = 1;
                    result = rax_5 * 1;
                    
                    if (rax_5 * 1) >> 0x40 == {0}
                    {
                        goto 'label_4a5fcc;
                    }
                    
                    *arg1 = 1;
                    result_1 = 2;
                }
            }
            else
            {
                let mut rax_4: *mut i8;
                let mut rdx_11: i64;
                rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(r12_1, result_1, r13_1);
                
                if rax_4 == 0
                {
                    core::str::slice_error_fail::h1a2885084e28d077(result_1, r13_1, 0, r12_1);
                    /* no return */
                }
                
                result = core::num::_$LT$impl$u20$u64$GT$::from_ascii_radix::h3a465e09cf2726d1(
                    &var_60, rax_4, rdx_11);
                
                if var_60 == 0
                {
                    var_48_1 = rdx_9;
                    rax_5 = var_58;
                    goto 'label_4a5e20;
                }
                
                *arg1 = nullptr;
                result_1 = 2;
            }
        }
    }
    else
    {
        *arg1 = 3;
        result_1 = 2;
    }
    
    *arg1.byte_offset(0xa) = result_1;
    result
}
