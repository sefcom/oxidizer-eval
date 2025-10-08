
  int128_t* uu_env::native_int_str::NativeStr::split_once::hd6fa271acc4759ea(int128_t* arg1, int64_t* arg2, int32_t* arg3)

{
    char rax;
    char rdx;
    rax = uu_env::native_int_str::get_single_native_int_value::h3916294b36a5dcb6(arg3);
    int64_t var_88;
    char rax_3;
    int64_t rdx_1;
    int64_t r15_1;
    
    if (rax & 1)
    {
        char var_89 = rdx;
        int64_t rax_1 = arg2[1];
        r15_1 = arg2[2];
        var_88 = rax_1;
        int64_t var_80_1 = rax_1 + r15_1;
        rax_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::h63e9c5b79db2e425(&var_88, &var_89);
    }
    
    if (!(rax & 1) || !(rax_3 & 1))
        *arg1 = -0x7fffffffffffffff;
    else
    {
        int128_t var_58;
        uu_env::native_int_str::NativeStr::slice::h43fb2a01de359fa5(&var_58, arg2, 0, rdx_1);
        int128_t var_40;
        uu_env::native_int_str::NativeStr::slice::h43fb2a01de359fa5(&var_40, arg2, rdx_1 + 1, 
            r15_1);
        int128_t zmm0_1 = var_58;
        var_88 = zmm0_1;
        int128_t zmm1_1 = var_40;
        *arg1 = zmm0_1;
        arg1[2] = *zmm1_1[8];
        int64_t var_30;
        *(arg1 + 0x28) = var_30;
        int64_t var_48;
        arg1[1] = var_48;
        *(arg1 + 0x18) = zmm1_1;
    }
    
    return arg1;
}
