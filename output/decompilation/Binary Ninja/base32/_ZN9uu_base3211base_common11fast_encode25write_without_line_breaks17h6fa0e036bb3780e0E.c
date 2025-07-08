
  int64_t uu_base32::base_common::fast_encode::write_without_line_breaks::h6fa0e036bb3780e0(int64_t* arg1, int64_t arg2, int64_t arg3, char arg4)

{
    int64_t rax;
    int64_t var_28 = rax;
    int64_t result = arg3(arg2, 
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::h690597712d12dddd(
            arg1));
    
    if (!result)
    {
        if (arg4)
            /* jump -> arg3 */
        
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::truncate::h73fe8c7a0c90d99e(arg1, 0);
        result = 0;
        arg1[2] = 0;
    }
    
    return result;
}
