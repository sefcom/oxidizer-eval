
  fn alacritty::config::load_from::h4623580b3b9fbaae(arg1: *mut i64, arg2: i64) -> i64

{
    let mut var_518: i64 = arg2;
    let rdx: i64;
    let var_510: i64 = rdx;
    let mut var_438: i32;
    alacritty::config::read_config::hd2b840009702364f(&var_438);
    
    if var_438 != 6
    {
        return memcpy(arg1, &var_438, 0x420);
    }
    
    let mut var_430: i32;
    let mut result: i64;
    let mut var_508: *mut *mut [i8; 0xb0];
    let mut var_4d8: i128;
    let mut var_480: *mut c_void;
    let mut var_458: *mut i64;
    
    if var_430 != 3
    {
        'label_842c48:
        var_4d8 = var_430;
        
        if core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) != 0
        {
            var_458 = &var_518;
            let var_450_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h3a6a9966801425ec;
            let var_448_1: *mut i128 = &var_4d8;
            let var_440_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alacritty..config..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h8f6deb2eaa2aacd3;
            var_508 = &data_c81e00;
            let var_500_1: i64 = 2;
            let var_4e8_1: i64 = 0;
            let var_4f8_1: *mut *mut i64 = &var_458;
            let var_4f0_1: i64 = 2;
            let rax_4: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c81e38);
            var_480 = "alacritty_config_derivealacritty…";
            let var_478_1: i64 = 0x17;
            let var_470_1: *const i8 = "alacritty::configReloading confi…";
            let var_468_1: i64 = 0x11;
            let var_460_1: i64 = rax_4;
            log::__private_api::log::h0b6680b994d742b1(&var_508, 1, &var_480);
        }
        
        let result_1: i64;
        result = result_1;
        arg1[0xb] = result;
        let var_3f0: i128;
        *arg1.byte_offset(0x48) = var_3f0;
        let zmm0_1: i128 = var_4d8;
        let var_400: i128;
        *arg1.byte_offset(0x38) = var_400;
        let var_410: i128;
        *arg1.byte_offset(0x28) = var_410;
        let var_420: i128;
        *arg1.byte_offset(0x18) = var_420;
        *arg1.byte_offset(8) = zmm0_1;
        *arg1 = 6;
    }
    else
    {
        let var_428: *mut i64;
        
        if std::io::error::Error::kind::h135fe00c4e7365f3(var_428) != 0
        {
            goto 'label_842c48;
        }
        
        var_458 = var_428;
        result = core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0);
        
        if result == 0
        {
            arg1[1] = 3;
            arg1[2] = var_428;
            *arg1 = 6;
            'label_842e8c:
            
            if var_430 != 3
            {
                return core::ptr::drop_in_place$LT$alacritty..config..Error$GT$::hc0565752af3cd056(
                    &var_430);
            }
        }
        else
        {
            var_480 = &var_518;
            let var_478_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h3a6a9966801425ec;
            var_4d8 = &data_c81de0;
            *var_4d8[8] = 2;
            let mut var_4b8: i128;
            var_4b8 = 0;
            let mut var_4c8: i128;
            var_4c8 = &var_480;
            *var_4c8[8] = 1;
            let rax_5: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c81e20);
            var_508 = "alacritty_config_derivealacritty…";
            let var_500_2: i64 = 0x17;
            let var_4f8_2: *const i8 = "alacritty::configReloading confi…";
            let var_4f0_2: i64 = 0x11;
            let var_4e8_2: i64 = rax_5;
            result = log::__private_api::log::h0b6680b994d742b1(&var_4d8, 1, &var_508);
            let cond:0_1: bool = var_438 != 6;
            arg1[1] = 3;
            arg1[2] = var_428;
            *arg1 = 6;
            
            if !cond:0_1
            {
                goto 'label_842e8c;
            }
        }
    }
    result
}
