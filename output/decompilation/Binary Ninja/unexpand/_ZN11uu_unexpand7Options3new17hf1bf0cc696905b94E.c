
  int64_t* uu_unexpand::Options::new::hf1bf0cc696905b94(int64_t* arg1, void* arg2)

{
    int64_t var_f8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::he0961343de247fbc(
        &var_f8, arg2, "tabskindAuto/");
    int64_t var_b0;
    clap_builder::parser::error::MatchesError::unwrap::h976a16b1bbc48cd2(&var_b0, "tabskindAuto/", 
        &var_f8);
    uint64_t var_120_1;
    uint64_t r14;
    int64_t r15;
    
    if (!var_b0)
    {
        uint64_t rax_1 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 8);
        
        if (!rax_1)
        {
            alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
            /* no return */
        }
        
        r14 = rax_1;
        *rax_1 = 8;
        r15 = 1;
        var_120_1 = 1;
        goto label_45c06b;
    }
    
    int64_t var_118;
    core::iter::traits::iterator::Iterator::collect::h12c5088a8e54daad(&var_118, &var_b0);
    int64_t var_110;
    int64_t var_108;
    alloc::str::join_generic_copy::h4bdcd1fe093f8537(&var_f8, var_110, var_108);
    int64_t r13_1 = var_f8;
    uint64_t var_f0;
    uint64_t var_e8;
    uu_unexpand::tabstops_parse::hd6618068ebda3834(&var_f8, var_f0, var_e8);
    r14 = var_e8;
    int64_t var_e0;
    r15 = var_e0;
    
    if (var_f8 != 1)
    {
        var_120_1 = var_f0;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h625eac06eaa5da8a(r13_1, var_f0);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h6f04e0b44dc68fa1(var_118, 
            var_110);
        label_45c06b:
        char rax_2 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "allfirst-onlyno-utf8--first-only…", 3);
        char rax_3;
        
        if (!rax_2)
            rax_3 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(arg2, "tabskindAuto/", 4);
        
        char rbp_2;
        
        if (!rax_2 && !rax_3)
            rbp_2 = 0;
        else
            rbp_2 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "first-onlyno-utf8--first-only--a…", 0xa) ^ 1;
        
        char rax_5 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "no-utf8--first-only--all-a--tabs…", 7);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::he0961343de247fbc(
            &var_f8, arg2, "filei128 as dyn ERANGEEDEADLKENA…");
        int64_t var_70;
        clap_builder::parser::error::MatchesError::unwrap::h976a16b1bbc48cd2(&var_70, 
            "filei128 as dyn ERANGEEDEADLKENA…", &var_f8);
        
        if (!var_70)
        {
            uint64_t rax_6 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18);
            
            if (!rax_6)
            {
                alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                /* no return */
            }
            
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc756f0904f45cd83(&var_f8, "-allfirst-onlyno-utf8--first-onl…", 1);
            uint64_t var_108_1 = var_e8;
            int128_t zmm0_1 = var_f8;
            var_118 = zmm0_1;
            *(rax_6 + 0x10) = var_e8;
            *rax_6 = zmm0_1;
            var_f8 = 1;
            var_f0 = rax_6;
            var_e8 = 1;
        }
        else
            core::iter::traits::iterator::Iterator::collect::h0bbe8ac7f0e34b78(&var_f8, &var_70);
        
        arg1[2] = var_e8;
        *arg1 = var_f8;
        arg1[1] = var_f0;
        arg1[3] = var_120_1;
        arg1[4] = r14;
        arg1[5] = r15;
        arg1[6] = rbp_2;
        *(arg1 + 0x31) = rax_5 ^ 1;
    }
    else
    {
        arg1[1] = var_f0;
        arg1[2] = r14;
        arg1[3] = r15;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h625eac06eaa5da8a(r13_1, var_f0);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h6f04e0b44dc68fa1(var_118, 
            var_110);
    }
    
    return arg1;
}
