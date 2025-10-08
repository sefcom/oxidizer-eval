
  uint64_t uu_mknod::uumain::uumain::h8bac4110a78873ab(int64_t arg1)

{
    int64_t var_2f8;
    uu_mknod::uu_app::hee70adc3caf76ce8(&var_2f8);
    int64_t var_368;
    clap_builder::builder::command::Command::try_get_matches_from::h289aca8891c7068e(&var_368, 
        &var_2f8, arg1);
    int64_t rax = var_368;
    int64_t var_360;
    
    if (-(rax) == -0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_360);
    
    int64_t var_338;
    int64_t var_2c8_1 = var_338;
    int128_t var_348;
    int128_t var_2d8_1 = var_348;
    int128_t var_358;
    int128_t var_2e8_1 = var_358;
    var_2f8 = rax;
    int64_t var_2f0_1 = var_360;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h38284f151a0a499a(
        &var_368, &var_2f8);
    char* rax_2 = clap_builder::parser::error::MatchesError::unwrap::h9155c14b9f8116ea(&var_368);
    
    if (!rax_2)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h25662513e2f00d8f(
        &var_368, &var_2f8, "modei128 as dyn ERANGEEDEADLKENA…", 4);
    int64_t var_328;
    uu_mknod::get_mode::h084d65bfd1ad9130(&var_328, 
        clap_builder::parser::error::MatchesError::unwrap::h2b5599b1a5538d8c(
            "modei128 as dyn ERANGEEDEADLKENA…", 4, &var_368));
    uint64_t result;
    int64_t var_318;
    
    if (var_328 != -0x8000000000000000)
    {
        var_358 = var_318;
        var_368 = var_328;
        *var_358[8] = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h578be4e3f767067e(&var_368);
    }
    else
    {
        int32_t var_320;
        int32_t r13_2 = var_320 | *(&data_418c10 + (*rax_2 << 2));
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h25662513e2f00d8f(
            &var_368, &var_2f8, "name\x1b[0mtypeCyan    TYPE"`$\M…", 4);
        void* rax_5 = clap_builder::parser::error::MatchesError::unwrap::h2b5599b1a5538d8c(
            "name\x1b[0mtypeCyan    TYPE"`$\M…", 4, &var_368);
        
        if (!rax_5)
        {
            core::option::expect_failed::h3f620cfb8545dc61("Missing argument 'NAME'Special f…");
            /* no return */
        }
        
        char rax_6 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_2f8, "zcontextmajorminorError flushing…", 1);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h25662513e2f00d8f(
            &var_368, &var_2f8, "contextmajorminorError flushing …", 7);
        int64_t rax_7 = clap_builder::parser::error::MatchesError::unwrap::h2b5599b1a5538d8c(
            "contextmajorminorError flushing …", 7, &var_368);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hbd78f7399cdddd97(
            &var_368, &var_2f8, "majorminorError flushing stdout:…");
        int64_t* rax_8 = clap_builder::parser::error::MatchesError::unwrap::hedcac43209d69138(
            "majorminorError flushing stdout:…", &var_368);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hbd78f7399cdddd97(
            &var_368, &var_2f8, "minorError flushing stdout: ");
        int64_t* rax_9 = clap_builder::parser::error::MatchesError::unwrap::hedcac43209d69138(
            "minorError flushing stdout: ", &var_368);
        uint64_t result_1;
        int64_t rcx_4;
        
        if (*rax_2 != 2)
        {
            if (!(!rax_8 | !rax_9))
            {
                int32_t rcx_5 = *rax_8;
                int64_t rax_14 = *rax_9;
                rcx_4 = (rcx_5 & 0xfffff000) << 0x20 | (rcx_5 << 8 & 0xfff00) | rax_14
                    | (rax_14 << 0xc & 0xfffffffffff00000);
                label_455832:
                rax_9 = rax_7;
                int32_t var_300_1 = r13_2;
                int64_t var_310 = rcx_4;
                char var_2fc_1 = rax_6 | rax_9;
                int64_t var_308_1 = rax_7;
                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(
                    uu_mknod::mknod::hdf9c77b8560e7a8d(*(rax_5 + 8), *(rax_5 + 0x10), &var_310));
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he060d05a78b6eee0(&var_2f8);
                return 0;
            }
            
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd50611e5f037eb86(&var_328, "Special files require major and …", 0x35);
            var_358 = var_318;
            var_368 = var_328;
            *var_358[8] = 1;
            result_1 = alloc::boxed::Box$LT$T$GT$::new::h578be4e3f767067e(&var_368);
        }
        else
        {
            if (!(rax_8 | rax_9))
            {
                rcx_4 = 0;
                goto label_455832;
            }
            
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd50611e5f037eb86(&var_328, "Fifos do not have major and mino…", 0x31);
            var_358 = var_318;
            var_368 = var_328;
            *var_358[8] = 1;
            result_1 = alloc::boxed::Box$LT$T$GT$::new::h578be4e3f767067e(&var_368);
        }
        result = result_1;
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he060d05a78b6eee0(&var_2f8);
    return result;
}
