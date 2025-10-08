
  uint64_t alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::skip_fullwidth::h604d4a2591bbfa58(void* arg1, int64_t* arg2, int64_t* arg3, int32_t arg4)

{
    uint64_t result = *(*arg3 + 0x14);
    int64_t var_30;
    
    if (arg4)
    {
        if (result & 0x20 && arg2[1] < *(arg1 + 0xb8) - 1)
            return _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hccebf77f76d7c458(&var_30, arg2);
        
        if (result & 0x400)
        {
            _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hccebf77f76d7c458(&var_30, arg2);
            int64_t rax_1 = var_30;
            
            if (rax_1)
                *arg3 = rax_1;
            
            return _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hccebf77f76d7c458(&var_30, arg2);
        }
    }
    else if (result & 0x40)
    {
        _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$alacritty_terminal..grid..BidirectionalIterator$GT$::prev::h095ab9c52e150b73(&var_30, arg2);
        int64_t rax_2 = var_30;
        
        if (rax_2)
            *arg3 = rax_2;
        
        int64_t rax_3;
        int32_t rdx_1;
        rax_3 = alacritty_terminal::index::Point::sub::h8b4b7dd5f4447bbc(arg2[1], arg2[2], arg1, 1);
        void* rax_4 = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1 + 0x28, rdx_1);
        int64_t rsi_5 = *(rax_4 + 0x10);
        
        if (rax_3 >= rsi_5)
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(rax_3, rsi_5);
            /* no return */
        }
        
        result = *(rax_4 + 8);
        
        if (*(result + rax_3 * 0x18 + 0x15) & 4)
            return _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$alacritty_terminal..grid..BidirectionalIterator$GT$::prev::h095ab9c52e150b73(&var_30, arg2);
    }
    return result;
}
