
  fn uu_seq::select_precision::h84cf8927d3a54a3b(arg1: *mut i32, arg2: *mut i32, arg3: *mut i64)

{
    if *arg1 != 1 || *arg2 != 1 || *arg3 == 0
    {
        return;
    }
    
    let rdi: i64 = *arg1.byte_offset(8);
    let rsi: i64 = *arg2.byte_offset(8);
    
    if (rsi | rdi | arg3[1]) == 0
    {
        return;
    }
    
    let var_8: i64 = 1;
    core::cmp::Ord::max::hc4036d29a65f4853(rdi, rsi);
}
