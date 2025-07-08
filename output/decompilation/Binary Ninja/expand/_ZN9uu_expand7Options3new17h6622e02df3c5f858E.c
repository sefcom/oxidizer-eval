
  int64_t* uu_expand::Options::new::h6622e02df3c5f858(int64_t* arg1, void* arg2)

{
    int64_t var_168;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hb1d755c6d452e1a4(
        &var_168, arg2, "tabsAutoBOLDBlue\x1b[4mSomedumb\x1b…", 4);
    int64_t var_e8;
    clap_builder::parser::error::MatchesError::unwrap::h87985dbbd5a93980(&var_e8, 
        "tabsAutoBOLDBlue\x1b[4mSomedumb\x1b…", 4, &var_168);
    int128_t var_188;
    char r12;
    
    if (!var_e8)
    {
        int64_t* rax_1 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(8, 8);
        
        if (!rax_1)
        {
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
            /* no return */
        }
        
        *rax_1 = 8;
        alloc::slice::hack::into_vec::hc80358b1381473c5(&var_188, rax_1, 1);
        r12 = 0;
        goto label_4b1ef4;
    }
    
    int128_t var_b8;
    int128_t var_78_1 = var_b8;
    int128_t var_c8;
    int128_t var_88_1 = var_c8;
    int128_t var_d8;
    int128_t var_98_1 = var_d8;
    int128_t var_a8 = var_e8;
    void var_100;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::ha117f13ef90b4767(&var_100, &var_a8);
    int128_t var_1c8;
    void** var_f8;
    int64_t var_f0;
    alloc::str::join_generic_copy::h7514b7f1927be4b5(&var_1c8, var_f8, var_f0, 
        ",- --tabs=0.0.28Convert tabs in …", 1);
    int64_t var_1b8;
    int64_t var_108_1 = var_1b8;
    int128_t var_118 = var_1c8;
    uu_expand::tabstops_parse::h8e62973a242abc7f(&var_168, *var_118[8], var_1b8);
    bool cond:0_1 = !var_168;
    char var_160;
    r12 = var_160;
    int128_t var_15f;
    int128_t var_1a8 = var_15f;
    var_1a8 = var_15f;
    int128_t var_140;
    
    if (cond:0_1)
    {
        var_188 = var_1a8;
        int64_t var_191;
        int64_t var_178 = var_191;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha7a8555218b598c1(&var_118);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h739ff71e9f88f60a(&var_100);
        label_4b1ef4:
        var_1c8 = var_188;
        char rax_4 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "initialno-utf8FILESfailed to wri…", 7);
        char rax_5 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "no-utf8FILESfailed to write outp…", 7);
        int64_t rax_6 = *var_1c8[8];
        var_168 = rax_6;
        var_160 = rax_6 + (var_178 << 3);
        *var_15f[7] = 0;
        int64_t rax_7;
        uint64_t rdx_3;
        rax_7 = core::iter::traits::iterator::Iterator::reduce::hbc40c7c3e90a5c5b(&var_168);
        
        if (!rax_7)
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&var_188, 
            " --tabs=0.0.28Convert tabs in ea…", 1, rdx_3);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hb1d755c6d452e1a4(
            &var_168, arg2, "FILESfailed to write outputcapac…", 5);
        clap_builder::parser::error::MatchesError::unwrap::h87985dbbd5a93980(&var_e8, 
            "FILESfailed to write outputcapac…", 5, &var_168);
        int64_t var_198;
        int128_t zmm0_6;
        
        if (!var_e8)
        {
            int128_t* rax_8 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(8, 0x18);
            
            if (!rax_8)
            {
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                /* no return */
            }
            
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8a3539b285686873(
                &var_168, "- --tabs=0.0.28Convert tabs in e…", 1);
            int64_t rax_9 = *var_15f[7];
            var_198 = rax_9;
            zmm0_6 = var_168;
            var_1a8 = zmm0_6;
            rax_8[1] = rax_9;
            *rax_8 = zmm0_6;
            alloc::slice::hack::into_vec::h5cf9c57446dfe35f(&var_1a8, rax_8, 1);
        }
        else
        {
            int128_t var_38_1 = var_b8;
            int128_t var_48_1 = var_c8;
            int128_t var_58_1 = var_d8;
            int128_t var_68 = var_e8;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h37edc664cc2afb29(&var_1a8, &var_68);
        }
        
        *var_15f[7] = var_198;
        zmm0_6 = var_1a8;
        var_168 = zmm0_6;
        var_140 = var_178;
        var_15f = var_1c8;
        int64_t var_128_1 = var_178;
        int128_t zmm1_3 = var_188;
        arg1[8] = var_178;
        *(arg1 + 0x30) = zmm1_3;
        *arg1 = zmm0_6;
        int64_t var_148;
        arg1[4] = var_148;
        arg1[5] = zmm1_3;
        *(arg1 + 0x10) = var_15f;
        arg1[9] = rax_4;
        *(arg1 + 0x49) = rax_5 ^ 1;
        *(arg1 + 0x4a) = r12;
    }
    else
    {
        *(arg1 + 0x28) = var_140;
        *(arg1 + 0x18) = var_1a8;
        *(arg1 + 9) = var_1a8;
        arg1[1] = r12;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha7a8555218b598c1(&var_118);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h739ff71e9f88f60a(&var_100);
    }
    return arg1;
}
