
  int64_t alacritty_terminal::vi_mode::is_space::h2c1eb68d688e4f50(void* arg1, int64_t arg2, int32_t arg3)

{
    void* rax = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1 + 0x28, arg3);
    int64_t rsi_1 = *(rax + 0x10);
    
    if (arg2 >= rsi_1)
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(arg2, rsi_1);
        /* no return */
    }
    
    int64_t rax_1 = *(rax + 8);
    int64_t rcx = arg2 * 3;
    
    if (*(rax_1 + (rcx << 3) + 0x14) & 0x440)
        return 0;
    
    int32_t result = *(rax_1 + (rcx << 3) + 0x10);
    rcx = result == 0x20;
    result = result == 9;
    result |= rcx;
    return result;
}
