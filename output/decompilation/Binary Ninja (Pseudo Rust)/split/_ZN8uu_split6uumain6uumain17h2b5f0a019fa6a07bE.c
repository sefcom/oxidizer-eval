
  fn uu_split::uumain::uumain::h2b5f0a019fa6a07b(arg1: i64, arg2: i64) -> *mut i64

{
    let mut var_2e8: i128;
    uu_split::handle_obsolete::he1565c7d7191f1a3(&var_2e8, arg1, arg2);
    let var_418: i128 = var_2e8;
    let var_2c0: i64;
    let var_428: i64 = var_2c0;
    let mut var_2d0: i128;
    let mut var_438: i128 = var_2d0;
    let mut rbp: i64;
    rbp = 1;
    uu_split::uu_app::h157e905e8df93f6d(&var_2e8);
    let var_2d8: i64;
    let mut var_458: i64 = var_2d8;
    let mut var_468: i128 = var_418;
    let mut var_390: i64;
    clap_builder::builder::command::Command::try_get_matches_from::hc3c3da3cda774606(&var_390, 
        &var_2e8, &var_468);
    let rax_3: i64 = var_390;
    let mut result: *mut i64;
    let var_388: i64;
    
    if rax_3 != -0x8000000000000000
    {
        let var_360: i64;
        let var_3c8_1: i64 = var_360;
        let var_370: i128;
        let var_3d8_1: i128 = var_370;
        let var_380: i128;
        let var_3e8_1: i128 = var_380;
        let mut var_3f8: i64 = rax_3;
        let var_3f0_1: i64 = var_388;
        uu_split::Settings::from::h19dd94bcd15a49c5(&var_390, &var_3f8, &var_438);
        
        if var_390 != 2
        {
            memcpy(&var_2e8, &var_390, 0xa8);
            let mut result_1: *mut i128;
            let mut rdx_4: *mut *mut c_void;
            result_1 = uu_split::split::h3b6295d78012e56b(&var_2e8);
            result = result_1;
            let mut rbp_1: i64;
            rbp_1 = 1;
            core::ptr::drop_in_place$LT$uu_split..Settings$GT$::h17e116cdac8f5958(&var_2e8);
            rbp_1 = 1;
        }
        else
        {
            let mut rdx_3: i64 = 0;
            
            if var_388 - 4 < 5
            {
                rdx_3 = var_388 - 3;
            }
            
            if rdx_3 != 0
            {
                if rdx_3 != 1 || var_380 != 1
                {
                    goto 'label_4761e6;
                }
                
                goto 'label_4760c8;
            }
            
            let mut var_478: *mut i128;
            
            if var_388 == 3
            {
                'label_4760c8:
                let var_448_1: i64 = *var_370[8];
                var_458 = var_380;
                var_468 = var_388;
                var_478 = &var_468;
                let var_470_1: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 = _$LT$uu_split..SettingsError$u20$as$u20$core..fmt..Display$GT$::fmt::hd067355b054e5aca;
                var_2e8 = &data_418130;
                *var_2e8[8] = 1;
                *var_2d0[8] = 0;
                let var_2d8_1: *mut *mut i128 = &var_478;
                var_2d0 = 1;
                let mut var_3c0: i128;
                core::option::Option$LT$T$GT$::map_or_else::h11882c33e7a1a822(&var_3c0, &var_2e8);
                var_2d0 = 1;
                var_2e8 = var_3c0;
                let var_3b0: i64;
                let var_2d8_2: i64 = var_3b0;
                result = alloc::boxed::Box$LT$T$GT$::new::h051d8dae61dc6094(&var_2e8);
                core::ptr::drop_in_place$LT$uu_split..SettingsError$GT$::h59a67ae88e993ca1(
                    &var_468);
            }
            else
            {
                'label_4761e6:
                let var_448_2: i64 = *var_370[8];
                var_458 = var_380;
                var_468 = var_388;
                var_478 = &var_468;
                let var_470_2: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 = _$LT$uu_split..SettingsError$u20$as$u20$core..fmt..Display$GT$::fmt::hd067355b054e5aca;
                var_2e8 = &data_418130;
                *var_2e8[8] = 1;
                *var_2d0[8] = 0;
                let var_2d8_3: *mut *mut i128 = &var_478;
                var_2d0 = 1;
                let mut var_3a8: i128;
                core::option::Option$LT$T$GT$::map_or_else::h11882c33e7a1a822(&var_3a8, &var_2e8);
                var_2d0 = 1;
                var_2e8 = var_3a8;
                let var_398: i64;
                let var_2d8_4: i64 = var_398;
                result = alloc::boxed::Box$LT$T$GT$::new::h051d8dae61dc6094(&var_2e8);
                core::ptr::drop_in_place$LT$uu_split..SettingsError$GT$::h59a67ae88e993ca1(
                    &var_468);
            }
        }
        
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h3ed3539edef33f20(&var_3f8);
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h6adab7ef9c77512a(&var_438);
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_388);
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h6adab7ef9c77512a(&var_438);
    }
    result
}
