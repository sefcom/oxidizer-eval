
  fn uu_sleep::uumain::uumain::hc9e3360cce9e3e34(arg1: i64) -> u64

{
    let mut var_2e0: ();
    uu_sleep::uu_app::hdc95f04f3718f62f(&var_2e0);
    let mut var_398: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h7caece52df62770e(&var_398, 
        &var_2e0, arg1);
    let rax: i64 = var_398;
    let var_390: i64;
    
    if -(rax) == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_390);
    }
    
    let var_368: i64;
    let var_328_1: i64 = var_368;
    let var_378: i128;
    let var_338_1: i128 = var_378;
    let var_388: i128;
    let var_348_1: i128 = var_388;
    let mut var_358: i64 = rax;
    let var_350_1: i64 = var_390;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h6cb5961f83c4efaa(
        &var_2e0, &var_358);
    clap_builder::parser::error::MatchesError::unwrap::h3c075337a848cb76(&var_398, &var_2e0);
    let rax_2: i64 = var_398;
    
    if rax_2 == 0
    {
        let rax_4: u64 =
            uu_sleep::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h956a527a0747d9a7();
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hb43f2142a76103de(&var_358);
        return rax_4;
    }
    
    let var_360: i64;
    let var_2e8_1: i64 = var_360;
    let var_2f8_1: i128 = var_378;
    let var_308_1: i128 = var_388;
    let mut var_320: i64 = rax_2;
    let var_318_1: i128 = var_390;
    let mut var_3b0: i64;
    core::iter::traits::iterator::Iterator::collect::hb2a1de42d0a33a0d(&var_3b0, &var_320);
    let var_3a8: *mut c_void;
    let var_3a0: i64;
    let rax_3: u64 = uu_sleep::sleep::hed540e60219cbc17(var_3a8, var_3a0);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hd5e71cccc40a16fd(var_3b0, 
        var_3a8);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hb43f2142a76103de(&var_358);
    rax_3
}
