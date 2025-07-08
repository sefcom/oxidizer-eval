
  int64_t* uu_split::uumain::uumain::h2b5f0a019fa6a07b(int64_t arg1, int64_t arg2)

{
    int128_t var_2e8;
    uu_split::handle_obsolete::he1565c7d7191f1a3(&var_2e8, arg1, arg2);
    int128_t var_418 = var_2e8;
    int64_t var_2c0;
    int64_t var_428 = var_2c0;
    int128_t var_2d0;
    int128_t var_438 = var_2d0;
    int64_t rbp;
    rbp = 1;
    uu_split::uu_app::h157e905e8df93f6d(&var_2e8);
    int64_t var_2d8;
    int64_t var_458 = var_2d8;
    int128_t var_468 = var_418;
    int64_t var_390;
    clap_builder::builder::command::Command::try_get_matches_from::hc3c3da3cda774606(&var_390, 
        &var_2e8, &var_468);
    int64_t rax_3 = var_390;
    int64_t* result;
    int64_t var_388;
    
    if (rax_3 != -0x8000000000000000)
    {
        int64_t var_360;
        int64_t var_3c8_1 = var_360;
        int128_t var_370;
        int128_t var_3d8_1 = var_370;
        int128_t var_380;
        int128_t var_3e8_1 = var_380;
        int64_t var_3f8 = rax_3;
        int64_t var_3f0_1 = var_388;
        uu_split::Settings::from::h19dd94bcd15a49c5(&var_390, &var_3f8, &var_438);
        
        if (var_390 != 2)
        {
            memcpy(&var_2e8, &var_390, 0xa8);
            int128_t* result_1;
            void** rdx_4;
            result_1 = uu_split::split::h3b6295d78012e56b(&var_2e8);
            result = result_1;
            int64_t rbp_1;
            rbp_1 = 1;
            core::ptr::drop_in_place$LT$uu_split..Settings$GT$::h17e116cdac8f5958(&var_2e8);
            rbp_1 = 1;
        }
        else
        {
            int64_t rdx_3 = 0;
            
            if (var_388 - 4 < 5)
                rdx_3 = var_388 - 3;
            
            if (rdx_3)
            {
                if (rdx_3 != 1 || var_380 != 1)
                    goto label_4761e6;
                
                goto label_4760c8;
            }
            
            int128_t* var_478;
            
            if (var_388 == 3)
            {
                label_4760c8:
                int64_t var_448_1 = *var_370[8];
                var_458 = var_380;
                var_468 = var_388;
                var_478 = &var_468;
                int64_t (* var_470_1)(int64_t* arg1, void* arg2) = _$LT$uu_split..SettingsError$u20$as$u20$core..fmt..Display$GT$::fmt::hd067355b054e5aca;
                var_2e8 = &data_418130;
                *var_2e8[8] = 1;
                *var_2d0[8] = 0;
                int128_t** var_2d8_1 = &var_478;
                var_2d0 = 1;
                int128_t var_3c0;
                core::option::Option$LT$T$GT$::map_or_else::h11882c33e7a1a822(&var_3c0, &var_2e8);
                var_2d0 = 1;
                var_2e8 = var_3c0;
                int64_t var_3b0;
                int64_t var_2d8_2 = var_3b0;
                result = alloc::boxed::Box$LT$T$GT$::new::h051d8dae61dc6094(&var_2e8);
                core::ptr::drop_in_place$LT$uu_split..SettingsError$GT$::h59a67ae88e993ca1(
                    &var_468);
            }
            else
            {
                label_4761e6:
                int64_t var_448_2 = *var_370[8];
                var_458 = var_380;
                var_468 = var_388;
                var_478 = &var_468;
                int64_t (* var_470_2)(int64_t* arg1, void* arg2) = _$LT$uu_split..SettingsError$u20$as$u20$core..fmt..Display$GT$::fmt::hd067355b054e5aca;
                var_2e8 = &data_418130;
                *var_2e8[8] = 1;
                *var_2d0[8] = 0;
                int128_t** var_2d8_3 = &var_478;
                var_2d0 = 1;
                int128_t var_3a8;
                core::option::Option$LT$T$GT$::map_or_else::h11882c33e7a1a822(&var_3a8, &var_2e8);
                var_2d0 = 1;
                var_2e8 = var_3a8;
                int64_t var_398;
                int64_t var_2d8_4 = var_398;
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
    return result;
}
