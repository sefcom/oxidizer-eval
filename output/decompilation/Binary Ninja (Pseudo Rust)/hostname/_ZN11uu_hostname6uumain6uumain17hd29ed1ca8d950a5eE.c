
  fn uu_hostname::uumain::uumain::hd29ed1ca8d950a5e(arg1: i64) -> *mut i128

{
    let mut var_2e0: i64;
    uu_hostname::uu_app::hb6e249c122554ffe(&var_2e0);
    let mut var_318: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h87cf345e6a930018(&var_318, 
        &var_2e0, arg1);
    let rax: i64 = var_318;
    let var_310: i64;
    
    if rax == -0x8000000000000000
    {
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_310);
    }
    
    let var_2e8: i64;
    let var_2b0: i64 = var_2e8;
    let var_2f8: i128;
    let var_2c0: i128 = var_2f8;
    let var_308: i128;
    let var_2d0: i128 = var_308;
    var_2e0 = rax;
    let var_2d8: i64 = var_310;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hfe4358f699f5b9c3(
        &var_318, &var_2e0, &data_41440c, 4);
    let rax_2: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hcb60a1c181f5a1cb(
        &data_41440c, 4, &var_318);
    let mut result: *mut i128;
    let mut rdx_3: i64;
    
    if rax_2 == 0
    {
        result = uu_hostname::display_hostname::hb7e83080e266b2ca(&var_2e0);
    }
    else
    {
        result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::ha754b84eb7781c97(hostname::set::h6e7654145cf08af4(rax_2));
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hb1b2c5783d635b8f(&var_2e0);
    result
}
