
  fn alacritty_terminal::term::Term$LT$T$GT$::scroll_display::h6d83f12bf0aab15b(arg1: *mut i32) -> i64

{
    let r14: i64 = *arg1.byte_offset(0xc8);
    alacritty_terminal::grid::Grid$LT$T$GT$::scroll_display::h2a71daa54e5ae981(&arg1[0xa]);
    let mut var_38: i64 = -0x8000000000000000;
    _$LT$alacritty..event..EventProxy$u20$as$u20$alacritty_terminal..event..EventListener$GT$::send_event::hcb980e74e667f924(arg1, &var_38);
    let rbp: i32 = arg1[0x32];
    arg1[0xa6] = core::cmp::Ord::min::h3552534d3430b892(!rbp + arg1[0x30], 
        core::cmp::Ord::max::h485505c56320f468(-(rbp), arg1[0xa6]));
    let result: i64 =
        alacritty_terminal::term::Term$LT$T$GT$::vi_mode_recompute_selection::hf880b3a3d59b9937(
        arg1);
    
    if r14 != *arg1.byte_offset(0xc8)
    {
        arg1[0x84] = 1;
    }
    
    result
}
