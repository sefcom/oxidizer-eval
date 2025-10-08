
  fn uu_split::uumain::uumain::h0027435fadacba1f(arg1: i64, arg2: i64) -> u64

{
    let mut var_2e8: i128;
    uu_split::handle_obsolete::hff2fd928c2a7a858(&var_2e8, arg1, arg2);
    let var_2d8: i64;
    let var_408: i64 = var_2d8;
    let mut var_418: i128 = var_2e8;
    uu_split::uu_app::h4bc5bb72ff3a6c94(&var_2e8);
    let mut var_390: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h690c9a28c22d83f7(&var_390, 
        &var_2e8, &var_418);
    let rax_1: i64 = var_390;
    let var_2d0: i64;
    let var_2c8: *mut c_void;
    let mut result: u64;
    let var_388: i64;
    
    if -(rax_1) != -0x8000000000000000
    {
        let var_360: i64;
        let var_3c8_1: i64 = var_360;
        let var_370: i128;
        let var_3d8_1: i128 = var_370;
        let var_380: i128;
        let var_3e8_1: i128 = var_380;
        let mut var_3f8: i64 = rax_1;
        let var_3f0_1: i64 = var_388;
        let mut rdx_3: *mut c_void = nullptr;
        
        if var_2d0 != -0x8000000000000000
        {
            rdx_3 = var_2c8;
        }
        
        let var_2c0: u64;
        uu_split::Settings::from::hea7ff87a16a6485d(&var_390, &var_3f8, rdx_3, var_2c0);
        
        if var_390 != 2
        {
            memcpy(&var_2e8, &var_390, 0xa8);
            let mut result_1: u64;
            let mut rdx_5: *mut *mut c_void;
            result_1 = uu_split::split::h209135f55e0a4504(&var_2e8);
            result = result_1;
            core::ptr::drop_in_place$LT$uu_split..Settings$GT$::h4ed21db3b97856ff(&var_390);
        }
        else
        {
            let mut rdx_4: i64 = 0;
            
            if var_388 - 4 < 5
            {
                rdx_4 = var_388 - 3;
            }
            
            if rdx_4 != 0
            {
                if rdx_4 != 1 || var_380 != 1
                {
                    goto 'label_461094;
                }
                
                goto 'label_460f79;
            }
            
            let mut var_458: *mut i128;
            let mut var_448: i128;
            
            if var_388 == 3
            {
                'label_460f79:
                let var_428_1: i64 = *var_370[8];
                let var_438_1: i128 = var_380;
                var_448 = var_388;
                var_458 = &var_448;
                let var_450_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$uu_split..SettingsError$u20$as$u20$core..fmt..Display$GT$::fmt::h76b66ede8e82a9c4;
                var_2e8 = &data_41adf0;
                *var_2e8[8] = 1;
                let var_2c8_1: i64 = 0;
                let var_2d8_1: *mut *mut i128 = &var_458;
                let mut var_2d0_1: i64 = 1;
                let mut var_3c0: i128;
                core::option::Option$LT$T$GT$::map_or_else::h8e0a26a11368ccde(&var_3c0, &var_2e8);
                var_2d0_1 = 1;
                var_2e8 = var_3c0;
                let var_3b0: i64;
                let var_2d8_2: i64 = var_3b0;
                result = alloc::boxed::Box$LT$T$GT$::new::hc5c45df65d430fe3(&var_2e8);
                core::ptr::drop_in_place$LT$uu_split..SettingsError$GT$::h1099a2ec031296e3(
                    &var_448);
            }
            else
            {
                'label_461094:
                let var_428_2: i64 = *var_370[8];
                let var_438_2: i128 = var_380;
                var_448 = var_388;
                var_458 = &var_448;
                let var_450_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$uu_split..SettingsError$u20$as$u20$core..fmt..Display$GT$::fmt::h76b66ede8e82a9c4;
                var_2e8 = &data_41adf0;
                *var_2e8[8] = 1;
                let var_2c8_2: i64 = 0;
                let var_2d8_3: *mut *mut i128 = &var_458;
                let mut var_2d0_2: i64 = 1;
                let mut var_3a8: i128;
                core::option::Option$LT$T$GT$::map_or_else::h8e0a26a11368ccde(&var_3a8, &var_2e8);
                var_2d0_2 = 1;
                var_2e8 = var_3a8;
                let var_398: i64;
                let var_2d8_4: i64 = var_398;
                result = alloc::boxed::Box$LT$T$GT$::new::hc5c45df65d430fe3(&var_2e8);
                core::ptr::drop_in_place$LT$uu_split..SettingsError$GT$::h1099a2ec031296e3(
                    &var_448);
            }
        }
        
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h0ea189ec09692b6a(&var_3f8);
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_388);
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h1a464790a9ce899a(var_2d0, var_2c8);
    result
}
