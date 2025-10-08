
  int64_t alacritty::window_context::WindowContext::submit_display_update::h6cc5b42c48dd8bf0(int32_t* arg1, void* arg2, int64_t* arg3, int64_t* arg4, void* arg5, char arg6, void* arg7)

{
    int64_t rax;
    int64_t var_38 = rax;
    int32_t r12 = arg1[0x30];
    uint64_t r15;
    
    if (*(arg1 + 0x6de) & 1)
        r15 = arg1[0xa6] == r12 - 1;
    else
        r15 = *(arg5 + 0x116c) ^ 1;
    
    int32_t r13 = arg1[0x18];
    int64_t result = alacritty::display::Display::handle_update::hcc25bf8cecd52e99(arg2, arg1, 
        arg3, arg4, arg5, arg7);
    
    if (!arg6 && *(arg5 + 0x1100))
    {
        result = *(arg1 + 0xc8);
        
        if (!((result | r13 + 1 != r12 | r15) & 1))
            /* tailcall */
            return alacritty_terminal::term::Term$LT$T$GT$::scroll_display::h6d83f12bf0aab15b(arg1);
        
        result = result;
        
        if (result & r15)
            /* tailcall */
            return alacritty_terminal::term::Term$LT$T$GT$::scroll_display::h6d83f12bf0aab15b(arg1);
    }
    
    return result;
}
