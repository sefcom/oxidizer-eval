
  fn uu_cp::platform::linux::check_sparse_detection::hf45a87016948019f(arg1: *mut i8, arg2: i64) -> i64

{
    let mut var_c0: i32;
    std::fs::File::open::h87ebb42518eeb9ff(&var_c0, arg2);
    let result: i64;
    
    if var_c0 == 1
    {
        *arg1.byte_offset(8) = result;
        *arg1 = 1;
        return result;
    }
    
    let fd: i32;
    let mut fd_1: i32 = fd;
    std::fs::File::metadata::h5e84e533705f8c98(&var_c0, &fd_1);
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
    core::ptr::drop_in_place$LT$std..fs..File$GT$::h35b109c6d943b47b(fd)
}
