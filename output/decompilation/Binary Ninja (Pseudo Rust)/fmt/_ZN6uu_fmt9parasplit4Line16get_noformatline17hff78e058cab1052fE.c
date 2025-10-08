
  fn uu_fmt::parasplit::Line::get_noformatline::hff78e058cab1052f(arg1: *mut i128, arg2: *mut i64) -> i64

{
    if 0 + -(*arg2)
    {
        arg1[1] = arg2[3];
        *arg1 = *arg2.byte_offset(8);
        let result: i8 = arg2[4];
        *arg1.byte_offset(0x18) = result;
        return result;
    }
    
    let mut var_40: *mut *mut [i8; 0xed] = &data_4f0480;
    let var_38: i64 = 1;
    let var_30: i64 = 8;
    let var_28: i128 = {0};
    core::panicking::panic_fmt::h96f341d36638c225(&var_40);
    /* no return */
}
