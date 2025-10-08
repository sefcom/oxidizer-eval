
  uint64_t uu_unexpand::unexpand_line::h1d2ec673d7b6113d(void* arg1, int64_t* arg2, char arg3, char arg4, int64_t arg5, int64_t* arg6, uint64_t arg7)

{
    uint64_t rdx = arg7;
    uint64_t rax = *(arg1 + 0x10);
    uint64_t var_70 = rax;
    uint64_t result;
    uint64_t rcx_10;
    uint64_t r11;
    uint64_t r13;
    
    if (!rax)
    {
        r13 = 3;
        rax = 1;
        r11 = 0;
        rcx_10 = 0;
    }
    else
    {
        int64_t r8 = arg5 - 1;
        char* rdx_1 = *(arg1 + 8);
        r13 = 3;
        rax = 1;
        int32_t var_94_1 = rax;
        r11 = 0;
        int64_t r15_1 = 0;
        uint64_t var_78_1 = 0;
        uint64_t rbx_1 = var_70;
        char* var_88_1 = rdx_1;
        int64_t var_50_1 = r8;
        
        while (true)
        {
            int32_t rbp_1 = r13;
            
            if (r8 < r11)
            {
                result = uu_unexpand::write_tabs::h3aaaa01eda901830(arg2, arg6, arg7, var_78_1, 
                    r11, rbp_1 == 2, var_94_1, 1);
                
                if (result)
                    return result;
                
                uint64_t rbx_6 = rbx_1 - r15_1;
                void* rsi_11 = &var_88_1[r15_1];
                int64_t rbx_7 = arg2[2];
                
                if (rbx_6 >= *arg2 - rbx_7)
                {
                    if (std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hccae24ef141405a2(arg2, rsi_11, rbx_6))
                        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    
                    r13 = rbp_1;
                    rcx_10 = r11;
                }
                else
                {
                    memcpy(arg2[1] + rbx_7, rsi_11, rbx_6);
                    arg2[2] = rbx_7 + rbx_6;
                    r13 = rbp_1;
                    rcx_10 = r11;
                }
                
                rdx = arg7;
                rax = var_94_1;
                break;
            }
            
            uint64_t var_48;
            uu_unexpand::next_char_info::hde71cd1c734c3431(&var_48, arg4, rdx_1, rbx_1, r15_1);
            char var_40;
            r13 = var_40;
            uint64_t rdx_2 = r13;
            uint64_t var_90_2;
            int64_t var_38;
            int64_t rbx_4;
            uint64_t r11_1;
            int64_t r14_2;
            
            switch (rdx_2)
            {
                case 0:
                case 3:
                {
                    uint64_t rbx_2 = var_48;
                    result = uu_unexpand::write_tabs::h3aaaa01eda901830(arg2, arg6, arg7, var_78_1, 
                        r11, rbp_1 == 2, var_94_1, arg3);
                    
                    if (result)
                        return result;
                    
                    if (r13 != 3)
                    {
                        uint64_t rcx_6 = r11 - 1;
                        
                        if (r11 < 1)
                            rcx_6 = 0;
                        
                        var_90_2 = rcx_6;
                    }
                    else
                        var_90_2 = r11 + rbx_2;
                    
                    r14_2 = var_38 + r15_1;
                    int64_t rax_9;
                    uint64_t rdx_9;
                    rax_9 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h148ae85790082177(r15_1, r14_2, var_88_1, var_70);
                    int64_t r15_3 = arg2[2];
                    
                    if (rdx_9 < *arg2 - r15_3)
                    {
                        memcpy(arg2[1] + r15_3, rax_9, rdx_9);
                        rbx_4 = rdx_9 + r15_3;
                        var_94_1 = 0;
                        goto label_45d0c9;
                    }
                    
                    if (std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hccae24ef141405a2(arg2, rax_9, rdx_9))
                        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    
                    var_94_1 = 0;
                    goto label_45d0ce;
                }
                case 1:
                {
                    r11_1 = r11;
                    label_45d000:
                    r11 = r11_1 + rdx_2;
                    r14_2 = var_38 + r15_1;
                    
                    if ((var_94_1 | arg3) & 1)
                        rdx_1 = var_88_1;
                    else
                    {
                        var_90_2 = r11;
                        int64_t rax_8;
                        uint64_t rdx_6;
                        rax_8 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h148ae85790082177(r15_1, r14_2, var_88_1, rbx_1);
                        int64_t r15_2 = arg2[2];
                        
                        if (rdx_6 >= *arg2 - r15_2)
                        {
                            r11 = var_90_2;
                            var_78_1 = r11;
                            rbx_1 = var_70;
                            rdx_1 = var_88_1;
                            
                            if (std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hccae24ef141405a2(arg2, rax_8, rdx_6))
                                return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                        }
                        else
                        {
                            memcpy(arg2[1] + r15_2, rax_8, rdx_6);
                            rbx_4 = rdx_6 + r15_2;
                            label_45d0c9:
                            arg2[2] = rbx_4;
                            label_45d0ce:
                            r11 = var_90_2;
                            var_78_1 = r11;
                            rbx_1 = var_70;
                            rdx_1 = var_88_1;
                        }
                    }
                    break;
                }
                case 2:
                {
                    char rax_6;
                    rax_6 = uu_unexpand::next_tabstop::h080f73c87180f742(arg6, arg7, r11);
                    r11_1 = r11;
                    
                    if (!(rax_6 & 1))
                        rdx_2 = 1;
                    
                    goto label_45d000;
                }
            }
            
            r15_1 = r14_2;
            r8 = var_50_1;
            
            if (r14_2 >= rbx_1)
            {
                rdx = arg7;
                rax = var_94_1;
                rcx_10 = var_78_1;
                break;
            }
        }
    }
    
    result = uu_unexpand::write_tabs::h3aaaa01eda901830(arg2, arg6, rdx, rcx_10, r11, r13 == 2, 
        rax & 1, 1);
    
    if (result)
        return result;
    
    if (_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3d4ee5ad78dae975(arg2))
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
    
    *(arg1 + 0x10) = 0;
    return 0;
}
