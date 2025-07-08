
  int128_t* uu_sort::FieldSelector::new::h76b0cdeb9dd3e1dd(int128_t* arg1, int128_t* arg2, int128_t* arg3, int64_t arg4)

{
    uint64_t r8 = *(arg2 + 8);
    
    if (!r8)
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1d4334c76f34ab0e(arg1, 
            "invalid character index 0 for th…", 0x3b);
        *(arg1 + 0x37) = 2;
    }
    else
    {
        uint8_t rax_2 = arg4 >> 0x28;
        uint32_t rdi = rax_2;
        
        if (*arg2 != 1)
        {
            rdi = rdi != 2;
            r8 = 1;
        }
        else
        {
            if (r8 != 1)
            {
                rdi = rdi != 2;
                r8 = arg3[1];
            }
            else
            {
                r8 = arg3[1];
                rdi = rdi != 2;
                rdi &= (r8 ^ 2) | arg2[1] | rax_2 < 2;
            }
            
            r8 = r8 != 2;
        }
        
        int128_t var_20_1 = *arg2;
        int64_t rsi = arg3[1];
        int128_t zmm0 = *arg3;
        int128_t var_38_1 = zmm0;
        arg1[2] = *var_20_1[8];
        *(arg1 + 0x28) = arg2[1];
        *arg1 = zmm0;
        arg1[1] = rsi;
        *(arg1 + 0x18) = var_20_1;
        *(arg1 + 0x34) = arg4 >> 0x20;
        arg1[3] = arg4;
        *(arg1 + 0x35) = rax_2;
        *(arg1 + 0x36) = r8;
        *(arg1 + 0x37) = rdi;
    }
    
    return arg1;
}
