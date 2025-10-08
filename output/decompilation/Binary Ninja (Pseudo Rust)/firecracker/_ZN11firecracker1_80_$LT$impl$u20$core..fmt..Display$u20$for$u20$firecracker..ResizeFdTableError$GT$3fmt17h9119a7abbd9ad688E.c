
  fn firecracker::_::_$LT$impl$u20$core..fmt..Display$u20$for$u20$firecracker..ResizeFdTableError$GT$::fmt::h9119a7abbd9ad688(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let rax: i64 = *arg1;
    let mut rax_1: *mut *mut c_void;
    
    if rax == 0
    {
        rax_1 = &data_7a45d8;
    }
    else if rax != 1
    {
        rax_1 = &data_7a45b8;
    }
    else
    {
        rax_1 = &data_7a45c8;
    }
    
    let mut var_30: *mut *mut c_void = rax_1;
    let var_28: i64 = 1;
    let var_20: i64 = 8;
    let var_18: i128 = {0};
    core::fmt::Formatter::write_fmt::h80c932efe9b76eb7(*arg2, arg2[1], &var_30)
}
