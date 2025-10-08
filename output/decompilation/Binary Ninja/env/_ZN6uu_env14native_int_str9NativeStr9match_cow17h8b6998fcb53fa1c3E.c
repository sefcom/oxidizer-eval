
  int64_t uu_env::native_int_str::NativeStr::match_cow::h8b6998fcb53fa1c3(int64_t* arg1, int64_t* arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6)

{
    int64_t r10 = arg2[1];
    int64_t rax = arg2[2];
    
    if (!(0 + -(*arg2)))
    {
        int64_t var_28;
        uu_env::native_int_str::NativeStr::slice::_$u7b$$u7b$closure$u7d$$u7d$::h456473c1385a89bd(
            &var_28, arg5, arg6, r10, rax);
        int64_t rax_2 = var_28;
        int128_t var_20;
        
        if (rax_2 != -0x8000000000000000)
            *(arg1 + 8) = var_20;
        else
            rax_2 = -0x7fffffffffffffff;
        *arg1 = rax_2;
        return rax_2;
    }
    
    int64_t rax_1;
    int64_t rdx_1;
    rax_1 =
        uu_env::native_int_str::NativeStr::slice::_$u7b$$u7b$closure$u7d$$u7d$::h7067d6e8c3543060(
        arg3, arg4, r10, rax);
    
    if (!rax_1)
    {
        *arg1 = -0x7fffffffffffffff;
        return rax_1;
    }
    
    *arg1 = -0x8000000000000000;
    arg1[1] = rax_1;
    arg1[2] = rdx_1;
    return rax_1;
}
