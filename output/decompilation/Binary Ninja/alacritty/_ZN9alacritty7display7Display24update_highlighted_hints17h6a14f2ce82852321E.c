
  uint64_t alacritty::display::Display::update_highlighted_hints::h6a14f2ce82852321(void* arg1, void* arg2, int64_t arg3, int64_t arg4, void* arg5)

{
    int32_t r15 = *(arg2 + 0x6dc);
    int128_t var_b8;
    int128_t var_a8;
    int128_t var_98;
    int64_t var_88;
    int128_t var_78;
    int128_t var_68;
    int128_t var_58;
    char var_48;
    void* rbp;
    int128_t zmm0_1;
    
    if (!(r15 & 0x10000))
    {
        var_48 = 2;
        label_84e380:
        rbp = *(arg1 + 0x790) == 2;
        label_84e38c:
        var_88 = var_48;
        var_98 = var_58;
        var_a8 = var_68;
        var_b8 = var_78;
        core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..display..hint..HintMatch$GT$$GT$::ha95ebafd6b78edef(arg1 + 0x760);
        rbp ^= 1;
        *(arg1 + 0x790) = var_48;
        zmm0_1 = var_78;
        *(arg1 + 0x780) = var_58;
        *(arg1 + 0x770) = var_68;
        *(arg1 + 0x760) = zmm0_1;
        *(arg1 + 0x7c8) = 0;
        
        if (rbp)
            goto label_84e48a;
        
        if (*(arg1 + 0x414) == 1 && *(arg5 + 0x3a))
            goto label_84e4af;
        
        goto label_84e56d;
    }
    
    *(arg2 + 0x298);
    int32_t var_c8_1 = 0x924;
    alacritty::display::hint::highlighted_at::h6f7fb2c30c56b0f7(&var_78, arg2, arg3, arg4, 
        *(arg2 + 0x290));
    
    if (var_48 == 2)
        goto label_84e380;
    
    if (*(arg1 + 0x790) != 2)
    {
        rbp = _$LT$alacritty..display..hint..HintMatch$u20$as$u20$core..cmp..PartialEq$GT$::eq::h348168a43a161cd5(&var_78, arg1 + 0x760);
        goto label_84e38c;
    }
    
    var_88 = var_48;
    var_98 = var_58;
    var_a8 = var_68;
    var_b8 = var_78;
    core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..display..hint..HintMatch$GT$$GT$::ha95ebafd6b78edef(arg1 + 0x760);
    *(arg1 + 0x790) = var_48;
    zmm0_1 = var_78;
    *(arg1 + 0x780) = var_58;
    *(arg1 + 0x770) = var_68;
    *(arg1 + 0x760) = zmm0_1;
    *(arg1 + 0x7c8) = 0;
    rbp = 1;
    label_84e48a:
    *(arg1 + 0x48) = 1;
    
    if (*(arg1 + 0x414) != 1 || !*(arg5 + 0x3a))
    {
        label_84e56d:
        char rax_9 = *(arg1 + 0x758);
        int128_t var_98_1 = *(arg1 + 0x748);
        int128_t var_a8_1 = *(arg1 + 0x738);
        var_b8 = *(arg1 + 0x728);
        *(arg1 + 0x758) = 2;
        core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..display..hint..HintMatch$GT$$GT$::ha95ebafd6b78edef(&var_b8);
        
        if (rax_9 != 2)
        {
            *(arg1 + 0x48) = 1;
            rbp = 1;
        }
    }
    else
    {
        label_84e4af:
        char rax_5;
        
        if (*(arg2 + 0x280) != 2)
            rax_5 =
                alacritty_terminal::selection::Selection::is_empty::h0b26168e8eea422c(arg2 + 0x258);
        
        if (*(arg2 + 0x280) != 2 && !rax_5)
            goto label_84e56d;
        
        int64_t rax_6;
        int32_t rdx_1;
        rax_6 = alacritty::event::Mouse::point::h7553a37268becc3a(*(arg5 + 0x20), *(arg5 + 0x28), 
            arg1 + 0x798, *(arg2 + 0xc8));
        int32_t r9;
        int32_t var_c8_2 = r9;
        alacritty::display::hint::highlighted_at::h6f7fb2c30c56b0f7(&var_b8, arg2, arg3, arg4, 
            rax_6);
        char r13_1 = var_88;
        bool rax_8;
        
        if (r13_1 != 2)
        {
            rbp = *(arg1 + 0xd8) != rdx_1;
            rbp &= *(arg1 + 0xc8);
            *(arg1 + 0xc8) = 1;
            *(arg1 + 0xd0) = rax_6;
            *(arg1 + 0xd8) = rdx_1;
            
            if (*(arg1 + 0x415) != 3)
            {
                *(arg1 + 0x415) = 3;
                winit::window::Window::set_cursor::h058b386c12dba32c(*(arg1 + 0x340), 
                    *(arg1 + 0x348), 3);
            }
        }
        else if (*(arg1 + 0x758) != 2)
        {
            *(arg1 + 0xc8) = 0;
            char rcx_2 = *(arg1 + 0x415);
            
            if (!(r15 & 0x2048 & !(r15 & 0x10000)))
            {
                rax_8 = true;
                
                if (rcx_2 != 8)
                {
                    *(arg1 + 0x415) = rax_8;
                    winit::window::Window::set_cursor::h058b386c12dba32c(*(arg1 + 0x340), 
                        *(arg1 + 0x348), rax_8);
                }
            }
            else if (rcx_2)
            {
                rax_8 = false;
                *(arg1 + 0x415) = rax_8;
                winit::window::Window::set_cursor::h058b386c12dba32c(*(arg1 + 0x340), 
                    *(arg1 + 0x348), rax_8);
            }
        }
        
        rax_8 = r13_1 == 2;
        r15 = *(arg1 + 0x758) == 2;
        
        if (!(r15 | rax_8))
            r15 = _$LT$alacritty..display..hint..HintMatch$u20$as$u20$core..cmp..PartialEq$GT$::eq::h348168a43a161cd5(arg1 + 0x728, &var_b8);
        else
            r15 &= rax_8;
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..display..hint..HintMatch$GT$$GT$::ha95ebafd6b78edef(arg1 + 0x728);
        char rax_13 = r15 ^ 1;
        *(arg1 + 0x758) = var_88;
        int128_t zmm0_2 = var_b8;
        *(arg1 + 0x748) = var_98;
        *(arg1 + 0x738) = var_a8;
        *(arg1 + 0x728) = zmm0_2;
        *(arg1 + 0x7c0) = 0;
        
        if (!r15)
        {
            *(arg1 + 0x48) = 1;
            rbp |= rax_13;
        }
        else
            rbp |= rax_13;
    }
    
    return rbp;
}
