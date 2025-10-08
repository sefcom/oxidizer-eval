
  uint64_t uu_split::uumain::uumain::h0027435fadacba1f(int64_t arg1, int64_t arg2)

{
    int128_t var_2e8;
    uu_split::handle_obsolete::hff2fd928c2a7a858(&var_2e8, arg1, arg2);
    int64_t var_2d8;
    int64_t var_408 = var_2d8;
    int128_t var_418 = var_2e8;
    uu_split::uu_app::h4bc5bb72ff3a6c94(&var_2e8);
    int64_t var_390;
    clap_builder::builder::command::Command::try_get_matches_from::h690c9a28c22d83f7(&var_390, 
        &var_2e8, &var_418);
    int64_t rax_1 = var_390;
    int64_t var_2d0;
    void* var_2c8;
    uint64_t result;
    int64_t var_388;
    
    if (-(rax_1) != -0x8000000000000000)
    {
        int64_t var_360;
        int64_t var_3c8_1 = var_360;
        int128_t var_370;
        int128_t var_3d8_1 = var_370;
        int128_t var_380;
        int128_t var_3e8_1 = var_380;
        int64_t var_3f8 = rax_1;
        int64_t var_3f0_1 = var_388;
        void* rdx_3 = nullptr;
        
        if (var_2d0 != -0x8000000000000000)
            rdx_3 = var_2c8;
        
        uint64_t var_2c0;
        uu_split::Settings::from::hea7ff87a16a6485d(&var_390, &var_3f8, rdx_3, var_2c0);
        
        if (var_390 != 2)
        {
            memcpy(&var_2e8, &var_390, 0xa8);
            uint64_t result_1;
            void** rdx_5;
            result_1 = uu_split::split::h209135f55e0a4504(&var_2e8);
            result = result_1;
            core::ptr::drop_in_place$LT$uu_split..Settings$GT$::h4ed21db3b97856ff(&var_390);
        }
        else
        {
            int64_t rdx_4 = 0;
            
            if (var_388 - 4 < 5)
                rdx_4 = var_388 - 3;
            
            if (rdx_4)
            {
                if (rdx_4 != 1 || var_380 != 1)
                    goto label_461094;
                
                goto label_460f79;
            }
            
            int128_t* var_458;
            int128_t var_448;
            
            if (var_388 == 3)
            {
                label_460f79:
                int64_t var_428_1 = *var_370[8];
                int128_t var_438_1 = var_380;
                var_448 = var_388;
                var_458 = &var_448;
                int64_t (* var_450_1)(int64_t* arg1, int64_t* arg2) = _$LT$uu_split..SettingsError$u20$as$u20$core..fmt..Display$GT$::fmt::h76b66ede8e82a9c4;
                var_2e8 = &data_41adf0;
                *var_2e8[8] = 1;
                int64_t var_2c8_1 = 0;
                int128_t** var_2d8_1 = &var_458;
                int64_t var_2d0_1 = 1;
                int128_t var_3c0;
                core::option::Option$LT$T$GT$::map_or_else::h8e0a26a11368ccde(&var_3c0, &var_2e8);
                var_2d0_1 = 1;
                var_2e8 = var_3c0;
                int64_t var_3b0;
                int64_t var_2d8_2 = var_3b0;
                result = alloc::boxed::Box$LT$T$GT$::new::hc5c45df65d430fe3(&var_2e8);
                core::ptr::drop_in_place$LT$uu_split..SettingsError$GT$::h1099a2ec031296e3(
                    &var_448);
            }
            else
            {
                label_461094:
                int64_t var_428_2 = *var_370[8];
                int128_t var_438_2 = var_380;
                var_448 = var_388;
                var_458 = &var_448;
                int64_t (* var_450_2)(int64_t* arg1, int64_t* arg2) = _$LT$uu_split..SettingsError$u20$as$u20$core..fmt..Display$GT$::fmt::h76b66ede8e82a9c4;
                var_2e8 = &data_41adf0;
                *var_2e8[8] = 1;
                int64_t var_2c8_2 = 0;
                int128_t** var_2d8_3 = &var_458;
                int64_t var_2d0_2 = 1;
                int128_t var_3a8;
                core::option::Option$LT$T$GT$::map_or_else::h8e0a26a11368ccde(&var_3a8, &var_2e8);
                var_2d0_2 = 1;
                var_2e8 = var_3a8;
                int64_t var_398;
                int64_t var_2d8_4 = var_398;
                result = alloc::boxed::Box$LT$T$GT$::new::hc5c45df65d430fe3(&var_2e8);
                core::ptr::drop_in_place$LT$uu_split..SettingsError$GT$::h1099a2ec031296e3(
                    &var_448);
            }
        }
        
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h0ea189ec09692b6a(&var_3f8);
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_388);
    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h1a464790a9ce899a(var_2d0, var_2c8);
    return result;
}
