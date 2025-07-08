
  void* uu_fmt::linebreak::slice_if_fresh::h6f9344101bcdf0b0(int64_t* arg1, int32_t arg2, void* arg3, void* arg4, void* arg5, char arg6, char arg7, char arg8, char arg9)

{
    int64_t rax;
    int64_t var_28 = rax;
    void* result;
    int64_t rsi_1;
    
    if (!arg2)
    {
        result = arg7;
        rsi_1 = 0;
        
        if (result)
            rsi_1 = ((arg9 & result) | arg8) + 1;
        
        if (arg6)
            rsi_1 = ((arg9 & result) | arg8) + 1;
    }
    else
    {
        void* rdx_1;
        result = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(arg5, arg3, arg4);
        
        if (!result)
        {
            core::str::slice_error_fail::h5dbb61534404fe7e(arg3, arg4, arg5, arg4);
            /* no return */
        }
        
        arg4 = rdx_1;
        rsi_1 = 0;
        arg3 = result;
    }
    
    *arg1 = rsi_1;
    arg1[1] = arg3;
    arg1[2] = arg4;
    return result;
}
