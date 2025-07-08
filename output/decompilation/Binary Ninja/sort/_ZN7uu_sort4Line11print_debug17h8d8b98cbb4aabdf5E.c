
  int64_t uu_sort::Line::print_debug::h8d8b98cbb4aabdf5(char* arg1, void* arg2, void* arg3, int64_t arg4)

{
    void* r14 = arg2;
    char* var_108 = arg1;
    void var_90;
    alloc::str::_$LT$impl$u20$str$GT$::replace::hdab5ed66c8794b78(&var_90, arg1, r14);
    void* var_c0 = &var_90;
    int64_t (* var_b8)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    void* const var_f0 = &data_5ff8f0;
    int64_t var_e8 = 2;
    int64_t var_d0 = 0;
    void** var_e0 = &var_c0;
    int64_t var_d8 = 1;
    int64_t result_1 = std::io::Write::write_fmt::hcac6bdf88f5c01ef(arg4, &var_f0);
    int64_t result = result_1;
    
    if (!result_1)
    {
        int64_t var_70 = 0;
        void** var_68_1 = 8;
        int64_t var_60_1 = 0;
        uu_sort::tokenize::hb47c688654b41b2e(var_108, r14, *(arg3 + 0x78), &var_70);
        void* rcx_1 = *(arg3 + 8);
        int64_t rax = *(arg3 + 0x10);
        void* var_40 = rcx_1;
        void* var_38_1 = rax * 0x38 + rcx_1;
        int64_t* rax_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1dc45998b69df0a3(&var_40);
        void** var_a0;
        char* var_88;
        void* var_80;
        
        if (!rax_3)
        {
            label_52068e:
            char rax_35 = *(arg3 + 0x98);
            
            if (rax_35 == 5 || *(arg3 + 0x83) || *(arg3 + 0x84))
                goto label_52082d;
            
            char rax_38;
            
            if (!*(arg3 + 0x7d) && rax_35 == 6)
            {
                int64_t* rdi_41 = nullptr;
                
                if (rax >= 1)
                    rdi_41 = rcx_1 + (rax - 1) * 0x38;
                
                rax_38 = core::option::Option$LT$T$GT$::map_or::hf8e8f5637707ad45(rdi_41);
            }
            
            if (!*(arg3 + 0x7d) && rax_35 == 6 && !rax_38)
                goto label_52082d;
            
            if (!r14)
            {
                var_f0 = &data_5ff910;
                int64_t var_e8_6 = 1;
                int64_t var_e0_4 = 8;
                var_d8 = {0};
                int64_t result_6 = std::io::Write::write_fmt::hcac6bdf88f5c01ef(arg4, &var_f0);
                result = result_6;
                
                if (!result_6)
                    goto label_52082d;
            }
            else
            {
                alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&var_c0, 
                    "_ assertion failed: token_buffer…", 1, 
                    unicode_width::str_width::hf245007b39258182(var_88, var_80, 0));
                var_a0 = &var_c0;
                int64_t (* var_98_3)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_f0 = &data_5ff8f0;
                int64_t var_e8_5 = 2;
                int64_t var_d0_3 = 0;
                void*** var_e0_3 = &var_a0;
                var_d8 = 1;
                int64_t result_5 = std::io::Write::write_fmt::hcac6bdf88f5c01ef(arg4, &var_f0);
                result = result_5;
                
                if (!result_5)
                {
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(
                        &var_c0);
                    label_52082d:
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
            int64_t* r13_1 = rax_3;
            char* rsi_3 = var_108;
            void** const var_f8_1 = &data_5ff980;
            void* var_100_1 = r14;
            
            while (true)
            {
                void* rax_5;
                void* rdx_3;
                rax_5 = uu_sort::FieldSelector::get_range::h94d5816cf09723a2(r13_1, rsi_3, r14, 
                    var_68_1, var_60_1);
                void* r12_1 = rax_5;
                void* r14_1 = rdx_3;
                uint32_t r15_1 = *(r13_1 + 0x35);
                void* rbp;
                void** rax_41;
                
                if (r15_1 < 2)
                {
                    void* rax_13;
                    void* rdx_10;
                    rax_13 = _$LT$core..ops..range..Range$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha702be9191d1b330(r12_1);
                    rbp = rax_13;
                    void* rax_14;
                    int64_t rdx_12;
                    rax_14 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(rax_13, rdx_10, var_108, var_100_1);
                    
                    if (!rax_14)
                    {
                        r12_1 = rdx_10;
                        labelid_1:
                        var_f8_1 = &data_5ff920;
                    }
                    else
                    {
                        var_b8 = r15_1 == 1;
                        var_c0 = 0x2e00110000;
                        uu_sort::numeric_str_cmp::NumInfo::parse::h2d1625adef450396(&var_f0, 
                            rax_14, rdx_12, &var_c0);
                        int64_t rbx_4 = var_d8;
                        r12_1 += var_e0;
                        r14_1 = core::iter::traits::exact_size::ExactSizeIterator::len::h5069d6744b989186(var_e0, rbx_4) + r12_1;
                        
                        if (var_e0)
                        {
                            label_5203a0:
                            void* rbx_6;
                            char* r15_2;
                            
                            if (r15_1 != 1)
                            {
                                rbx_6 = var_100_1;
                                r15_2 = var_108;
                                label_52045f:
                                
                                while (true)
                                {
                                    void* rax_27;
                                    int64_t rdx_24;
                                    rax_27 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(rbp, r12_1, r15_2, rbx_6);
                                    
                                    if (!rax_27)
                                    {
                                        rax_41 = &data_5ff968;
                                        goto label_520847_1;
                                    }
                                    
                                    if (!core::str::pattern::Pattern::is_suffix_of::h00ec699f5ef7cba4(rax_27, rdx_24))
                                        break;
                                    
                                    r12_1 -= 1;
                                }
                                
                                goto label_5204ad;
                            }
                            
                            r15_2 = var_108;
                            rbx_6 = var_100_1;
                            void* rax_20;
                            int64_t rdx_18;
                            rax_20 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(r14_1, rdx_10, r15_2, rbx_6);
                            
                            if (rax_20)
                            {
                                r14_1 +=
                                    core::str::pattern::Pattern::is_prefix_of::h07a07aaeb752853c(
                                    rax_20, rdx_18);
                                goto label_52045f;
                            }
                            
                            rbp = r14_1;
                            r12_1 = rdx_10;
                            labelid_1:
                            var_f8_1 = &data_5ff950;
                        }
                        else
                        {
                            if (!core::cmp::impls::_$LT$impl$u20$core..cmp..PartialEq$u20$for$u20$usize$GT$::eq::h37bad34467ea7e13(rbx_4))
                                goto label_5203a0;
                            
                            void* rax_17;
                            void* rdx_13;
                            rax_17 = _$LT$core..ops..range..Range$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha702be9191d1b330(r12_1);
                            rbp = rax_17;
                            void* rax_18;
                            int64_t rdx_15;
                            rax_18 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(rax_17, rdx_13, var_108, var_100_1);
                            
                            if (rax_18)
                            {
                                int64_t rax_19;
                                int64_t rdx_16;
                                rax_19 = core::str::_$LT$impl$u20$str$GT$::find::hb9662878ed5c0bb4(
                                    rax_18, rdx_15);
                                
                                if (!rax_19)
                                    rdx_16 = rax_19;
                                
                                r12_1 += rdx_16;
                                r14_1 += rdx_16;
                                goto label_5204ad;
                            }
                            
                            r12_1 = rdx_13;
                            labelid_1:
                            var_f8_1 = &data_5ff938;
                        }
                    }
                }
                else
                {
                    int64_t r14_4;
                    
                    if (r15_1 == 2)
                    {
                        void* rax_23;
                        void* rdx_19;
                        rax_23 = _$LT$core..ops..range..Range$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha702be9191d1b330(r12_1);
                        rbp = rax_23;
                        void* rax_24;
                        void* rdx_21;
                        rax_24 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(rax_23, rdx_19, var_108, var_100_1);
                        
                        if (!rax_24)
                            r12_1 = rdx_19;
                        else
                        {
                            void* rax_25;
                            int64_t rdx_22;
                            rax_25 = uu_sort::get_leading_gen::h381fabafeef8de83(rax_24, rdx_21);
                            r14_4 = core::iter::traits::exact_size::ExactSizeIterator::len::h5069d6744b989186(rax_25, rdx_22);
                            r12_1 += rax_25;
                            label_5204a2:
                            r14_1 = r14_4 + r12_1;
                            label_5204ad:
                            
                            if (!r12_1)
                            {
                                label_5204f5:
                                alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(
                                    &var_c0, " assertion failed: token_buffer.…", 1, 
                                    unicode_width::str_width::hf245007b39258182(var_88, r12_1, 0));
                                var_a0 = &var_c0;
                                int64_t (* var_98_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                var_f0 = &data_424b80;
                                int64_t var_e8_2 = 1;
                                int64_t var_d0_1 = 0;
                                void*** var_e0_2 = &var_a0;
                                var_d8 = 1;
                                int64_t result_2 =
                                    std::io::Write::write_fmt::hcac6bdf88f5c01ef(arg4, &var_f0);
                                result = result_2;
                                
                                if (result_2)
                                {
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&var_c0);
                                    break;
                                }
                                
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&var_c0);
                                
                                if (r12_1 >= r14_1)
                                {
                                    var_f0 = &data_5ff910;
                                    int64_t var_e8_4 = 1;
                                    var_e0 = 8;
                                    var_d8 = {0};
                                    int64_t result_4 =
                                        std::io::Write::write_fmt::hcac6bdf88f5c01ef(arg4, &var_f0);
                                    result = result_4;
                                    
                                    if (result_4)
                                        break;
                                    
                                    label_5201a8:
                                    int64_t* rax_4 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1dc45998b69df0a3(&var_40);
                                    r13_1 = rax_4;
                                    r14 = var_100_1;
                                    rsi_3 = var_108;
                                    
                                    if (!rax_4)
                                        goto label_52068e;
                                    
                                    continue;
                                }
                                else
                                {
                                    void* rax_33;
                                    int64_t rdx_28;
                                    rax_33 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(r12_1, r14_1, var_88, var_80);
                                    
                                    if (rax_33)
                                    {
                                        alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&var_c0, "_ assertion failed: token_buffer…", 1, 
                                            unicode_width::str_width::hf245007b39258182(rax_33, 
                                                rdx_28, 0));
                                        var_a0 = &var_c0;
                                        int64_t (* var_98_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                        var_f0 = &data_5ff8f0;
                                        int64_t var_e8_3 = 2;
                                        int64_t var_d0_2 = 0;
                                        var_e0 = &var_a0;
                                        var_d8 = 1;
                                        int64_t result_3 =
                                            std::io::Write::write_fmt::hcac6bdf88f5c01ef(arg4, 
                                            &var_f0);
                                        result = result_3;
                                        
                                        if (!result_3)
                                        {
                                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&var_c0);
                                            goto label_5201a8;
                                        }
                                        
                                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&var_c0);
                                        break;
                                    }
                                    
                                    var_108 = var_88;
                                    var_100_1 = var_80;
                                    rbp = r12_1;
                                    r12_1 = r14_1;
                                }
                                
                                labelid_1:
                                var_f8_1 = &data_5ff9e0;
                            }
                            else
                            {
                                if (r12_1 < var_80)
                                {
                                    if (*(var_88 + r12_1) > 0xbf)
                                        goto label_5204f5;
                                    
                                    goto label_520866;
                                }
                                
                                if (r12_1 == var_80)
                                    goto label_5204f5;
                                
                                label_520866:
                                var_108 = var_88;
                                var_100_1 = var_80;
                                rbp = nullptr;
                                label_520847:
                                var_f8_1 = &data_5ff9c8;
                            }
                        }
                    }
                    else
                    {
                        if (r15_1 != 3)
                            goto label_5204ad;
                        
                        void* rax_6;
                        void* rdx_4;
                        rax_6 = _$LT$core..ops..range..Range$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha702be9191d1b330(r12_1);
                        rbp = rax_6;
                        void* rax_7;
                        int64_t rdx_6;
                        rax_7 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(rax_6, rdx_4, var_108, var_100_1);
                        
                        if (rax_7)
                        {
                            var_f0 = rax_7;
                            void* var_e8_1 = rax_7 + rdx_6;
                            int64_t var_e0_1 = 0;
                            var_d8 = 0;
                            char rax_8 = uu_sort::month_parse::h15c772d462e6ea25(rax_7);
                            int64_t rax_9;
                            int32_t rdx_7;
                            rax_9 =
                                core::iter::traits::iterator::Iterator::try_fold::h1deec66163955984(
                                &var_f0, &var_d8);
                            int64_t r13_2 = rax_9;
                            int64_t rsi_10;
                            
                            if (!rax_8)
                            {
                                int64_t rax_29;
                                int64_t rdx_26;
                                rax_29 = core::option::Option$LT$T$GT$::map_or::h821973a7dfd1fe80(
                                    r13_2, rdx_7, rdx_6);
                                r13_2 = rax_29;
                                rsi_10 = rdx_26;
                            }
                            else
                            {
                                if (rdx_7 == 0x110000)
                                {
                                    core::option::unwrap_failed::h0e11329e76906eaa();
                                    /* no return */
                                }
                                
                                int64_t rax_10;
                                int64_t rdi_11;
                                rax_10 = core::iter::traits::iterator::Iterator::advance_by::h3b89246444089858(&var_f0);
                                int32_t rsi_8 = 0x110000;
                                
                                if (!rax_10)
                                {
                                    int64_t rax_11;
                                    int32_t rdx_8;
                                    rax_11 = core::iter::traits::iterator::Iterator::try_fold::h1deec66163955984(&var_f0, &var_d8);
                                    rdi_11 = rax_11;
                                    rsi_8 = rdx_8;
                                }
                                
                                rsi_10 = core::option::Option$LT$T$GT$::map_or::h00da6f409eb162fd(
                                    rdi_11, rsi_8, rdx_6);
                            }
                            
                            r14_4 = core::iter::traits::exact_size::ExactSizeIterator::len::h5069d6744b989186(r13_2, rsi_10);
                            r12_1 += r13_2;
                            goto label_5204a2;
                        }
                        
                        r12_1 = rdx_4;
                        rax_41 = &data_5ff998;
                        label_520847_1:
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
    return result;
}
