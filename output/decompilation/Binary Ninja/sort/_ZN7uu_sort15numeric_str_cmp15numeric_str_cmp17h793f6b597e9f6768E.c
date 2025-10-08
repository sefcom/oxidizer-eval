
  int64_t* uu_sort::numeric_str_cmp::numeric_str_cmp::h793f6b597e9f6768(int64_t* arg1, int64_t* arg2)

{
    int64_t* result = arg1[2];
    int64_t* rcx = arg2[2];
    uint64_t r15 = result[1];
    uint64_t rdx = rcx[1];
    
    if (r15 != rdx)
    {
        rcx = r15 < rdx;
        result = r15 > rdx;
        result -= rcx;
    }
    else
    {
        int64_t r8_1 = *arg1;
        int64_t rdi = arg1[1];
        int64_t rdx_1 = *arg2;
        int64_t rsi = arg2[1];
        int64_t rcx_1;
        int64_t temp0_1;
        bool cond:2_1;
        
        if (rsi && rdi)
        {
            rcx_1 = *rcx;
            temp0_1 = *result;
            cond:2_1 = temp0_1 > rcx_1;
        }
        
        if (!rsi || !rdi || temp0_1 == rcx_1)
        {
            int64_t var_40 = r8_1;
            int64_t var_38_1 = rdi + r8_1;
            int64_t var_30 = rdx_1;
            int64_t var_28_1 = rsi + rdx_1;
            
            while (true)
            {
                int32_t rax =
                    core::iter::traits::iterator::Iterator::try_fold::hc8d8c18dde86c3ee(&var_40);
                result =
                    core::iter::traits::iterator::Iterator::try_fold::hc8d8c18dde86c3ee(&var_30);
                
                if (rax == 0x110000)
                {
                    if (result == 0x30)
                    {
                        if (_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::hbebb28a7d7095561(core::iter::traits::iterator::Iterator::try_fold::h075f228b849c1b87(
                                &var_30)))
                            result = nullptr;
                        else
                            result = 0xff;
                    }
                    else if (result != 0x110000)
                        result = 0xff;
                    else
                        result = nullptr;
                    
                    break;
                }
                
                if (result == 0x110000)
                {
                    result = 1;
                    
                    if (rax == 0x30)
                        result = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::hbebb28a7d7095561(
                            core::iter::traits::iterator::Iterator::try_fold::h075f228b849c1b87(
                            &var_40)) ^ 1;
                    
                    break;
                }
                
                bool c_1 = rax < result;
                bool z_1 = rax == result;
                
                if (!z_1)
                {
                    result = !z_1 && !c_1;
                    result = result - 0;
                    break;
                }
            }
        }
        else
        {
            rcx_1 = temp0_1 < rcx_1;
            result = cond:2_1;
            result -= rcx_1;
        }
        
        uint32_t rcx_2 = result;
        result = -(result);
        result = result;
        
        if (r15)
            return rcx_2;
    }
    
    return result;
}
