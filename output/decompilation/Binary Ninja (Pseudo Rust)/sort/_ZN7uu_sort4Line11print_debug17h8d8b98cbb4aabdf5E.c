
  fn uu_sort::Line::print_debug::h8d8b98cbb4aabdf5(arg1: *mut i8, arg2: *mut c_void, arg3: *mut c_void, arg4: i64) -> i64

{
    let mut r14: *mut c_void = arg2;
    let mut var_108: *mut i8 = arg1;
    let mut var_90: ();
    alloc::str::_$LT$impl$u20$str$GT$::replace::hdab5ed66c8794b78(&var_90, arg1, r14);
    let mut var_c0: *mut c_void = &var_90;
    let mut var_b8: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    let mut var_f0: *mut c_void = &data_5ff8f0;
    let var_e8: i64 = 2;
    let var_d0: i64 = 0;
    let mut var_e0: *mut *mut c_void = &var_c0;
    let mut var_d8: i64 = 1;
    let result_1: i64 = std::io::Write::write_fmt::hcac6bdf88f5c01ef(arg4, &var_f0);
    let mut result: i64 = result_1;
    
    if result_1 == 0
    {
        let mut var_70: i64 = 0;
        let var_68_1: *mut *mut c_void = 8;
        let var_60_1: i64 = 0;
        uu_sort::tokenize::hb47c688654b41b2e(var_108, r14, *arg3.byte_offset(0x78), &var_70);
        let rcx_1: *mut c_void = *arg3.byte_offset(8);
        let rax: i64 = *arg3.byte_offset(0x10);
        let mut var_40: *mut c_void = rcx_1;
        let var_38_1: *mut c_void = (rax * 0x38).byte_offset(rcx_1);
        let rax_3: *mut i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1dc45998b69df0a3(&var_40);
        let mut var_a0: *mut *mut c_void;
        let var_88: *mut i8;
        let var_80: *mut c_void;
        
        if rax_3 == 0
        {
            'label_52068e:
            let rax_35: i8 = *arg3.byte_offset(0x98);
            
            if rax_35 == 5 || *arg3.byte_offset(0x83) != 0 || *arg3.byte_offset(0x84) != 0
            {
                goto 'label_52082d;
            }
            
            let mut rax_38: i8;
            
            if *arg3.byte_offset(0x7d) == 0 && rax_35 == 6
            {
                let mut rdi_41: *mut i64 = nullptr;
                
                if rax >= 1
                {
                    rdi_41 = rcx_1.byte_offset((rax - 1) * 0x38);
                }
                
                rax_38 = core::option::Option$LT$T$GT$::map_or::hf8e8f5637707ad45(rdi_41);
            }
            
            if *arg3.byte_offset(0x7d) == 0 && rax_35 == 6 && rax_38 == 0
            {
                goto 'label_52082d;
            }
            
            if r14 == 0
            {
                var_f0 = &data_5ff910;
                let var_e8_6: i64 = 1;
                let var_e0_4: i64 = 8;
                var_d8 = {0};
                let result_6: i64 = std::io::Write::write_fmt::hcac6bdf88f5c01ef(arg4, &var_f0);
                result = result_6;
                
                if result_6 == 0
                {
                    goto 'label_52082d;
                }
            }
            else
            {
                alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&var_c0, 
                    "_ assertion failed: token_buffer…", 1, 
                    unicode_width::str_width::hf245007b39258182(var_88, var_80, 0));
                var_a0 = &var_c0;
                let var_98_3: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_f0 = &data_5ff8f0;
                let var_e8_5: i64 = 2;
                let var_d0_3: i64 = 0;
                let var_e0_3: *mut *mut *mut c_void = &var_a0;
                var_d8 = 1;
                let result_5: i64 = std::io::Write::write_fmt::hcac6bdf88f5c01ef(arg4, &var_f0);
                result = result_5;
                
                if result_5 == 0
                {
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(
                        &var_c0);
                    'label_52082d:
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..ops..range..Range$LT$usize$GT$$GT$$GT$::h2fc80e81fa42ea86(&var_70);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(
                        &var_90);
                    return 0;
                }
                
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&var_c0);
            }
        }
        else
        {
            let mut r13_1: *mut i64 = rax_3;
            let mut rsi_3: *mut i8 = var_108;
            let mut var_f8_1: *mut *mut c_void = &data_5ff980;
            let mut var_100_1: *mut c_void = r14;
            
            loop
            {
                let mut rax_5: *mut c_void;
                let mut rdx_3: *mut c_void;
                rax_5 = uu_sort::FieldSelector::get_range::h94d5816cf09723a2(r13_1, rsi_3, r14, 
                    var_68_1, var_60_1);
                let mut r12_1: *mut c_void = rax_5;
                let mut r14_1: *mut c_void = rdx_3;
                let r15_1: u32 = *r13_1.byte_offset(0x35);
                let mut rbp: *mut c_void;
                let mut rax_41: *mut *mut c_void;
                
                if r15_1 < 2
                {
                    let mut rax_13: *mut c_void;
                    let mut rdx_10: *mut c_void;
                    rax_13 = _$LT$core..ops..range..Range$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha702be9191d1b330(r12_1);
                    rbp = rax_13;
                    let mut rax_14: *mut c_void;
                    let mut rdx_12: i64;
                    rax_14 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(rax_13, rdx_10, var_108, var_100_1);
                    
                    if rax_14 == 0
                    {
                        r12_1 = rdx_10;
                        'labelid_1:
                        var_f8_1 = &data_5ff920;
                    }
                    else
                    {
                        var_b8 = r15_1 == 1;
                        var_c0 = 0x2e00110000;
                        uu_sort::numeric_str_cmp::NumInfo::parse::h2d1625adef450396(&var_f0, 
                            rax_14, rdx_12, &var_c0);
                        let rbx_4: i64 = var_d8;
                        r12_1 += var_e0;
                        r14_1 = core::iter::traits::exact_size::ExactSizeIterator::len::h5069d6744b989186(var_e0, rbx_4).byte_offset(r12_1);
                        
                        if var_e0 != 0
                        {
                            'label_5203a0:
                            let mut rbx_6: *mut c_void;
                            let mut r15_2: *mut i8;
                            
                            if r15_1 != 1
                            {
                                rbx_6 = var_100_1;
                                r15_2 = var_108;
                                'label_52045f:
                                
                                loop
                                {
                                    let mut rax_27: *mut c_void;
                                    let mut rdx_24: i64;
                                    rax_27 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(rbp, r12_1, r15_2, rbx_6);
                                    
                                    if rax_27 == 0
                                    {
                                        rax_41 = &data_5ff968;
                                        goto 'label_520847_1;
                                    }
                                    
                                    if core::str::pattern::Pattern::is_suffix_of::h00ec699f5ef7cba4(
                                        rax_27, rdx_24) == 0
                                    {
                                        break;
                                    }
                                    
                                    r12_1 -= 1;
                                }
                                
                                goto 'label_5204ad;
                            }
                            
                            r15_2 = var_108;
                            rbx_6 = var_100_1;
                            let mut rax_20: *mut c_void;
                            let mut rdx_18: i64;
                            rax_20 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(r14_1, rdx_10, r15_2, rbx_6);
                            
                            if rax_20 != 0
                            {
                                r14_1 +=
                                    core::str::pattern::Pattern::is_prefix_of::h07a07aaeb752853c(
                                    rax_20, rdx_18);
                                goto 'label_52045f;
                            }
                            
                            rbp = r14_1;
                            r12_1 = rdx_10;
                            'labelid_1:
                            var_f8_1 = &data_5ff950;
                        }
                        else
                        {
                            if core::cmp::impls::_$LT$impl$u20$core..cmp..PartialEq$u20$for$u20$usize$GT$::eq::h37bad34467ea7e13(rbx_4) == 0
                            {
                                goto 'label_5203a0;
                            }
                            
                            let mut rax_17: *mut c_void;
                            let mut rdx_13: *mut c_void;
                            rax_17 = _$LT$core..ops..range..Range$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha702be9191d1b330(r12_1);
                            rbp = rax_17;
                            let mut rax_18: *mut c_void;
                            let mut rdx_15: i64;
                            rax_18 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(rax_17, rdx_13, var_108, var_100_1);
                            
                            if rax_18 != 0
                            {
                                let mut rax_19: i64;
                                let mut rdx_16: i64;
                                rax_19 = core::str::_$LT$impl$u20$str$GT$::find::hb9662878ed5c0bb4(
                                    rax_18, rdx_15);
                                
                                if rax_19 == 0
                                {
                                    rdx_16 = rax_19;
                                }
                                
                                r12_1 += rdx_16;
                                r14_1 += rdx_16;
                                goto 'label_5204ad;
                            }
                            
                            r12_1 = rdx_13;
                            'labelid_1:
                            var_f8_1 = &data_5ff938;
                        }
                    }
                }
                else
                {
                    let mut r14_4: i64;
                    
                    if r15_1 == 2
                    {
                        let mut rax_23: *mut c_void;
                        let mut rdx_19: *mut c_void;
                        rax_23 = _$LT$core..ops..range..Range$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha702be9191d1b330(r12_1);
                        rbp = rax_23;
                        let mut rax_24: *mut c_void;
                        let mut rdx_21: *mut c_void;
                        rax_24 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(rax_23, rdx_19, var_108, var_100_1);
                        
                        if rax_24 == 0
                        {
                            r12_1 = rdx_19;
                        }
                        else
                        {
                            let mut rax_25: *mut c_void;
                            let mut rdx_22: i64;
                            rax_25 = uu_sort::get_leading_gen::h381fabafeef8de83(rax_24, rdx_21);
                            r14_4 = core::iter::traits::exact_size::ExactSizeIterator::len::h5069d6744b989186(rax_25, rdx_22);
                            r12_1 += rax_25;
                            'label_5204a2:
                            r14_1 = r14_4 + r12_1;
                            'label_5204ad:
                            
                            if r12_1 == 0
                            {
                                'label_5204f5:
                                alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(
                                    &var_c0, " assertion failed: token_buffer.…", 1, 
                                    unicode_width::str_width::hf245007b39258182(var_88, r12_1, 0));
                                var_a0 = &var_c0;
                                let var_98_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                var_f0 = &data_424b80;
                                let var_e8_2: i64 = 1;
                                let var_d0_1: i64 = 0;
                                let var_e0_2: *mut *mut *mut c_void = &var_a0;
                                var_d8 = 1;
                                let result_2: i64 =
                                    std::io::Write::write_fmt::hcac6bdf88f5c01ef(arg4, &var_f0);
                                result = result_2;
                                
                                if result_2 != 0
                                {
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&var_c0);
                                    break;
                                }
                                
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&var_c0);
                                
                                if r12_1 >= r14_1
                                {
                                    var_f0 = &data_5ff910;
                                    let var_e8_4: i64 = 1;
                                    var_e0 = 8;
                                    var_d8 = {0};
                                    let result_4: i64 =
                                        std::io::Write::write_fmt::hcac6bdf88f5c01ef(arg4, &var_f0);
                                    result = result_4;
                                    
                                    if result_4 != 0
                                    {
                                        break;
                                    }
                                    
                                    'label_5201a8:
                                    let rax_4: *mut i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1dc45998b69df0a3(&var_40);
                                    r13_1 = rax_4;
                                    r14 = var_100_1;
                                    rsi_3 = var_108;
                                    
                                    if rax_4 == 0
                                    {
                                        goto 'label_52068e;
                                    }
                                    
                                    continue;
                                }
                                else
                                {
                                    let mut rax_33: *mut c_void;
                                    let mut rdx_28: i64;
                                    rax_33 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(r12_1, r14_1, var_88, var_80);
                                    
                                    if rax_33 != 0
                                    {
                                        alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&var_c0, "_ assertion failed: token_buffer…", 1, 
                                            unicode_width::str_width::hf245007b39258182(rax_33, 
                                                rdx_28, 0));
                                        var_a0 = &var_c0;
                                        let var_98_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                        var_f0 = &data_5ff8f0;
                                        let var_e8_3: i64 = 2;
                                        let var_d0_2: i64 = 0;
                                        var_e0 = &var_a0;
                                        var_d8 = 1;
                                        let result_3: i64 =
                                            std::io::Write::write_fmt::hcac6bdf88f5c01ef(arg4, 
                                            &var_f0);
                                        result = result_3;
                                        
                                        if result_3 == 0
                                        {
                                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&var_c0);
                                            goto 'label_5201a8;
                                        }
                                        
                                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&var_c0);
                                        break;
                                    }
                                    
                                    var_108 = var_88;
                                    var_100_1 = var_80;
                                    rbp = r12_1;
                                    r12_1 = r14_1;
                                }
                                
                                'labelid_1:
                                var_f8_1 = &data_5ff9e0;
                            }
                            else
                            {
                                if r12_1 < var_80
                                {
                                    if *var_88.byte_offset(r12_1) > 0xbf
                                    {
                                        goto 'label_5204f5;
                                    }
                                    
                                    goto 'label_520866;
                                }
                                
                                if r12_1 == var_80
                                {
                                    goto 'label_5204f5;
                                }
                                
                                'label_520866:
                                var_108 = var_88;
                                var_100_1 = var_80;
                                rbp = nullptr;
                                'label_520847:
                                var_f8_1 = &data_5ff9c8;
                            }
                        }
                    }
                    else
                    {
                        if r15_1 != 3
                        {
                            goto 'label_5204ad;
                        }
                        
                        let mut rax_6: *mut c_void;
                        let mut rdx_4: *mut c_void;
                        rax_6 = _$LT$core..ops..range..Range$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha702be9191d1b330(r12_1);
                        rbp = rax_6;
                        let mut rax_7: *mut c_void;
                        let mut rdx_6: i64;
                        rax_7 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(rax_6, rdx_4, var_108, var_100_1);
                        
                        if rax_7 != 0
                        {
                            var_f0 = rax_7;
                            let var_e8_1: *mut c_void = rax_7.byte_offset(rdx_6);
                            let var_e0_1: i64 = 0;
                            var_d8 = 0;
                            let rax_8: i8 = uu_sort::month_parse::h15c772d462e6ea25(rax_7);
                            let mut rax_9: i64;
                            let mut rdx_7: i32;
                            rax_9 =
                                core::iter::traits::iterator::Iterator::try_fold::h1deec66163955984(
                                &var_f0, &var_d8);
                            let mut r13_2: i64 = rax_9;
                            let mut rsi_10: i64;
                            
                            if rax_8 == 0
                            {
                                let mut rax_29: i64;
                                let mut rdx_26: i64;
                                rax_29 = core::option::Option$LT$T$GT$::map_or::h821973a7dfd1fe80(
                                    r13_2, rdx_7, rdx_6);
                                r13_2 = rax_29;
                                rsi_10 = rdx_26;
                            }
                            else
                            {
                                if rdx_7 == 0x110000
                                {
                                    core::option::unwrap_failed::h0e11329e76906eaa();
                                    /* no return */
                                }
                                
                                let mut rax_10: i64;
                                let mut rdi_11: i64;
                                rax_10 = core::iter::traits::iterator::Iterator::advance_by::h3b89246444089858(&var_f0);
                                let mut rsi_8: i32 = 0x110000;
                                
                                if rax_10 == 0
                                {
                                    let mut rax_11: i64;
                                    let mut rdx_8: i32;
                                    rax_11 = core::iter::traits::iterator::Iterator::try_fold::h1deec66163955984(&var_f0, &var_d8);
                                    rdi_11 = rax_11;
                                    rsi_8 = rdx_8;
                                }
                                
                                rsi_10 = core::option::Option$LT$T$GT$::map_or::h00da6f409eb162fd(
                                    rdi_11, rsi_8, rdx_6);
                            }
                            
                            r14_4 = core::iter::traits::exact_size::ExactSizeIterator::len::h5069d6744b989186(r13_2, rsi_10);
                            r12_1 += r13_2;
                            goto 'label_5204a2;
                        }
                        
                        r12_1 = rdx_4;
                        rax_41 = &data_5ff998;
                        'label_520847_1:
                        var_f8_1 = rax_41;
                    }
                }
                core::str::slice_error_fail::h5dbb61534404fe7e(var_108, var_100_1, rbp, r12_1);
                /* no return */
            }
        }
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..ops..range..Range$LT$usize$GT$$GT$$GT$::h2fc80e81fa42ea86(&var_70);
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&var_90);
    result
}
