
  uint8_t alacritty_terminal::vi_mode::is_wrap::h0d49787c150cddfa(void* arg1, int64_t arg2, int32_t arg3)

{
    void* rax = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1 + 0x28, arg3);
    int64_t rsi_1 = *(rax + 0x10);
    
    if (arg2 < rsi_1)
        return (*(*(rax + 8) + arg2 * 0x18 + 0x14) & 0x10) >> 4;
    
    core::panicking::panic_bounds_check::h025cadc56a971af7(arg2, rsi_1);
    /* no return */
}
