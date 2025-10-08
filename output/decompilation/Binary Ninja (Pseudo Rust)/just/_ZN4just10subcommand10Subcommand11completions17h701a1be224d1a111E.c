
  fn just::subcommand::Subcommand::completions::h701a1be224d1a111(arg1: i8) -> *mut c_void

{
    let rcx: u64 = arg1;
    let rax: i64 = *(&data_49fa48).byte_offset(rcx << 3);
    let mut var_40: *mut c_void = *(&data_49fa30).byte_offset(rcx << 2) + &data_49fa30;
    let var_38: i64 = rax;
    let mut var_50: *mut *mut c_void = &var_40;
    let var_48: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
    let mut var_30: *const i8 = &data_465db0;
    let var_28: i64 = 1;
    let var_10: i64 = 0;
    let var_20: *mut *mut *mut c_void = &var_50;
    let var_18: i64 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_30)
}
