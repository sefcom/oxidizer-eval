
  fn uu_od::inputoffset::InputOffset::print_final_offset::h93616ef1acb63221(arg1: *mut i64)

{
    if arg1[3] == 3 && *arg1 == 0
    {
        return;
    }
    
    let mut var_20: ();
    uu_od::inputoffset::InputOffset::format_byte_offset::h2a35c86a9cc6c7a3(&var_20, arg1);
    let mut var_60: *mut c_void = &var_20;
    let var_58: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    let mut var_50: *mut c_void = &data_502418;
    let var_48: i64 = 2;
    let var_30: i64 = 0;
    let var_40: *mut *mut c_void = &var_60;
    let var_38: i64 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_50);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0ecbbb68ed17b0f1(&var_20);
}
