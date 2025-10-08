
  uint64_t uu_dir::uumain::uumain::hc337ed06cf1232a0(int64_t arg1)

{
    void var_2f0;
    uu_dir::uu_app::h86e6a124718e5635(&var_2f0);
    void var_598;
    clap_builder::builder::command::Command::get_matches_from::h6d0400961aaa8a70(&var_598, 
        &var_2f0, arg1);
    char rbx_1;
    
    if (clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
            &var_598, "quoting-stylehide-control-charss…", 0xd))
        rbx_1 = 0;
    else if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_598, "quote-namepfile-typedereferenced…", 0xa))
        rbx_1 = 0;
    else if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_598, "escapeliteralquote-namepfile-typ…", 6))
        rbx_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_598, "literalquote-namepfile-typederef…", 7) ^ 1;
    else
        rbx_1 = 0;
    
    char rbp;
    
    if (clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
            &var_598, "formatignore-backupsdirectoryino…", 6))
        rbp = 0;
    else if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_598, "xtabsizemgonumeric-uid-gidallalm…", 1))
        rbp = 0;
    else if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_598, "Cxtabsizemgonumeric-uid-gidallal…", 1))
        rbp = 0;
    else if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_598, "mgonumeric-uid-gidallalmost-allS…", 1))
        rbp = 0;
    else if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_598, "long', 'FFMTZero\x1b[7mauto", 4))
        rbp = 0;
    else if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_598, "onumeric-uid-gidallalmost-allStU…", 1))
        rbp = 0;
    else if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_598, "gonumeric-uid-gidallalmost-allSt…", 1))
        rbp = 0;
    else if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_598, "numeric-uid-gidallalmost-allStUv…", 0xf))
        rbp = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_598, "1Cxtabsizemgonumeric-uid-gidalla…", 1) ^ 1;
    else
        rbp = 0;
    
    int64_t var_548;
    uu_ls::Config::from::h82af185516eb5913(&var_548, &var_598);
    int64_t r12 = var_548;
    uint64_t result_1;
    uint64_t result = result_1;
    
    if (-(r12) != -0x8000000000000000)
    {
        void var_530;
        void var_3e0;
        memcpy(&var_3e0, &var_530, 0xf0);
        int64_t var_3f8 = r12;
        uint64_t result_2 = result;
        int64_t var_538;
        int64_t var_3e8_1 = var_538;
        
        if (rbx_1)
            int16_t var_2fc_1 = 2;
        
        if (rbp)
            char var_2f8_1 = 0;
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hb94bcc347e2ab74f(
            &var_548, &var_598, "pathsindicator-styletime-stylefu…", 5);
        int64_t var_438;
        clap_builder::parser::error::MatchesError::unwrap::h504aa377127d19ac(&var_438, 
            "pathsindicator-styletime-stylefu…", 5, &var_548);
        int64_t var_560;
        int128_t var_558;
        
        if (!var_438)
            uu_dir::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::he0cf39fca549366a(&var_560);
        else
        {
            core::iter::traits::iterator::Iterator::collect::h5654be82f1690a47(&var_548, &var_438);
            var_558 = result_1;
            var_560 = var_548;
        }
        
        int64_t var_538_1 = *var_558[8];
        var_548 = var_560;
        int64_t var_540 = var_558;
        uint64_t result_3;
        int64_t rdx_1;
        result_3 = uu_ls::list::hbc04f019ee17b84a(&var_548, &var_3f8);
        result = result_3;
        core::ptr::drop_in_place$LT$uu_ls..Config$GT$::h5689a6b3bc42293a(&var_3f8);
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h626df2bee537cf83(&var_598);
    return result;
}
