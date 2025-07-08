
  int64_t uu_csplit::do_csplit::h9017a56c540dfa97(void* arg1, int64_t* arg2, int64_t* arg3, int64_t* arg4)

{
    uint64_t rbp;
    uint64_t var_8 = rbp;
    void* r14 = arg1;
    void var_88;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h8cfd37faa97e5c9a(&var_88, arg3);
    int32_t i;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3521a3a7c64a9732(&i, &var_88);
    
    if (i != 3)
    {
        void var_170;
        void* rdi_3 = &var_170;
        int128_t var_e8;
        int32_t* rsi_2 = &var_e8;
        void* var_180_1 = r14;
        
        do
        {
            var_e8 = i;
            rbp = 1;
            void* rbx;
            rbx = 1;
            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hf41bf485036a1869(rdi_3, 
                rsi_2);
            rbp = var_e8;
            int32_t var_188_1;
            int32_t var_184_1;
            int64_t var_168;
            uint64_t var_160;
            int128_t var_158;
            int128_t var_148;
            int64_t var_138;
            int128_t var_110;
            int128_t var_100;
            int128_t var_58;
            int32_t rax_2;
            
            if (rbp == 2)
            {
                rax_2 = 1;
                var_184_1 = rax_2;
                var_188_1 = 0;
                label_5618ac:
                int128_t var_98_1 = var_58;
                int128_t var_a8 = var_e8;
                int32_t rax_3 = *var_e8[4];
                int128_t var_48;
                int64_t r13_1 = *var_48[8];
                int64_t var_38;
                int64_t rbx_1;
                
                if (!r13_1)
                {
                    rbx_1 = 0;
                    int64_t rax_5;
                    
                    if (rbp != 2)
                    {
                        label_56194a:
                        rax_5 = uu_csplit::SplitWriter::new_writer::hf8bcfdadfd914b2e(arg2);
                        
                        if (!rax_5)
                            goto label_561983;
                        
                        label_561b6c:
                        *var_180_1 = 0;
                        *(var_180_1 + 8) = rax_5;
                        label_561c2d:
                        core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h5dc1738b513e4aba(&var_a8);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(
                            &var_170);
                        return core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uu_csplit..patterns..Pattern$GT$$GT$::h8e8634bf2625820f(&var_88);
                    }
                    
                    label_5618f0:
                    arg2[7] = 1;
                    label_561983:
                    uu_csplit::SplitWriter::do_to_match::h5baae8016ea78834(&var_110, arg2, var_168, 
                        var_160, var_a8, *var_a8[8], rax_3, arg4);
                    int64_t var_f0;
                    var_138 = var_f0;
                    var_148 = var_100;
                    var_158 = var_110;
                    int64_t var_130_1 = rbx_1;
                    int64_t var_128_1 = var_38;
                    int64_t rax_7 = var_158;
                    int64_t r15_2;
                    
                    if (rax_7 != 0xc)
                    {
                        r15_2 = 0;
                        label_561b8d:
                        void* r12_1;
                        
                        if (!r13_1)
                        {
                            r12_1 = var_180_1;
                            
                            if (rax_7 == 3)
                            {
                                *r12_1 = 0xc;
                                core::ptr::drop_in_place$LT$uu_csplit..csplit_error..CsplitError$GT$::hc5d4aca3759c7b16(&var_158);
                                goto label_561c2d;
                            }
                        }
                        else
                        {
                            r12_1 = var_180_1;
                            
                            if (rax_7 == 3 && var_38 != 1 && r15_2)
                            {
                                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_110, &var_170);
                                *(r12_1 + 0x20) = var_100;
                                *(r12_1 + 0x10) = var_110;
                                *r12_1 = 4;
                                *(r12_1 + 8) = r15_2;
                                
                                if (var_158 == 0xc)
                                    goto label_561c2d;
                                
                                core::ptr::drop_in_place$LT$uu_csplit..csplit_error..CsplitError$GT$::hc5d4aca3759c7b16(&var_158);
                                goto label_561c2d;
                            }
                        }
                        
                        *(r12_1 + 0x20) = var_138;
                        int128_t zmm0_3 = var_158;
                        *(r12_1 + 0x10) = var_148;
                        *r12_1 = zmm0_3;
                        goto label_561c2d;
                    }
                    
                    r15_2 = 1;
                    
                    if (!r13_1)
                        goto label_561a00;
                    
                    label_5619e0:
                    int64_t rbx_2 = 1;
                    
                    if (var_38 != r15_2)
                    {
                        if (rbp == 2)
                        {
                            label_5619f3:
                            arg2[7] = 1;
                            goto label_561a43;
                        }
                        
                        while (true)
                        {
                            rax_5 = uu_csplit::SplitWriter::new_writer::hf8bcfdadfd914b2e(arg2);
                            
                            if (rax_5)
                                goto label_561b6c;
                            
                            label_561a43:
                            uu_csplit::SplitWriter::do_to_match::h5baae8016ea78834(&var_110, arg2, 
                                var_168, var_160, var_a8, *var_a8[8], rax_3, arg4);
                            var_138 = var_f0;
                            var_148 = var_100;
                            var_158 = var_110;
                            int64_t var_130_2 = rbx_2;
                            int64_t var_128_2 = var_38;
                            rax_7 = var_158;
                            
                            if (rax_7 != 0xc)
                                break;
                            
                            r15_2 += 1;
                            
                            if (r13_1)
                                goto label_5619e0;
                            
                            label_561a00:
                            rbx_2 = 0;
                            
                            if (rbp == 2)
                                goto label_5619f3;
                        }
                        
                        goto label_561b8d;
                    }
                    
                    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h5dc1738b513e4aba(
                        &var_a8);
                    r14 = var_180_1;
                }
                else
                {
                    rbx_1 = 1;
                    
                    if (var_38)
                    {
                        if (rbp != 2)
                            goto label_56194a;
                        
                        goto label_5618f0;
                    }
                    
                    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h5dc1738b513e4aba(
                        &var_a8);
                    r14 = var_180_1;
                }
            }
            else
            {
                if (rbp == 1)
                {
                    rax_2 = 1;
                    var_188_1 = rax_2;
                    var_184_1 = 0;
                    goto label_5618ac;
                }
                
                int64_t r15_1 = *var_e8[8];
                int64_t rax_4 = var_58;
                rbx = *var_58[8];
                rbp = 1;
                
                if (!rax_4 || rbx)
                {
                    int64_t rax_10;
                    int64_t r14_2;
                    int64_t rax_9;
                    
                    if (!rax_4)
                    {
                        r14_2 = 0;
                        int64_t r13_3 = r15_1;
                        
                        while (true)
                        {
                            rax_9 = uu_csplit::SplitWriter::new_writer::hf8bcfdadfd914b2e(arg2);
                            
                            if (rax_9)
                                goto label_561c85;
                            
                            uu_csplit::SplitWriter::do_to_line::h321143eb79b39c5d(&var_158, arg2, 
                                var_168, var_160, r13_3, arg4);
                            rax_10 = var_158;
                            
                            if (rax_10 != 0xc)
                                break;
                            
                            r13_3 += r15_1;
                            r14_2 += 1;
                        }
                    }
                    else
                    {
                        int64_t r13_2 = r15_1;
                        r14_2 = 0;
                        
                        while (true)
                        {
                            rax_9 = uu_csplit::SplitWriter::new_writer::hf8bcfdadfd914b2e(arg2);
                            
                            if (rax_9)
                            {
                                label_561c85:
                                *var_180_1 = 0;
                                *(var_180_1 + 8) = rax_9;
                                goto label_561cfc;
                            }
                            
                            uu_csplit::SplitWriter::do_to_line::h321143eb79b39c5d(&var_158, arg2, 
                                var_168, var_160, r13_2, arg4);
                            rax_10 = var_158;
                            
                            if (rax_10 != 0xc)
                                break;
                            
                            r14_2 += 1;
                            r13_2 += r15_1;
                            
                            if (rbx == r14_2)
                            {
                                rbx = 1;
                                r14 = var_180_1;
                                goto label_561abe;
                            }
                        }
                    }
                    
                    if (!r14_2 || rax_10 != 1)
                    {
                        *(var_180_1 + 0x20) = var_138;
                        int128_t zmm0_4 = var_158;
                        *(var_180_1 + 0x10) = var_148;
                        *var_180_1 = zmm0_4;
                    }
                    else
                    {
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_110, &var_170);
                        *(var_180_1 + 0x20) = var_100;
                        *(var_180_1 + 0x10) = var_110;
                        *var_180_1 = 2;
                        *(var_180_1 + 8) = r14_2;
                        rbx = 1;
                        rbp = 1;
                        core::ptr::drop_in_place$LT$uu_csplit..csplit_error..CsplitError$GT$::hc5d4aca3759c7b16(&var_158);
                    }
                    
                    label_561cfc:
                    rbx = 1;
                    rbp = 1;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(
                        &var_170);
                    return core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uu_csplit..patterns..Pattern$GT$$GT$::h8e8634bf2625820f(&var_88);
                }
                
                rbx = 1;
            }
            label_561abe:
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&var_170);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3521a3a7c64a9732(&i, &var_88);
            rdi_3 = &var_170;
            rsi_2 = &var_e8;
        } while (i != 3);
    }
    
    int64_t result = core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uu_csplit..patterns..Pattern$GT$$GT$::h8e8634bf2625820f(&var_88);
    *r14 = 0xc;
    return result;
}
