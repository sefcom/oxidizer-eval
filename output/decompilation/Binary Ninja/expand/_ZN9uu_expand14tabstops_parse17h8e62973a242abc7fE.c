
  int64_t uu_expand::tabstops_parse::h8e62973a242abc7f(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t rax;
    int64_t result_1;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h1edad313e4e2a03a(arg2, arg3);
    int64_t var_d8;
    int64_t result;
    int64_t var_c1_1;
    int128_t var_108;
    int64_t var_f8;
    
    if (!result_1)
    {
        int64_t* rax_4 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(8, 8);
        
        if (!rax_4)
        {
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
            /* no return */
        }
        
        *rax_4 = 8;
        alloc::slice::hack::into_vec::hc80358b1381473c5(&var_108, rax_4, 1);
        var_c1_1 = var_f8;
        *var_d8[7] = var_108;
        arg1[1] = 0;
    }
    else
    {
        int64_t var_128 = 0;
        int64_t var_120_1 = 8;
        int64_t var_118_1 = 0;
        int64_t var_c8;
        _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h40e4370e140be348(&var_c8, rax, result_1);
        var_d8 = 0;
        result = result_1;
        int16_t var_a0_1 = 1;
        void* i_2;
        int64_t rdx;
        i_2 = core::str::iter::SplitInternal$LT$P$GT$::next::h09541ba4b5d07887(&var_d8);
        int64_t rax_6;
        char r15_1;
        
        if (!i_2)
        {
            r15_1 = 0;
            label_4b1973:
            int64_t* rax_7 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(8, 8);
            
            if (!rax_7)
            {
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                /* no return */
            }
            
            *rax_7 = 8;
            alloc::slice::hack::into_vec::hc80358b1381473c5(&var_d8, rax_7, 1);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::h9cac72b98b8e7a45(
                &var_128);
            rax_6 = var_c8;
            var_118_1 = rax_6;
            var_128 = var_d8;
        }
        else
        {
            void* i_1 = i_2;
            int64_t r13_1 = rdx;
            char rbx_1 = 0;
            r15_1 = 0;
            void* i;
            
            do
            {
                if (r13_1)
                {
                    int64_t r12_1 = 0;
                    
                    while (true)
                    {
                        int64_t rax_1 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(r12_1);
                        uint32_t rdx_2 = *(i_1 + r12_1);
                        char rcx_1 = 2;
                        
                        if (rdx_2 != 0x2b)
                        {
                            if (rdx_2 != 0x2f)
                            {
                                core::str::converts::from_utf8::ha1effb4cca6d9901(&var_108, 
                                    i_1 + r12_1, r13_1 - r12_1);
                                char* rax_2;
                                uint64_t rdx_4;
                                rax_2 =
                                    core::result::Result$LT$T$C$E$GT$::unwrap::h6029b96464d79daa(
                                    &var_108);
                                char var_78;
                                core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_78, rax_2, rdx_4);
                                int64_t rax_11;
                                int64_t* rcx_5;
                                
                                if (!var_78)
                                {
                                    int64_t var_70;
                                    
                                    if (!var_70)
                                    {
                                        rax_11 = -0x7ffffffffffffffd;
                                        label_4b1aa0:
                                        rcx_5 = arg1;
                                        goto label_4b1c33;
                                    }
                                    
                                    if (var_118_1 && *(var_120_1 + (var_118_1 << 3) - 8) >= var_70)
                                    {
                                        rax_11 = -0x7ffffffffffffffb;
                                        goto label_4b1aa0;
                                    }
                                    
                                    if (rbx_1 & 1)
                                    {
                                        if (r15_1 != 1)
                                        {
                                            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8a3539b285686873(&var_108, "+src/uu/expand/src/expand.rs,- -…", 1);
                                            rcx_5 = arg1;
                                        }
                                        else
                                        {
                                            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8a3539b285686873(&var_108, "/+src/uu/expand/src/expand.rs,- …", 1);
                                            rcx_5 = arg1;
                                        }
                                        
                                        int128_t zmm0_3 = var_108;
                                        rcx_5[3] = var_f8;
                                        *(rcx_5 + 8) = zmm0_3;
                                        rax_11 = -0x7ffffffffffffffe;
                                        goto label_4b1c33;
                                    }
                                    
                                    alloc::vec::Vec$LT$T$C$A$GT$::push::hc00765dc6d21f5c0(&var_128, 
                                        var_70);
                                    
                                    if (r15_1)
                                        rbx_1 = 1;
                                    
                                    break;
                                }
                                
                                char var_77;
                                
                                if (var_77 == 2)
                                {
                                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8a3539b285686873(&var_108, rax_2, rdx_4);
                                    rcx_5 = arg1;
                                    rcx_5[3] = var_f8;
                                    *(rcx_5 + 8) = var_108;
                                    rax_11 = -0x7ffffffffffffffc;
                                    label_4b1c33:
                                    rcx_5[4] = rax_11;
                                    *rcx_5 = 1;
                                    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::h9cac72b98b8e7a45(&var_128);
                                }
                                
                                char* rax_12;
                                uint64_t rdx_6;
                                rax_12 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h87967b6d9b6e9ec0(rax_2, rdx_4);
                                var_108 = 0;
                                char rax_14 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::ha65bc1b4c59a7c83(rax_12, rdx_6, 
                                    core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2f, 
                                        &var_108), 
                                    1);
                                char rax_16;
                                
                                if (!rax_14)
                                {
                                    var_108 = 0;
                                    rax_16 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::ha65bc1b4c59a7c83(rax_12, rdx_6, 
                                        core::char::methods::encode_utf8_raw::h4a752b0d300141c4(
                                            0x2b, &var_108), 
                                        1);
                                }
                                
                                if (!rax_14 && !rax_16)
                                {
                                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8a3539b285686873(&var_108, rax_12, rdx_6);
                                    arg1[3] = var_f8;
                                    *(arg1 + 8) = var_108;
                                    arg1[4] = -0x8000000000000000;
                                    *arg1 = 1;
                                }
                                else
                                {
                                    int64_t rax_17 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(rax_12, rdx_6);
                                    
                                    if (!rax_17)
                                    {
                                        core::str::slice_error_fail::h5dbb61534404fe7e(rax_12, 
                                            rdx_6, nullptr, 1);
                                        /* no return */
                                    }
                                    
                                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8a3539b285686873(&var_108, rax_17, 1);
                                    int128_t zmm0_4 = var_108;
                                    int128_t var_48;
                                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8a3539b285686873(&var_48, rax_12, rdx_6);
                                    int128_t var_f0_1 = var_48;
                                    var_108 = zmm0_4;
                                    arg1[5] = *var_f0_1[8];
                                    int64_t var_38;
                                    arg1[6] = var_38;
                                    arg1[3] = var_f8;
                                    arg1[4] = var_f0_1;
                                    *(arg1 + 8) = zmm0_4;
                                    *arg1 = 1;
                                }
                                
                                return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::h9cac72b98b8e7a45(&var_128);
                            }
                            
                            rcx_1 = 1;
                        }
                        
                        r12_1 = rax_1;
                        r15_1 = rcx_1;
                        
                        if (rax_1 >= r13_1)
                        {
                            r15_1 = rcx_1;
                            break;
                        }
                    }
                }
                
                int64_t rdx_1;
                i = core::str::iter::SplitInternal$LT$P$GT$::next::h09541ba4b5d07887(&var_d8);
                i_1 = i;
                r13_1 = rdx_1;
            } while (i);
            rax_6 = var_118_1;
            
            if (!rax_6)
                goto label_4b1973;
        }
        
        char rax_8 = r15_1;
        
        if (rax_6 < 2)
            rax_8 = 0;
        
        var_c1_1 = var_118_1;
        *var_d8[7] = var_128;
        arg1[1] = rax_8;
    }
    *(arg1 + 9) = var_d8;
    arg1[3] = result;
    arg1[4] = var_c1_1;
    *arg1 = 0;
    return result;
}
