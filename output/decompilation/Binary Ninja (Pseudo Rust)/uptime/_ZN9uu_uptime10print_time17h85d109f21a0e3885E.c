
  fn uu_uptime::print_time::h85d109f21a0e3885() -> i64

{
    let mut var_20: ();
    uucore::features::uptime::get_formatted_time::hdb71870ea10de290(&var_20);
    let mut var_60: *mut c_void = &var_20;
    let var_58: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    let mut var_50: *mut *mut [i8; 0x66] = &data_5082f0;
    let var_48: i64 = 2;
    let var_30: i64 = 0;
    let var_40: *mut *mut c_void = &var_60;
    let var_38: i64 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_50);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h968af28e0e2a109d(&var_20)
}
