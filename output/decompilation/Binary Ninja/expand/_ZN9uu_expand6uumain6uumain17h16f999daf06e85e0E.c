
  int64_t* uu_expand::uumain::uumain::h16f999daf06e85e0(int64_t arg1)

{
    int64_t var_2d8;
    uu_expand::uu_app::h244b390e8990c65c(&var_2d8);
    int128_t var_3a8;
    core::iter::traits::iterator::Iterator::collect::h086b5f75690f53ff(&var_3a8, arg1);
    void var_2f0;
    uu_expand::expand_shortcuts::h240214fc3584f89f(&var_2f0, &var_3a8);
    int64_t var_340;
    clap_builder::builder::command::Command::try_get_matches_from::h05a6dc49d88ad115(&var_340, 
        &var_2d8, &var_2f0);
    int64_t rax = var_340;
    int64_t* result;
    int64_t var_338;
    
    if (rax != -0x8000000000000000)
    {
        int64_t var_310;
        int64_t var_348_1 = var_310;
        int128_t var_320;
        int128_t var_358_1 = var_320;
        int128_t var_330;
        int128_t var_368_1 = var_330;
        int64_t var_378 = rax;
        int64_t var_370_1 = var_338;
        uu_expand::Options::new::h6622e02df3c5f858(&var_2d8, &var_378);
        int64_t rax_2 = var_2d8;
        int128_t var_2d0;
        var_3a8 = var_2d0;
        int128_t var_2c0;
        int128_t var_2b0;
        
        if (rax_2 != -0x8000000000000000)
        {
            int64_t var_290;
            int64_t var_2f8_1 = var_290;
            int128_t var_2a0;
            int128_t var_308_1 = var_2a0;
            var_338 = var_3a8;
            var_330 = var_2c0;
            var_320 = var_2b0;
            var_340 = rax_2;
            int128_t* result_1;
            void** rdx_2;
            result_1 = uu_expand::expand::h37655ff09ea44da5(&var_340);
            result = result_1;
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h45d799d7e0b060ee(&var_378);
            core::ptr::drop_in_place$LT$uu_expand..Options$GT$::h9eade95a289b1eaa(&var_340);
        }
        else
        {
            int128_t zmm1_2 = var_2c0;
            var_2c0 = var_2b0;
            var_2d0 = zmm1_2;
            var_2d8 = var_3a8;
            result = alloc::boxed::Box$LT$T$GT$::new::h2b01c22c7ee70f11(&var_2d8);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h45d799d7e0b060ee(&var_378);
        }
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_338);
    return result;
}
