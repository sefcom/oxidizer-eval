
  fn uu_hostname::uumain::uumain::h101c7dae6653b598(arg1: i64) -> u64

{
    let mut var_2e0: i64;
    uu_hostname::uu_app::hbac75410cf2297c2(&var_2e0);
    let mut var_318: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h8864a067f6a4a499(&var_318, 
        &var_2e0, arg1);
    let rax: i64 = var_318;
    let var_310: i64;
    
    if -(rax) == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_310);
    }
    
    let var_2e8: i64;
    let var_2b0_1: i64 = var_2e8;
    let var_2f8: i128;
    let var_2c0_1: i128 = var_2f8;
    let var_308: i128;
    let var_2d0_1: i128 = var_308;
    var_2e0 = rax;
    let var_2d8_1: i64 = var_310;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h30336fc30241893d(
        &var_318, &var_2e0, &data_418294[0xc], 4);
    let rax_2: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h2f6d677897803212(
        &data_418294[0xc], 4, &var_318);
    let mut result: u64;
    
    if rax_2 == 0
    {
        let mut result_1: u64;
        let mut rdx_2: *mut *mut c_void;
        result_1 = uu_hostname::display_hostname::h96c3f430138717a0(&var_2e0);
        result = result_1;
    }
    else
    {
        result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hee0302ee3c19f076(hostname::set::h8f209346690fd4b1(rax_2));
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hb284bcbef01399f6(&var_2e0);
    result
}
