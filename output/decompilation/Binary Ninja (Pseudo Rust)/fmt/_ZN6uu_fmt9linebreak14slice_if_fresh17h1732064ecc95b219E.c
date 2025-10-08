
  fn uu_fmt::linebreak::slice_if_fresh::h1732064ecc95b219(arg1: *mut i64, arg2: i32, arg3: *mut c_void, arg4: i64, arg5: i64, arg6: i8, arg7: i8, arg8: i8, arg9: i8) -> *mut c_void

{
    let rax: i64;
    let var_28: i64 = rax;
    let mut result: *mut c_void;
    let mut rsi_1: i64;
    
    if arg2 == 0
    {
        result = arg7;
        rsi_1 = 0;
        
        if result != 0
        {
            rsi_1 = ((arg9 & result) | arg8) + 1;
        }
        
        if arg6 != 0
        {
            rsi_1 = ((arg9 & result) | arg8) + 1;
        }
    }
    else
    {
        let mut rdx_1: i64;
        result = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(arg5, arg3, arg4);
        
        if result == 0
        {
            core::str::slice_error_fail::h1a2885084e28d077(arg3, arg4, arg5, arg4);
            /* no return */
        }
        
        arg4 = rdx_1;
        rsi_1 = 0;
        arg3 = result;
    }
    
    *arg1 = rsi_1;
    arg1[1] = arg3;
    arg1[2] = arg4;
    result
}
