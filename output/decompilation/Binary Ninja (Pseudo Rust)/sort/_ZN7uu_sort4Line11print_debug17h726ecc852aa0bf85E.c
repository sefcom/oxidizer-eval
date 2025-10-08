
  fn uu_sort::Line::print_debug::h726ecc852aa0bf85(arg1: *mut i8, arg2: u64, arg3: *mut c_void, arg4: i64) -> i64

{
    let mut var_60: ();
    alloc::str::_$LT$impl$u20$str$GT$::replace::h0e383c6d9d0dd1ba(&var_60, arg1, arg2);
    let mut var_b8: *mut c_void = &var_60;
    let mut var_b0: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    let mut var_f0: *mut c_void = &data_58ce68;
    let var_e8: i64 = 2;
    let var_d0: i64 = 0;
    let mut var_e0: *mut *mut c_void = &var_b8;
    let mut var_d8: i64 = 1;
    let result_1: i64 = std::io::Write::write_fmt::hdf669c348b2f4091(arg4, &var_f0);
    let mut result: i64 = result_1;
    
    if result_1 == 0
    {
        let mut var_80: i64 = 0;
        let var_78_1: *mut i64 = 8;
        let var_70_1: i64 = 0;
        uu_sort::tokenize::h1a0db68099bd818a(arg1, arg2, *arg3.byte_offset(0x78), &var_80);
        let mut r12_1: *mut i64 = *arg3.byte_offset(8);
        let rcx_1: i64 = *arg3.byte_offset(0x10);
        let rax_1: *mut c_void = (rcx_1 * 0x38).byte_offset(r12_1);
        let mut var_98: *mut *mut c_void;
        let var_58: *mut i8;
        
        if rcx_1 == 0
        {
            'label_4d141e:
            let rax_36: bool = *arg3.byte_offset(0x98);
            
            if rax_36 == 5 || *arg3.byte_offset(0x83) != 0 || *arg3.byte_offset(0x84) != 0
            {
                result = 0;
            }
            else if *arg3.byte_offset(0x7f) != 0 || *arg3.byte_offset(0x7d) == 1
                || *arg3.byte_offset(0x7e) != 0 || rax_36 != 6 || *arg3.byte_offset(0x80) != 0
            {
                'label_4d1463:
                
                if arg2 == 0
                {
                    var_f0 = &data_58ce88;
                    let var_e8_6: i64 = 1;
                    let var_e0_3: i64 = 8;
                    var_d8 = {0};
                    result = std::io::Write::write_fmt::hdf669c348b2f4091(arg4, &var_f0);
                }
                else
                {
                    alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h681278da6988cee9(&var_f0, 
                        "_>assertion failed: token_buffer…", 
                        core::iter::traits::double_ended::DoubleEndedIterator::rfold::h9f59b36201598cee(var_58));
                    let var_a8_3: *mut *mut c_void = var_e0;
                    var_b8 = var_f0;
                    var_98 = &var_b8;
                    let var_90_3: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    var_f0 = &data_58ce68;
                    let var_e8_5: i64 = 2;
                    let var_d0_3: i64 = 0;
                    let var_e0_2: *mut *mut *mut c_void = &var_98;
                    var_d8 = 1;
                    result = std::io::Write::write_fmt::hdf669c348b2f4091(arg4, &var_f0);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8941431298e6659e(
                        &var_b8);
                }
                
                if result == 0
                {
                    result = 0;
                }
            }
            else
            {
                let var_88_2: *mut c_void = rax_1.byte_offset(-0x38);
                let mut rcx_17: *mut c_void;
                rcx_17 = rax_1 == 0x38;
                rcx_17 |= rcx_1 == 0;
                
                if rcx_17 != 0
                {
                    goto 'label_4d1463;
                }
                
                _$LT$uu_sort..KeySettings$u20$as$u20$core..default..Default$GT$::default::h14a8cebf2953677d();
                var_d8 = 1;
                let var_d0_4: i64 = 1;
                let var_c8_1: i8 = 0;
                var_e0 = 2;
                let var_c0_1: i32 = 0;
                let var_bc_1: i16 = 0x600;
                let var_ba_1: i16 = 0;
                
                if _$LT$uu_sort..FieldSelector$u20$as$u20$core..cmp..PartialEq$GT$::eq::ha806145b4361d250(var_88_2, &var_f0) == 0
                {
                    goto 'label_4d1463;
                }
                
                result = 0;
            }
        }
        else
        {
            let mut rax_2: *mut i64 = &r12_1[7];
            
            loop
            {
                let mut rax_3: u64;
                let mut rdx_3: *mut c_void;
                rax_3 = uu_sort::FieldSelector::get_range::h36eed4fe0a7f87ec(r12_1, arg1, arg2, 
                    var_78_1, var_70_1);
                let mut rbp_1: *mut c_void = rax_3;
                let mut rbx_2: *mut c_void = rdx_3;
                let r14_1: u32 = *r12_1.byte_offset(0x35);
                let mut r12_2: *mut i8;
                let mut r14_4: u64;
                let mut r15: *mut c_void;
                
                if r14_1 < 2
                {
                    let mut rax_11: *mut c_void;
                    let mut rdx_10: *mut c_void;
                    rax_11 = _$LT$core..ops..range..Range$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h8c3a2d8349b30d99(rbp_1);
                    r15 = rax_11;
                    let mut rax_12: *mut c_void;
                    let mut rdx_12: i64;
                    rax_12 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_11, rdx_10, arg1, arg2);
                    
                    if rax_12 == 0
                    {
                        r12_2 = arg1;
                        r14_4 = arg2;
                        rbp_1 = rdx_10;
                    }
                    else
                    {
                        var_b0 = r14_1 == 1;
                        var_b8 = 0x2e00110000;
                        uu_sort::numeric_str_cmp::NumInfo::parse::h9568947bf0c3d82d(&var_f0, 
                            rax_12, rdx_12, &var_b8);
                        let r13_2: i64 = var_d8;
                        rbp_1 += var_e0;
                        rbx_2 = core::iter::traits::exact_size::ExactSizeIterator::len::h3f195717e6c4bef7(var_e0, r13_2).byte_offset(rbp_1);
                        
                        if (r13_2 | var_e0) == 0
                        {
                            let mut rax_21: *mut c_void;
                            let mut rdx_19: *mut c_void;
                            rax_21 = _$LT$core..ops..range..Range$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h8c3a2d8349b30d99(rbp_1);
                            r15 = rax_21;
                            r12_2 = arg1;
                            let mut rax_22: *mut c_void;
                            let mut rdx_21: i64;
                            rax_22 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_21, rdx_19, r12_2, arg2);
                            
                            if rax_22 != 0
                            {
                                let mut rax_23: i8;
                                let mut rdx_22: i64;
                                rax_23 = core::str::_$LT$impl$u20$str$GT$::find::h4840dd49033fba86(
                                    rax_22, rdx_21);
                                
                                if (rax_23 & 1) == 0
                                {
                                    rdx_22 = 0;
                                }
                                
                                rbp_1 += rdx_22;
                                rbx_2 += rdx_22;
                                goto 'label_4d1224;
                            }
                            
                            r14_4 = arg2;
                            rbp_1 = rdx_19;
                        }
                        else if *r12_1.byte_offset(0x35) != 1
                        {
                            r14_4 = arg2;
                            r12_2 = arg1;
                            'label_4d11bc:
                            let mut rax_24: *mut c_void;
                            let mut rdx_24: i64;
                            rax_24 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(r15, rbp_1, r12_2, r14_4);
                            
                            if rax_24 != 0
                            {
                                while core::str::pattern::Pattern::is_suffix_of::h9ea0a3f6ca9a3449(
                                    rax_24, rdx_24) != 0
                                {
                                    rbp_1 -= 1;
                                    rax_24 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(r15, rbp_1, r12_2, r14_4);
                                    
                                    if rax_24 == 0
                                    {
                                        goto 'label_4d1521;
                                    }
                                }
                                
                                goto 'label_4d1224;
                            }
                        }
                        else
                        {
                            r12_2 = arg1;
                            r14_4 = arg2;
                            let mut rax_14: *mut c_void;
                            let mut rdx_14: i64;
                            rax_14 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rbx_2, rdx_10, r12_2, r14_4);
                            
                            if rax_14 != 0
                            {
                                rbx_2 +=
                                    core::str::pattern::Pattern::is_prefix_of::h56a589c1a1afc20e(
                                    rax_14, rdx_14);
                                goto 'label_4d11bc;
                            }
                            
                            r15 = rbx_2;
                            rbp_1 = rdx_10;
                        }
                    }
                }
                else
                {
                    let mut rax_20: i64;
                    let mut r14_2: i64;
                    
                    if r14_1 == 2
                    {
                        let mut rax_17: *mut c_void;
                        let mut rdx_15: *mut c_void;
                        rax_17 = _$LT$core..ops..range..Range$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h8c3a2d8349b30d99(rbp_1);
                        r15 = rax_17;
                        r12_2 = arg1;
                        let mut rax_18: *mut c_void;
                        let mut rdx_17: i64;
                        rax_18 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_17, rdx_15, r12_2, arg2);
                        
                        if rax_18 == 0
                        {
                            r14_4 = arg2;
                            rbp_1 = rdx_15;
                        }
                        else
                        {
                            let mut rax_19: i64;
                            let mut rdx_18: i64;
                            rax_19 = uu_sort::get_leading_gen::h7fd24a66a114d51a(rax_18, rdx_17);
                            r14_2 = rax_19;
                            rax_20 = core::iter::traits::exact_size::ExactSizeIterator::len::h3f195717e6c4bef7(rax_19, rdx_18);
                            'label_4d121e:
                            rbp_1 += r14_2;
                            rbx_2 = rax_20 + rbp_1;
                            'label_4d1224:
                            r12_2 = var_58;
                            let var_50: u64;
                            r14_4 = var_50;
                            let mut rax_27: i64;
                            let mut rdx_29: i64;
                            rax_27 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(rbp_1, r12_2, r14_4);
                            
                            if rax_27 == 0
                            {
                                r15 = nullptr;
                            }
                            else
                            {
                                alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h681278da6988cee9(&var_f0, " ^ no match for key\n_>assertion…", 
                                    core::iter::traits::double_ended::DoubleEndedIterator::rfold::h9f59b36201598cee(rax_27));
                                let var_a8_1: *mut *mut c_void = var_e0;
                                var_b8 = var_f0;
                                var_98 = &var_b8;
                                let var_90_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                                var_f0 = &data_4275d0;
                                let var_e8_2: i64 = 1;
                                let var_d0_1: i64 = 0;
                                let var_e0_1: *mut *mut *mut c_void = &var_98;
                                var_d8 = 1;
                                result =
                                    std::io::Write::write_fmt::hdf669c348b2f4091(arg4, &var_f0);
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8941431298e6659e(&var_b8);
                                
                                if result != 0
                                {
                                    break;
                                }
                                
                                if rbp_1 >= rbx_2
                                {
                                    var_f0 = &data_58ce88;
                                    let var_e8_4: i64 = 1;
                                    var_e0 = 8;
                                    var_d8 = {0};
                                    result =
                                        std::io::Write::write_fmt::hdf669c348b2f4091(arg4, &var_f0);
                                    
                                    if result != 0
                                    {
                                        break;
                                    }
                                    
                                    'label_4d0ef0:
                                    let rcx_2: *mut i64 = rax_2;
                                    rax_2 = &rcx_2[7];
                                    r12_1 = rcx_2;
                                    
                                    if rcx_2 == rax_1
                                    {
                                        rax_2 = rcx_2;
                                    }
                                    
                                    if rcx_2 == rax_1
                                    {
                                        goto 'label_4d141e;
                                    }
                                    
                                    continue;
                                }
                                else
                                {
                                    r12_2 = var_58;
                                    r14_4 = var_50;
                                    let mut rax_31: *mut c_void;
                                    let mut rdx_33: *mut c_void;
                                    rax_31 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rbp_1, rbx_2, r12_2, r14_4);
                                    
                                    if rax_31 != 0
                                    {
                                        alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h681278da6988cee9(&var_f0, "_>assertion failed: token_buffer…", 
                                            core::iter::traits::double_ended::DoubleEndedIterator::rfold::h9f59b36201598cee(rax_31));
                                        let var_a8_2: *mut *mut *mut c_void = var_e0_1;
                                        var_b8 = var_f0;
                                        var_98 = &var_b8;
                                        let var_90_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                                        var_f0 = &data_58ce68;
                                        let var_e8_3: i64 = 2;
                                        let var_d0_2: i64 = 0;
                                        var_e0 = &var_98;
                                        var_d8 = 1;
                                        result = std::io::Write::write_fmt::hdf669c348b2f4091(arg4, 
                                            &var_f0);
                                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8941431298e6659e(&var_b8);
                                        
                                        if result != 0
                                        {
                                            break;
                                        }
                                        
                                        goto 'label_4d0ef0;
                                    }
                                    
                                    r15 = rbp_1;
                                    rbp_1 = rbx_2;
                                }
                            }
                        }
                    }
                    else
                    {
                        if r14_1 != 3
                        {
                            goto 'label_4d1224;
                        }
                        
                        let mut rax_4: *mut c_void;
                        let mut rdx_4: *mut c_void;
                        rax_4 = _$LT$core..ops..range..Range$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h8c3a2d8349b30d99(rbp_1);
                        r15 = rax_4;
                        r12_2 = arg1;
                        let mut rax_5: *mut c_void;
                        let mut rdx_6: i64;
                        rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_4, rdx_4, r12_2, arg2);
                        
                        if rax_5 != 0
                        {
                            var_f0 = rax_5;
                            let var_e8_1: *mut c_void = rax_5.byte_offset(rdx_6);
                            var_e0 = nullptr;
                            var_d8 = 0;
                            let rax_6: i8 = uu_sort::month_parse::he61b5b2aea1498ac();
                            let mut rax_7: i64;
                            let mut rdx_7: i32;
                            rax_7 =
                                core::iter::traits::iterator::Iterator::try_fold::h04806fb318c74eea(
                                &var_f0, &var_d8);
                            r14_2 = rax_7;
                            let mut rsi_10: i64;
                            
                            if rax_6 == 0
                            {
                                let mut rax_26: i64;
                                let mut rdx_27: i64;
                                rax_26 = core::option::Option$LT$T$GT$::map_or::h2a81e57da9749b11(
                                    r14_2, rdx_7, rdx_6);
                                r14_2 = rax_26;
                                rsi_10 = rdx_27;
                            }
                            else
                            {
                                if rdx_7 == 0x110000
                                {
                                    core::option::unwrap_failed::h893f57cb7db71cb7();
                                    /* no return */
                                }
                                
                                let mut rax_8: i64;
                                let mut rdi_9: i64;
                                rax_8 = core::iter::traits::iterator::Iterator::advance_by::h4e4e6888316db0b5(&var_f0);
                                let mut rsi_8: i32 = 0x110000;
                                
                                if rax_8 == 0
                                {
                                    let mut rax_9: i64;
                                    let mut rdx_8: i32;
                                    rax_9 = core::iter::traits::iterator::Iterator::try_fold::h04806fb318c74eea(&var_f0, &var_d8);
                                    rdi_9 = rax_9;
                                    rsi_8 = rdx_8;
                                }
                                
                                rsi_10 = core::option::Option$LT$T$GT$::map_or::h19d14ea526fb5a80(
                                    rdi_9, rsi_8, rdx_6);
                            }
                            
                            rax_20 = core::iter::traits::exact_size::ExactSizeIterator::len::h3f195717e6c4bef7(r14_2, rsi_10);
                            goto 'label_4d121e;
                        }
                        
                        r14_4 = arg2;
                        rbp_1 = rdx_4;
                    }
                }
                
                'label_4d1521:
                core::str::slice_error_fail::h1a2885084e28d077(r12_2, r14_4, r15, rbp_1);
                /* no return */
            }
        }
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..sync..mpmc..array..Slot$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::hd036655fcae2cd02(var_80, var_78_1);
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8941431298e6659e(&var_60);
    result
}
