
  fn uu_hostid::hostid::h7b168fc893b08b3c() -> *mut c_void

{
    let mut var_48: u64 = gethostid();
    let mut var_40: *mut u64 = &var_48;
    let var_38: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$i64$GT$::fmt::h790a60f40feefc95;
    let mut var_30: *mut c_void = &data_4d5270;
    let var_28: i64 = 2;
    let var_10: *mut c_void = &data_417828;
    let var_8: i64 = 1;
    let var_20: *mut *mut u64 = &var_40;
    let var_18: i64 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_30)
}
