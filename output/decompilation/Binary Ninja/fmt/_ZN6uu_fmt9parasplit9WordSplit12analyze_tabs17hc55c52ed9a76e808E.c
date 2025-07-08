
  int64_t uu_fmt::parasplit::WordSplit::analyze_tabs::hc55c52ed9a76e808(int64_t* arg1, void* arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_48 = arg3;
    int64_t var_40 = arg4 + arg3;
    int64_t var_38 = 0;
    int64_t rbp = 0;
    int64_t r13 = 1;
    
    while (true)
    {
        int64_t r12_1 = 0;
        
        while (true)
        {
            int64_t result;
            int32_t rdx;
            result = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_48);
            
            if (rdx != 0x20)
            {
                int64_t var_58;
                
                if (rdx == 0x110000)
                {
                    r13 = 0;
                    label_4ba6f7:
                    *arg1 = rbp;
                    arg1[1] = var_58;
                    arg1[2] = r12_1;
                    arg1[3] = r13;
                    arg1[4] = result;
                    return result;
                }
                
                if (rdx - 9 >= 5)
                {
                    if (rdx < 0x80)
                        goto label_4ba6f7;
                    
                    if (!core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(rdx))
                        goto label_4ba6f7;
                }
                else if (rdx == 9)
                {
                    if (!rbp)
                    {
                        rbp = 1;
                        var_58 = r12_1;
                        break;
                    }
                    
                    int64_t rcx_3 = *(arg2 + 0x40);
                    
                    if (!rcx_3)
                    {
                        core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e();
                        /* no return */
                    }
                    
                    uint64_t r12_2;
                    
                    if (!((r12_1 | rcx_3) >> 0x20))
                        r12_2 = COMBINE(0, r12_1) / rcx_3;
                    else
                        r12_2 = COMBINE(0, r12_1) / rcx_3;
                    
                    r12_1 = (r12_2 + 1) * rcx_3;
                    rbp = 1;
                    continue;
                }
            }
            
            r12_1 += 1;
        }
    }
}
