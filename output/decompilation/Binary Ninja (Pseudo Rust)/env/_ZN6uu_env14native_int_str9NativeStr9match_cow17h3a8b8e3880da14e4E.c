
  fn uu_env::native_int_str::NativeStr::match_cow::h3a8b8e3880da14e4(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: i64, arg5: i64, arg6: i64) -> i64

{
    let rcx: i64 = arg2[1];
    let rax: i64 = arg2[2];
    let mut result: i64;
    
    if *arg2 != -0x8000000000000000
    {
        let mut var_58: i64;
        result = uu_env::native_int_str::NativeStr::slice::_$u7b$$u7b$closure$u7d$$u7d$::h033cea41decbbfeb(&var_58, arg5, arg6, rcx, rax);
        
        if var_58 != -0x8000000000000000
        {
            let mut var_40: i64;
            core::ops::function::FnOnce::call_once::h63e4e715c9d610ef(&var_40, &var_58);
            let var_38: i128;
            let var_20_1: i128 = var_38;
            let mut var_28: i64 = var_40;
            return core::ops::function::FnOnce::call_once::hac7f13179b0dca92(arg1, &var_28);
        }
        
        *arg1 = -0x7fffffffffffffff;
    }
    else
    {
        let mut rdx_1: i64;
        result = uu_env::native_int_str::NativeStr::slice::_$u7b$$u7b$closure$u7d$$u7d$::h1d1e8395e04fa064(arg3, arg4, rcx, rax);
        
        if result == 0
        {
            *arg1 = -0x7fffffffffffffff;
        }
        else
        {
            *arg1 = -0x8000000000000000;
            arg1[1] = result;
            arg1[2] = rdx_1;
        }
    }
    
    result
}
