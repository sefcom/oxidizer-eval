
  fn uu_ls::create_hyperlink::h72b30fed8b305b42(arg1: *mut i128, arg2: i64, arg3: i64, arg4: *mut c_void) -> i64

{
    let mut var_90: i64 = arg2;
    let var_88: i64 = arg3;
    let mut var_108: *mut c_void;
    hostname::get::h61ff34d453bc4655(&var_108);
    let mut var_d8: i128;
    let mut var_c8: size_t;
    let var_100: i64;
    
    if var_108 != -0x8000000000000000
    {
        let var_f8: size_t;
        var_c8 = var_f8;
        var_d8 = var_108;
    }
    else
    {
        uu_ls::create_hyperlink::_$u7b$$u7b$closure$u7d$$u7d$::h5c4b22834743e018(&var_d8, var_100);
    }
    let mut var_80: ();
    std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&var_80, *var_d8[8], var_c8);
    std::fs::canonicalize::h205134df7886662b(&var_108, arg4.byte_offset(0x18));
    let mut var_c0: ();
    core::result::Result$LT$T$C$E$GT$::unwrap_or_default::h2f717c7e2037f670(&var_c0, &var_108);
    let var_b8: i64;
    let var_b0: size_t;
    let mut var_a8: ();
    std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&var_a8, var_b8, var_b0);
    let var_a0: *mut c_void;
    var_108 = var_a0;
    let var_98: *mut c_void;
    let var_100_1: *mut c_void = var_98.byte_offset(var_a0);
    let var_f8_1: *const i8 = &data_436393[0x28];
    let var_f0: i64 = 6;
    let mut var_68: ();
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$alloc..string..String$GT$$GT$::from_iter::h5a0c4658461ac5be(&var_68, &var_108);
    var_108 = &var_80;
    let var_100_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hdd85d91aa0a3dd15;
    let var_f8_2: *mut c_void = &var_68;
    let var_f0_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    let var_e8: *mut i64 = &var_90;
    let var_e0: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
    let mut var_50: *mut *mut [i8; 0x0] = &data_6129e8;
    let var_48: i64 = 4;
    let var_30: i64 = 0;
    let var_40: *mut i64 = &var_108;
    let var_38: i64 = 3;
    core::option::Option$LT$T$GT$::map_or_else::h7fca96e7ce97ddb7(arg1, &var_50);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_68);
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h950c753f5d689b41(&var_a8);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h585d8b757a674aea(&var_c0);
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h950c753f5d689b41(&var_80);
    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h51f173604a280fb6(&var_d8)
}
