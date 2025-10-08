
  fn alacritty_terminal::term::Term$LT$T$GT$::scroll_to_point::hb7f2e07c90fd62c4(arg1: *mut i32, arg2: i32) -> i64

{
    let result: i32 = arg1[0x32];
    
    if arg2 < -(result)
    {
        /* tailcall */
        return alacritty_terminal::term::Term$LT$T$GT$::scroll_display::h6d83f12bf0aab15b(arg1);
    }
    
    if arg2 >= arg1[0x30] - result
    {
        /* tailcall */
        return alacritty_terminal::term::Term$LT$T$GT$::scroll_display::h6d83f12bf0aab15b(arg1);
    }
    
    result
}
