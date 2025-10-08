
  fn alacritty::display::Display::update_highlighted_hints::h6a14f2ce82852321(arg1: *mut c_void, arg2: *mut c_void, arg3: i64, arg4: i64, arg5: *mut c_void) -> u64

{
    let mut r15: i32 = *arg2.byte_offset(0x6dc);
    let mut var_b8: i128;
    let mut var_a8: i128;
    let mut var_98: i128;
    let mut var_88: i64;
    let mut var_78: i128;
    let var_68: i128;
    let var_58: i128;
    let mut var_48: i8;
    let mut rbp: *mut c_void;
    let mut zmm0_1: i128;
    
    if (r15 & 0x10000) == 0
    {
        var_48 = 2;
        'label_84e380:
        rbp = *arg1.byte_offset(0x790) == 2;
        'label_84e38c:
        var_88 = var_48;
        var_98 = var_58;
        var_a8 = var_68;
        var_b8 = var_78;
        core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..display..hint..HintMatch$GT$$GT$::ha95ebafd6b78edef(arg1.byte_offset(0x760));
        rbp ^= 1;
        *arg1.byte_offset(0x790) = var_48;
        zmm0_1 = var_78;
        *arg1.byte_offset(0x780) = var_58;
        *arg1.byte_offset(0x770) = var_68;
        *arg1.byte_offset(0x760) = zmm0_1;
        *arg1.byte_offset(0x7c8) = 0;
        
        if rbp != 0
        {
            goto 'label_84e48a;
        }
        
        if *arg1.byte_offset(0x414) == 1 && *arg5.byte_offset(0x3a) != 0
        {
            goto 'label_84e4af;
        }
        
        goto 'label_84e56d;
    }
    
    *arg2.byte_offset(0x298);
    let var_c8_1: i32 = 0x924;
    alacritty::display::hint::highlighted_at::h6f7fb2c30c56b0f7(&var_78, arg2, arg3, arg4, 
        *arg2.byte_offset(0x290));
    
    if var_48 == 2
    {
        goto 'label_84e380;
    }
    
    if *arg1.byte_offset(0x790) != 2
    {
        rbp = _$LT$alacritty..display..hint..HintMatch$u20$as$u20$core..cmp..PartialEq$GT$::eq::h348168a43a161cd5(&var_78, arg1.byte_offset(0x760));
        goto 'label_84e38c;
    }
    
    var_88 = var_48;
    var_98 = var_58;
    var_a8 = var_68;
    var_b8 = var_78;
    core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..display..hint..HintMatch$GT$$GT$::ha95ebafd6b78edef(arg1.byte_offset(0x760));
    *arg1.byte_offset(0x790) = var_48;
    zmm0_1 = var_78;
    *arg1.byte_offset(0x780) = var_58;
    *arg1.byte_offset(0x770) = var_68;
    *arg1.byte_offset(0x760) = zmm0_1;
    *arg1.byte_offset(0x7c8) = 0;
    rbp = 1;
    'label_84e48a:
    *arg1.byte_offset(0x48) = 1;
    
    if *arg1.byte_offset(0x414) != 1 || *arg5.byte_offset(0x3a) == 0
    {
        'label_84e56d:
        let rax_9: i8 = *arg1.byte_offset(0x758);
        let var_98_1: i128 = *arg1.byte_offset(0x748);
        let var_a8_1: i128 = *arg1.byte_offset(0x738);
        var_b8 = *arg1.byte_offset(0x728);
        *arg1.byte_offset(0x758) = 2;
        core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..display..hint..HintMatch$GT$$GT$::ha95ebafd6b78edef(&var_b8);
        
        if rax_9 != 2
        {
            *arg1.byte_offset(0x48) = 1;
            rbp = 1;
        }
    }
    else
    {
        'label_84e4af:
        let mut rax_5: i8;
        
        if *arg2.byte_offset(0x280) != 2
        {
            rax_5 = alacritty_terminal::selection::Selection::is_empty::h0b26168e8eea422c(arg2.
                byte_offset(0x258));
        }
        
        if *arg2.byte_offset(0x280) != 2 && rax_5 == 0
        {
            goto 'label_84e56d;
        }
        
        let mut rax_6: i64;
        let mut rdx_1: i32;
        rax_6 = alacritty::event::Mouse::point::h7553a37268becc3a(*arg5.byte_offset(0x20), 
            *arg5.byte_offset(0x28), arg1.byte_offset(0x798), *arg2.byte_offset(0xc8));
        let r9: i32;
        let var_c8_2: i32 = r9;
        alacritty::display::hint::highlighted_at::h6f7fb2c30c56b0f7(&var_b8, arg2, arg3, arg4, 
            rax_6);
        let r13_1: i8 = var_88;
        let mut rax_8: bool;
        
        if r13_1 != 2
        {
            rbp = *arg1.byte_offset(0xd8) != rdx_1;
            rbp &= *arg1.byte_offset(0xc8);
            *arg1.byte_offset(0xc8) = 1;
            *arg1.byte_offset(0xd0) = rax_6;
            *arg1.byte_offset(0xd8) = rdx_1;
            
            if *arg1.byte_offset(0x415) != 3
            {
                *arg1.byte_offset(0x415) = 3;
                winit::window::Window::set_cursor::h058b386c12dba32c(*arg1.byte_offset(0x340), 
                    *arg1.byte_offset(0x348), 3);
            }
        }
        else if *arg1.byte_offset(0x758) != 2
        {
            *arg1.byte_offset(0xc8) = 0;
            let rcx_2: i8 = *arg1.byte_offset(0x415);
            
            if ((r15 & 0x2048) != 0 & (r15 & 0x10000) == 0) == 0
            {
                rax_8 = true;
                
                if rcx_2 != 8
                {
                    *arg1.byte_offset(0x415) = rax_8;
                    winit::window::Window::set_cursor::h058b386c12dba32c(*arg1.byte_offset(0x340), 
                        *arg1.byte_offset(0x348), rax_8);
                }
            }
            else if rcx_2 != 0
            {
                rax_8 = false;
                *arg1.byte_offset(0x415) = rax_8;
                winit::window::Window::set_cursor::h058b386c12dba32c(*arg1.byte_offset(0x340), 
                    *arg1.byte_offset(0x348), rax_8);
            }
        }
        
        rax_8 = r13_1 == 2;
        r15 = *arg1.byte_offset(0x758) == 2;
        
        if (r15 | rax_8) == 0
        {
            r15 = _$LT$alacritty..display..hint..HintMatch$u20$as$u20$core..cmp..PartialEq$GT$::eq::h348168a43a161cd5(arg1.byte_offset(0x728), &var_b8);
        }
        else
        {
            r15 &= rax_8;
        }
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..display..hint..HintMatch$GT$$GT$::ha95ebafd6b78edef(arg1.byte_offset(0x728));
        let rax_13: i8 = r15 ^ 1;
        *arg1.byte_offset(0x758) = var_88;
        let zmm0_2: i128 = var_b8;
        *arg1.byte_offset(0x748) = var_98;
        *arg1.byte_offset(0x738) = var_a8;
        *arg1.byte_offset(0x728) = zmm0_2;
        *arg1.byte_offset(0x7c0) = 0;
        
        if r15 == 0
        {
            *arg1.byte_offset(0x48) = 1;
            rbp |= rax_13;
        }
        else
        {
            rbp |= rax_13;
        }
    }
    
    rbp
}
