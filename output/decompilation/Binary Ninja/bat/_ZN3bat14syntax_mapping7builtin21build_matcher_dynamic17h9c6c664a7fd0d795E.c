
  int64_t* bat::syntax_mapping::builtin::build_matcher_dynamic::h9c6c664a7fd0d795(int64_t* arg1, void* arg2, int64_t arg3)

{
    int64_t var_d8 = 0;
    int64_t var_d0 = 1;
    int64_t var_c8 = 0;
    int64_t var_a8;
    int128_t var_a0;
    int64_t rsi_3;
    
    if (!arg3)
        rsi_3 = 1;
    else
    {
        void* r14_2 = arg2 + 8;
        int64_t rbp_1 = arg3 * 0x18;
        
        while (true)
        {
            if (!(*(r14_2 - 8) & 1))
            {
                int64_t rsi = *r14_2;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h30747c9efb6a6381(&var_d8, rsi, *(r14_2 + 8) + rsi);
                r14_2 += 0x18;
                int64_t temp0_1 = rbp_1;
                rbp_1 -= 0x18;
                
                if (temp0_1 != 0x18)
                    continue;
            }
            else
            {
                std::env::var::h5e55fe97aab94671(&var_a8, r14_2);
                
                if (var_a8 & 1)
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h1489211aaee639b9(&var_a8);
                    goto label_843137;
                }
                
                int64_t rax_1 = var_a0;
                
                if (rax_1 == -0x8000000000000000)
                    goto label_843137;
                
                int64_t var_c0 = rax_1;
                int64_t rsi_2 = var_a0;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h30747c9efb6a6381(&var_d8, rsi_2, *var_a0[8] + rsi_2);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_c0);
                r14_2 += 0x18;
                int64_t temp1_1 = rbp_1;
                rbp_1 -= 0x18;
                
                if (temp1_1 != 0x18)
                    continue;
            }
            
            rsi_3 = var_d0;
            break;
        }
    }
    
    bat::syntax_mapping::make_glob_matcher::hb323052747e788f0(&var_a8, rsi_3);
    int64_t rax_2 = var_a8;
    
    if (rax_2 != -0x8000000000000000)
    {
        int64_t var_50;
        arg1[0xb] = var_50;
        int128_t var_60;
        *(arg1 + 0x48) = var_60;
        int128_t var_70;
        *(arg1 + 0x38) = var_70;
        int128_t var_80;
        *(arg1 + 0x28) = var_80;
        int128_t var_90;
        *(arg1 + 0x18) = var_90;
        *(arg1 + 8) = var_a0;
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$globset..glob..GlobMatcher$C$bat..error..Error$GT$$GT$::h20daa161d52b07ec(&var_a8);
        label_843137:
        rax_2 = -0x8000000000000000;
    }
    
    *arg1 = rax_2;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_d8);
    return arg1;
}
