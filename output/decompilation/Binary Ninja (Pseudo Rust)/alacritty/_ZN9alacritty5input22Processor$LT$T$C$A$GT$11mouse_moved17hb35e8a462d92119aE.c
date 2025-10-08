
  fn alacritty::input::Processor$LT$T$C$A$GT$::mouse_moved::hb35e8a462d92119a(arg1: *mut i64, arg2: i64 @ zmm0, arg3: i64 @ zmm1) -> i64

{
    let rsi: *mut c_void = arg1[6];
    let mut var_58: ();
    _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::size_info::h75f6d6cd23dc8329(&var_58, rsi);
    let mut rax: i32;
    let mut rdx: i32;
    rax = dpi::_$LT$impl$u20$core..convert..From$LT$dpi..PhysicalPosition$LT$P$GT$$GT$$u20$for$u20$$LP$X$C$X$RP$$GT$::from::he5767627880a021b(arg2, arg3);
    let mut var_80: i64;
    var_80 = rax;
    let r14: *mut c_void = arg1[3];
    let rax_1: i8 = *r14.byte_offset(0x34);
    let mut rbx: i64;
    rbx = rax_1 == 0;
    let mut r13: i64;
    r13 = *r14.byte_offset(0x36) == 0;
    let r12: *mut c_void = arg1[1];
    r13 |= rbx;
    
    if r13 == 1 && _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::selection_is_empty::h06e87f25781b0a34(r12) == 0
    {
        alacritty::input::Processor$LT$T$C$A$GT$::update_selection_scrolling::haef1ad53b13a7ec5(
            rsi, arg1[0xc], rdx);
    }
    
    let r15_1: i32 = *r12.byte_offset(0xc8);
    let mut rax_3: i64;
    let mut rdx_3: i32;
    rax_3 = alacritty::event::Mouse::point::h7553a37268becc3a(*r14.byte_offset(0x20), 
        *r14.byte_offset(0x28), &var_58, r15_1);
    let var_48: f32;
    let mut rsi_3: i32 = var_48;
    
    if var_48 > 2.14748352e+09f
    {
        rsi_3 = 0x7fffffff;
    }
    
    if FCMP_UO(var_48, var_48)
    {
        rsi_3 = 0;
    }
    
    let rax_4: i32 = core::cmp::Ord::clamp::heae1d66c53e20e24(var_80, rsi_3 - 1);
    let var_44: f32;
    let mut rsi_5: i32 = var_44;
    
    if var_44 > 2.14748352e+09f
    {
        rsi_5 = 0x7fffffff;
    }
    
    let r12_1: i64 = rax_4;
    
    if FCMP_UO(var_44, var_44)
    {
        rsi_5 = 0;
    }
    
    let rbp_1: i64 = core::cmp::Ord::clamp::heae1d66c53e20e24(rdx, rsi_5 - 1);
    *r14.byte_offset(0x20) = r12_1;
    *r14.byte_offset(0x28) = rbp_1;
    let rax_6: i8 =
        alacritty::display::SizeInfo::contains_point::h0a9ac37fde68bbb4(&var_58, r12_1, rbp_1);
    let rax_7: bool =
        alacritty::input::Processor$LT$T$C$A$GT$::cell_side::h8083590e79163558(rsi, r12_1);
    let mut rax_8: i64;
    let mut rdx_6: i32;
    rax_8 = alacritty::event::Mouse::point::h7553a37268becc3a(*r14.byte_offset(0x20), 
        *r14.byte_offset(0x28), &var_58, r15_1);
    let r12_2: bool = rax_3 != rax_8 | rdx_3 != rdx_6;
    let mut result: i8;
    
    if r12_2 == 0 && *r14.byte_offset(0x37) == rax_7
    {
        result = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::scheduler_mut::h7228edc0b7dad3ea(r14);
    }
    
    if r12_2 != 0 || *r14.byte_offset(0x37) != rax_7 || rax_6 != *r14.byte_offset(0x3a)
    {
        *r14.byte_offset(0x3a) = rax_6;
        let mut var_70: i64;
        var_70 = rax_7;
        *r14.byte_offset(0x37) = rax_7;
        let rax_9: i8 =
            alacritty::input::Processor$LT$T$C$A$GT$::cursor_state::hd11ac0475868ceff(arg1);
        let rax_10: *mut c_void = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::window::hc2466ca785044c59(rsi);
        
        if rax_9 != *rax_10.byte_offset(0xf5)
        {
            *rax_10.byte_offset(0xf5) = rax_9;
            winit::window::Window::set_cursor::h058b386c12dba32c(*rax_10.byte_offset(0x20), 
                *rax_10.byte_offset(0x28), rax_9);
        }
        
        *r14.byte_offset(0x39) = 1;
        result = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::scheduler_mut::h7228edc0b7dad3ea(r14);
        *r14.byte_offset(0x38) = 1;
        
        if r13 != 0
        {
            let rbx_3: *mut i8 = arg1[5];
            
            if (*rbx_3 & 4) == 0
            {
                result = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::mouse_mode::h5645ae47cef353d4(r12);
            }
            
            if (*rbx_3 & 4) != 0 || result == 0
            {
                /* tailcall */
                return _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::update_selection::h5d37a5395dd5d55e(arg1, rax_8, rdx_6, var_70);
            }
        }
        
        if r12_2 != 0
        {
            result = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::terminal_mut::ha68c2ba7b3d97983(r12);
            let rbx_5: i32 = *r12.byte_offset(0x6dc);
            
            if (rbx_5 & 0x2040) != 0
            {
                if rax_1 == 0
                {
                    /* tailcall */
                    return
                        alacritty::input::Processor$LT$T$C$A$GT$::mouse_report::hed04f95cad75d625(
                        arg1, 0x20, 0);
                }
                
                if *r14.byte_offset(0x35) == 0
                {
                    /* tailcall */
                    return
                        alacritty::input::Processor$LT$T$C$A$GT$::mouse_report::hed04f95cad75d625(
                        arg1, 0x21, 0);
                }
                
                if *r14.byte_offset(0x36) == 0
                {
                    /* tailcall */
                    return
                        alacritty::input::Processor$LT$T$C$A$GT$::mouse_report::hed04f95cad75d625(
                        arg1, 0x22, 0);
                }
                
                result = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::terminal_mut::ha68c2ba7b3d97983(r12);
                
                if (rbx_5 & 0x40) != 0
                {
                    /* tailcall */
                    return
                        alacritty::input::Processor$LT$T$C$A$GT$::mouse_report::hed04f95cad75d625(
                        arg1, 0x23, 0);
                }
            }
        }
    }
    
    result
}
