
  fn uu_pinky::platform::unix::uumain::h14fc5c2b7d673744(arg1: i64) -> u64

{
    let mut var_5c8: i64;
    uu_pinky::uu_app::h9b5aedf0ae42f9c0(&var_5c8);
    let mut var_620: ();
    uu_pinky::platform::unix::get_long_usage::h16a5dc7b91b320ad(&var_620);
    let mut var_2f8: i64;
    clap_builder::builder::command::Command::after_help::h7d18fa41402d9ced(&var_2f8, &var_5c8, 
        &var_620);
    let mut var_658: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h8b3f5ac8598db0e4(&var_658, 
        &var_2f8, arg1);
    let rax: i64 = var_658;
    let mut var_650: i64;
    
    if -(rax) == -0x8000000000000000
    {
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_650);
    }
    
    let var_628: i64;
    let var_2c8: i64 = var_628;
    let var_638: i128;
    let var_2d8: i128 = var_638;
    let mut var_648: i128;
    let var_2e8: i128 = var_648;
    var_2f8 = rax;
    let var_2f0: i64 = var_650;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h6ee6d3caced80a15(
        &var_5c8, &var_2f8);
    let mut var_608: i64;
    clap_builder::parser::error::MatchesError::unwrap::h7ff00ef725b8884c(&var_608, &var_5c8);
    let mut var_5c0: i128;
    
    if var_608 == 0
    {
        var_658 = 0;
        let var_650_1: i64 = 8;
        var_648 = 0;
    }
    else
    {
        core::iter::traits::iterator::Iterator::collect::hba2b4f9fab664ec6(&var_5c8, &var_608);
        var_650 = var_5c0;
        var_658 = var_5c8;
    }
    
    let rax_3: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_2f8, "omit_headingsomit_project_fileom…", 0xd);
    let rax_4: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_2f8, "omit_project_fileomit_plan_fileo…", 0x11);
    let rax_5: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_2f8, "omit_plan_fileomit_home_dirlong_…", 0xe);
    let rax_6: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_2f8, "omit_home_dirlong_formatomit_nam…", 0xd);
    let rax_7: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_2f8, "long_formatomit_nameomit_name_ho…", 0xb);
    let rax_8: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_2f8, "omit_nameomit_name_hostomit_name…", 9);
    let rax_9: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_2f8, "omit_name_hostomit_name_host_tim…", 0xe);
    let rax_10: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_2f8, "omit_name_host_timeError flushin…", 0x13);
    let r12: i8 = rax_9 | rax_10;
    *var_5c0[8] = var_648;
    var_5c8 = var_658;
    let var_5b0: i8 = rax_10 ^ 1;
    let var_5af: i8 = rax_3 ^ 1;
    let var_5ae: i8 = (r12 | rax_8) ^ 1;
    let var_5ad: i8 = rax_4 ^ 1;
    let var_5ac: i8 = rax_5 ^ 1;
    let var_5ab: i8 = r12 ^ 1;
    let var_5aa: i8 = rax_6 ^ 1;
    let mut result: u64;
    
    if rax_7 == 0
    {
        if uu_pinky::platform::unix::Pinky::short_pinky::h4032f022447522d5(&var_5c8) == 0
        {
            result = 0;
        }
        else
        {
            result = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hbf0213f3ca9099fe();
        }
    }
    else
    {
        uu_pinky::platform::unix::Pinky::long_pinky::hd848aae237e2c0a5(&var_5c8);
        result = 0;
    }
    
    core::ptr::drop_in_place$LT$uu_pinky..platform..unix..Pinky$GT$::hf6eb8645c4897643(&var_5c8);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf479493a265706d7(&var_2f8);
    result
}
