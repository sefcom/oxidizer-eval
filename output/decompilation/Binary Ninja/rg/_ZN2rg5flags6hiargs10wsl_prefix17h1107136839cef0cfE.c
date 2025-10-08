
  int64_t rg::flags::hiargs::wsl_prefix::h1107136839cef0cf(int64_t* arg1)

{
    char const (** const var_b8)[0xc6];
    int64_t result =
        std::env::var_os::hb4475f8d1a095f3c(&var_b8, "WSL_DISTRO_NAMEthe literalnot al…");
    
    if (0 + -(var_b8))
    {
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    int64_t var_a8;
    int64_t var_78_1 = var_a8;
    int128_t var_88 = var_b8;
    char* r14_1 = *var_88[8];
    uint64_t rdx_2 = core::str::converts::from_utf8::h8a6dc80f786921e0(&var_b8, r14_1, var_a8);
    int128_t var_b0;
    int128_t var_68;
    char const* const var_58;
    
    if (var_b8 != 1)
    {
        var_68 = var_b0;
        var_58 = &var_68;
        int64_t (* var_50_2)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
        var_b8 = &data_7eb400;
        var_b0 = 1;
        int64_t var_98_2 = 0;
        char const* const* var_a8_2 = &var_58;
        int64_t var_a0_2 = 1;
        int128_t var_30;
        core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_30, 0, rdx_2, &var_b8);
        int64_t var_20;
        arg1[2] = var_20;
        *arg1 = var_30;
    }
    else
    {
        if (core::sync::atomic::atomic_load::headb9992cbbd027a(
            &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4)
        {
            var_68 = &var_88;
            *var_68[8] =
                _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
            var_b8 = &data_7eb3e0;
            var_b0 = 2;
            int64_t var_98_1 = 0;
            int128_t* var_a8_1 = &var_68;
            int64_t var_a0_1 = 1;
            int64_t rax_1 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb410);
            var_58 = "rg::flags::hiargserror building …";
            int64_t var_50_1 = 0x11;
            char const* const var_48_1 = "rg::flags::hiargserror building …";
            int64_t var_40_1 = 0x11;
            int64_t var_38_1 = rax_1;
            log::__private_api::log::h124fdfc9e9ed7585(&var_b8, 4, &var_58);
            r14_1 = *var_88[8];
        }
        
        *arg1 = -0x8000000000000000;
    }
    return core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::ha1b355bbd6f8eb7b(var_88, 
        r14_1);
}
