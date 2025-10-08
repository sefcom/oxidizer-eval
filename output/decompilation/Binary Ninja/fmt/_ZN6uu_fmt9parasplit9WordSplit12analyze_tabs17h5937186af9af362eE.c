
  int64_t uu_fmt::parasplit::WordSplit::analyze_tabs::h5937186af9af362e(int64_t* arg1, void* arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_48 = arg3;
    int64_t var_40 = arg4 + arg3;
    int64_t var_38 = 0;
    int64_t rbp = 0;
    
    while (true)
    {
        int64_t r15_1 = 0;
        int64_t result;
        int32_t rdx;
        result = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_48);
        
        if (rdx == 0x20)
            break;
        
        while (true)
        {
            int64_t var_50;
            int64_t rcx_3;
            
            if (rdx == 0x110000)
                rcx_3 = 0;
            else
            {
                if (rdx - 9 < 5)
                {
                    if (rdx == 9)
                    {
                        if (!rbp)
                        {
                            rbp = 1;
                            var_50 = r15_1;
                            break;
                        }
                        
                        int64_t rcx_2 = *(arg2 + 0x40);
                        
                        if (!rcx_2)
                        {
                            core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
                            /* no return */
                        }
                        
                        uint64_t r15_2;
                        
                        if (!((r15_1 | rcx_2) >> 0x20))
                            r15_2 = COMBINE(0, r15_1) / rcx_2;
                        else
                            r15_2 = COMBINE(0, r15_1) / rcx_2;
                        
                        r15_1 = (r15_2 + 1) * rcx_2;
                        rbp = 1;
                        result = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_48);
                        
                        if (rdx != 0x20)
                            continue;
                    }
                    
                    goto label_4638d5;
                }
                
                uint8_t rax_1;
                
                if (rdx >= 0x80)
                    rax_1 =
                        core::unicode::unicode_data::white_space::lookup::hae563f9e204d99ae(rdx);
                
                if (rdx >= 0x80 && rax_1)
                {
                    label_4638d5:
                    r15_1 += 1;
                    result = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_48);
                    
                    if (rdx == 0x20)
                        break;
                    
                    continue;
                }
                else
                    rcx_3 = 1;
            }
            
            *arg1 = rbp;
            arg1[1] = var_50;
            arg1[2] = r15_1;
            arg1[3] = rcx_3;
            arg1[4] = result;
            return result;
        }
    }
    
    goto label_4638d5;
}
