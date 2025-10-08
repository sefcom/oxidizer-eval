
  fn uu_expand::uumain::uumain::hb8c68f0a7b27f63c(arg1: i64) -> u64

{
    let mut var_2d8: i64;
    uu_expand::uu_app::hfd4b727879b62d41(&var_2d8);
    let mut var_3b0: i64;
    core::iter::traits::iterator::Iterator::collect::hbb154e39e9ef545d(&var_3b0, arg1);
    let mut var_2f0: ();
    uu_expand::expand_shortcuts::haabb6e34bcaf3b4a(&var_2f0, &var_3b0);
    let mut var_378: i64;
    clap_builder::builder::command::Command::try_get_matches_from::hcc16583f3af8584c(&var_378, 
        &var_2d8, &var_2f0);
    let rax: i64 = var_378;
    let mut var_370: i64;
    
    if -(rax) == -0x8000000000000000
    {
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_370);
    }
    
    let var_348: i64;
    let var_380: i64 = var_348;
    let mut var_358: i128;
    let var_390: i128 = var_358;
    let mut var_368: i128;
    let var_3a0: i128 = var_368;
    var_3b0 = rax;
    let var_3a8: i64 = var_370;
    uu_expand::Options::new::hf73bd933e2ff5840(&var_2d8, &var_3b0);
    let rax_2: i64 = var_2d8;
    let var_2d0: i128;
    let mut var_328: i128 = var_2d0;
    let mut result: u64;
    
    if rax_2 != -0x8000000000000000
    {
        let var_290: i64;
        let var_330_1: i64 = var_290;
        let var_2a0: i128;
        let var_340_1: i128 = var_2a0;
        var_370 = var_328;
        let var_2c0: i128;
        var_368 = var_2c0;
        let var_2b0: i128;
        var_358 = var_2b0;
        var_378 = rax_2;
        result = uu_expand::expand::h7e07945fdad88d02(&var_378);
        core::ptr::drop_in_place$LT$uu_expand..Options$GT$::h11457f8e795be736(&var_378);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he7a2758533e8bc12(&var_3b0);
    }
    else
    {
        result = alloc::boxed::Box$LT$T$GT$::new::he9770729fc838e7f(&var_328);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he7a2758533e8bc12(&var_3b0);
    }
    
    result
}
