
  fn uu_expand::uumain::uumain::h16f999daf06e85e0(arg1: i64) -> *mut i64

{
    let mut var_2d8: i64;
    uu_expand::uu_app::h244b390e8990c65c(&var_2d8);
    let mut var_3a8: i128;
    core::iter::traits::iterator::Iterator::collect::h086b5f75690f53ff(&var_3a8, arg1);
    let mut var_2f0: ();
    uu_expand::expand_shortcuts::h240214fc3584f89f(&var_2f0, &var_3a8);
    let mut var_340: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h05a6dc49d88ad115(&var_340, 
        &var_2d8, &var_2f0);
    let rax: i64 = var_340;
    let mut result: *mut i64;
    let mut var_338: i64;
    
    if rax != -0x8000000000000000
    {
        let var_310: i64;
        let var_348_1: i64 = var_310;
        let mut var_320: i128;
        let var_358_1: i128 = var_320;
        let mut var_330: i128;
        let var_368_1: i128 = var_330;
        let mut var_378: i64 = rax;
        let var_370_1: i64 = var_338;
        uu_expand::Options::new::h6622e02df3c5f858(&var_2d8, &var_378);
        let rax_2: i64 = var_2d8;
        let mut var_2d0: i128;
        var_3a8 = var_2d0;
        let mut var_2c0: i128;
        let var_2b0: i128;
        
        if rax_2 != -0x8000000000000000
        {
            let var_290: i64;
            let var_2f8_1: i64 = var_290;
            let var_2a0: i128;
            let var_308_1: i128 = var_2a0;
            var_338 = var_3a8;
            var_330 = var_2c0;
            var_320 = var_2b0;
            var_340 = rax_2;
            let mut result_1: *mut i128;
            let mut rdx_2: *mut *mut c_void;
            result_1 = uu_expand::expand::h37655ff09ea44da5(&var_340);
            result = result_1;
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h45d799d7e0b060ee(&var_378);
            core::ptr::drop_in_place$LT$uu_expand..Options$GT$::h9eade95a289b1eaa(&var_340);
        }
        else
        {
            let zmm1_2: i128 = var_2c0;
            var_2c0 = var_2b0;
            var_2d0 = zmm1_2;
            var_2d8 = var_3a8;
            result = alloc::boxed::Box$LT$T$GT$::new::h2b01c22c7ee70f11(&var_2d8);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h45d799d7e0b060ee(&var_378);
        }
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_338);
    }
    result
}
