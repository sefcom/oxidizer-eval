
  uint64_t uu_expand::uumain::uumain::hb8c68f0a7b27f63c(int64_t arg1)

{
    int64_t var_2d8;
    uu_expand::uu_app::hfd4b727879b62d41(&var_2d8);
    int64_t var_3b0;
    core::iter::traits::iterator::Iterator::collect::hbb154e39e9ef545d(&var_3b0, arg1);
    void var_2f0;
    uu_expand::expand_shortcuts::haabb6e34bcaf3b4a(&var_2f0, &var_3b0);
    int64_t var_378;
    clap_builder::builder::command::Command::try_get_matches_from::hcc16583f3af8584c(&var_378, 
        &var_2d8, &var_2f0);
    int64_t rax = var_378;
    int64_t var_370;
    
    if (-(rax) == -0x8000000000000000)
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_370);
    
    int64_t var_348;
    int64_t var_380 = var_348;
    int128_t var_358;
    int128_t var_390 = var_358;
    int128_t var_368;
    int128_t var_3a0 = var_368;
    var_3b0 = rax;
    int64_t var_3a8 = var_370;
    uu_expand::Options::new::hf73bd933e2ff5840(&var_2d8, &var_3b0);
    int64_t rax_2 = var_2d8;
    int128_t var_2d0;
    int128_t var_328 = var_2d0;
    uint64_t result;
    
    if (rax_2 != -0x8000000000000000)
    {
        int64_t var_290;
        int64_t var_330_1 = var_290;
        int128_t var_2a0;
        int128_t var_340_1 = var_2a0;
        var_370 = var_328;
        int128_t var_2c0;
        var_368 = var_2c0;
        int128_t var_2b0;
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
    
    return result;
}
