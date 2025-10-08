
  uint64_t uu_head::uumain::uumain::hacddb22773ff1028(int64_t arg1)

{
    int32_t var_2d8;
    uu_head::uu_app::hf575c326a0d0e85d(&var_2d8);
    int64_t var_368;
    uu_head::arg_iterate::h9da41de1ba75f81a(&var_368, arg1);
    int64_t rax = var_368;
    uint64_t rbx_1;
    int64_t var_360;
    
    if (rax != -0x7ffffffffffffffb)
    {
        var_368 = rax;
        int64_t var_360_1 = var_360;
        int64_t var_358;
        int64_t var_358_1 = var_358;
        int64_t var_350;
        int64_t var_350_1 = var_350;
        rbx_1 = alloc::boxed::Box$LT$T$GT$::new::hc380b46ec72eadf4(&var_368);
        core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h5b399977f55ae63f(
            &var_2d8);
    }
    else
    {
        int64_t var_348;
        clap_builder::builder::command::Command::try_get_matches_from::h8c087d59478e6a24(&var_348, 
            &var_2d8, var_360);
        int64_t rax_1 = var_348;
        int64_t var_340;
        
        if (rax_1 == -0x8000000000000000)
            return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_340);
        
        int64_t var_318;
        int64_t var_2e0_1 = var_318;
        int128_t var_328;
        int128_t var_2f0_1 = var_328;
        int128_t var_338;
        int128_t var_300_1 = var_338;
        int64_t var_310 = rax_1;
        int64_t var_308_1 = var_340;
        uu_head::HeadOptions::get_from::h77af4328ac91ca1f(&var_2d8, &var_310);
        int128_t var_2c8;
        
        if (var_2d8 != 4)
        {
            int128_t var_2b8;
            int128_t var_328_1 = var_2b8;
            int128_t var_338_1 = var_2c8;
            var_348 = var_2d8;
            uint64_t rax_7;
            int64_t rdx_3;
            rax_7 = uu_head::uu_head::hda677bb53c9ed421(&var_348);
            core::ptr::drop_in_place$LT$uu_head..HeadOptions$GT$::h7e905e8b593b6877(&var_348);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h692d21db3190224d(&var_310);
            return rax_7;
        }
        
        int64_t var_350_2 = *var_2c8[8];
        int128_t var_2d0;
        var_360 = var_2d0;
        var_368 = -0x7ffffffffffffffc;
        rbx_1 = alloc::boxed::Box$LT$T$GT$::new::hc380b46ec72eadf4(&var_368);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h692d21db3190224d(&var_310);
    }
    return rbx_1;
}
