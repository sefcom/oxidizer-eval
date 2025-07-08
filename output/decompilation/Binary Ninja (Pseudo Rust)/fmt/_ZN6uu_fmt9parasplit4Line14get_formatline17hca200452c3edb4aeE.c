
  fn uu_fmt::parasplit::Line::get_formatline::hca200452c3edb4ae(arg1: *mut i128, arg2: *mut i64) -> i64

{
    if *arg2 == -0x8000000000000000
    {
        let mut var_40: *mut *mut [i8; 0xb3] = &data_5265d0;
        let var_38: i64 = 1;
        let var_30: i64 = 8;
        let var_28: i128 = {0};
        core::panicking::panic_fmt::he12d0d7468628bb4(&var_40);
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
