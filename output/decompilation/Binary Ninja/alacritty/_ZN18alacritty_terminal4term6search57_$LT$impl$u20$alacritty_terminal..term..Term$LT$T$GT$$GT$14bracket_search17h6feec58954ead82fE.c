
  int32_t* alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::bracket_search::h6feec58954ead82f(int64_t* arg1, void* arg2, int64_t arg3, int32_t arg4)

{
    void* rax = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg2 + 0x28, arg4);
    int64_t rsi_1 = *(rax + 0x10);
    
    if (arg3 >= rsi_1)
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(arg3, rsi_1);
        /* no return */
    }
    
    int32_t var_74 = *(*(rax + 8) + arg3 * 0x18 + 0x10);
    char const* const var_58 = "(";
    void* const var_50 = "Failed to query XRandR extension…";
    int32_t* result;
    int32_t rdx_1;
    result = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find_map::h0bf4233c49b47505(&var_58, &var_74);
    
    if (rdx_1 != 0x110000)
    {
        int32_t rcx_2 = *(arg2 + 0xc0) - 1;
        int64_t rdx_3 = *(arg2 + 0xb8) - 1;
        var_58 = arg2 + 0x28;
        int64_t var_50_1 = arg3;
        int32_t var_48_1 = arg4;
        int64_t var_40_1 = rdx_3;
        int32_t var_38_1 = rcx_2;
        int32_t* result_1;
        int32_t** rdi_2 = &result_1;
        int64_t* rsi_3 = &var_58;
        
        if (!(result & 1))
        {
            _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$alacritty_terminal..grid..BidirectionalIterator$GT$::prev::h095ab9c52e150b73(rdi_2, rsi_3);
            result = result_1;
            
            if (!result)
            {
                label_77180b:
                *arg1 = 0;
            }
            else
            {
                int32_t r12_2 = 0;
                
                while (true)
                {
                    int32_t rax_4 = result[4];
                    
                    if (rax_4 == rdx_1)
                    {
                        if (!r12_2)
                            break;
                        
                        if (rdx_1 != var_74)
                            r12_2 -= 1;
                        else
                            r12_2 += 1;
                    }
                    else if (rax_4 == var_74)
                        r12_2 += 1;
                    
                    _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$alacritty_terminal..grid..BidirectionalIterator$GT$::prev::h095ab9c52e150b73(&result_1, &var_58);
                    result = result_1;
                    
                    if (!result)
                        goto label_77180b_2;
                }
                
                label_77191b:
                int32_t* result_2;
                result = result_2;
                arg1[1] = result;
                int32_t var_60;
                arg1[2] = var_60;
                *arg1 = 1;
            }
        }
        else
        {
            _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hccebf77f76d7c458(rdi_2, rsi_3);
            result = result_1;
            
            if (result)
            {
                int32_t r12_1 = 0;
                
                while (true)
                {
                    int32_t rax_3 = result[4];
                    
                    if (rax_3 == rdx_1)
                    {
                        if (!r12_1)
                            break;
                        
                        if (rdx_1 != var_74)
                            r12_1 -= 1;
                        else
                            r12_1 += 1;
                    }
                    else if (rax_3 == var_74)
                        r12_1 += 1;
                    
                    _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hccebf77f76d7c458(&result_1, &var_58);
                    result = result_1;
                    
                    if (!result)
                        goto label_77180b_2;
                }
                
                goto label_77191b;
            }
            
            label_77180b_1:
            *arg1 = 0;
        }
    }
    else
    {
        label_77180b_2:
        *arg1 = 0;
    }
    
    return result;
}
