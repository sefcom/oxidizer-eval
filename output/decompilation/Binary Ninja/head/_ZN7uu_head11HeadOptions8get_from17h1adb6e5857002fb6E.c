
  int128_t* uu_head::HeadOptions::get_from::h1adb6e5857002fb6(int128_t* arg1, void* arg2)

{
    int32_t var_108 = 0xa000000;
    int64_t var_130 = 0;
    int64_t var_128 = 0xa;
    int64_t var_120 = 0;
    int64_t var_118 = 8;
    int64_t var_110 = 0;
    var_108 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        arg2, "QUIETquietsilentnever print head…", 5);
    *var_108[1] =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "VERBOSEverbosealways print heade…", 7);
    char rax_3 = 0xa;
    
    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
            "ZEROu128for<keysKindboolmut \x1b…", 4))
        rax_3 = 0;
    
    *var_108[3] = rax_3;
    *var_108[2] =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "-PRESUME-INPUT-PIPEpresume-input…", 0x13);
    int64_t var_100;
    uu_head::Mode::from::h53e4fee035ad00ee(&var_100, arg2);
    int64_t rdx = var_100;
    int64_t var_f8;
    int64_t var_f0;
    
    if (rdx != -0x8000000000000000)
    {
        *(arg1 + 8) = rdx;
        arg1[1] = var_f8;
        *(arg1 + 0x18) = var_f0;
        *arg1 = 4;
        core::ptr::drop_in_place$LT$uu_head..HeadOptions$GT$::he2adba56d7eff629(&var_130);
    }
    else
    {
        var_130 = var_f8;
        int64_t var_128_1 = var_f0;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::ha4c1e75b78057a64(
            &var_100, arg2, "FILE -> \x1b[2mAnsi -- \x1b[8mhe…", 4);
        int64_t var_b8;
        clap_builder::parser::error::MatchesError::unwrap::h8f4dae56b5df2536(&var_b8, 
            "FILE -> \x1b[2mAnsi -- \x1b[8mhe…", 4, &var_100);
        
        if (!var_b8)
        {
            int128_t* rax_6 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(0x18);
            
            if (!rax_6)
            {
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                /* no return */
            }
            
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h06f047f66f37fa7f(
                &var_100);
            int64_t var_68_1 = var_f0;
            int128_t zmm0_2 = var_100;
            int128_t var_78_1 = zmm0_2;
            rax_6[1] = var_f0;
            *rax_6 = zmm0_2;
            alloc::slice::hack::into_vec::h74676bea9ecbbd9e(&var_100, rax_6, 1);
        }
        else
        {
            int128_t var_88;
            int128_t var_28_1 = var_88;
            int128_t var_98;
            int128_t var_38_1 = var_98;
            int128_t var_a8;
            int128_t var_48_1 = var_a8;
            int128_t var_58 = var_b8;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h37bc116ad277ef43(&var_100, &var_58);
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h206ae2e6ae342018(&var_120);
        var_120 = var_100;
        int128_t zmm0_3 = var_130;
        int128_t zmm1_2 = var_120;
        arg1[2] = var_f0;
        arg1[1] = zmm1_2;
        *arg1 = zmm0_3;
    }
    return arg1;
}
