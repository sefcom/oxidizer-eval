
  fn rg::flags::hiargs::wsl_prefix::h1107136839cef0cf(arg1: *mut i64) -> i64

{
    let mut var_b8: *mut *mut [i8; 0xc6];
    let result: i64 =
        std::env::var_os::hb4475f8d1a095f3c(&var_b8, "WSL_DISTRO_NAMEthe literalnot al…");
    
    if 0 + -(var_b8)
    {
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    let var_a8: i64;
    let var_78_1: i64 = var_a8;
    let mut var_88: i128 = var_b8;
    let mut r14_1: *mut i8 = *var_88[8];
    let rdx_2: u64 = core::str::converts::from_utf8::h8a6dc80f786921e0(&var_b8, r14_1, var_a8);
    let mut var_b0: i128;
    let mut var_68: i128;
    let mut var_58: *const i8;
    
    if var_b8 != 1
    {
        var_68 = var_b0;
        var_58 = &var_68;
        let var_50_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
        var_b8 = &data_7eb400;
        var_b0 = 1;
        let var_98_2: i64 = 0;
        let var_a8_2: *const *const i8 = &var_58;
        let var_a0_2: i64 = 1;
        let mut var_30: i128;
        core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_30, 0, rdx_2, &var_b8);
        let var_20: i64;
        arg1[2] = var_20;
        *arg1 = var_30;
    }
    else
    {
        if core::sync::atomic::atomic_load::headb9992cbbd027a(
            &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4
        {
            var_68 = &var_88;
            *var_68[8] =
                _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
            var_b8 = &data_7eb3e0;
            var_b0 = 2;
            let var_98_1: i64 = 0;
            let var_a8_1: *mut i128 = &var_68;
            let var_a0_1: i64 = 1;
            let rax_1: i64 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb410);
            var_58 = "rg::flags::hiargserror building …";
            let var_50_1: i64 = 0x11;
            let var_48_1: *const i8 = "rg::flags::hiargserror building …";
            let var_40_1: i64 = 0x11;
            let var_38_1: i64 = rax_1;
            log::__private_api::log::h124fdfc9e9ed7585(&var_b8, 4, &var_58);
            r14_1 = *var_88[8];
        }
        
        *arg1 = -0x8000000000000000;
    }
    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::ha1b355bbd6f8eb7b(var_88, r14_1)
}
