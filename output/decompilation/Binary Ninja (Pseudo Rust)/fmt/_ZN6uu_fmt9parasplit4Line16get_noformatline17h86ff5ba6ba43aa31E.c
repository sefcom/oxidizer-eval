
  fn uu_fmt::parasplit::Line::get_noformatline::h86ff5ba6ba43aa31(arg1: *mut i128, arg2: *mut i64) -> i64

{
    if *arg2 == -0x8000000000000000
    {
        arg1[1] = arg2[3];
        *arg1 = *arg2.byte_offset(8);
        let result: i8 = arg2[4];
        *arg1.byte_offset(0x18) = result;
        return result;
    }
    
    let mut var_40: *mut *mut c_void = &data_5265f8;
    let var_38: i64 = 1;
    let var_30: i64 = 8;
    let var_28: i128 = {0};
    core::panicking::panic_fmt::he12d0d7468628bb4(&var_40);
    /* no return */
}
