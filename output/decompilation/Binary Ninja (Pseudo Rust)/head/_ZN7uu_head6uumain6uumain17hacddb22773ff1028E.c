
  fn uu_head::uumain::uumain::hacddb22773ff1028(arg1: i64) -> u64

{
    let mut var_2d8: i32;
    uu_head::uu_app::hf575c326a0d0e85d(&var_2d8);
    let mut var_368: i64;
    uu_head::arg_iterate::h9da41de1ba75f81a(&var_368, arg1);
    let rax: i64 = var_368;
    let mut rbx_1: u64;
    let mut var_360: i64;
    
    if rax != -0x7ffffffffffffffb
    {
        var_368 = rax;
        let var_360_1: i64 = var_360;
        let var_358: i64;
        let var_358_1: i64 = var_358;
        let var_350: i64;
        let var_350_1: i64 = var_350;
        rbx_1 = alloc::boxed::Box$LT$T$GT$::new::hc380b46ec72eadf4(&var_368);
        core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h5b399977f55ae63f(
            &var_2d8);
    }
    else
    {
        let mut var_348: i64;
        clap_builder::builder::command::Command::try_get_matches_from::h8c087d59478e6a24(&var_348, 
            &var_2d8, var_360);
        let rax_1: i64 = var_348;
        let var_340: i64;
        
        if rax_1 == -0x8000000000000000
        {
            return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_340);
        }
        
        let var_318: i64;
        let var_2e0_1: i64 = var_318;
        let var_328: i128;
        let var_2f0_1: i128 = var_328;
        let var_338: i128;
        let var_300_1: i128 = var_338;
        let mut var_310: i64 = rax_1;
        let var_308_1: i64 = var_340;
        uu_head::HeadOptions::get_from::h77af4328ac91ca1f(&var_2d8, &var_310);
        let var_2c8: i128;
        
        if var_2d8 != 4
        {
            let var_2b8: i128;
            let var_328_1: i128 = var_2b8;
            let var_338_1: i128 = var_2c8;
            var_348 = var_2d8;
            let mut rax_7: u64;
            let mut rdx_3: i64;
            rax_7 = uu_head::uu_head::hda677bb53c9ed421(&var_348);
            core::ptr::drop_in_place$LT$uu_head..HeadOptions$GT$::h7e905e8b593b6877(&var_348);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h692d21db3190224d(&var_310);
            return rax_7;
        }
        
        let var_350_2: i64 = *var_2c8[8];
        let var_2d0: i128;
        var_360 = var_2d0;
        var_368 = -0x7ffffffffffffffc;
        rbx_1 = alloc::boxed::Box$LT$T$GT$::new::hc380b46ec72eadf4(&var_368);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h692d21db3190224d(&var_310);
    }
    rbx_1
}
