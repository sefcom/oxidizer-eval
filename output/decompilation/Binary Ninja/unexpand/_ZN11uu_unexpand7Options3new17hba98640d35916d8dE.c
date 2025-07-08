
  int64_t* uu_unexpand::Options::new::hba98640d35916d8d(int64_t* arg1, void* arg2)

{
    int128_t var_198;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hbd246043b6daf010(
        &var_198, arg2, "tabsAutoBOLDBlue\x1b[4mSomedumb\x1b…", 4);
    int64_t var_e8;
    clap_builder::parser::error::MatchesError::unwrap::h9cfde3e4273ed929(&var_e8, 
        "tabsAutoBOLDBlue\x1b[4mSomedumb\x1b…", 4, &var_198);
    int128_t var_148;
    
    if (!var_e8)
    {
        int64_t* rax_2 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(8, 8);
        
        if (!rax_2)
        {
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
            /* no return */
        }
        
        *rax_2 = 8;
        alloc::slice::hack::into_vec::h55aa47da59082a8f(&var_148, rax_2, 1);
        goto label_4b1b7a;
    }
    
    int128_t var_b8;
    int128_t var_78_1 = var_b8;
    int128_t var_c8;
    int128_t var_88_1 = var_c8;
    int128_t var_d8;
    int128_t var_98_1 = var_d8;
    int128_t var_a8 = var_e8;
    int128_t var_1b8;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h94a4c0b45001b4d0(&var_1b8, &var_a8);
    void** var_1b0;
    int64_t var_1a8;
    alloc::str::join_generic_copy::h53cf3b33d1518b53(&var_198, var_1b0, var_1a8, 
        ",-allfirst-onlyno-utf8--first-on…", 1);
    int64_t var_188;
    int64_t var_f8_1 = var_188;
    int128_t var_108 = var_198;
    uu_unexpand::tabstops_parse::h79f903e022d9dc45(&var_198, *var_108[8], var_188);
    int128_t zmm0_3 = var_198;
    int64_t var_180;
    
    if (!var_198)
    {
        int64_t var_138 = var_180;
        var_148 = zmm0_3;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3bdde1cb9e2913b2(&var_108);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h472c5ae7f3c85b84(&var_1b8);
        label_4b1b7a:
        char rax_4 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "allfirst-onlyno-utf8--first-only…", 3);
        char rax_5;
        
        if (!rax_4)
            rax_5 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(arg2, "tabsAutoBOLDBlue\x1b[4mSomedumb\x1b…", 4);
        
        char rbp_1;
        
        if (!rax_4 && !rax_5)
            rbp_1 = 0;
        else
            rbp_1 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "first-onlyno-utf8--first-onlysrc…", 0xa) ^ 1;
        
        char rax_7 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "no-utf8--first-onlysrc/uu/unexpa…", 7);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hbd246043b6daf010(
            &var_198, arg2, "filei128 as dyn ERANGEEDEADLKENA…", 4);
        clap_builder::parser::error::MatchesError::unwrap::h9cfde3e4273ed929(&var_e8, 
            "filei128 as dyn ERANGEEDEADLKENA…", 4, &var_198);
        int128_t zmm0_5;
        
        if (!var_e8)
        {
            int128_t* rax_8 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(8, 0x18);
            
            if (!rax_8)
            {
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                /* no return */
            }
            
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hde6101a7564f34fb(
                &var_198, "-allfirst-onlyno-utf8--first-onl…", 1);
            var_1a8 = var_188;
            zmm0_5 = var_198;
            var_1b8 = zmm0_5;
            rax_8[1] = var_188;
            *rax_8 = zmm0_5;
            alloc::slice::hack::into_vec::h32000ed39324e2bf(&var_1b8, rax_8, 1);
        }
        else
        {
            int128_t var_38_1 = var_b8;
            int128_t var_48_1 = var_c8;
            int128_t var_58_1 = var_d8;
            int128_t var_68 = var_e8;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h63fb22ca47c48f7e(&var_1b8, &var_68);
        }
        
        zmm0_5 = var_1b8;
        var_198 = zmm0_5;
        var_180 = var_148;
        *arg1 = zmm0_5;
        int64_t var_178;
        arg1[4] = var_178;
        arg1[5] = var_138;
        arg1[2] = var_1a8;
        arg1[3] = var_180;
        arg1[6] = rbp_1;
        *(arg1 + 0x31) = rax_7 ^ 1;
    }
    else
    {
        arg1[3] = var_180;
        *(arg1 + 8) = zmm0_3;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3bdde1cb9e2913b2(&var_108);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h472c5ae7f3c85b84(&var_1b8);
    }
    return arg1;
}
