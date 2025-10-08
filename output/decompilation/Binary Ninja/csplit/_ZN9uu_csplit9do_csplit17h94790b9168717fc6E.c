
  int64_t uu_csplit::do_csplit::h94790b9168717fc6(int64_t* arg1, int64_t* arg2, int64_t* arg3, int64_t* arg4)

{
    int64_t* rbp = arg2;
    int64_t* r12 = arg1;
    void var_88;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hfcf31d9b258cc2e0(&var_88, arg3);
    int32_t var_68;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h14e6f3a775451a37(&var_68, &var_88);
    
    if (var_68 != 3)
    {
        int128_t var_108;
        int128_t* rsi_2 = &var_108;
        int64_t* var_178_1 = rbp;
        int64_t* var_170_1 = r12;
        
        while (true)
        {
            var_108 = var_68;
            void var_160;
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h37c42c1dc99d122a(
                &var_160, rsi_2);
            int32_t r13_1 = var_108;
            int64_t var_158;
            uint64_t var_150;
            int64_t var_148;
            int128_t var_138;
            int64_t var_128;
            int128_t var_d0;
            int64_t var_c0;
            int128_t var_58;
            
            if (r13_1)
            {
                int32_t rax_2;
                rax_2 = 1;
                
                if (r13_1 != 1)
                {
                    int32_t var_17c_2 = rax_2;
                    int32_t var_180_2 = 0;
                }
                else
                {
                    int32_t var_180_1 = rax_2;
                    int32_t var_17c_1 = 0;
                }
                
                int128_t var_98_1 = var_58;
                int128_t var_a8 = var_108;
                int32_t rbp_1 = *var_108[4];
                int128_t var_48;
                int64_t r12_1 = *var_48[8];
                int64_t r14_2 = 0;
                
                if (r12_1)
                    goto label_519a10;
                
                label_5199e0:
                int64_t r15_2 = 0;
                int64_t* rsi_4;
                
                if (r13_1 != 2)
                {
                    while (true)
                    {
                        int64_t rax_6 =
                            uu_csplit::SplitWriter::new_writer::hee41ac5ef27e0855(var_178_1);
                        rsi_4 = var_178_1;
                        
                        if (!rax_6)
                        {
                            label_519a52:
                            uu_csplit::SplitWriter::do_to_match::h17829ad82477f465(&var_d0, rsi_4, 
                                var_158, var_150, var_a8, *var_a8[8], rbp_1, arg4);
                            int64_t var_b0;
                            var_128 = var_b0;
                            var_138 = var_c0;
                            var_148 = var_d0;
                            int64_t var_120_1 = r15_2;
                            int64_t var_38;
                            int64_t var_118_1 = var_38;
                            int64_t rax_8 = var_148;
                            
                            if (rax_8 == 0xd)
                            {
                                r14_2 += 1;
                                
                                if (!r12_1)
                                    goto label_5199e0;
                                
                                label_519a10:
                                r15_2 = r12_1;
                                
                                if (var_38 == r14_2)
                                {
                                    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h0ef14e510ab06315(&var_a8);
                                    r12 = var_170_1;
                                    rbp = var_178_1;
                                    goto label_519ac7;
                                }
                                
                                if (r13_1 == 2)
                                    break;
                                
                                continue;
                            }
                            else
                            {
                                int64_t* r15_3;
                                
                                if (!r15_2)
                                {
                                    r15_3 = var_170_1;
                                    
                                    if (rax_8 != 3)
                                    {
                                        label_519b89:
                                        r15_3[4] = var_128;
                                        int128_t zmm0_4 = var_148;
                                        *(r15_3 + 0x10) = var_138;
                                        *r15_3 = zmm0_4;
                                    }
                                    else
                                    {
                                        *r15_3 = 0xd;
                                        core::ptr::drop_in_place$LT$uu_csplit..csplit_error..CsplitError$GT$::hcd386fc76ec93e3b(&var_148);
                                    }
                                }
                                else
                                {
                                    r15_3 = var_170_1;
                                    
                                    if (rax_8 != 3)
                                        goto label_519b89;
                                    
                                    rax_8 = var_38 == 1;
                                    
                                    if (!r14_2 | rax_8)
                                        goto label_519b89;
                                    
                                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_d0, &var_160);
                                    r15_3[4] = var_c0;
                                    *(r15_3 + 0x10) = var_d0;
                                    *r15_3 = 4;
                                    r15_3[1] = r14_2;
                                    core::ptr::drop_in_place$LT$uu_csplit..csplit_error..CsplitError$GT$::hcd386fc76ec93e3b(&var_148);
                                }
                            }
                        }
                        else
                        {
                            *var_170_1 = 0;
                            var_170_1[1] = rax_6;
                        }
                        
                        core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h0ef14e510ab06315(&var_a8);
                        goto label_519bb2;
                    }
                }
                
                rsi_4 = var_178_1;
                rsi_4[7] = 1;
                goto label_519a52;
            }
            
            char rax_3 = var_58;
            int64_t r15_1 = *var_58[8];
            
            if (!(rax_3 & !r15_1))
            {
                int64_t rbx_1 = *var_108[8];
                int64_t rax_5;
                int64_t r14_1;
                int64_t rax_4;
                
                if (!(rax_3 & 1))
                {
                    r14_1 = 0;
                    int64_t r13_3 = rbx_1;
                    
                    while (true)
                    {
                        rax_4 = uu_csplit::SplitWriter::new_writer::hee41ac5ef27e0855(var_178_1);
                        
                        if (rax_4)
                            goto label_519c23;
                        
                        uu_csplit::SplitWriter::do_to_line::h77b5b4ed91319959(&var_148, var_178_1, 
                            var_158, var_150, r13_3, arg4);
                        rax_5 = var_148;
                        
                        if (rax_5 != 0xd)
                            break;
                        
                        r13_3 += rbx_1;
                        r14_1 += 1;
                    }
                }
                else
                {
                    int64_t r13_2 = rbx_1;
                    r14_1 = 0;
                    
                    while (true)
                    {
                        rax_4 = uu_csplit::SplitWriter::new_writer::hee41ac5ef27e0855(rbp);
                        
                        if (rax_4)
                        {
                            label_519c23:
                            *r12 = 0;
                            r12[1] = rax_4;
                            goto label_519bb2;
                        }
                        
                        uu_csplit::SplitWriter::do_to_line::h77b5b4ed91319959(&var_148, rbp, 
                            var_158, var_150, r13_2, arg4);
                        rax_5 = var_148;
                        
                        if (rax_5 != 0xd)
                            break;
                        
                        r14_1 += 1;
                        r13_2 += rbx_1;
                        
                        if (r15_1 == r14_1)
                            goto label_519ac7;
                    }
                }
                rax_5 = rax_5 != 1;
                
                if (!(!r14_1 | rax_5))
                {
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_d0, &var_160);
                    r12[4] = var_c0;
                    *(r12 + 0x10) = var_d0;
                    *r12 = 2;
                    r12[1] = r14_1;
                    int64_t rax_12;
                    rax_12 = 1;
                    int32_t var_17c_3 = rax_12;
                    rax_12 = 1;
                    int32_t var_180_3 = rax_12;
                    core::ptr::drop_in_place$LT$uu_csplit..csplit_error..CsplitError$GT$::hcd386fc76ec93e3b(&var_148);
                }
                else
                {
                    r12[4] = var_128;
                    int128_t zmm0_3 = var_148;
                    *(r12 + 0x10) = var_138;
                    *r12 = zmm0_3;
                }
                
                label_519bb2:
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h61638e650d01877f(&var_160);
                return core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uu_csplit..patterns..Pattern$GT$$GT$::h1f8d6e2fb4b3b420(&var_88);
            }
            
            label_519ac7:
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h61638e650d01877f(&var_160);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h14e6f3a775451a37(&var_68, &var_88);
            rsi_2 = &var_108;
            
            if (var_68 == 3)
                break;
        }
    }
    
    int64_t result = core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uu_csplit..patterns..Pattern$GT$$GT$::h1f8d6e2fb4b3b420(&var_88);
    *r12 = 0xd;
    return result;
}
