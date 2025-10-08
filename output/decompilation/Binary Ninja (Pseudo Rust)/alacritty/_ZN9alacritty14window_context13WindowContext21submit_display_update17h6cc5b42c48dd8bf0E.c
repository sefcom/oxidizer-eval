
  fn alacritty::window_context::WindowContext::submit_display_update::h6cc5b42c48dd8bf0(arg1: *mut i32, arg2: *mut c_void, arg3: *mut i64, arg4: *mut i64, arg5: *mut c_void, arg6: i8, arg7: *mut c_void) -> i64

{
    let rax: i64;
    let var_38: i64 = rax;
    let r12: i32 = arg1[0x30];
    let mut r15: u64;
    
    if (*arg1.byte_offset(0x6de) & 1) != 0
    {
        r15 = arg1[0xa6] == r12 - 1;
    }
    else
    {
        r15 = *arg5.byte_offset(0x116c) ^ 1;
    }
    
    let r13: i32 = arg1[0x18];
    let mut result: i64 = alacritty::display::Display::handle_update::hcc25bf8cecd52e99(arg2, arg1, 
        arg3, arg4, arg5, arg7);
    
    if arg6 == 0 && *arg5.byte_offset(0x1100) != 0
    {
        result = *arg1.byte_offset(0xc8);
        
        if ((result != 0 | r13 + 1 != r12 | r15) & 1) == 0
        {
            /* tailcall */
            return alacritty_terminal::term::Term$LT$T$GT$::scroll_display::h6d83f12bf0aab15b(arg1);
        }
        
        result = result != 0;
        
        if (result & r15) != 0
        {
            /* tailcall */
            return alacritty_terminal::term::Term$LT$T$GT$::scroll_display::h6d83f12bf0aab15b(arg1);
        }
    }
    
    result
}
