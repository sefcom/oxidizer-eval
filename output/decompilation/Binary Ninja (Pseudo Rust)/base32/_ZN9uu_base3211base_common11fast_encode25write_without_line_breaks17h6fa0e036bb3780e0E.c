
  fn uu_base32::base_common::fast_encode::write_without_line_breaks::h6fa0e036bb3780e0(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i8) -> i64

{
    let rax: i64;
    let var_28: i64 = rax;
    let mut result: i64 = arg3(arg2, 
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::h690597712d12dddd(
            arg1));
    
    if result == 0
    {
        if arg4 != 0
        {
            /* jump -> arg3 */
        }
        
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::truncate::h73fe8c7a0c90d99e(arg1, 0);
        result = 0;
        arg1[2] = 0;
    }
    
    result
}
