
  int64_t* uu_tr::operation::Sequence::solve_set_characters::hf6b9e7c9837a7276(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, char arg6, char arg7, char arg8)

{
    char* var_1e8;
    uu_tr::operation::Sequence::from_str::hc7b0ab68cb4e8382(&var_1e8, arg2, arg3);
    bool cond:0 = !var_1e8;
    int128_t var_1e0;
    int128_t var_228 = var_1e0;
    int64_t var_1d0;
    
    if (cond:0)
    {
        int128_t var_1b8 = var_228;
        char* rdi_1 = *var_1b8[8];
        
        if (!_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h1cab33b576bca811(rdi_1, &rdi_1[var_1d0 << 4]))
        {
            uu_tr::operation::Sequence::from_str::hc7b0ab68cb4e8382(&var_1e8, arg4, arg5);
            bool cond:1_1 = !var_1e8;
            var_228 = var_1e0;
            
            if (cond:1_1)
            {
                int128_t var_208 = var_228;
                char* r15_1 = *var_208[8];
                void* r14_3 = &r15_1[var_1d0 << 4];
                int64_t rcx;
                
                if (_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h1cab33b576bca811(r15_1, r14_3) <= 1)
                {
                    uint32_t r12_1 = arg8;
                    char rax_6;
                    
                    if (r12_1)
                    {
                        var_1e8 = r15_1;
                        var_1e0 = r14_3;
                        rax_6 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h7bb18215294ee2ea(&var_1e8);
                    }
                    
                    if (r12_1 && rax_6)
                    {
                        rcx = -0x7ffffffffffffffa;
                        goto label_4bd697;
                    }
                    
                    int64_t rax_7 = *var_1b8[8];
                    int64_t var_c0 = rax_7;
                    int64_t var_b8_1 = (var_1d0 << 4) + rax_7;
                    int64_t var_b0_1 = 0;
                    int64_t var_a0_1 = 0;
                    int128_t var_198;
                    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hd98ed131c7af542f(&var_198, &var_c0);
                    int64_t var_188;
                    
                    if (arg6)
                    {
                        int16_t var_158_1 = 0;
                        char var_156_1 = 0xff;
                        int128_t* var_160 = &var_198;
                        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h3fc2f6d282a93e56(&var_1e8, &var_160);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8b6037f7c42e6bd2(&var_198);
                        var_188 = *var_1e0[8];
                        var_198 = var_1e8;
                    }
                    
                    int64_t r13_1 = var_188;
                    int64_t rax_9 = *var_208[8];
                    int64_t var_60 = rax_9;
                    int64_t var_58_1 = (var_1d0 << 4) + rax_9;
                    int64_t var_50_1 = 0;
                    int64_t var_40_1 = 0;
                    int64_t rax_10 = core::iter::adapters::flatten::FlattenCompat$LT$I$C$U$GT$::iter_fold::h5221240c85754c5c(&var_60);
                    int64_t rcx_7 = 0;
                    
                    if (r13_1 >= rax_10)
                        rcx_7 = r13_1 - rax_10;
                    
                    int64_t var_150 = rcx_7;
                    int64_t rax_11 = *var_208[8];
                    int64_t var_148 = rax_11;
                    int64_t var_140_1 = (var_1d0 << 4) + rax_11;
                    int64_t* var_138_1 = &var_150;
                    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h475caf593186536a(&var_1e8, &var_148);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tr..operation..Sequence$GT$$GT$::hb9b8e4e5bd05f109(&var_208);
                    int64_t r14_4 = *var_1e0[8];
                    int64_t var_1f8_2 = r14_4;
                    var_208 = var_1e8;
                    int64_t r15_2 = *var_208[8];
                    var_228 = r15_2;
                    *var_228[8] = (r14_4 << 4) + r15_2;
                    int64_t var_218_2 = 0;
                    int64_t rax_15;
                    char* i;
                    rax_15 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7e21891cabe133c(&var_228);
                    
                    if (i)
                    {
                        int64_t var_168_1 = r13_1;
                        
                        do
                        {
                            if (*i == 4)
                            {
                                int64_t r12_2;
                                
                                if (!rax_15)
                                    r12_2 = 0;
                                else
                                {
                                    int64_t rcx_11 = *var_208[8];
                                    int64_t var_110_1 = rcx_11;
                                    int64_t var_108_1 = (var_1f8_2 << 4) + rcx_11;
                                    int64_t var_100_1 = rax_15;
                                    int64_t var_130 = 0;
                                    int64_t var_120_1 = 0;
                                    r12_2 = core::iter::adapters::flatten::FlattenCompat$LT$I$C$U$GT$::iter_fold::hf383c31b2191b5aa(&var_130);
                                }
                                
                                char* rax_17 = *var_1b8[8];
                                var_1e8 = rax_17;
                                var_1e0 = &rax_17[var_1d0 << 4];
                                *var_1e0[8] = 0;
                                
                                while (true)
                                {
                                    int64_t rax_19;
                                    char* rdx_6;
                                    rax_19 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7e21891cabe133c(&var_1e8);
                                    
                                    if (!rdx_6)
                                    {
                                        arg1[1] = -0x7ffffffffffffff9;
                                        *arg1 = -0x8000000000000000;
                                        goto label_4bd9c6;
                                    }
                                    
                                    if (*rdx_6 == 4)
                                    {
                                        int64_t rax_18;
                                        
                                        if (!rax_19)
                                            rax_18 = 0;
                                        else
                                        {
                                            int64_t rcx_15 = *var_1b8[8];
                                            int64_t var_d8_1 = rcx_15;
                                            int64_t var_d0_1 = (var_1d0 << 4) + rcx_15;
                                            int64_t var_c8_1 = rax_19;
                                            int64_t var_f8 = 0;
                                            int64_t var_e8_1 = 0;
                                            rax_18 = core::iter::adapters::flatten::FlattenCompat$LT$I$C$U$GT$::iter_fold::hf383c31b2191b5aa(&var_f8);
                                        }
                                        
                                        if (rax_18 == r12_2)
                                        {
                                            r13_1 = var_168_1;
                                            break;
                                        }
                                    }
                                }
                            }
                            
                            rax_15 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7e21891cabe133c(&var_228);
                        } while (i);
                        
                        r15_2 = *var_208[8];
                        r14_4 = var_1f8_2;
                    }
                    
                    int64_t var_90 = r15_2;
                    int64_t var_88_1 = (r14_4 << 4) + r15_2;
                    int64_t var_80_1 = 0;
                    int64_t var_70_1 = 0;
                    int128_t var_180;
                    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hd98ed131c7af542f(&var_180, &var_90);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h3c1bb440d2de9642(&var_228, &var_180);
                    alloc::slice::stable_sort::h08e6667fddf878a8(*var_228[8], var_218_2);
                    alloc::vec::Vec$LT$T$C$A$GT$::dedup_by::h94896181a17f53f7(&var_228);
                    char* rax_21 = *var_1b8[8];
                    var_1e8 = rax_21;
                    var_1e0 = &rax_21[var_1d0 << 4];
                    int64_t var_170;
                    int64_t rcx_19;
                    int64_t rsi_11;
                    
                    if (!_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::hd7cdadf0fcbb5b0b(&var_1e8) || !r12_1 || !arg6)
                    {
                        rsi_11 = var_170;
                        label_4bdad4:
                        
                        if (rsi_11 < var_188 && !arg7 && var_1f8_2)
                        {
                            int64_t rdx_10 = *var_208[8];
                            int64_t rcx_21 = var_1f8_2 << 4;
                            
                            if (*(rcx_21 + rdx_10 - 0x10) != 4)
                                goto label_4bdb4c;
                            
                            uint32_t rdx_11 = *(rcx_21 + rdx_10 - 0xf);
                            rcx_19 = -0x7ffffffffffffff8;
                            
                            if (rdx_11 == 0xa || rdx_11 == 6)
                                goto label_4bdb1f;
                            
                            goto label_4bdb4c;
                        }
                        
                        label_4bdb4c:
                        
                        if (arg7)
                            alloc::vec::Vec$LT$T$C$A$GT$::truncate::h04589a5fa11b67b9(&var_198, 
                                rsi_11);
                        
                        *var_1e0[8] = var_188;
                        int128_t zmm0_4 = var_198;
                        var_1e8 = zmm0_4;
                        var_1d0 = var_180;
                        *arg1 = zmm0_4;
                        int64_t var_1c8;
                        arg1[4] = var_1c8;
                        arg1[5] = var_170;
                        arg1[2] = *var_1e0[8];
                        arg1[3] = var_1d0;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8b6037f7c42e6bd2(&var_228);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tr..operation..Sequence$GT$$GT$::hb9b8e4e5bd05f109(&var_208);
                    }
                    else
                    {
                        rcx_19 = -0x7ffffffffffffff7;
                        
                        if (var_218_2 <= 1)
                        {
                            rsi_11 = var_170;
                            
                            if (rsi_11 <= r13_1)
                                goto label_4bdad4;
                            
                            goto label_4bdb1f;
                        }
                        
                        label_4bdb1f:
                        arg1[1] = rcx_19;
                        *arg1 = -0x8000000000000000;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8b6037f7c42e6bd2(&var_228);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8b6037f7c42e6bd2(&var_180);
                        label_4bd9c6:
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8b6037f7c42e6bd2(&var_198);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tr..operation..Sequence$GT$$GT$::hb9b8e4e5bd05f109(&var_208);
                    }
                }
                else
                {
                    rcx = -0x7ffffffffffffffe;
                    label_4bd697:
                    arg1[1] = rcx;
                    *arg1 = -0x8000000000000000;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tr..operation..Sequence$GT$$GT$::hb9b8e4e5bd05f109(&var_208);
                }
            }
            else
            {
                arg1[3] = var_1d0;
                *(arg1 + 8) = var_228;
                *arg1 = -0x8000000000000000;
            }
        }
        else
        {
            arg1[1] = -0x7ffffffffffffffd;
            *arg1 = -0x8000000000000000;
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tr..operation..Sequence$GT$$GT$::hb9b8e4e5bd05f109(&var_1b8);
    }
    else
    {
        arg1[3] = var_1d0;
        *(arg1 + 8) = var_228;
        *arg1 = -0x8000000000000000;
    }
    return arg1;
}
