
  char uu_sort::numeric_str_cmp::numeric_str_cmp::h462d5662bf6f9278(int64_t* arg1, int64_t* arg2)

{
    int64_t* rax = arg1[2];
    int64_t* r9 = arg2[2];
    char r15 = rax[1];
    char rcx = r9[1];
    
    if (r15 != rcx)
        return (0 - 0) | 1;
    
    int64_t r8_1 = *arg1;
    int64_t rdi = arg1[1];
    int64_t rcx_1 = *arg2;
    int64_t rdx_1 = arg2[1];
    int64_t rsi;
    int64_t temp0_1;
    
    if (rdx_1 && rdi)
    {
        rsi = *r9;
        temp0_1 = *rax;
    }
    
    if (!rdx_1 || !rdi || temp0_1 == rsi)
    {
        int64_t var_40 = r8_1;
        int64_t var_38_1 = rdi + r8_1;
        int64_t var_30 = rcx_1;
        int64_t var_28_1 = rdx_1 + rcx_1;
        
        while (true)
        {
            int32_t rax_2 =
                core::iter::traits::iterator::Iterator::try_fold::h31e394c0050656fe(&var_40);
            rax = core::iter::traits::iterator::Iterator::try_fold::h31e394c0050656fe(&var_30);
            
            if (rax_2 == 0x110000)
            {
                if (rax == 0x30)
                {
                    if (_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h197dcbabd20ebd5c(core::iter::traits::iterator::Iterator::try_fold::h06b3cdfc65d0e745(
                            &var_30)))
                        rax = nullptr;
                    else
                        rax = 0xff;
                }
                else if (rax != 0x110000)
                    rax = 0xff;
                else
                    rax = nullptr;
                
                break;
            }
            
            if (rax == 0x110000)
            {
                rax = 1;
                
                if (rax_2 == 0x30)
                    rax = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h197dcbabd20ebd5c(core::iter::traits::iterator::Iterator::try_fold::h38cf5fff87cdbaf2(
                        &var_40)) ^ 1;
                
                break;
            }
            
            if (rax_2 != rax)
            {
                rax = 0 - 0;
                goto label_570e5d;
            }
        }
    }
    else
    {
        rax = temp0_1 < rsi;
        rax = -(rax);
        label_570e5d:
        rax |= 1;
    }
    
    char result = rax;
    rax = -(rax);
    
    if (r15)
        return result;
    
    return rax;
}
