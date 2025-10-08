
  fn uu_unexpand::uumain::uumain::h87acb3765ee1ae03(arg1: i64) -> u64

{
    let mut var_398: ();
    uucore::Args::collect_ignore::h93efccc5a7b07e2a(&var_398, arg1);
    let mut var_2d8: i64;
    uu_unexpand::uu_app::h8be29c5c59f3b421(&var_2d8);
    let var_390: *mut c_void;
    let var_388: i64;
    let mut var_2f0: ();
    uu_unexpand::expand_shortcuts::hf9e317c33afe99db(&var_2f0, var_390, var_388);
    let mut var_380: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h603c0fa4ddfb7af4(&var_380, 
        &var_2d8, &var_2f0);
    let rax: i64 = var_380;
    let mut result: u64;
    let mut var_378: i64;
    
    if -(rax) != -0x8000000000000000
    {
        let var_350: i64;
        let var_2f8_1: i64 = var_350;
        let var_360: i128;
        let var_308_1: i128 = var_360;
        let mut var_370: i128;
        let var_318_1: i128 = var_370;
        let mut var_328: i64 = rax;
        let var_320_1: i64 = var_378;
        uu_unexpand::Options::new::hf1bf0cc696905b94(&var_2d8, &var_328);
        let rax_2: i64 = var_2d8;
        let var_2d0: i128;
        let mut var_348: i128 = var_2d0;
        
        if rax_2 != -0x8000000000000000
        {
            let var_2a8: i64;
            let var_350_1: i64 = var_2a8;
            let var_2b8: i128;
            let var_360_1: i128 = var_2b8;
            var_378 = var_348;
            let var_2c0: i64;
            *var_370[8] = var_2c0;
            var_380 = rax_2;
            let mut result_1: u64;
            let mut rdx_4: *mut *mut c_void;
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
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_378);
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::ha7a1000ad09f03ac(
        &var_398);
    result
}
