
  int64_t uu_sort::Line::print_debug::h726ecc852aa0bf85(char* arg1, uint64_t arg2, void* arg3, int64_t arg4)

{
    void var_60;
    alloc::str::_$LT$impl$u20$str$GT$::replace::h0e383c6d9d0dd1ba(&var_60, arg1, arg2);
    void* var_b8 = &var_60;
    int64_t (* var_b0)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    void* const var_f0 = &data_58ce68;
    int64_t var_e8 = 2;
    int64_t var_d0 = 0;
    void** var_e0 = &var_b8;
    int64_t var_d8 = 1;
    int64_t result_1 = std::io::Write::write_fmt::hdf669c348b2f4091(arg4, &var_f0);
    int64_t result = result_1;
    
    if (!result_1)
    {
        int64_t var_80 = 0;
        int64_t* var_78_1 = 8;
        int64_t var_70_1 = 0;
        uu_sort::tokenize::h1a0db68099bd818a(arg1, arg2, *(arg3 + 0x78), &var_80);
        int64_t* r12_1 = *(arg3 + 8);
        int64_t rcx_1 = *(arg3 + 0x10);
        void* rax_1 = rcx_1 * 0x38 + r12_1;
        void** var_98;
        char* var_58;
        
        if (!rcx_1)
        {
            label_4d141e:
            bool rax_36 = *(arg3 + 0x98);
            
            if (rax_36 == 5 || *(arg3 + 0x83) || *(arg3 + 0x84))
                result = 0;
            else if (*(arg3 + 0x7f) || *(arg3 + 0x7d) == 1 || *(arg3 + 0x7e) || rax_36 != 6
                || *(arg3 + 0x80))
            {
                label_4d1463:
                
                if (!arg2)
                {
                    var_f0 = &data_58ce88;
                    int64_t var_e8_6 = 1;
                    int64_t var_e0_3 = 8;
                    var_d8 = {0};
                    result = std::io::Write::write_fmt::hdf669c348b2f4091(arg4, &var_f0);
                }
                else
                {
                    alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h681278da6988cee9(&var_f0, 
                        "_>assertion failed: token_buffer…", 
                        core::iter::traits::double_ended::DoubleEndedIterator::rfold::h9f59b36201598cee(var_58));
                    void** var_a8_3 = var_e0;
                    var_b8 = var_f0;
                    var_98 = &var_b8;
                    int64_t (* var_90_3)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    var_f0 = &data_58ce68;
                    int64_t var_e8_5 = 2;
                    int64_t var_d0_3 = 0;
                    void*** var_e0_2 = &var_98;
                    var_d8 = 1;
                    result = std::io::Write::write_fmt::hdf669c348b2f4091(arg4, &var_f0);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8941431298e6659e(
                        &var_b8);
                }
                
                if (!result)
                    result = 0;
            }
            else
            {
                void* var_88_2 = rax_1 - 0x38;
                void* rcx_17;
                rcx_17 = rax_1 == 0x38;
                rcx_17 |= !rcx_1;
                
                if (rcx_17)
                    goto label_4d1463;
                
                _$LT$uu_sort..KeySettings$u20$as$u20$core..default..Default$GT$::default::h14a8cebf2953677d();
                var_d8 = 1;
                int64_t var_d0_4 = 1;
                char var_c8_1 = 0;
                var_e0 = 2;
                int32_t var_c0_1 = 0;
                int16_t var_bc_1 = 0x600;
                int16_t var_ba_1 = 0;
                
                if (!_$LT$uu_sort..FieldSelector$u20$as$u20$core..cmp..PartialEq$GT$::eq::ha806145b4361d250(var_88_2, &var_f0))
                    goto label_4d1463;
                
                result = 0;
            }
        }
        else
        {
            int64_t* rax_2 = &r12_1[7];
            
            while (true)
            {
                uint64_t rax_3;
                void* rdx_3;
                rax_3 = uu_sort::FieldSelector::get_range::h36eed4fe0a7f87ec(r12_1, arg1, arg2, 
                    var_78_1, var_70_1);
                void* rbp_1 = rax_3;
                void* rbx_2 = rdx_3;
                uint32_t r14_1 = *(r12_1 + 0x35);
                char* r12_2;
                uint64_t r14_4;
                void* r15;
                
                if (r14_1 < 2)
                {
                    void* rax_11;
                    void* rdx_10;
                    rax_11 = _$LT$core..ops..range..Range$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h8c3a2d8349b30d99(rbp_1);
                    r15 = rax_11;
                    void* rax_12;
                    int64_t rdx_12;
                    rax_12 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_11, rdx_10, arg1, arg2);
                    
                    if (!rax_12)
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
                        int64_t r13_2 = var_d8;
                        rbp_1 += var_e0;
                        rbx_2 = core::iter::traits::exact_size::ExactSizeIterator::len::h3f195717e6c4bef7(var_e0, r13_2) + rbp_1;
                        
                        if (!(r13_2 | var_e0))
                        {
                            void* rax_21;
                            void* rdx_19;
                            rax_21 = _$LT$core..ops..range..Range$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h8c3a2d8349b30d99(rbp_1);
                            r15 = rax_21;
                            r12_2 = arg1;
                            void* rax_22;
                            int64_t rdx_21;
                            rax_22 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_21, rdx_19, r12_2, arg2);
                            
                            if (rax_22)
                            {
                                char rax_23;
                                int64_t rdx_22;
                                rax_23 = core::str::_$LT$impl$u20$str$GT$::find::h4840dd49033fba86(
                                    rax_22, rdx_21);
                                
                                if (!(rax_23 & 1))
                                    rdx_22 = 0;
                                
                                rbp_1 += rdx_22;
                                rbx_2 += rdx_22;
                                goto label_4d1224;
                            }
                            
                            r14_4 = arg2;
                            rbp_1 = rdx_19;
                        }
                        else if (*(r12_1 + 0x35) != 1)
                        {
                            r14_4 = arg2;
                            r12_2 = arg1;
                            label_4d11bc:
                            void* rax_24;
                            int64_t rdx_24;
                            rax_24 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(r15, rbp_1, r12_2, r14_4);
                            
                            if (rax_24)
                            {
                                while (core::str::pattern::Pattern::is_suffix_of::h9ea0a3f6ca9a3449(
                                    rax_24, rdx_24))
                                {
                                    rbp_1 -= 1;
                                    rax_24 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(r15, rbp_1, r12_2, r14_4);
                                    
                                    if (!rax_24)
                                        goto label_4d1521;
                                }
                                
                                goto label_4d1224;
                            }
                        }
                        else
                        {
                            r12_2 = arg1;
                            r14_4 = arg2;
                            void* rax_14;
                            int64_t rdx_14;
                            rax_14 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rbx_2, rdx_10, r12_2, r14_4);
                            
                            if (rax_14)
                            {
                                rbx_2 +=
                                    core::str::pattern::Pattern::is_prefix_of::h56a589c1a1afc20e(
                                    rax_14, rdx_14);
                                goto label_4d11bc;
                            }
                            
                            r15 = rbx_2;
                            rbp_1 = rdx_10;
                        }
                    }
                }
                else
                {
                    int64_t rax_20;
                    int64_t r14_2;
                    
                    if (r14_1 == 2)
                    {
                        void* rax_17;
                        void* rdx_15;
                        rax_17 = _$LT$core..ops..range..Range$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h8c3a2d8349b30d99(rbp_1);
                        r15 = rax_17;
                        r12_2 = arg1;
                        void* rax_18;
                        int64_t rdx_17;
                        rax_18 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_17, rdx_15, r12_2, arg2);
                        
                        if (!rax_18)
                        {
                            r14_4 = arg2;
                            rbp_1 = rdx_15;
                        }
                        else
                        {
                            int64_t rax_19;
                            int64_t rdx_18;
                            rax_19 = uu_sort::get_leading_gen::h7fd24a66a114d51a(rax_18, rdx_17);
                            r14_2 = rax_19;
                            rax_20 = core::iter::traits::exact_size::ExactSizeIterator::len::h3f195717e6c4bef7(rax_19, rdx_18);
                            label_4d121e:
                            rbp_1 += r14_2;
                            rbx_2 = rax_20 + rbp_1;
                            label_4d1224:
                            r12_2 = var_58;
                            uint64_t var_50;
                            r14_4 = var_50;
                            int64_t rax_27;
                            int64_t rdx_29;
                            rax_27 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(rbp_1, r12_2, r14_4);
                            
                            if (!rax_27)
                                r15 = nullptr;
                            else
                            {
                                alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h681278da6988cee9(&var_f0, " ^ no match for key\n_>assertion…", 
                                    core::iter::traits::double_ended::DoubleEndedIterator::rfold::h9f59b36201598cee(rax_27));
                                void** var_a8_1 = var_e0;
                                var_b8 = var_f0;
                                var_98 = &var_b8;
                                int64_t (* var_90_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                                var_f0 = &data_4275d0;
                                int64_t var_e8_2 = 1;
                                int64_t var_d0_1 = 0;
                                void*** var_e0_1 = &var_98;
                                var_d8 = 1;
                                result =
                                    std::io::Write::write_fmt::hdf669c348b2f4091(arg4, &var_f0);
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8941431298e6659e(&var_b8);
                                
                                if (result)
                                    break;
                                
                                if (rbp_1 >= rbx_2)
                                {
                                    var_f0 = &data_58ce88;
                                    int64_t var_e8_4 = 1;
                                    var_e0 = 8;
                                    var_d8 = {0};
                                    result =
                                        std::io::Write::write_fmt::hdf669c348b2f4091(arg4, &var_f0);
                                    
                                    if (result)
                                        break;
                                    
                                    label_4d0ef0:
                                    int64_t* rcx_2 = rax_2;
                                    rax_2 = &rcx_2[7];
                                    r12_1 = rcx_2;
                                    
                                    if (rcx_2 == rax_1)
                                        rax_2 = rcx_2;
                                    
                                    if (rcx_2 == rax_1)
                                        goto label_4d141e;
                                    
                                    continue;
                                }
                                else
                                {
                                    r12_2 = var_58;
                                    r14_4 = var_50;
                                    void* rax_31;
                                    void* rdx_33;
                                    rax_31 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rbp_1, rbx_2, r12_2, r14_4);
                                    
                                    if (rax_31)
                                    {
                                        alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h681278da6988cee9(&var_f0, "_>assertion failed: token_buffer…", 
                                            core::iter::traits::double_ended::DoubleEndedIterator::rfold::h9f59b36201598cee(rax_31));
                                        void*** var_a8_2 = var_e0_1;
                                        var_b8 = var_f0;
                                        var_98 = &var_b8;
                                        int64_t (* var_90_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                                        var_f0 = &data_58ce68;
                                        int64_t var_e8_3 = 2;
                                        int64_t var_d0_2 = 0;
                                        var_e0 = &var_98;
                                        var_d8 = 1;
                                        result = std::io::Write::write_fmt::hdf669c348b2f4091(arg4, 
                                            &var_f0);
                                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8941431298e6659e(&var_b8);
                                        
                                        if (result)
                                            break;
                                        
                                        goto label_4d0ef0;
                                    }
                                    
                                    r15 = rbp_1;
                                    rbp_1 = rbx_2;
                                }
                            }
                        }
                    }
                    else
                    {
                        if (r14_1 != 3)
                            goto label_4d1224;
                        
                        void* rax_4;
                        void* rdx_4;
                        rax_4 = _$LT$core..ops..range..Range$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h8c3a2d8349b30d99(rbp_1);
                        r15 = rax_4;
                        r12_2 = arg1;
                        void* rax_5;
                        int64_t rdx_6;
                        rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_4, rdx_4, r12_2, arg2);
                        
                        if (rax_5)
                        {
                            var_f0 = rax_5;
                            void* var_e8_1 = rax_5 + rdx_6;
                            var_e0 = nullptr;
                            var_d8 = 0;
                            char rax_6 = uu_sort::month_parse::he61b5b2aea1498ac();
                            int64_t rax_7;
                            int32_t rdx_7;
                            rax_7 =
                                core::iter::traits::iterator::Iterator::try_fold::h04806fb318c74eea(
                                &var_f0, &var_d8);
                            r14_2 = rax_7;
                            int64_t rsi_10;
                            
                            if (!rax_6)
                            {
                                int64_t rax_26;
                                int64_t rdx_27;
                                rax_26 = core::option::Option$LT$T$GT$::map_or::h2a81e57da9749b11(
                                    r14_2, rdx_7, rdx_6);
                                r14_2 = rax_26;
                                rsi_10 = rdx_27;
                            }
                            else
                            {
                                if (rdx_7 == 0x110000)
                                {
                                    core::option::unwrap_failed::h893f57cb7db71cb7();
                                    /* no return */
                                }
                                
                                int64_t rax_8;
                                int64_t rdi_9;
                                rax_8 = core::iter::traits::iterator::Iterator::advance_by::h4e4e6888316db0b5(&var_f0);
                                int32_t rsi_8 = 0x110000;
                                
                                if (!rax_8)
                                {
                                    int64_t rax_9;
                                    int32_t rdx_8;
                                    rax_9 = core::iter::traits::iterator::Iterator::try_fold::h04806fb318c74eea(&var_f0, &var_d8);
                                    rdi_9 = rax_9;
                                    rsi_8 = rdx_8;
                                }
                                
                                rsi_10 = core::option::Option$LT$T$GT$::map_or::h19d14ea526fb5a80(
                                    rdi_9, rsi_8, rdx_6);
                            }
                            
                            rax_20 = core::iter::traits::exact_size::ExactSizeIterator::len::h3f195717e6c4bef7(r14_2, rsi_10);
                            goto label_4d121e;
                        }
                        
                        r14_4 = arg2;
                        rbp_1 = rdx_4;
                    }
                }
                
                label_4d1521:
                core::str::slice_error_fail::h1a2885084e28d077(r12_2, r14_4, r15, rbp_1);
                /* no return */
            }
        }
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..sync..mpmc..array..Slot$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::hd036655fcae2cd02(var_80, var_78_1);
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8941431298e6659e(&var_60);
    return result;
}
