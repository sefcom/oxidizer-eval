
  int128_t* uu_nl::helper::parse_options::h06a5fa1f1b26e68c(int128_t* arg1, int64_t* arg2, void* arg3)

{
    int64_t var_d0 = 0;
    int64_t var_c8 = 8;
    int64_t var_c0 = 0;
    arg2[0x10] =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg3, 
        "no-renumberdescription() is depr…", 0xb);
    void* const var_108;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h9fd557f246527b84(
        &var_108, arg3, "section-delimiter:number-formatI…", 0x11);
    void* rax_1 = clap_builder::parser::error::MatchesError::unwrap::hbd6da3a7af6b6ad0(
        "section-delimiter:number-formatI…", 0x11, &var_108);
    int64_t var_100;
    int64_t var_f8;
    int64_t* var_b8;
    
    if (rax_1)
    {
        void* var_98 = rax_1;
        
        if (*(rax_1 + 0x10) != 1)
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
                &var_108, rax_1);
        else
        {
            var_b8 = &var_98;
            int64_t (* var_b0_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc35cb14290081d65;
            var_108 = &data_6d9f88;
            var_100 = 2;
            int64_t var_e8_1 = 0;
            int64_t** var_f8_1 = &var_b8;
            int64_t var_f0_1 = 1;
            int128_t var_48;
            core::option::Option$LT$T$GT$::map_or_else::h0a2f0cb8f97eeebd(&var_48, &var_108);
            var_108 = var_48;
            int64_t var_38;
            var_f8 = var_38;
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4abdf3701c16e9bb(&arg2[6]);
        arg2[8] = var_f8;
        *(arg2 + 0x30) = var_108;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h9fd557f246527b84(
        &var_108, arg3, &data_461770, 0x10);
    void* rax_4 = clap_builder::parser::error::MatchesError::unwrap::hbd6da3a7af6b6ad0(
        &data_461770, 0x10, &var_108);
    
    if (rax_4)
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone_from::h4a05e4567e966646(
            &arg2[9], rax_4);
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h9fd557f246527b84(
        &var_108, arg3, "number-formatInvalid line number…", 0xd);
    void* rax_5 = clap_builder::parser::error::MatchesError::unwrap::hbd6da3a7af6b6ad0(
        "number-formatInvalid line number…", 0xd, &var_108);
    
    if (!rax_5)
        rax_5 = 1;
    else
        rax_5 = core::ops::function::FnOnce::call_once::h937765a0df65f30a(rax_5);
    
    *(arg2 + 0x81) = rax_5;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h9fd557f246527b84(
        &var_108, arg3, "header-numberi", 0x10);
    void* rax_6 = clap_builder::parser::error::MatchesError::unwrap::hbd6da3a7af6b6ad0(
        "header-numberi", 0x10, &var_108);
    
    if (rax_6)
    {
        *(rax_6 + 0x10);
        char* rax_7;
        uint64_t rdx_4;
        rax_7 = core::ops::function::FnOnce::call_once::h15abc7b7abe22b04(*(rax_6 + 8));
        core::ops::function::FnOnce::call_once::hb333d555e2f01f4d(&var_108, rax_7, rdx_4);
        void* const rax_8 = var_108;
        
        if (rax_8 != -0x7fffffffffffffff)
        {
            if (rax_8 != -0x8000000000000000)
            {
                void* const var_90 = rax_8;
                int64_t var_88_1 = var_100;
                int64_t var_80_1 = var_f8;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h32d38cb1e0ac2383(&var_d0, &var_90);
            }
            else
            {
                core::ptr::drop_in_place$LT$uu_nl..NumberingStyle$GT$::hba651119877d43fd(*arg2, 
                    arg2[1]);
                *arg2 = var_100;
                arg2[1] = var_f8;
            }
        }
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h9fd557f246527b84(
        &var_108, arg3, "body-numberingnumber-widthno-ren…", 0xe);
    void* rax_9 = clap_builder::parser::error::MatchesError::unwrap::hbd6da3a7af6b6ad0(
        "body-numberingnumber-widthno-ren…", 0xe, &var_108);
    
    if (rax_9)
    {
        *(rax_9 + 0x10);
        char* rax_10;
        uint64_t rdx_6;
        rax_10 = core::ops::function::FnOnce::call_once::h15abc7b7abe22b04(*(rax_9 + 8));
        core::ops::function::FnOnce::call_once::hb333d555e2f01f4d(&var_108, rax_10, rdx_6);
        void* const rax_11 = var_108;
        
        if (rax_11 != -0x7fffffffffffffff)
        {
            if (rax_11 != -0x8000000000000000)
            {
                void* const var_78 = rax_11;
                int64_t var_70_1 = var_100;
                int64_t var_68_1 = var_f8;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h32d38cb1e0ac2383(&var_d0, &var_78);
            }
            else
            {
                core::ptr::drop_in_place$LT$uu_nl..NumberingStyle$GT$::hba651119877d43fd(arg2[2], 
                    arg2[3]);
                arg2[2] = var_100;
                arg2[3] = var_f8;
            }
        }
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h9fd557f246527b84(
        &var_108, arg3, &data_460e70, 0x10);
    void* rax_12 = clap_builder::parser::error::MatchesError::unwrap::hbd6da3a7af6b6ad0(
        &data_460e70, 0x10, &var_108);
    
    if (rax_12)
    {
        *(rax_12 + 0x10);
        char* rax_13;
        uint64_t rdx_8;
        rax_13 = core::ops::function::FnOnce::call_once::h15abc7b7abe22b04(*(rax_12 + 8));
        core::ops::function::FnOnce::call_once::hb333d555e2f01f4d(&var_108, rax_13, rdx_8);
        void* const rax_14 = var_108;
        
        if (rax_14 != -0x7fffffffffffffff)
        {
            if (rax_14 != -0x8000000000000000)
            {
                void* const var_60 = rax_14;
                int64_t var_58_1 = var_100;
                int64_t var_50_1 = var_f8;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h32d38cb1e0ac2383(&var_d0, &var_60);
            }
            else
            {
                core::ptr::drop_in_place$LT$uu_nl..NumberingStyle$GT$::hba651119877d43fd(arg2[4], 
                    arg2[5]);
                arg2[4] = var_100;
                arg2[5] = var_f8;
            }
        }
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h317836ece4e1d627(
        &var_108, arg3, "number-widthno-renumberdescripti…", 0xc);
    int64_t* rax_15 = clap_builder::parser::error::MatchesError::unwrap::h6a78314316764992(
        "number-widthno-renumberdescripti…", 0xc, &var_108);
    
    if (rax_15)
    {
        int64_t rax_16 = *rax_15;
        
        if (!rax_16)
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h44c9454a11a431b7(
                &var_108, "Invalid line number field width:…", 0x47);
            int64_t var_a8_1 = var_f8;
            var_b8 = var_108;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h32d38cb1e0ac2383(&var_d0, &var_b8);
        }
        else
            arg2[0xf] = rax_16;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5fc9f16b33f0a403(
        &var_108, arg3, "join-blank-lines", 0x10);
    int64_t* rax_18 = clap_builder::parser::error::MatchesError::unwrap::h5ce44c2cd6f84e85(
        "join-blank-lines", 0x10, &var_108);
    
    if (rax_18)
    {
        int64_t rax_19 = *rax_18;
        
        if (!rax_19)
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h44c9454a11a431b7(
                &var_108, "Invalid line number of blank lin…", 0x4a);
            int64_t var_a8_2 = var_f8;
            var_b8 = var_108;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h32d38cb1e0ac2383(&var_d0, &var_b8);
        }
        else
            arg2[0xe] = rax_19;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h559ca5751dacbf50(
        &var_108, arg3, "line-incrementstarting-line-numb…", 0xe);
    int64_t* rax_21 = clap_builder::parser::error::MatchesError::unwrap::h07d1e4ab11518c4d(
        "line-incrementstarting-line-numb…", 0xe, &var_108);
    
    if (rax_21)
        arg2[0xd] = *rax_21;
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h559ca5751dacbf50(
        &var_108, arg3, "starting-line-numberbody-numberi…", 0x14);
    int64_t* rax_23 = clap_builder::parser::error::MatchesError::unwrap::h07d1e4ab11518c4d(
        "starting-line-numberbody-numberi…", 0x14, &var_108);
    
    if (rax_23)
        arg2[0xc] = *rax_23;
    
    arg1[1] = var_c0;
    *arg1 = var_d0;
    return arg1;
}
