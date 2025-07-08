
  fn uu_head::uumain::uumain::h5ea3dd696b7d584e(arg1: i64) -> *mut i64

{
    let mut var_2d8: i32;
    uu_head::uu_app::h3a0d0603aeae9cb6(&var_2d8);
    let mut var_368: i64;
    uu_head::arg_iterate::h2f4030183cfe2e94(&var_368, arg1);
    let result_1: *mut i64;
    let mut result: *mut i64 = result_1;
    
    if var_368 == 0
    {
        let mut var_348: i64;
        clap_builder::builder::command::Command::try_get_matches_from::hadd186c33093956e(&var_348, 
            &var_2d8, result);
        let rax_1: i64 = var_348;
        let var_340: i64;
        
        if rax_1 != -0x8000000000000000
        {
            let var_318: i64;
            let var_2e0_1: i64 = var_318;
            let var_328: i128;
            let var_2f0_1: i128 = var_328;
            let var_338: i128;
            let var_300_1: i128 = var_338;
            let mut var_310: i64 = rax_1;
            let var_308_1: i64 = var_340;
            uu_head::HeadOptions::get_from::h1adb6e5857002fb6(&var_2d8, &var_310);
            let var_2c8: i128;
            
            if var_2d8 != 4
            {
                let var_2b8: i128;
                let var_328_1: i128 = var_2b8;
                let var_338_1: i128 = var_2c8;
                var_348 = var_2d8;
                uu_head::uu_head::h50c9b533b8c9e19e(&var_348);
                result = nullptr;
                core::ptr::drop_in_place$LT$uu_head..HeadOptions$GT$::hf8ca7b2a25e80601(&var_348);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7f3766ce6d351c3b(&var_310);
            }
            else
            {
                let var_358_1: i64 = *var_2c8[8];
                let var_2d0: i128;
                var_368 = var_2d0;
                let var_350_1: i32 = 1;
                result = alloc::boxed::Box$LT$T$GT$::new::hec34c9cb33ab5596(&var_368);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7f3766ce6d351c3b(&var_310);
            }
        }
        else
        {
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_340);
        }
    }
    else
    {
        core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h9d9eab11aa1d8814(
            &var_2d8);
    }
    
    result
}
