
  uint64_t uu_sleep::uumain::uumain::hc9e3360cce9e3e34(int64_t arg1)

{
    void var_2e0;
    uu_sleep::uu_app::hdc95f04f3718f62f(&var_2e0);
    int64_t var_398;
    clap_builder::builder::command::Command::try_get_matches_from::h7caece52df62770e(&var_398, 
        &var_2e0, arg1);
    int64_t rax = var_398;
    int64_t var_390;
    
    if (-(rax) == -0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_390);
    
    int64_t var_368;
    int64_t var_328_1 = var_368;
    int128_t var_378;
    int128_t var_338_1 = var_378;
    int128_t var_388;
    int128_t var_348_1 = var_388;
    int64_t var_358 = rax;
    int64_t var_350_1 = var_390;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h6cb5961f83c4efaa(
        &var_2e0, &var_358);
    clap_builder::parser::error::MatchesError::unwrap::h3c075337a848cb76(&var_398, &var_2e0);
    int64_t rax_2 = var_398;
    
    if (!rax_2)
    {
        uint64_t rax_4 =
            uu_sleep::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h956a527a0747d9a7();
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hb43f2142a76103de(&var_358);
        return rax_4;
    }
    
    int64_t var_360;
    int64_t var_2e8_1 = var_360;
    int128_t var_2f8_1 = var_378;
    int128_t var_308_1 = var_388;
    int64_t var_320 = rax_2;
    int128_t var_318_1 = var_390;
    int64_t var_3b0;
    core::iter::traits::iterator::Iterator::collect::hb2a1de42d0a33a0d(&var_3b0, &var_320);
    void* var_3a8;
    int64_t var_3a0;
    uint64_t rax_3 = uu_sleep::sleep::hed540e60219cbc17(var_3a8, var_3a0);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hd5e71cccc40a16fd(var_3b0, 
        var_3a8);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hb43f2142a76103de(&var_358);
    return rax_3;
}
