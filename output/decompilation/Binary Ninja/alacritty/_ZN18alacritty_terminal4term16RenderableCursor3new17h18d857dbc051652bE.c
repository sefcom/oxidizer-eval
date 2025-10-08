
  int64_t alacritty_terminal::term::RenderableCursor::new::h18d857dbc051652b(int64_t* arg1, void* arg2)

{
    int64_t rax;
    int64_t var_38 = rax;
    int32_t r12 = *(arg2 + 0x6dc);
    void* rax_1 = arg2 + 0x290;
    void* rsi = arg2 + 0x60;
    int32_t temp0 = r12 & 0x10000;
    
    if (!temp0)
        rax_1 = arg2 + 0x58;
    
    if (temp0)
        rsi = arg2 + 0x298;
    
    int32_t rbp = *rsi;
    int64_t rbx = *rax_1;
    void* rax_2 = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg2 + 0x28, rbp);
    int64_t rsi_2 = *(rax_2 + 0x10);
    
    if (rbx >= rsi_2)
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(rbx, rsi_2);
        /* no return */
    }
    
    uint32_t r13 = *(*(rax_2 + 8) + rbx * 0x18 + 0x14);
    char rdx_1;
    
    if (!(r12 & 0x10001))
        rdx_1 = 4;
    else
        rdx_1 = alacritty_terminal::term::Term$LT$T$GT$::cursor_style::hbc8727fad33b6b36(arg2);
    
    int64_t result = r13 << 9 >> 0xf;
    arg1[2] = rdx_1;
    *arg1 = rbx + result;
    arg1[1] = rbp;
    return result;
}
