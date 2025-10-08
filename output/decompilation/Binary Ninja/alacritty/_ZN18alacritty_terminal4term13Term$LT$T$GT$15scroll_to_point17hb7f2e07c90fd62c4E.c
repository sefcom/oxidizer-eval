
  int64_t alacritty_terminal::term::Term$LT$T$GT$::scroll_to_point::hb7f2e07c90fd62c4(int32_t* arg1, int32_t arg2)

{
    int32_t result = arg1[0x32];
    
    if (arg2 < -(result))
        /* tailcall */
        return alacritty_terminal::term::Term$LT$T$GT$::scroll_display::h6d83f12bf0aab15b(arg1);
    
    if (arg2 >= arg1[0x30] - result)
        /* tailcall */
        return alacritty_terminal::term::Term$LT$T$GT$::scroll_display::h6d83f12bf0aab15b(arg1);
    
    return result;
}
