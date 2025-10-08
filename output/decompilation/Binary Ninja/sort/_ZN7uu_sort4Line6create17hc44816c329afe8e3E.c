
  int64_t uu_sort::Line::create::hc44816c329afe8e3(int64_t* arg1, char* arg2, uint64_t arg3, int64_t arg4, int64_t* arg5, int64_t* arg6, void* arg7)

{
    uint64_t rcx = arg3;
    arg6[2] = 0;
    
    if (!*(arg7 + 0x60))
    {
        if (!*(arg7 + 0x98))
            goto label_4d0b0a;
        
        goto label_4d0ad4;
    }
    
    uu_sort::tokenize::h1a0db68099bd818a(arg2, rcx, *(arg7 + 0x78), arg6);
    char* var_80;
    char var_50;
    int64_t var_48;
    int64_t rax;
    
    if (*(arg7 + 0x98))
    {
        label_4d0ad4:
        var_80 = arg2;
        rax = *(arg7 + 0x10);
        
        if (rax)
        {
            label_4d0b5f:
            int64_t* rbp_1 = *(arg7 + 8);
            int64_t* rdx_2 = arg6[1];
            int64_t r12_1 = arg6[2];
            int64_t i_1 = rax * 0x38;
            int64_t i;
            
            do
            {
                uu_sort::FieldSelector::get_selection::hf6d6b91f1121e5fa(&var_50, rbp_1, var_80, 
                    rcx, rdx_2, r12_1);
                int64_t r15_1 = var_50;
                char var_38;
                char rcx_3 = var_38 - 2;
                
                if (var_38 - 2 >= 3)
                    rcx_3 = 1;
                
                if (!rcx_3)
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hc482587e95ace0db(&arg5[6], r15_1, var_48);
                else if (rcx_3 == 1)
                {
                    int64_t var_40;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hc71adfe4ca61889a(&arg5[3], var_40, var_38);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h0603c4e988c7cc61(arg5, r15_1, var_48);
                }
                else if (*(rbp_1 + 0x37))
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h0603c4e988c7cc61(arg5, r15_1, var_48);
                
                rbp_1 = &rbp_1[7];
                i = i_1;
                i_1 -= 0x38;
            } while (i != 0x38);
        }
    }
    else
    {
        label_4d0b0a:
        int64_t* r14_2 = rcx;
        char rax_1;
        int64_t zmm0_1;
        rax_1 = core::str::pattern::Pattern::is_contained_in::h69d69b5be5063faf(arg2, rcx);
        int64_t rsi_2;
        
        if (!rax_1)
        {
            core::num::dec2flt::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$f64$GT$::from_str::h05023748d9faa6d2(&var_50, arg2, r14_2);
            zmm0_1 = var_48;
            rsi_2 = var_50 ^ 1;
        }
        else
            rsi_2 = 0;
        
        alloc::vec::Vec$LT$T$C$A$GT$::push::h50aa9f54e4d3c0c5(&arg5[9], rsi_2, zmm0_1);
        rcx = r14_2;
        var_80 = arg2;
        rax = *(arg7 + 0x10);
        
        if (rax)
            goto label_4d0b5f;
    }
    *arg1 = var_80;
    arg1[1] = rcx;
    arg1[2] = arg4;
    return arg4;
}
