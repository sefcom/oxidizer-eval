
  int64_t alacritty_terminal::grid::GridIterator$LT$T$GT$::cell::h5c2417f3cd861f7e(int64_t* arg1)

{
    int64_t rbx = arg1[1];
    void* rax_1 = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(*arg1, arg1[2]);
    int64_t rsi_1 = *(rax_1 + 0x10);
    
    if (rbx < rsi_1)
        return rbx * 0x18 + *(rax_1 + 8);
    
    core::panicking::panic_bounds_check::h025cadc56a971af7(rbx, rsi_1);
    /* no return */
}
