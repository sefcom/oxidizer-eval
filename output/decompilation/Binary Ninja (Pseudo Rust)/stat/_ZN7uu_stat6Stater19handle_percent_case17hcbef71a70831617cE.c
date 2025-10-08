
  fn uu_stat::Stater::handle_percent_case::hcbef71a70831617c(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut i64, arg5: i64, arg6: *mut i8, arg7: u64) -> u64

{
    let r12: *mut c_void = *arg4;
    let mut result: u64 = r12.byte_offset(1);
    *arg4 = result;
    
    if result >= arg5
    {
        *arg1 = 3;
        arg1[1] = 0x25;
    }
    else
    {
        if result >= arg3
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(result, arg3);
            /* no return */
        }
        
        if *(arg2 + (r12 << 2) + 4) != 0x25
        {
            let var_10c_1: i16 = 0;
            let mut var_110: i32 = 0;
            uu_stat::Stater::process_flags::hab64942a0ebe541a(arg2, arg3, arg4, arg5, &var_110);
            let mut rbx_2: i64 = *arg4;
            let mut rax: *mut c_void;
            let mut rdx_2: i64;
            rax = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(rbx_2, arg6, arg7);
            
            if rax == 0
            {
                core::str::slice_error_fail::h1a2885084e28d077(arg6, arg7, rbx_2, arg7);
                /* no return */
            }
            
            let mut var_70: i8;
            _$LT$str$u20$as$u20$uu_stat..ScanUtil$GT$::scan_num::ha5b104d34638ed06(&var_70, rax, 
                rdx_2);
            let mut var_f8: *mut c_void;
            let mut var_c0_1: i64;
            let mut var_a8: ();
            let var_a0: i128;
            let mut var_90: i64;
            
            if (var_70 & 1) == 0
            {
                var_c0_1 = 0;
            }
            else
            {
                let var_60: i64;
                rbx_2 += var_60;
                
                if rbx_2 >= arg5
                {
                    'label_475315:
                    let rax_1: i64 = core::cmp::Ord::min::h7daa075e7606d488(rbx_2, arg5 - 1);
                    var_f8 = r12;
                    let var_f0_1: i64 = rax_1;
                    let mut var_e8_1: i8 = 0;
                    let mut rax_2: i64;
                    let mut rdx_4: i64;
                    rax_2 = _$LT$core..ops..range..RangeInclusive$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::he315e8eb3b0334b6(&var_f8, arg2, arg3);
                    core::iter::traits::iterator::Iterator::collect::h90f37a8f28207592(&var_a8, 
                        rax_2);
                    var_90 = 0;
                    let var_88_1: i128 = var_a0;
                    let var_78_1: i8 = 1;
                    let mut var_58: *mut i64 = &var_90;
                    let var_50_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_f8 = &data_5199e0;
                    let var_f0_2: i64 = 2;
                    let var_d8_1: i64 = 0;
                    var_e8_1 = &var_58;
                    let mut var_e0_1: i64 = 1;
                    let mut var_48: i128;
                    core::option::Option$LT$T$GT$::map_or_else::h722d45d5108b1d7d(&var_48, &var_f8);
                    var_e0_1 = 1;
                    var_f8 = var_48;
                    let var_38: i64;
                    var_e8_1 = var_38;
                    arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h173a34a4352a059d(&var_f8);
                    arg1[2] = &data_519a38;
                    *arg1 = 5;
                    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44f04a5137e020d4(
                        &var_a8);
                }
                
                if rbx_2 >= arg3
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(rbx_2, arg3);
                    /* no return */
                }
                
                if *(arg2 + (rbx_2 << 2)) == 0x25
                {
                    goto 'label_475315;
                }
                
                let var_68: i64;
                var_c0_1 = var_68;
            }
            
            result = uu_stat::check_bound::h3dee2e7f7020c454(arg6, arg7, arg5, r12, rbx_2);
            let mut rcx_3: *mut i64;
            
            if result == 0
            {
                let mut rsi_8: i64 = arg3;
                
                if rbx_2 >= rsi_8
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(rbx_2, rsi_8);
                    /* no return */
                }
                
                let mut var_e8: i8;
                let mut var_b8: u64;
                let mut rdx_10: *mut i64;
                let mut rbp_6: u64;
                let mut rdi_13: i64;
                
                if *(arg2 + (rbx_2 << 2)) != 0x2e
                {
                    rdi_13 = arg2;
                    rbp_6 = 0;
                    rcx_3 = arg1;
                    rdx_10 = arg4;
                }
                else
                {
                    rbx_2 += 1;
                    result = uu_stat::check_bound::h3dee2e7f7020c454(arg6, arg7, arg5, r12, rbx_2);
                    
                    if result != 0
                    {
                        goto 'label_475452;
                    }
                    
                    let mut rax_5: *mut c_void;
                    let mut rdx_9: i64;
                    rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(rbx_2, arg6, arg7);
                    
                    if rax_5 == 0
                    {
                        core::str::slice_error_fail::h1a2885084e28d077(arg6, arg7, rbx_2, arg7);
                        /* no return */
                    }
                    
                    _$LT$str$u20$as$u20$uu_stat..ScanUtil$GT$::scan_num::ha94ea7e66c723cbc(&var_f8, 
                        rax_5, rdx_9);
                    
                    if (var_f8 & 1) == 0
                    {
                        rbp_6 = 1;
                    }
                    else
                    {
                        let var_f0: i32;
                        let rax_6: u64 = var_f0;
                        var_b8 = rax_6;
                        rbp_6 = !rax_6 >> 0x1e & 0xfffffffe;
                        rbx_2 += var_e8;
                    }
                    
                    result = uu_stat::check_bound::h3dee2e7f7020c454(arg6, arg7, arg5, r12, rbx_2);
                    rcx_3 = arg1;
                    rsi_8 = arg3;
                    rdx_10 = arg4;
                    rdi_13 = arg2;
                    
                    if result != 0
                    {
                        goto 'label_475457;
                    }
                }
                
                *rdx_10 = rbx_2;
                result = rbx_2 + 1 < arg5;
                
                if (result & rbx_2 + 1 < rsi_8) != 0
                {
                    let rax_8: i32 = *(rdi_13 + (rbx_2 << 2) + 4);
                    var_70 = rax_8;
                    
                    if rbx_2 >= rsi_8
                    {
                        core::panicking::panic_bounds_check::h025cadc56a971af7(rbx_2, rsi_8);
                        /* no return */
                    }
                    
                    if (*(rdi_13 + (rbx_2 << 2)) | 4) == 0x4c && (rax_8 == 0x72 || rax_8 == 0x64)
                    {
                        var_90 = rdi_13 + (rbx_2 << 2);
                        let mut var_88: i128;
                        var_88 =
                            _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
                        *var_88[8] = &var_70;
                        let mut var_78: i8;
                        var_78 =
                            _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
                        var_f8 = &data_41cfd0;
                        let var_f0_3: i64 = 2;
                        let var_d8_2: i64 = 0;
                        var_e8 = &var_90;
                        let var_e0_2: i64 = 2;
                        core::option::Option$LT$T$GT$::map_or_else::h722d45d5108b1d7d(&var_a8, 
                            &var_f8);
                        *rdx_10 = rbx_2 + 1;
                        let rax_10: *mut c_void = var_a0;
                        var_f8 = rax_10;
                        let var_f0_4: *mut c_void = *var_a0[8].byte_offset(rax_10);
                        let mut rax_11: i8;
                        let mut rdx_11: i32;
                        rax_11 = core::str::validations::next_code_point::h60eba128fb062bb1(
                            &var_f8, &var_a8);
                        
                        if (rax_11 & 1) == 0 || rdx_11 == 0x110000
                        {
                            core::option::unwrap_failed::h893f57cb7db71cb7();
                            /* no return */
                        }
                        
                        arg1[4] = var_10c_1;
                        *arg1.byte_offset(0x1c) = var_110;
                        *arg1 = rbp_6;
                        arg1[1] = var_b8;
                        arg1[2] = var_c0_1;
                        arg1[3] = rdx_11;
                        return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44f04a5137e020d4(&var_a8);
                    }
                }
                
                if rbx_2 >= rsi_8
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(rbx_2, rsi_8);
                    /* no return */
                }
                
                result = *(rdi_13 + (rbx_2 << 2));
                rcx_3[4] = var_10c_1;
                *rcx_3.byte_offset(0x1c) = var_110;
                *rcx_3 = rbp_6;
                rcx_3[1] = var_b8;
                rcx_3[2] = var_c0_1;
                rcx_3[3] = result;
            }
            else
            {
                'label_475452:
                rcx_3 = arg1;
                'label_475457:
                rcx_3[1] = result;
                rcx_3[2] = &data_519a38;
                *rcx_3 = 5;
            }
        }
        else
        {
            *arg4 = r12.byte_offset(2);
            *arg1 = 3;
            arg1[1] = 0x25;
        }
    }
    
    result
}
