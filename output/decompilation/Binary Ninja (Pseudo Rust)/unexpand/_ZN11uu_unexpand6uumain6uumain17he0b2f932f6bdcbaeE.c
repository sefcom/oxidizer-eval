
  fn uu_unexpand::uumain::uumain::he0b2f932f6bdcbae(arg1: i64) -> *mut i64

{
    let mut var_380: ();
    uucore::Args::collect_ignore::h9dc0a2554c980106(&var_380, arg1);
    let mut var_2d8: i64;
    uu_unexpand::uu_app::hf57dc54f13226ed2(&var_2d8);
    let var_378: i64;
    let var_370: i64;
    let mut var_368: i128;
    uu_unexpand::expand_shortcuts::he534dbf7f6ef5d0b(&var_368, var_378, var_370);
    let mut var_348: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h39362f583835034e(&var_348, 
        &var_2d8, &var_368);
    let rax: i64 = var_348;
    let mut result: *mut i64;
    let mut var_340: i64;
    
    if rax != -0x8000000000000000
    {
        let var_318: i64;
        let var_2e0_1: i64 = var_318;
        let var_328: i128;
        let var_2f0_1: i128 = var_328;
        let mut var_338: i128;
        let var_300_1: i128 = var_338;
        let mut var_310: i64 = rax;
        let var_308_1: i64 = var_340;
        uu_unexpand::Options::new::hba98640d35916d8d(&var_2d8, &var_310);
        let rax_2: i64 = var_2d8;
        let mut var_2d0: i128;
        var_368 = var_2d0;
        let var_2c0: i64;
        
        if rax_2 != -0x8000000000000000
        {
            let var_2a8: i64;
            let var_318_1: i64 = var_2a8;
            let var_2b8: i128;
            let var_328_1: i128 = var_2b8;
            var_340 = var_368;
            *var_338[8] = var_2c0;
            var_348 = rax_2;
            let mut result_1: *mut i128;
            let mut rdx_3: *mut *mut c_void;
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
    result
}
