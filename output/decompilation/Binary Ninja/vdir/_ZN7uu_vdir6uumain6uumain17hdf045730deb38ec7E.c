
  int128_t* uu_vdir::uumain::uumain::hdf045730deb38ec7(int64_t arg1)

{
    void var_2f0;
    uu_vdir::uu_app::h6da77666f02c6fa6(&var_2f0);
    void var_5a0;
    clap_builder::builder::command::Command::get_matches_from::hb66e60ee26842220(&var_5a0, 
        &var_2f0, arg1);
    char rbx_1;
    
    if (clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(
            &var_5a0, "quoting-stylehide-control-charss…", 0xd))
        rbx_1 = 0;
    else if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_5a0, "quote-name", 0xa))
        rbx_1 = 0;
    else if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_5a0, "escapeliteralquote-name", 6))
        rbx_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_5a0, "literalquote-name", 7) ^ 1;
    else
        rbx_1 = 0;
    
    char rbp;
    
    if (clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(
            &var_5a0, "formatignore-backupsdirectoryino…", 6))
        rbp = 0;
    else if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_5a0, "xtabsizemgonumeric-uid-giducFata…", 1))
        rbp = 0;
    else if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_5a0, "Cxtabsizemgonumeric-uid-giducFat…", 1))
        rbp = 0;
    else if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_5a0, "mgonumeric-uid-giducFatal intern…", 1))
        rbp = 0;
    else if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_5a0, "long\x1b[7m", 4))
        rbp = 0;
    else if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_5a0, "onumeric-uid-giducFatal internal…", 1))
        rbp = 0;
    else if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_5a0, "gonumeric-uid-giducFatal interna…", 1))
        rbp = 0;
    else if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_5a0, "numeric-uid-giducFatal internal …", 0xf))
        rbp = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_5a0, "1Cxtabsizemgonumeric-uid-giducFa…", 1) ^ 1;
    else
        rbp = 0;
    
    int64_t var_4f8;
    uu_ls::Config::from::h304081f9da8d7174(&var_4f8, &var_5a0);
    int64_t r12 = var_4f8;
    int128_t* result_1;
    int128_t* result = result_1;
    
    if (r12 != -0x8000000000000000)
    {
        void var_4e0;
        void var_3d8;
        memcpy(&var_3d8, &var_4e0, 0xe8);
        int64_t var_3f0 = r12;
        int128_t* result_2 = result;
        int64_t var_4e8;
        int64_t var_3e0_1 = var_4e8;
        
        if (rbx_1)
        {
            char var_2fb_1 = 0;
            char var_2f9_1 = 2;
        }
        
        if (rbp)
            char var_2f8_1 = 1;
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h68f93de5f4174f94(
            &var_4f8, &var_5a0, "pathsindicator-styletime-stylefu…", 5);
        int64_t var_538;
        clap_builder::parser::error::MatchesError::unwrap::hac80e085b8972775(&var_538, 
            "pathsindicator-styletime-stylefu…", 5, &var_4f8);
        int64_t var_568;
        int128_t var_560;
        
        if (!var_538)
            uu_vdir::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h0d6d4d4f8b23538a(&var_568);
        else
        {
            int128_t var_508;
            int128_t var_4c8_1 = var_508;
            int128_t var_518;
            int128_t var_4d8_1 = var_518;
            int128_t var_528;
            var_4e8 = var_528;
            var_4f8 = var_538;
            int64_t var_550;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hc94dea1372631127(&var_550, &var_4f8);
            int128_t var_548;
            var_560 = var_548;
            var_568 = var_550;
        }
        
        int64_t var_4e8_1 = *var_560[8];
        var_4f8 = var_568;
        int64_t var_4f0 = var_560;
        int128_t* result_3;
        int64_t rdx_1;
        result_3 = uu_ls::list::h6ddc1ea5566af8cc(&var_4f8, &var_3f0);
        result = result_3;
        core::ptr::drop_in_place$LT$uu_ls..Config$GT$::hd4404c6f8c794faa(&var_3f0);
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hecf564f07f4c5e01(&var_5a0);
    return result;
}
