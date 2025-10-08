
  fn uu_uptime::print_uptime::h3abdc53142303b39(arg1: i64) -> i64

{
    let mut var_60: i64;
    uucore::features::uptime::get_formatted_uptime::hb339f4077851a9d5(&var_60, arg1);
    let rcx: i64 = var_60;
    let result: i64;
    
    if -(rcx) == -0x8000000000000000
    {
        return result;
    }
    
    var_60 = rcx;
    let result_1: i64 = result;
    let var_50: i64;
    let var_50_1: i64 = var_50;
    let mut var_48: *mut i64 = &var_60;
    let var_40_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    let mut var_38: *mut *mut [i8; 0x4] = &data_508310;
    let var_30_1: i64 = 2;
    let var_18_1: i64 = 0;
    let var_28_1: *mut *mut i64 = &var_48;
    let var_20_1: i64 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_38);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h968af28e0e2a109d(&var_60);
    0
}
