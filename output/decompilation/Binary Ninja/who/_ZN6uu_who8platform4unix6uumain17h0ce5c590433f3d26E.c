
  int64_t uu_who::platform::unix::uumain::h0ce5c590433f3d26(int64_t arg1)

{
    int64_t var_2f8;
    uu_who::uu_app::h66b593fcffc444f9(&var_2f8);
    void var_618;
    uu_who::platform::unix::get_long_usage::had9fcc63344d3619(&var_618);
    int64_t var_5c0;
    clap_builder::builder::command::Command::after_help::h10203b70564a15be(&var_5c0, &var_2f8, 
        &var_618);
    int64_t var_650;
    clap_builder::builder::command::Command::try_get_matches_from::h778888cd595d27d0(&var_650, 
        &var_5c0, arg1);
    int64_t rax = var_650;
    int64_t var_648;
    
    if (-(rax) == -0x8000000000000000)
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_648);
    
    int64_t var_620;
    int64_t var_590 = var_620;
    int128_t var_630;
    int128_t var_5a0 = var_630;
    int128_t var_640;
    int128_t var_5b0 = var_640;
    var_5c0 = rax;
    int64_t var_5b8 = var_648;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hb26010e58287709b(
        &var_2f8, &var_5c0);
    int64_t var_600;
    clap_builder::parser::error::MatchesError::unwrap::h12a87886debc1fc8(&var_600, &var_2f8);
    int128_t var_2f0;
    
    if (!var_600)
    {
        var_650 = 0;
        int64_t var_648_1 = 8;
        var_640 = 0;
    }
    else
    {
        core::iter::traits::iterator::Iterator::collect::h46fe471172d293d5(&var_2f8, &var_600);
        var_648 = var_2f0;
        var_650 = var_2f8;
    }
    
    char rax_3 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_5c0, "lookupcountallheadingloginproces…", 6);
    char rax_4 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_5c0, "countallheadingloginprocessusers…", 5);
    uint32_t rax_5 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_5c0, "allheadingloginprocessusersonly_…", 3);
    char rax_6 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_5c0, "headingloginprocessusersonly_hos…", 7);
    char var_668;
    uint32_t rbx_1;
    char rbp;
    uint64_t r12;
    
    if (!rax_5)
    {
        char rax_7 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_5c0, "mesgdeadkeyscaseu128for<\x1b[1mK…", 4);
        char rax_8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_5c0, "bootBlue\x1b[4mfullbaseSomedumb\x1b…", 4);
        char rax_9 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_5c0, "deadkeyscaseu128for<\x1b[1mKindb…", 4);
        char rax_10 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_5c0, "loginprocessusersonly_hostname_u…", 5);
        char rax_11 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_5c0, "processusersonly_hostname_user/h…", 7);
        char rax_12 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_5c0, "timecodetip:\x1b[3mmesgdeadkeysc…", 4);
        char rax_13 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_5c0, "runlevelextern "# users=ENOTUNIQ…", 8);
        char r12_1;
        
        if (!(rax_12 | rax_13 | rax_10 | rax_11 | rax_8 | rax_9))
            r12_1 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_5c0, "usersonly_hostname_user/home/34r…", 5) ^ 1;
        else
            r12_1 = 0;
        
        uint32_t rax_18 = r12_1;
        rbx_1 = rax_18;
        
        if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_5c0, "usersonly_hostname_user/home/34r…", 5))
            rbx_1 = 1;
        
        r12 = rbx_1;
        
        if (rax_13)
            r12 = 1;
        
        if (rax_10)
            r12 = 1;
        
        rbp = 0;
        
        if (rax_9)
            r12 = 1;
        
        if (!rax_9)
            rbp = rax_18;
        
        uint128_t zmm0_4 = _mm_shufflelo_epi16(
            _mm_insert_epi16(
                _mm_insert_epi16(
                    _mm_insert_epi16(
                        _mm_insert_epi16(_mm_insert_epi16(rax_9 << 0x10 | rax_7, rax_8, 2), rax_10, 
                            4), 
                        rax_11, 5), 
                    rax_12, 6), 
                rax_13, 7), 
            0x64) & data_4189b0;
        var_668 = _mm_packus_epi16(zmm0_4, zmm0_4);
    }
    else
    {
        var_668 = data_4188b0;
        r12 = 1;
        rbp = 0;
        rbx_1 = 1;
    }
    
    bool rcx_8 = true;
    
    if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_5c0, "only_hostname_user/home/34r7hm4n…", 0x12))
        rcx_8 = var_640 == 2;
    
    *var_2f0[8] = var_640;
    var_2f8 = var_650;
    char var_2e0 = rax_3;
    char var_2df = rax_4;
    char var_2de = rbp;
    char var_2dd = r12;
    char var_2dc = rax_6;
    int64_t var_2db = var_668;
    char var_2d3 = rbx_1;
    bool var_2d2 = rcx_8;
    int64_t result;
    int64_t rdx_4;
    result = uu_who::platform::unix::Who::exec::hfa7301829d97906e(&var_2f8);
    core::ptr::drop_in_place$LT$uu_who..platform..unix..Who$GT$::h0c02ef86784fcfa2(&var_2f8);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h80080c2e7de54405(&var_5c0);
    return result;
}
