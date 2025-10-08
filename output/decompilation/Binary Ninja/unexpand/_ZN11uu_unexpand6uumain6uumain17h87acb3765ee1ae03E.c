
  uint64_t uu_unexpand::uumain::uumain::h87acb3765ee1ae03(int64_t arg1)

{
    void var_398;
    uucore::Args::collect_ignore::h93efccc5a7b07e2a(&var_398, arg1);
    int64_t var_2d8;
    uu_unexpand::uu_app::h8be29c5c59f3b421(&var_2d8);
    void* var_390;
    int64_t var_388;
    void var_2f0;
    uu_unexpand::expand_shortcuts::hf9e317c33afe99db(&var_2f0, var_390, var_388);
    int64_t var_380;
    clap_builder::builder::command::Command::try_get_matches_from::h603c0fa4ddfb7af4(&var_380, 
        &var_2d8, &var_2f0);
    int64_t rax = var_380;
    uint64_t result;
    int64_t var_378;
    
    if (-(rax) != -0x8000000000000000)
    {
        int64_t var_350;
        int64_t var_2f8_1 = var_350;
        int128_t var_360;
        int128_t var_308_1 = var_360;
        int128_t var_370;
        int128_t var_318_1 = var_370;
        int64_t var_328 = rax;
        int64_t var_320_1 = var_378;
        uu_unexpand::Options::new::hf1bf0cc696905b94(&var_2d8, &var_328);
        int64_t rax_2 = var_2d8;
        int128_t var_2d0;
        int128_t var_348 = var_2d0;
        
        if (rax_2 != -0x8000000000000000)
        {
            int64_t var_2a8;
            int64_t var_350_1 = var_2a8;
            int128_t var_2b8;
            int128_t var_360_1 = var_2b8;
            var_378 = var_348;
            int64_t var_2c0;
            *var_370[8] = var_2c0;
            var_380 = rax_2;
            uint64_t result_1;
            void** rdx_4;
            result_1 = uu_unexpand::unexpand::he27a2d3deed158af(&var_380);
            result = result_1;
            core::ptr::drop_in_place$LT$uu_unexpand..Options$GT$::hc2ee6c18ad656a87(&var_380);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h90d712bc54ad0d6d(&var_328);
        }
        else
        {
            result = alloc::boxed::Box$LT$T$GT$::new::he39bb9a86a8b17ee(&var_348);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h90d712bc54ad0d6d(&var_328);
        }
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_378);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::ha7a1000ad09f03ac(
        &var_398);
    return result;
}
