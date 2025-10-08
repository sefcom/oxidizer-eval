
  fn rg::flags::hiargs::platform_hostname::h0858a6014f6c37dc(arg1: *mut i64) -> i64

{
    let mut var_38: *mut i128;
    grep_cli::hostname::hostname::h92c4a1ccf3300345(&var_38);
    let mut var_b8: i128;
    let mut var_90: i32;
    let mut var_60: *const i8;
    
    if 0 + -(var_38)
    {
        let var_30: i64;
        let mut var_98: i64 = var_30;
        
        if core::sync::atomic::atomic_load::headb9992cbbd027a(
            &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4
        {
            var_b8 = &var_98;
            *var_b8[8] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
            var_90 = &data_7eb380;
            let var_88_1: i64 = 1;
            let var_70_1: i64 = 0;
            let var_80_1: *mut i128 = &var_b8;
            let var_78_1: i64 = 1;
            let rax_2: i64 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb3c8);
            var_60 = "rg::flags::hiargserror building …";
            let var_58_1: i64 = 0x11;
            let var_50_1: *const i8 = "rg::flags::hiargserror building …";
            let var_48_1: i64 = 0x11;
            let var_40_1: i64 = rax_2;
            log::__private_api::log::h124fdfc9e9ed7585(&var_90, 4, &var_60);
        }
        
        *arg1 = -0x8000000000000000;
        return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haa31b1f83e302f9e(&var_98);
    }
    
    let var_28: i64;
    let var_a8_1: i64 = var_28;
    var_b8 = var_38;
    let mut r14_1: *mut i8 = *var_b8[8];
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_90, r14_1, var_28);
    
    if var_90 != 1
    {
        let var_88: i64;
        let var_80: u64;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_90, var_88, var_80);
        arg1[2] = var_80;
        *arg1 = var_90;
        /* tailcall */
        return core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::ha1b355bbd6f8eb7b(
            var_b8, r14_1);
    }
    
    if core::sync::atomic::atomic_load::headb9992cbbd027a(
        &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4
    {
        var_38 = &var_b8;
        let var_30_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 =
            _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
        var_90 = &data_7eb390;
        let var_88_2: i64 = 2;
        let var_70_2: i64 = 0;
        let var_80_2: *mut *mut i128 = &var_38;
        let var_78_2: i64 = 1;
        let rax_5: i64 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb3b0);
        var_60 = "rg::flags::hiargserror building …";
        let var_58_2: i64 = 0x11;
        let var_50_2: *const i8 = "rg::flags::hiargserror building …";
        let var_48_2: i64 = 0x11;
        let var_40_2: i64 = rax_5;
        log::__private_api::log::h124fdfc9e9ed7585(&var_90, 4, &var_60);
        r14_1 = *var_b8[8];
    }
    
    *arg1 = -0x8000000000000000;
    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::ha1b355bbd6f8eb7b(var_b8, r14_1)
}
