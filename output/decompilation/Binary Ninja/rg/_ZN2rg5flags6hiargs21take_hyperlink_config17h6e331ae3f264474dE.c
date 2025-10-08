
  uint64_t rg::flags::hiargs::take_hyperlink_config::h6e331ae3f264474d(void* arg1)

{
    int64_t var_40 = -0x8000000000000000;
    int64_t var_28 = -0x8000000000000000;
    int64_t rsi = 0;
    *(arg1 + 0x1e8);
    
    if (!(0 + -(*(arg1 + 0x1d8))))
        rsi = *(arg1 + 0x1e0);
    
    int64_t var_80;
    rg::flags::hiargs::hostname::h842f73e1e84d80bb(&var_80, rsi);
    int128_t var_e8;
    int64_t** var_d8;
    int64_t var_c8;
    int128_t var_b8;
    int64_t* var_90;
    int64_t** var_70;
    char const* const var_68;
    char const* const var_58;
    
    if (var_80 != -0x8000000000000000)
    {
        var_b8 = var_80;
        
        if (core::sync::atomic::atomic_load::headb9992cbbd027a(
            &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4)
        {
            var_90 = &var_b8;
            int64_t (* var_88_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_e8 = &data_7eb208;
            *var_e8[8] = 1;
            var_c8 = 0;
            int64_t** var_d8_1 = &var_90;
            int64_t var_d0_1 = 1;
            int64_t rax_3 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb238);
            var_68 = "rg::flags::hiargserror building …";
            int64_t var_60_1 = 0x11;
            var_58 = "rg::flags::hiargserror building …";
            int64_t var_50_1 = 0x11;
            int64_t var_48_1 = rax_3;
            log::__private_api::log::h124fdfc9e9ed7585(&var_e8, 4, &var_68);
        }
        
        var_d8 = var_70;
        var_e8 = var_b8;
        grep_printer::hyperlink::HyperlinkEnvironment::host::hfd05be8174aeda4a(&var_40, &var_e8);
    }
    else
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h21c1035d1def9f19(&var_80);
    
    rg::flags::hiargs::wsl_prefix::h1107136839cef0cf(&var_80);
    
    if (var_80 != -0x8000000000000000)
    {
        var_b8 = var_80;
        
        if (core::sync::atomic::atomic_load::headb9992cbbd027a(
            &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4)
        {
            var_90 = &var_b8;
            int64_t (* var_88_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_e8 = &data_7eb218;
            *var_e8[8] = 1;
            var_c8 = 0;
            int64_t** var_d8_2 = &var_90;
            int64_t var_d0_2 = 1;
            int64_t rax_7 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb250);
            var_68 = "rg::flags::hiargserror building …";
            int64_t var_60_2 = 0x11;
            var_58 = "rg::flags::hiargserror building …";
            int64_t var_50_2 = 0x11;
            int64_t var_48_2 = rax_7;
            log::__private_api::log::h124fdfc9e9ed7585(&var_e8, 4, &var_68);
        }
        
        var_d8 = var_70;
        var_e8 = var_b8;
        grep_printer::hyperlink::HyperlinkEnvironment::wsl_prefix::hcfa3d430dadbbe01(&var_40, 
            &var_e8);
    }
    else
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h21c1035d1def9f19(&var_80);
    
    int64_t** var_a8;
    var_a8 = *(arg1 + 0x150);
    var_b8 = *(arg1 + 0x140);
    *(arg1 + 0x140) = 0;
    *(arg1 + 0x148) = 8;
    *(arg1 + 0x150) = 0;
    *(arg1 + 0x158) = 0;
    
    if (core::sync::atomic::atomic_load::headb9992cbbd027a(
        &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4)
    {
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::he33983b6928b70eb(
            &var_80, &var_b8);
        var_90 = &var_80;
        int64_t (* var_88_3)(void* arg1, int64_t* arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Debug$GT$::fmt::h71b66d641ee8f111;
        var_e8 = &data_7eb228;
        *var_e8[8] = 1;
        var_c8 = 0;
        var_d8 = &var_90;
        int64_t var_d0_3 = 1;
        int64_t rax_10 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb268);
        var_68 = "rg::flags::hiargserror building …";
        int64_t var_60_3 = 0x11;
        var_58 = "rg::flags::hiargserror building …";
        int64_t var_50_3 = 0x11;
        int64_t var_48_3 = rax_10;
        log::__private_api::log::h124fdfc9e9ed7585(&var_e8, 4, &var_68);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_80);
    }
    
    int128_t var_20;
    var_c8 = var_20;
    int128_t var_30;
    var_d8 = var_30;
    var_e8 = var_40;
    var_58 = var_a8;
    var_68 = var_b8;
    return grep_printer::hyperlink::HyperlinkConfig::new::hfa44b70ce19cc27e(&var_e8, &var_68);
}
