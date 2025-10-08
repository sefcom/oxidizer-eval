
  int64_t* alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::inline_search_right::hbf0568499a7b63a6(int64_t* arg1, void* arg2, int64_t arg3, int32_t arg4, char* arg5, void* arg6)

{
    int64_t r14 = arg3;
    int64_t rax = *(arg2 + 0x50);
    int64_t r12 = *(arg2 + 0xc0);
    int32_t rsi = 0;
    
    if (rax >= r12)
        rsi = rax - r12;
    
    int32_t rbp = core::cmp::Ord::max::h3396bb7148673668(arg4, -(rsi));
    int64_t r15_1 = *(arg2 + 0xb8) - 1;
    
    if (r14 != r15_1)
    {
        label_772338:
        void* var_58 = arg2 + 0x28;
        int64_t var_50_1 = r14;
        int32_t var_48_1 = rbp;
        int64_t var_40_1 = r15_1;
        int32_t var_38_1 = r12 - 1;
        void* i_1;
        _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hccebf77f76d7c458(&i_1, &var_58);
        
        for (void* i = i_1; i; i = i_1)
        {
            int64_t var_68;
            r14 = var_68;
            int32_t var_60;
            rbp = var_60;
            
            if (!(*(i + 0x14) & 0x440) && _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(*(i + 0x10), arg5, arg6))
            {
                arg1[1] = r14;
                arg1[2] = rbp;
                *arg1 = 0;
                return arg1;
            }
            
            if (r14 == r15_1 && !(*(i + 0x14) & 0x10))
            {
                r14 = r15_1;
                break;
            }
            
            _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hccebf77f76d7c458(&i_1, &var_58);
        }
    }
    else
    {
        void* rax_3 = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg2 + 0x28, rbp);
        int64_t rsi_3 = *(rax_3 + 0x10);
        
        if (r14 >= rsi_3)
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(r14, rsi_3);
            /* no return */
        }
        
        if (*(*(rax_3 + 8) + r14 * 0x18 + 0x14) & 0x10)
            goto label_772338;
    }
    
    arg1[1] = r14;
    arg1[2] = rbp;
    *arg1 = 1;
    return arg1;
}
