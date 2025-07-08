
  int128_t* uu_ls::display_len_or_rdev::habe6b45626a6ff16(int128_t* arg1, void* arg2, int64_t arg3, char arg4)

{
    int128_t* result;
    
    if (((0xb000 & *(arg2 + 0x38)) | 0x4000) != 0x6000)
    {
        if (!arg3)
        {
            core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e();
            /* no return */
        }
        
        int64_t rax_7 = *(arg2 + 0x50);
        uint64_t rax_8;
        uint64_t rdx_5;
        
        if (!((rax_7 | arg3) >> 0x20))
        {
            int32_t temp2_2 = arg3;
            rax_8 = COMBINE(0, rax_7) / temp2_2;
            rdx_5 = COMBINE(0, rax_7) % temp2_2;
        }
        else
        {
            int64_t rdx_4 = 0;
            int32_t temp2_1 = arg3;
            rax_8 = COMBINE(rdx_4, rax_7) / temp2_1;
            rdx_5 = COMBINE(rdx_4, rax_7) % temp2_1;
        }
        
        result = uu_ls::display_size::hba9b1cbdd7c6b199(arg1, rax_8 + 1, arg4);
        *(arg1 + 0x18) = -0x8000000000000000;
    }
    else
    {
        int64_t rax_2 = *(arg2 + 0x48);
        int32_t var_40 = (rax_2 >> 0x20 & 0xfffff000) | (rax_2 >> 8 & 0xfff);
        int32_t var_3c = (rax_2 >> 0xc & 0xffffff00) | rax_2;
        int128_t var_38;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h7a7a803d5c9f4a1c(&var_38, 
            &var_40);
        int128_t var_20;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h7a7a803d5c9f4a1c(&var_20, 
            &var_3c);
        int64_t var_28;
        arg1[1] = var_28;
        *arg1 = var_38;
        *(arg1 + 0x18) = var_20;
        int128_t* result_1;
        result = result_1;
        *(arg1 + 0x28) = result;
    }
    
    return result;
}
