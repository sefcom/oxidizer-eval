
  int64_t rg::flags::hiargs::platform_hostname::h0858a6014f6c37dc(int64_t* arg1)

{
    int128_t* var_38;
    grep_cli::hostname::hostname::h92c4a1ccf3300345(&var_38);
    int128_t var_b8;
    int32_t var_90;
    char const* const var_60;
    
    if (0 + -(var_38))
    {
        int64_t var_30;
        int64_t var_98 = var_30;
        
        if (core::sync::atomic::atomic_load::headb9992cbbd027a(
            &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4)
        {
            var_b8 = &var_98;
            *var_b8[8] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
            var_90 = &data_7eb380;
            int64_t var_88_1 = 1;
            int64_t var_70_1 = 0;
            int128_t* var_80_1 = &var_b8;
            int64_t var_78_1 = 1;
            int64_t rax_2 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb3c8);
            var_60 = "rg::flags::hiargserror building …";
            int64_t var_58_1 = 0x11;
            char const* const var_50_1 = "rg::flags::hiargserror building …";
            int64_t var_48_1 = 0x11;
            int64_t var_40_1 = rax_2;
            log::__private_api::log::h124fdfc9e9ed7585(&var_90, 4, &var_60);
        }
        
        *arg1 = -0x8000000000000000;
        return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haa31b1f83e302f9e(&var_98);
    }
    
    int64_t var_28;
    int64_t var_a8_1 = var_28;
    var_b8 = var_38;
    char* r14_1 = *var_b8[8];
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_90, r14_1, var_28);
    
    if (var_90 != 1)
    {
        int64_t var_88;
        uint64_t var_80;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_90, var_88, var_80);
        arg1[2] = var_80;
        *arg1 = var_90;
        /* tailcall */
        return core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::ha1b355bbd6f8eb7b(
            var_b8, r14_1);
    }
    
    if (core::sync::atomic::atomic_load::headb9992cbbd027a(
        &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4)
    {
        var_38 = &var_b8;
        int64_t (* var_30_1)(void* arg1, int64_t* arg2) =
            _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
        var_90 = &data_7eb390;
        int64_t var_88_2 = 2;
        int64_t var_70_2 = 0;
        int128_t** var_80_2 = &var_38;
        int64_t var_78_2 = 1;
        int64_t rax_5 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb3b0);
        var_60 = "rg::flags::hiargserror building …";
        int64_t var_58_2 = 0x11;
        char const* const var_50_2 = "rg::flags::hiargserror building …";
        int64_t var_48_2 = 0x11;
        int64_t var_40_2 = rax_5;
        log::__private_api::log::h124fdfc9e9ed7585(&var_90, 4, &var_60);
        r14_1 = *var_b8[8];
    }
    
    *arg1 = -0x8000000000000000;
    return core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::ha1b355bbd6f8eb7b(var_b8, 
        r14_1);
}
