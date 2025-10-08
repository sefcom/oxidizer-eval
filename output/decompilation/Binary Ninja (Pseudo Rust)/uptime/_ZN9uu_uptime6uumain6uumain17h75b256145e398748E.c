
  fn uu_uptime::uumain::uumain::h75b256145e398748(arg1: i64) -> i64

{
    let mut var_2e0: i64;
    uu_uptime::uu_app::hf423f0f417b5740e(&var_2e0);
    let mut var_318: i64;
    clap_builder::builder::command::Command::try_get_matches_from::hc80c200f06e99637(&var_318, 
        &var_2e0, arg1);
    let rax: i64 = var_318;
    let var_310: i64;
    
    if -(rax) == -0x8000000000000000
    {
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_310);
    }
    
    let var_2e8: i64;
    let var_2b0: i64 = var_2e8;
    let var_2f8: i128;
    let var_2c0: i128 = var_2f8;
    let var_308: i128;
    let var_2d0: i128 = var_308;
    var_2e0 = rax;
    let var_2d8: i64 = var_310;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h3183c26ce39a54d0(
        &var_318, &var_2e0, "pathAnsi -- \x1b[8mhelpNoneshimn…", 4);
    let rax_2: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hdea74081ce6b7d63(
        "pathAnsi -- \x1b[8mhelpNoneshimn…", 4, &var_318);
    let mut result: i64;
    let mut rdx_3: i64;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_2e0, "since(uutils coreutils) 0.0.30Di…", 5) != 0
    {
        result = uu_uptime::uptime_since::h394d6aa0daf3546a();
    }
    else if rax_2 == 0
    {
        result = uu_uptime::default_uptime::h6894ccc3fb001882();
    }
    else
    {
        result = uu_uptime::uptime_with_file::he947cbe207c3e785(rax_2);
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he6050ef9d6f002e3(&var_2e0);
    result
}
