
  fn uu_stty::uumain::uumain::hc483f49143486963(arg1: i64) -> u64

{
    let mut var_2e0: i64;
    uu_stty::uu_app::hd6e5ef485fb27574(&var_2e0);
    let mut var_348: i64;
    clap_builder::builder::command::Command::try_get_matches_from::hf861ac69e92ddccc(&var_348, 
        &var_2e0, arg1);
    let rax: i64 = var_348;
    let var_340: i64;
    
    if -(rax) == -0x8000000000000000
    {
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_340);
    }
    
    let var_318: i64;
    let var_2b0: i64 = var_318;
    let var_328: i128;
    let var_2c0: i128 = var_328;
    let var_338: i128;
    let var_2d0: i128 = var_338;
    var_2e0 = rax;
    let var_2d8: i64 = var_340;
    uu_stty::Options::from::h626d4b5746ed2b17(&var_348, &var_2e0);
    let rax_2: i64 = var_348;
    let mut result: u64;
    
    if rax_2 != -0x7fffffffffffffff
    {
        let var_2f0_1: i128 = var_328;
        let var_300_1: i128 = var_338;
        let mut var_310: i64 = rax_2;
        let var_308_1: i64 = var_340;
        result = uu_stty::stty::h530db3b548de0632(&var_310);
        core::ptr::drop_in_place$LT$uu_stty..Options$GT$::h51ede0328921a7e9(&var_310);
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h42cb8a1c6f87c0f4(&var_2e0);
    result
}
