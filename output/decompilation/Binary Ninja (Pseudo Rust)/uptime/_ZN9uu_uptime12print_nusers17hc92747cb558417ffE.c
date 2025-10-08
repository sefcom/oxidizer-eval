
  fn uu_uptime::print_nusers::hc92747cb558417ff(arg1: i8) -> i64

{
    let mut rsi: i64;
    
    if (arg1 & 1) == 0
    {
        rsi = uucore::features::uptime::get_nusers::h1db0d77211e135b8();
    }
    
    let mut var_20: ();
    uucore::features::uptime::format_nusers::h076f2c9c059b6e41(&var_20, rsi);
    let mut var_60: *mut c_void = &var_20;
    let var_58: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    let mut var_50: *mut c_void = &data_5082d0;
    let var_48: i64 = 2;
    let var_30: i64 = 0;
    let var_40: *mut *mut c_void = &var_60;
    let var_38: i64 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_50);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h968af28e0e2a109d(&var_20)
}
