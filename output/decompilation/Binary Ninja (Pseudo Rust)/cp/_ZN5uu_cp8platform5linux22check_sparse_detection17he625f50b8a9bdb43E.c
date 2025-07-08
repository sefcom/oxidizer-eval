
  fn uu_cp::platform::linux::check_sparse_detection::he625f50b8a9bdb43(arg1: *mut i8) -> i64

{
    let mut var_c0: i32;
    let rsi: i64;
    std::fs::File::open::h2ade805364297b3f(&var_c0, rsi);
    let result: i64;
    
    if var_c0 != 0
    {
        *arg1.byte_offset(8) = result;
        *arg1 = 1;
        return result;
    }
    
    let fd: i32;
    let mut fd_1: i32 = fd;
    std::fs::File::metadata::he899a18112e6f19e(&var_c0, &fd_1);
    let var_70: i64;
    let var_60: i64;
    
    if var_c0 == 2
    {
        *arg1.byte_offset(8) = result;
        *arg1 = 1;
    }
    else if var_60 >= var_70 >> 9
    {
        *arg1 = 0;
    }
    else
    {
        arg1[1] = 1;
        *arg1 = 0;
    }
    core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd)
}
