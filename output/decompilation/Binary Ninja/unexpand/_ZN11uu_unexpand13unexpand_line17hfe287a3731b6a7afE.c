
  void** uu_unexpand::unexpand_line::hfe287a3731b6a7af(void* arg1, int64_t* arg2, char arg3, char arg4, int64_t arg5, int64_t* arg6, int64_t arg7)

{
    void* r13 = arg1;
    int64_t rcx = *(arg1 + 0x10);
    char var_90;
    uint64_t var_88;
    void** result;
    uint64_t r14;
    uint64_t r15_1;
    
    if (!rcx)
    {
        var_90 = 1;
        r14 = 3;
        r15_1 = 0;
        var_88 = 0;
    }
    else
    {
        int64_t r8 = arg5 - 1;
        r14 = 3;
        var_90 = 1;
        uint64_t rbx_1 = 0;
        int64_t r12_1 = 0;
        var_88 = 0;
        void* var_80_1 = r13;
        int64_t var_60_1 = rcx;
        int64_t var_50_1 = r8;
        int64_t rbp_1;
        
        do
        {
            char var_91_1 = r14;
            
            if (r8 < rbx_1)
            {
                uu_unexpand::write_tabs::h8e9e933eb88f89cf(arg2, arg6, arg7, var_88, rbx_1, 
                    var_91_1 == 2, var_90 & 1, 1);
                uint64_t r15_5 = var_60_1 - r12_1;
                
                if (var_60_1 < r12_1)
                {
                    core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(r12_1, 
                        var_60_1);
                    /* no return */
                }
                
                int64_t r12_3 = r12_1 + *(r13 + 8);
                int64_t r13_3 = arg2[2];
                
                if (r15_5 < *arg2 - r13_3)
                {
                    memcpy(arg2[1] + r13_3, r12_3, r15_5);
                    arg2[2] = r13_3 + r15_5;
                    r14 = var_91_1;
                    r15_1 = rbx_1;
                    var_88 = rbx_1;
                    r13 = var_80_1;
                    break;
                }
                
                result = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h37baa5ae29b8f289(arg2, r12_3, r15_5);
                r14 = var_91_1;
                r15_1 = rbx_1;
                var_88 = rbx_1;
                r13 = var_80_1;
                
                if (result)
                    return result;
                
                break;
            }
            
            int32_t rsi_1;
            rsi_1 = arg4;
            char* r14_1 = *(r13 + 8);
            int64_t var_48;
            uu_unexpand::next_char_info::hda448420cf4eb947(&var_48, rsi_1, r14_1, rcx, r12_1);
            char var_40;
            uint64_t r15_2 = var_40;
            int64_t var_38;
            
            switch (jump_table_41d1f4[r15_2])
            {
                case 0x95a90:
                {
                    int64_t r15_3 = var_48;
                    uu_unexpand::write_tabs::h8e9e933eb88f89cf(arg2, arg6, arg7, var_88, rbx_1, 
                        var_91_1 == 2, var_90 & 1, arg3);
                    r15_1 = 0;
                    
                    if (rbx_1 >= 1)
                        r15_1 = rbx_1 - 1;
                    
                    if (var_40 == 3)
                        r15_1 = r15_3 + rbx_1;
                    
                    int64_t r13_2 = var_38 + r12_1;
                    int64_t rax_6;
                    uint64_t rdx_4;
                    rax_6 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h794715884ecee730(r12_1, r13_2, r14_1, var_60_1);
                    int64_t r14_2 = arg2[2];
                    rbp_1 = r13_2;
                    
                    if (rdx_4 >= *arg2 - r14_2)
                    {
                        result = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h37baa5ae29b8f289(arg2, rax_6, rdx_4);
                        
                        if (result)
                            return result;
                        
                        var_90 = 0;
                        var_88 = r15_1;
                        r13 = var_80_1;
                    }
                    else
                    {
                        memcpy(arg2[1] + r14_2, rax_6, rdx_4);
                        var_90 = 0;
                        r13 = var_80_1;
                        arg2[2] = rdx_4 + r14_2;
                        var_88 = r15_1;
                    }
                    break;
                }
                case 0x95b6c:
                {
                    int64_t rax_7;
                    uint64_t rdx_7;
                    rax_7 = uu_unexpand::next_tabstop::h948056bd8ee01f21(arg6, arg7, rbx_1);
                    r15_2 = rdx_7;
                    
                    if (!rax_7)
                        r15_2 = 1;
                    
                    goto label_4b2d8a;
                }
                case 0x95b90:
                {
                    label_4b2d8a:
                    r15_1 = r15_2 + rbx_1;
                    rbp_1 = var_38 + r12_1;
                    
                    if ((var_90 & 1) | arg3)
                        r13 = var_80_1;
                    else
                    {
                        int64_t rax_9;
                        uint64_t rdx_9;
                        rax_9 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h794715884ecee730(r12_1, rbp_1, r14_1, var_60_1);
                        int64_t r14_3 = arg2[2];
                        r13 = var_80_1;
                        
                        if (rdx_9 >= *arg2 - r14_3)
                        {
                            result = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h37baa5ae29b8f289(arg2, rax_9, rdx_9);
                            var_88 = r15_1;
                            
                            if (result)
                                return result;
                        }
                        else
                        {
                            memcpy(arg2[1] + r14_3, rax_9, rdx_9);
                            arg2[2] = rdx_9 + r14_3;
                            var_88 = r15_1;
                        }
                    }
                    break;
                }
            }
            
            rbx_1 = r15_1;
            r12_1 = rbp_1;
            rcx = var_60_1;
            r8 = var_50_1;
            r14 = var_40;
        } while (rbp_1 < rcx);
    }
    
    uu_unexpand::write_tabs::h8e9e933eb88f89cf(arg2, arg6, arg7, var_88, r15_1, r14 == 2, 
        var_90 & 1, 1);
    result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h0afaa565343b58bd(arg2);
    
    if (result)
        return result;
    
    alloc::vec::Vec$LT$T$C$A$GT$::truncate::h60643c48044eaa26(r13, 0);
    return nullptr;
}
