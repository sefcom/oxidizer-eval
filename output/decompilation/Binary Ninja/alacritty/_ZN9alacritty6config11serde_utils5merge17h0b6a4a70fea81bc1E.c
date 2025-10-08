
  int64_t alacritty::config::serde_utils::merge::h0b6a4a70fea81bc1(int128_t* arg1, int128_t* arg2, int128_t* arg3)

{
    int88_t var_b8 = arg2[1];
    int128_t var_c8 = *arg2;
    int128_t zmm1 = arg3[1];
    int128_t var_a8 = *arg3;
    int88_t var_98 = zmm1;
    char rax_1 = 6;
    
    if (*var_b8[0xa] - 2 < 6)
        rax_1 = *var_b8[0xa] - 2;
    
    int128_t* rdi_5;
    int128_t var_68;
    int128_t zmm0;
    
    if (rax_1 == 5)
    {
        if (*var_98[0xa] != 7)
        {
            zmm0 = *arg3;
            arg1[1] = arg3[1];
            *arg1 = zmm0;
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$toml..value..Value$GT$$GT$::h03c7773122835213(&var_c8);
        }
        
        int64_t rax_7 = arg2[1];
        int128_t var_88 = *arg2;
        var_68 = *arg3;
        int64_t rdx = arg3[1];
        int64_t var_58_1 = rdx;
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h6bb287e271a114cd(&var_88, *var_68[8], rdx);
        int64_t var_58_2 = 0;
        arg1[1] = rax_7;
        *arg1 = var_88;
        *(arg1 + 0x1a) = 7;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$toml..value..Value$GT$$GT$::h03c7773122835213(&var_68);
        char rax_10 = 6;
        
        if (*var_b8[0xa] - 2 < 6)
            rax_10 = *var_b8[0xa] - 2;
        
        if (rax_10 == 5)
            goto label_836459;
        
        if (rax_10 != 6)
        {
            label_83644d:
            core::ptr::drop_in_place$LT$toml..value..Value$GT$::h7761fefc14a7cec1(&var_c8);
            goto label_836459;
        }
        
        core::ptr::drop_in_place$LT$toml..map..Map$LT$alloc..string..String$C$toml..value..Value$GT$$GT$::h77749c849d56b1e5(&var_c8);
        label_836459:
        char result = *var_98[0xa] - 2;
        char result_1 = 6;
        
        if (result < 6)
            result_1 = result;
        
        if (result_1 - 5 < 2)
            return result;
        
        rdi_5 = &var_a8;
    }
    else
    {
        if (rax_1 == 6)
        {
            if ((*var_98[0xa] | 0xf8) >= 0xfa)
            {
                zmm0 = *arg3;
                arg1[1] = arg3[1];
                *arg1 = zmm0;
                return core::ptr::drop_in_place$LT$toml..map..Map$LT$alloc..string..String$C$toml..value..Value$GT$$GT$::h77749c849d56b1e5(&var_c8);
            }
            
            int128_t var_38_1 = arg2[1];
            int128_t var_48 = *arg2;
            alacritty::config::serde_utils::merge_tables::h62792841f9a2f486(&var_68, &var_48, arg3);
            int128_t zmm0_1 = var_68;
            int64_t var_58;
            arg1[1] = var_58;
            *arg1 = zmm0_1;
            char rax_5 = 6;
            
            if (*var_b8[0xa] - 2 < 6)
                rax_5 = *var_b8[0xa] - 2;
            
            if (rax_5 == 6)
                goto label_836459;
            
            if (rax_5 != 5)
                goto label_83644d;
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$toml..value..Value$GT$$GT$::h03c7773122835213(&var_c8);
            goto label_836459;
        }
        
        zmm0 = *arg3;
        arg1[1] = arg3[1];
        *arg1 = zmm0;
        rdi_5 = &var_c8;
    }
    return core::ptr::drop_in_place$LT$toml..value..Value$GT$::h7761fefc14a7cec1(rdi_5);
}
