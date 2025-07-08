
  int128_t* uu_env::native_int_str::NativeStr::split_once::hcbed3488f59e21a4(int128_t* arg1, int64_t* arg2, int32_t* arg3)

{
    char rax;
    char rdx;
    rax = uu_env::native_int_str::get_single_native_int_value::h9b0956bba8ba8cc0(arg3);
    int64_t var_88;
    int64_t rax_3;
    int64_t rdx_1;
    int64_t r15_1;
    
    if (rax & 1)
    {
        char var_89 = rdx;
        int64_t rax_1 = arg2[1];
        r15_1 = arg2[2];
        var_88 = rax_1;
        int64_t var_80_1 = rax_1 + r15_1;
        rax_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::hb87f3f3f23ac2fda(&var_88, &var_89);
    }
    
    if (!(rax & 1) || !rax_3)
        *arg1 = -0x7fffffffffffffff;
    else
    {
        int128_t var_50;
        uu_env::native_int_str::NativeStr::slice::ha03bc113a9a10a12(&var_50, arg2, 0, rdx_1);
        int128_t var_38;
        uu_env::native_int_str::NativeStr::slice::ha03bc113a9a10a12(&var_38, arg2, rdx_1 + 1, 
            r15_1);
        int128_t zmm0_1 = var_50;
        var_88 = zmm0_1;
        int128_t zmm1_1 = var_38;
        *arg1 = zmm0_1;
        arg1[2] = *zmm1_1[8];
        int64_t var_28;
        *(arg1 + 0x28) = var_28;
        int64_t var_40;
        arg1[1] = var_40;
        *(arg1 + 0x18) = zmm1_1;
    }
    
    return arg1;
}
