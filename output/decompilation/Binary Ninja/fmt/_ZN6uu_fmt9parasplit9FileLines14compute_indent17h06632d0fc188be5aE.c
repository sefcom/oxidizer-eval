
  int64_t uu_fmt::parasplit::FileLines::compute_indent::h06632d0fc188be5a(int64_t* arg1, void* arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    int64_t var_48 = arg3;
    int64_t var_40 = arg4 + arg3;
    int64_t var_38 = 0;
    int64_t result;
    int32_t rdx;
    result = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_48);
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
            
            if (result >= arg5)
            {
                if (rbp_1 == 0x20)
                    r12 += uu_fmt::parasplit::char_width::h3a45ed9208a3863c(0x20);
                else
                {
                    if (rbp_1 - 9 < 5)
                        goto label_462be7;
                    
                    if (rbp_1 < 0x80)
                        break;
                    
                    r15_1 = arg2;
                    
                    if (!core::unicode::unicode_data::white_space::lookup::hae563f9e204d99ae(rbp_1))
                        break;
                    
                    r12 += uu_fmt::parasplit::char_width::h3a45ed9208a3863c(rbp_1);
                }
            }
            else
            {
                label_462be7:
                
                if (rbp_1 != 9)
                    r12 += uu_fmt::parasplit::char_width::h3a45ed9208a3863c(rbp_1);
                else
                {
                    int64_t rcx_1 = *(r15_1 + 0x40);
                    
                    if (!rcx_1)
                    {
                        core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
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
            
            int32_t rdx_1;
            result = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_48);
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
