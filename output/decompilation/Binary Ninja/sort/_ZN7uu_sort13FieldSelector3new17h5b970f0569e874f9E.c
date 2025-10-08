
  int128_t* uu_sort::FieldSelector::new::h5b970f0569e874f9(int128_t* arg1, int128_t* arg2, int128_t* arg3, int64_t arg4)

{
    int64_t rdi = *(arg2 + 8);
    
    if (!rdi)
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1bb0423170e7fa7c(arg1, "invalid character index 0 for th…", 0x3b);
        *(arg1 + 0x37) = 2;
        return arg1;
    }
    
    uint8_t rax_1 = arg4 >> 0x28;
    uint32_t r9 = rax_1;
    int64_t r10 = *arg2;
    int64_t rdi_2;
    int64_t r8_1;
    
    if ((rdi ^ 1) | (r10 ^ 1))
    {
        rdi_2 = r9 != 2;
        r8_1 = 1;
        
        if (r10 == 1)
            r8_1 = arg3[1] != 2;
    }
    else if (arg3[1] != 2)
    {
        rdi_2 = r9 != 2;
        r8_1 = 1;
    }
    else
    {
        if (rax_1 >= 2)
        {
            rdi_2 = 0;
            r8_1 = 0;
        }
        
        if (rax_1 < 2 || arg2[1] == 1)
        {
            rdi_2 = r9 != 2;
            r8_1 = 0;
        }
    }
    
    int128_t var_20 = *arg2;
    int64_t rsi = arg3[1];
    int128_t zmm0 = *arg3;
    int128_t var_38 = zmm0;
    arg1[2] = *var_20[8];
    *(arg1 + 0x28) = arg2[1];
    *arg1 = zmm0;
    arg1[1] = rsi;
    *(arg1 + 0x18) = var_20;
    *(arg1 + 0x34) = arg4 >> 0x20;
    arg1[3] = arg4;
    *(arg1 + 0x35) = rax_1;
    *(arg1 + 0x36) = r8_1;
    *(arg1 + 0x37) = rdi_2;
    return arg1;
}
