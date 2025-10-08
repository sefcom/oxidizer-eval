
  int64_t alacritty_terminal::term::Term$LT$T$GT$::expand_wide::h832c6afc1f08b7ff(void* arg1, int64_t arg2, int32_t arg3, char arg4)

{
    int64_t result = arg2;
    void* rax = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1 + 0x28, arg3);
    int64_t rsi_1 = *(rax + 0x10);
    
    if (result >= rsi_1)
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(result, rsi_1);
        /* no return */
    }
    
    uint32_t rax_2 = *(*(rax + 8) + result * 0x18 + 0x14);
    
    if (arg4)
    {
        if (rax_2 & 0x400)
            return 1;
        
        if (rax_2 & 0x20)
            return core::cmp::Ord::min::hffab314b5e6491b1(result + 1, *(arg1 + 0xb8) - 1);
    }
    else if (rax_2 & 0x60)
    {
        result += rax_2 << 9 >> 0xf;
        int64_t result_1;
        int32_t rdx_2;
        result_1 = alacritty_terminal::index::Point::sub::h8b4b7dd5f4447bbc(result, arg3, arg1, 1);
        void* rax_8 = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1 + 0x28, rdx_2);
        int64_t rsi_6 = *(rax_8 + 0x10);
        
        if (result_1 >= rsi_6)
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(result_1, rsi_6);
            /* no return */
        }
        
        if (*(*(rax_8 + 8) + result_1 * 0x18 + 0x15) & 4)
            result = result_1;
    }
    
    return result;
}
