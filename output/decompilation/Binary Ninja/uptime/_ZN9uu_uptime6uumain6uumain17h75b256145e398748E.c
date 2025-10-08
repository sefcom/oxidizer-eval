
  int64_t uu_uptime::uumain::uumain::h75b256145e398748(int64_t arg1)

{
    int64_t var_2e0;
    uu_uptime::uu_app::hf423f0f417b5740e(&var_2e0);
    int64_t var_318;
    clap_builder::builder::command::Command::try_get_matches_from::hc80c200f06e99637(&var_318, 
        &var_2e0, arg1);
    int64_t rax = var_318;
    int64_t var_310;
    
    if (-(rax) == -0x8000000000000000)
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_310);
    
    int64_t var_2e8;
    int64_t var_2b0 = var_2e8;
    int128_t var_2f8;
    int128_t var_2c0 = var_2f8;
    int128_t var_308;
    int128_t var_2d0 = var_308;
    var_2e0 = rax;
    int64_t var_2d8 = var_310;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h3183c26ce39a54d0(
        &var_318, &var_2e0, "pathAnsi -- \x1b[8mhelpNoneshimn…", 4);
    void* rax_2 = clap_builder::parser::error::MatchesError::unwrap::hdea74081ce6b7d63(
        "pathAnsi -- \x1b[8mhelpNoneshimn…", 4, &var_318);
    int64_t result;
    int64_t rdx_3;
    
    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_2e0, "since(uutils coreutils) 0.0.30Di…", 5))
        result = uu_uptime::uptime_since::h394d6aa0daf3546a();
    else if (!rax_2)
        result = uu_uptime::default_uptime::h6894ccc3fb001882();
    else
        result = uu_uptime::uptime_with_file::he947cbe207c3e785(rax_2);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he6050ef9d6f002e3(&var_2e0);
    return result;
}
