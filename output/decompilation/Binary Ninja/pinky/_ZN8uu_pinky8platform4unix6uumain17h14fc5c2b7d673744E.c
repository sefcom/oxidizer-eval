
  uint64_t uu_pinky::platform::unix::uumain::h14fc5c2b7d673744(int64_t arg1)

{
    int64_t var_5c8;
    uu_pinky::uu_app::h9b5aedf0ae42f9c0(&var_5c8);
    void var_620;
    uu_pinky::platform::unix::get_long_usage::h16a5dc7b91b320ad(&var_620);
    int64_t var_2f8;
    clap_builder::builder::command::Command::after_help::h7d18fa41402d9ced(&var_2f8, &var_5c8, 
        &var_620);
    int64_t var_658;
    clap_builder::builder::command::Command::try_get_matches_from::h8b3f5ac8598db0e4(&var_658, 
        &var_2f8, arg1);
    int64_t rax = var_658;
    int64_t var_650;
    
    if (-(rax) == -0x8000000000000000)
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_650);
    
    int64_t var_628;
    int64_t var_2c8 = var_628;
    int128_t var_638;
    int128_t var_2d8 = var_638;
    int128_t var_648;
    int128_t var_2e8 = var_648;
    var_2f8 = rax;
    int64_t var_2f0 = var_650;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h6ee6d3caced80a15(
        &var_5c8, &var_2f8);
    int64_t var_608;
    clap_builder::parser::error::MatchesError::unwrap::h7ff00ef725b8884c(&var_608, &var_5c8);
    int128_t var_5c0;
    
    if (!var_608)
    {
        var_658 = 0;
        int64_t var_650_1 = 8;
        var_648 = 0;
    }
    else
    {
        core::iter::traits::iterator::Iterator::collect::hba2b4f9fab664ec6(&var_5c8, &var_608);
        var_650 = var_5c0;
        var_658 = var_5c8;
    }
    
    char rax_3 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_2f8, "omit_headingsomit_project_fileom…", 0xd);
    char rax_4 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_2f8, "omit_project_fileomit_plan_fileo…", 0x11);
    char rax_5 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_2f8, "omit_plan_fileomit_home_dirlong_…", 0xe);
    char rax_6 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_2f8, "omit_home_dirlong_formatomit_nam…", 0xd);
    char rax_7 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_2f8, "long_formatomit_nameomit_name_ho…", 0xb);
    char rax_8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_2f8, "omit_nameomit_name_hostomit_name…", 9);
    char rax_9 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_2f8, "omit_name_hostomit_name_host_tim…", 0xe);
    char rax_10 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_2f8, "omit_name_host_timeError flushin…", 0x13);
    char r12 = rax_9 | rax_10;
    *var_5c0[8] = var_648;
    var_5c8 = var_658;
    char var_5b0 = rax_10 ^ 1;
    char var_5af = rax_3 ^ 1;
    char var_5ae = (r12 | rax_8) ^ 1;
    char var_5ad = rax_4 ^ 1;
    char var_5ac = rax_5 ^ 1;
    char var_5ab = r12 ^ 1;
    char var_5aa = rax_6 ^ 1;
    uint64_t result;
    
    if (!rax_7)
    {
        if (!uu_pinky::platform::unix::Pinky::short_pinky::h4032f022447522d5(&var_5c8))
            result = 0;
        else
            result = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hbf0213f3ca9099fe();
    }
    else
    {
        uu_pinky::platform::unix::Pinky::long_pinky::hd848aae237e2c0a5(&var_5c8);
        result = 0;
    }
    
    core::ptr::drop_in_place$LT$uu_pinky..platform..unix..Pinky$GT$::hf6eb8645c4897643(&var_5c8);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf479493a265706d7(&var_2f8);
    return result;
}
