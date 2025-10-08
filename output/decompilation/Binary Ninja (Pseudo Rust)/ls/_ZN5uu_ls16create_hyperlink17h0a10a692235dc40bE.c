
  fn uu_ls::create_hyperlink::h0a10a692235dc40b(arg1: *mut i128, arg2: i64, arg3: i64, arg4: *mut c_void) -> i64

{
    let mut var_118: *mut *mut [i8; 0x0];
    hostname::get::ha3f027e3ef97b427(&var_118);
    let mut var_e8: i128;
    let mut var_d8: u64;
    let var_110: i64;
    
    if !(0 + -(var_118))
    {
        let var_108: u64;
        var_d8 = var_108;
        var_e8 = var_118;
    }
    else
    {
        uu_ls::create_hyperlink::_$u7b$$u7b$closure$u7d$$u7d$::h3adf8c02b370a467(&var_e8, var_110);
    }
    let rbx: i64 = *var_e8[8];
    let mut var_78: ();
    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_78, rbx, var_d8);
    std::fs::canonicalize::hef8b07af9bd14c71(&var_118, arg4.byte_offset(0x18));
    let mut var_c8: ();
    core::result::Result$LT$T$C$E$GT$::unwrap_or_default::h0481ca2b4295af1c(&var_c8, &var_118);
    let var_c0: i64;
    let var_b8: u64;
    let mut var_b0: ();
    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_b0, var_c0, var_b8);
    let var_a8: *mut *mut [i8; 0x0];
    var_118 = var_a8;
    let var_a0: *mut c_void;
    let var_110_1: *mut c_void = var_a0.byte_offset(var_a8);
    let var_108_1: *const i8 = &data_4d4206[0x15];
    let var_100: i64 = 6;
    let mut var_60: ();
    core::iter::traits::iterator::Iterator::collect::h063b2a55e24d0217(&var_60, &var_118);
    let mut var_98: *mut c_void = &var_78;
    let var_90: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
        _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h836131a62ea12574;
    let var_88: *mut c_void = &var_60;
    let var_80: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_118 = &data_686d70;
    let var_110_2: i64 = 3;
    let var_f8: i64 = 0;
    let var_108_2: *mut *mut c_void = &var_98;
    let var_100_1: i64 = 2;
    let mut var_48: i128;
    core::option::Option$LT$T$GT$::map_or_else::h69a0b1154707aabf(&var_48, &var_118);
    var_118 = var_48;
    std::ffi::os_str::OsString::push::had4c4c06171a790f(&var_118, arg2, arg3);
    std::ffi::os_str::OsString::push::h8d27602952d812af(&var_118, &data_4d422e, 6);
    let var_38: i64;
    arg1[1] = var_38;
    *arg1 = var_118;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_60);
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h5012a4810cee898d(&var_b0);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h2dce88b0c646837f(&var_c8);
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h5012a4810cee898d(&var_78);
    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(var_e8, rbx)
}
