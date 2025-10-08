
  uint64_t uu_stty::uumain::uumain::hc483f49143486963(int64_t arg1)

{
    int64_t var_2e0;
    uu_stty::uu_app::hd6e5ef485fb27574(&var_2e0);
    int64_t var_348;
    clap_builder::builder::command::Command::try_get_matches_from::hf861ac69e92ddccc(&var_348, 
        &var_2e0, arg1);
    int64_t rax = var_348;
    int64_t var_340;
    
    if (-(rax) == -0x8000000000000000)
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_340);
    
    int64_t var_318;
    int64_t var_2b0 = var_318;
    int128_t var_328;
    int128_t var_2c0 = var_328;
    int128_t var_338;
    int128_t var_2d0 = var_338;
    var_2e0 = rax;
    int64_t var_2d8 = var_340;
    uu_stty::Options::from::h626d4b5746ed2b17(&var_348, &var_2e0);
    int64_t rax_2 = var_348;
    uint64_t result;
    
    if (rax_2 != -0x7fffffffffffffff)
    {
        int128_t var_2f0_1 = var_328;
        int128_t var_300_1 = var_338;
        int64_t var_310 = rax_2;
        int64_t var_308_1 = var_340;
        result = uu_stty::stty::h530db3b548de0632(&var_310);
        core::ptr::drop_in_place$LT$uu_stty..Options$GT$::h51ede0328921a7e9(&var_310);
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h42cb8a1c6f87c0f4(&var_2e0);
    return result;
}
