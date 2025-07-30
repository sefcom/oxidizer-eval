
  fn backdoorautomater::sanitizer::sanitize_time::hd3370276699eb02b(arg1: *mut i128, arg2: *mut i128) -> i64

{
    let mut var_40: *mut *mut [i8; 0xc3];
    regex::regex::string::Regex::new::h6831ffd0596491b3(&var_40, 
        "[^0-9/]+Error!: /.bashrcpython3 …");
    let mut var_60: *mut c_void;
    core::result::Result$LT$T$C$E$GT$::unwrap::h6578ed1ee3bd5b33(&var_60, &var_40);
    let var_58: *mut c_void;
    
    if regex::regex::string::Regex::is_match_at::h541fe506ce15d7f3(var_60, var_58, 
        *arg2.byte_offset(8), arg2[1]) == 0
    {
        arg1[1] = arg2[1];
        *arg1 = *arg2;
        return core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h5dc5ee83f4543ad0(
            &var_60);
    }
    
    var_40 = &data_62a5d0;
    let var_38: i64 = 1;
    let var_30: i64 = 8;
    let var_28: i128 = {0};
    core::panicking::panic_fmt::he7d3af46f65769b3();
    /* no return */
}
