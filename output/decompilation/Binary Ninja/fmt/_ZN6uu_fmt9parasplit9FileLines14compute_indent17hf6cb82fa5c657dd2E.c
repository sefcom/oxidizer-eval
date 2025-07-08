
  int64_t uu_fmt::parasplit::FileLines::compute_indent::hf6cb82fa5c657dd2(int64_t* arg1, void* arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    int64_t var_48 = arg3;
    int64_t var_40 = arg4 + arg3;
    int64_t var_38 = 0;
    int64_t result;
    int32_t rdx;
    result = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_48);
    int64_t rbx;
    int64_t r12;
    
    if (rdx != 0x110000)
    {
        int32_t rbp_1 = rdx;
        rbx = 0;
        r12 = 0;
        void* r15_1 = arg2;
        
        while (true)
        {
            if (result == arg5)
                rbx = r12;
            
            if (result < arg5)
            {
                label_4b9915:
                
                if (rbp_1 != 9)
                    r12 += uu_fmt::parasplit::char_width::h6ecf292e25e6b16b(rbp_1);
                else
                {
                    int64_t rcx_1 = *(r15_1 + 0x40);
                    
                    if (!rcx_1)
                    {
                        core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e();
                        /* no return */
                    }
                    
                    uint64_t r12_1;
                    
                    if (!((r12 | rcx_1) >> 0x20))
                        r12_1 = COMBINE(0, r12) / rcx_1;
                    else
                        r12_1 = COMBINE(0, r12) / rcx_1;
                    
                    r12 = (r12_1 + 1) * rcx_1;
                }
            }
            else if (rbp_1 == 0x20)
                r12 += uu_fmt::parasplit::char_width::h6ecf292e25e6b16b(rbp_1);
            else
            {
                if (rbp_1 - 9 < 5)
                    goto label_4b9915;
                
                if (rbp_1 < 0x80)
                    break;
                
                r15_1 = arg2;
                
                if (!core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(rbp_1))
                    break;
                
                r12 += uu_fmt::parasplit::char_width::h6ecf292e25e6b16b(rbp_1);
            }
            
            int32_t rdx_1;
            result = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_48);
            rbp_1 = rdx_1;
            
            if (rdx_1 == 0x110000)
            {
                result = 0;
                break;
            }
        }
    }
    else
    {
        r12 = 0;
        result = 0;
        rbx = 0;
    }
    
    *arg1 = result;
    arg1[1] = rbx;
    arg1[2] = r12;
    return result;
}
