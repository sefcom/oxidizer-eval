
  int64_t* uu_expand::Options::new::hf73bd933e2ff5840(int64_t* arg1, void* arg2)

{
    uint64_t var_138;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h48c8e91afcc97e40(
        &var_138, arg2, "tabskindAuto/", 4);
    int64_t var_b0;
    clap_builder::parser::error::MatchesError::unwrap::hdf43f15188d1d4f9(&var_b0, "tabskindAuto/", 
        4, &var_138);
    char var_154_1;
    int64_t var_148_1;
    int64_t var_140_1;
    uint64_t r14_1;
    
    if (!var_b0)
    {
        uint64_t rax_3 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 8);
        
        if (!rax_3)
        {
            alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
            /* no return */
        }
        
        r14_1 = rax_3;
        *rax_3 = 8;
        var_148_1 = 1;
        var_154_1 = 0;
        var_140_1 = 1;
        goto label_45c82e;
    }
    
    int64_t var_c8;
    core::iter::traits::iterator::Iterator::collect::h42202fdc91c71b42(&var_c8, &var_b0);
    int64_t var_e8;
    int64_t var_c0;
    int64_t var_b8;
    alloc::str::join_generic_copy::h405dd9af099a375f(&var_e8, var_c0, var_b8);
    int64_t rbp_1 = var_e8;
    int64_t var_e0;
    int64_t var_d8;
    uu_expand::tabstops_parse::h3c9abf62a25c4179(&var_138, var_e0, var_d8);
    uint64_t rcx_1 = var_138;
    char var_130;
    int128_t var_128;
    int128_t var_118;
    
    if (rcx_1 != -0x7ffffffffffffffa)
    {
        int32_t var_12f;
        *(arg1 + 0x14) = var_12f;
        *(arg1 + 0x11) = var_12f;
        arg1[1] = rcx_1;
        arg1[2] = var_130;
        *(arg1 + 0x18) = var_128;
        *(arg1 + 0x28) = var_118;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec05db6bc18b7f0(rbp_1, var_e0);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h214e5ddb3c709491(var_c8, 
            var_c0);
    }
    else
    {
        var_154_1 = var_130;
        var_148_1 = var_128;
        r14_1 = *var_128[8];
        var_140_1 = var_118;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec05db6bc18b7f0(rbp_1, var_e0);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h214e5ddb3c709491(var_c8, 
            var_c0);
        label_45c82e:
        char rax_4 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "initialno-utf8FILES/+src/uu/expa…", 7);
        char rax_5 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "no-utf8FILES/+src/uu/expand/src/…", 7);
        var_138 = r14_1;
        var_130 = r14_1 + (var_140_1 << 3);
        var_128 = 0;
        char rax_8;
        uint64_t rdx_3;
        rax_8 = core::iter::traits::iterator::Iterator::reduce::h3b8faf0d8297fae9(&var_138);
        
        if (!(rax_8 & 1))
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h6af23d6fde4d821e(&var_138, rdx_3);
        uint64_t rbp_2 = var_138;
        int64_t rax_9 = var_130;
        int64_t r15_2 = var_128;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h48c8e91afcc97e40(
            &var_138, arg2, "FILES/+src/uu/expand/src/expand.…", 5);
        int64_t var_70;
        clap_builder::parser::error::MatchesError::unwrap::hdf43f15188d1d4f9(&var_70, 
            "FILES/+src/uu/expand/src/expand.…", 5, &var_138);
        
        if (!var_70)
        {
            uint64_t rax_10 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18);
            
            if (!rax_10)
            {
                alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                /* no return */
            }
            
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h79dbf9cf7e5723fa(&var_138, "---tabs=(uutils coreutils) 0.0.3…", 1);
            int64_t rax_11 = var_128;
            int64_t var_d8_1 = rax_11;
            int128_t zmm0_2 = var_138;
            var_e8 = zmm0_2;
            *(rax_10 + 0x10) = rax_11;
            *rax_10 = zmm0_2;
            var_138 = 1;
            var_130 = rax_10;
            var_128 = 1;
        }
        else
            core::iter::traits::iterator::Iterator::collect::h89ee29b9a9d35654(&var_138, &var_70);
        
        arg1[2] = var_128;
        *arg1 = var_138;
        arg1[1] = var_130;
        arg1[3] = var_148_1;
        arg1[4] = r14_1;
        arg1[5] = var_140_1;
        arg1[6] = rbp_2;
        arg1[7] = rax_9;
        arg1[8] = r15_2;
        arg1[9] = rax_4;
        *(arg1 + 0x49) = rax_5 ^ 1;
        *(arg1 + 0x4a) = var_154_1;
    }
    return arg1;
}
