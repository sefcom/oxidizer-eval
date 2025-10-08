
  fn alacritty::input::_$LT$impl$u20$alacritty..config..bindings..Action$GT$::toggle_selection::hd16f39a2721d862f(arg1: *mut c_void, arg2: i8) -> i64

{
    let rbx: *mut c_void = *arg1.byte_offset(8);
    _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::toggle_selection::h33a77c980c2b7ac5(arg1, arg2, *rbx.byte_offset(0x290), *rbx.byte_offset(0x298));
    let result: i64 = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::terminal_mut::ha68c2ba7b3d97983(rbx);
    
    if *rbx.byte_offset(0x280) != 2
    {
        /* tailcall */
        return alacritty_terminal::selection::Selection::include_all::h7c6fde09d9c3054d(rbx.
            byte_offset(0x258));
    }
    
    result
}
