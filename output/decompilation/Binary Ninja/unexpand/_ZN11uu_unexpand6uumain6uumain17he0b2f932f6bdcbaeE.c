
  int64_t* uu_unexpand::uumain::uumain::he0b2f932f6bdcbae(int64_t arg1)

{
    void var_380;
    uucore::Args::collect_ignore::h9dc0a2554c980106(&var_380, arg1);
    int64_t var_2d8;
    uu_unexpand::uu_app::hf57dc54f13226ed2(&var_2d8);
    int64_t var_378;
    int64_t var_370;
    int128_t var_368;
    uu_unexpand::expand_shortcuts::he534dbf7f6ef5d0b(&var_368, var_378, var_370);
    int64_t var_348;
    clap_builder::builder::command::Command::try_get_matches_from::h39362f583835034e(&var_348, 
        &var_2d8, &var_368);
    int64_t rax = var_348;
    int64_t* result;
    int64_t var_340;
    
    if (rax != -0x8000000000000000)
    {
        int64_t var_318;
        int64_t var_2e0_1 = var_318;
        int128_t var_328;
        int128_t var_2f0_1 = var_328;
        int128_t var_338;
        int128_t var_300_1 = var_338;
        int64_t var_310 = rax;
        int64_t var_308_1 = var_340;
        uu_unexpand::Options::new::hba98640d35916d8d(&var_2d8, &var_310);
        int64_t rax_2 = var_2d8;
        int128_t var_2d0;
        var_368 = var_2d0;
        int64_t var_2c0;
        
        if (rax_2 != -0x8000000000000000)
        {
            int64_t var_2a8;
            int64_t var_318_1 = var_2a8;
            int128_t var_2b8;
            int128_t var_328_1 = var_2b8;
            var_340 = var_368;
            *var_338[8] = var_2c0;
            var_348 = rax_2;
            int128_t* result_1;
            void** rdx_3;
            result_1 = uu_unexpand::unexpand::h7da24873393494e4(&var_348);
            result = result_1;
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6306fc7b06bc4e79(&var_310);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h8294ebccd2267568(&var_380);
            core::ptr::drop_in_place$LT$uu_unexpand..Options$GT$::hf1c3d9e3e4f28eac(&var_348);
        }
        else
        {
            *var_2d0[8] = var_2c0;
            var_2d8 = var_368;
            result = alloc::boxed::Box$LT$T$GT$::new::h8f2659aa029cb46a(&var_2d8);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6306fc7b06bc4e79(&var_310);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h8294ebccd2267568(&var_380);
        }
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_340);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h8294ebccd2267568(&var_380);
    }
    return result;
}
