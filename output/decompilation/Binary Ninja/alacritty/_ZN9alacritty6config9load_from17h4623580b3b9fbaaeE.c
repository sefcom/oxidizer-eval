
  int64_t alacritty::config::load_from::h4623580b3b9fbaae(int64_t* arg1, int64_t arg2)

{
    int64_t var_518 = arg2;
    int64_t rdx;
    int64_t var_510 = rdx;
    int32_t var_438;
    alacritty::config::read_config::hd2b840009702364f(&var_438);
    
    if (var_438 != 6)
        return memcpy(arg1, &var_438, 0x420);
    
    int32_t var_430;
    int64_t result;
    char const (** const var_508)[0xb0];
    int128_t var_4d8;
    void* const var_480;
    int64_t* var_458;
    
    if (var_430 != 3)
    {
        label_842c48:
        var_4d8 = var_430;
        
        if (core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0))
        {
            var_458 = &var_518;
            int64_t (* var_450_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h3a6a9966801425ec;
            int128_t* var_448_1 = &var_4d8;
            int64_t (* var_440_1)(int64_t* arg1, int64_t* arg2) = _$LT$alacritty..config..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h8f6deb2eaa2aacd3;
            var_508 = &data_c81e00;
            int64_t var_500_1 = 2;
            int64_t var_4e8_1 = 0;
            int64_t** var_4f8_1 = &var_458;
            int64_t var_4f0_1 = 2;
            int64_t rax_4 = log::__private_api::loc::h250021ea1f26630a(&data_c81e38);
            var_480 = "alacritty_config_derivealacritty…";
            int64_t var_478_1 = 0x17;
            char const* const var_470_1 = "alacritty::configReloading confi…";
            int64_t var_468_1 = 0x11;
            int64_t var_460_1 = rax_4;
            log::__private_api::log::h0b6680b994d742b1(&var_508, 1, &var_480);
        }
        
        int64_t result_1;
        result = result_1;
        arg1[0xb] = result;
        int128_t var_3f0;
        *(arg1 + 0x48) = var_3f0;
        int128_t zmm0_1 = var_4d8;
        int128_t var_400;
        *(arg1 + 0x38) = var_400;
        int128_t var_410;
        *(arg1 + 0x28) = var_410;
        int128_t var_420;
        *(arg1 + 0x18) = var_420;
        *(arg1 + 8) = zmm0_1;
        *arg1 = 6;
    }
    else
    {
        int64_t* var_428;
        
        if (std::io::error::Error::kind::h135fe00c4e7365f3(var_428))
            goto label_842c48;
        
        var_458 = var_428;
        result = core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0);
        
        if (!result)
        {
            arg1[1] = 3;
            arg1[2] = var_428;
            *arg1 = 6;
            label_842e8c:
            
            if (var_430 != 3)
                return core::ptr::drop_in_place$LT$alacritty..config..Error$GT$::hc0565752af3cd056(
                    &var_430);
        }
        else
        {
            var_480 = &var_518;
            int64_t (* var_478_2)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h3a6a9966801425ec;
            var_4d8 = &data_c81de0;
            *var_4d8[8] = 2;
            int128_t var_4b8;
            var_4b8 = 0;
            int128_t var_4c8;
            var_4c8 = &var_480;
            *var_4c8[8] = 1;
            int64_t rax_5 = log::__private_api::loc::h250021ea1f26630a(&data_c81e20);
            var_508 = "alacritty_config_derivealacritty…";
            int64_t var_500_2 = 0x17;
            char const* const var_4f8_2 = "alacritty::configReloading confi…";
            int64_t var_4f0_2 = 0x11;
            int64_t var_4e8_2 = rax_5;
            result = log::__private_api::log::h0b6680b994d742b1(&var_4d8, 1, &var_508);
            bool cond:0_1 = var_438 != 6;
            arg1[1] = 3;
            arg1[2] = var_428;
            *arg1 = 6;
            
            if (!cond:0_1)
                goto label_842e8c;
        }
    }
    return result;
}
