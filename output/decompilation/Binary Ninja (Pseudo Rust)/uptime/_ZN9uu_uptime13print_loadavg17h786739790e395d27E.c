
  fn uu_uptime::print_loadavg::h786739790e395d27() -> i64

{
    let mut var_60: i64;
    uucore::features::uptime::get_formatted_loadavg::hf18302e0e984d16a(&var_60);
    
    if 0 + -(var_60)
    {
        return core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h5a97466869852de6(&var_60);
    }
    
    let var_50: i64;
    let var_68: i64 = var_50;
    let mut var_78: i128 = var_60;
    let mut var_48: *mut i128 = &var_78;
    let var_40: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    let mut var_38: *mut c_void = &data_508278;
    let var_30: i64 = 2;
    let var_18: i64 = 0;
    let var_28: *mut *mut i128 = &var_48;
    let var_20: i64 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_38);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h968af28e0e2a109d(&var_78)
}
