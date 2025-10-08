
  int64_t alacritty_terminal::grid::Grid$LT$T$GT$::cursor_cell::h4172fc1fd56d763c(void* arg1)

{
    int64_t rax;
    int64_t var_18 = rax;
    int64_t rbx = *(arg1 + 0x30);
    void* rax_1 = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1, *(arg1 + 0x38));
    *(rax_1 + 0x18) = core::cmp::Ord::max::h20b6d33cbe488162(*(rax_1 + 0x18), rbx + 1);
    int64_t rsi_2 = *(rax_1 + 0x10);
    
    if (rbx < rsi_2)
        return rbx * 0x18 + *(rax_1 + 8);
    
    core::panicking::panic_bounds_check::h025cadc56a971af7(rbx, rsi_2);
    /* no return */
}
