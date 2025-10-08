
  fn uu_fmt::parasplit::Line::get_formatline::h28c127a954ff67e6(arg1: *mut i128, arg2: *mut i64) -> i64

{
    if 0 + -(*arg2)
    {
        let mut var_40: *mut *mut c_void = &data_4f0458;
        let var_38: i64 = 1;
        let var_30: i64 = 8;
        let var_28: i128 = {0};
        core::panicking::panic_fmt::h96f341d36638c225(&var_40);
        /* no return */
    }
    
    let result: i64 = arg2[6];
    arg1[3] = result;
    let zmm0: i128 = *arg2;
    let zmm1: i128 = *arg2.byte_offset(0x10);
    arg1[2] = *arg2.byte_offset(0x20);
    arg1[1] = zmm1;
    *arg1 = zmm0;
    result
}
