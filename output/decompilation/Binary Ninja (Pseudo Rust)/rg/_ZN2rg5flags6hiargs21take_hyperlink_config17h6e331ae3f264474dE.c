
  fn rg::flags::hiargs::take_hyperlink_config::h6e331ae3f264474d(arg1: *mut c_void) -> u64

{
    let mut var_40: i64 = -0x8000000000000000;
    let var_28: i64 = -0x8000000000000000;
    let mut rsi: i64 = 0;
    *arg1.byte_offset(0x1e8);
    
    if !(0 + -(*arg1.byte_offset(0x1d8)))
    {
        rsi = *arg1.byte_offset(0x1e0);
    }
    
    let mut var_80: i64;
    rg::flags::hiargs::hostname::h842f73e1e84d80bb(&var_80, rsi);
    let mut var_e8: i128;
    let mut var_d8: *mut *mut i64;
    let mut var_c8: i64;
    let mut var_b8: i128;
    let mut var_90: *mut i64;
    let var_70: *mut *mut i64;
    let mut var_68: *const i8;
    let mut var_58: *const i8;
    
    if var_80 != -0x8000000000000000
    {
        var_b8 = var_80;
        
        if core::sync::atomic::atomic_load::headb9992cbbd027a(
            &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4
        {
            var_90 = &var_b8;
            let var_88_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_e8 = &data_7eb208;
            *var_e8[8] = 1;
            var_c8 = 0;
            let var_d8_1: *mut *mut i64 = &var_90;
            let var_d0_1: i64 = 1;
            let rax_3: i64 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb238);
            var_68 = "rg::flags::hiargserror building …";
            let var_60_1: i64 = 0x11;
            var_58 = "rg::flags::hiargserror building …";
            let var_50_1: i64 = 0x11;
            let var_48_1: i64 = rax_3;
            log::__private_api::log::h124fdfc9e9ed7585(&var_e8, 4, &var_68);
        }
        
        var_d8 = var_70;
        var_e8 = var_b8;
        grep_printer::hyperlink::HyperlinkEnvironment::host::hfd05be8174aeda4a(&var_40, &var_e8);
    }
    else
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h21c1035d1def9f19(&var_80);
    }
    
    rg::flags::hiargs::wsl_prefix::h1107136839cef0cf(&var_80);
    
    if var_80 != -0x8000000000000000
    {
        var_b8 = var_80;
        
        if core::sync::atomic::atomic_load::headb9992cbbd027a(
            &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4
        {
            var_90 = &var_b8;
            let var_88_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_e8 = &data_7eb218;
            *var_e8[8] = 1;
            var_c8 = 0;
            let var_d8_2: *mut *mut i64 = &var_90;
            let var_d0_2: i64 = 1;
            let rax_7: i64 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb250);
            var_68 = "rg::flags::hiargserror building …";
            let var_60_2: i64 = 0x11;
            var_58 = "rg::flags::hiargserror building …";
            let var_50_2: i64 = 0x11;
            let var_48_2: i64 = rax_7;
            log::__private_api::log::h124fdfc9e9ed7585(&var_e8, 4, &var_68);
        }
        
        var_d8 = var_70;
        var_e8 = var_b8;
        grep_printer::hyperlink::HyperlinkEnvironment::wsl_prefix::hcfa3d430dadbbe01(&var_40, 
            &var_e8);
    }
    else
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h21c1035d1def9f19(&var_80);
    }
    
    let mut var_a8: *mut *mut i64;
    var_a8 = *arg1.byte_offset(0x150);
    var_b8 = *arg1.byte_offset(0x140);
    *arg1.byte_offset(0x140) = 0;
    *arg1.byte_offset(0x148) = 8;
    *arg1.byte_offset(0x150) = 0;
    *arg1.byte_offset(0x158) = 0;
    
    if core::sync::atomic::atomic_load::headb9992cbbd027a(
        &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4
    {
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::he33983b6928b70eb(
            &var_80, &var_b8);
        var_90 = &var_80;
        let var_88_3: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Debug$GT$::fmt::h71b66d641ee8f111;
        var_e8 = &data_7eb228;
        *var_e8[8] = 1;
        var_c8 = 0;
        var_d8 = &var_90;
        let var_d0_3: i64 = 1;
        let rax_10: i64 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb268);
        var_68 = "rg::flags::hiargserror building …";
        let var_60_3: i64 = 0x11;
        var_58 = "rg::flags::hiargserror building …";
        let var_50_3: i64 = 0x11;
        let var_48_3: i64 = rax_10;
        log::__private_api::log::h124fdfc9e9ed7585(&var_e8, 4, &var_68);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_80);
    }
    
    let var_20: i128;
    var_c8 = var_20;
    let var_30: i128;
    var_d8 = var_30;
    var_e8 = var_40;
    var_58 = var_a8;
    var_68 = var_b8;
    grep_printer::hyperlink::HyperlinkConfig::new::hfa44b70ce19cc27e(&var_e8, &var_68)
}
