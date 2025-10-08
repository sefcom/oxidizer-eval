
  int64_t alacritty::input::_$LT$impl$u20$alacritty..config..bindings..Action$GT$::toggle_selection::hd16f39a2721d862f(void* arg1, char arg2)

{
    void* rbx = *(arg1 + 8);
    _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::toggle_selection::h33a77c980c2b7ac5(arg1, arg2, *(rbx + 0x290), *(rbx + 0x298));
    int64_t result = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::terminal_mut::ha68c2ba7b3d97983(rbx);
    
    if (*(rbx + 0x280) != 2)
        /* tailcall */
        return alacritty_terminal::selection::Selection::include_all::h7c6fde09d9c3054d(rbx
            + 0x258);
    
    return result;
}
