
  int64_t uu_env::native_int_str::NativeStr::match_cow::h3a8b8e3880da14e4(int64_t* arg1, int64_t* arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6)

{
    int64_t rcx = arg2[1];
    int64_t rax = arg2[2];
    int64_t result;
    
    if (*arg2 != -0x8000000000000000)
    {
        int64_t var_58;
        result = uu_env::native_int_str::NativeStr::slice::_$u7b$$u7b$closure$u7d$$u7d$::h033cea41decbbfeb(&var_58, arg5, arg6, rcx, rax);
        
        if (var_58 != -0x8000000000000000)
        {
            int64_t var_40;
            core::ops::function::FnOnce::call_once::h63e4e715c9d610ef(&var_40, &var_58);
            int128_t var_38;
            int128_t var_20_1 = var_38;
            int64_t var_28 = var_40;
            return core::ops::function::FnOnce::call_once::hac7f13179b0dca92(arg1, &var_28);
        }
        
        *arg1 = -0x7fffffffffffffff;
    }
    else
    {
        int64_t rdx_1;
        result = uu_env::native_int_str::NativeStr::slice::_$u7b$$u7b$closure$u7d$$u7d$::h1d1e8395e04fa064(arg3, arg4, rcx, rax);
        
        if (!result)
            *arg1 = -0x7fffffffffffffff;
        else
        {
            *arg1 = -0x8000000000000000;
            arg1[1] = result;
            arg1[2] = rdx_1;
        }
    }
    
    return result;
}
