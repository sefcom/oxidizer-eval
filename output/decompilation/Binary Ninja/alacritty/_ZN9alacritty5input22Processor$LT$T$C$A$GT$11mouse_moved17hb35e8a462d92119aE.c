
  int64_t alacritty::input::Processor$LT$T$C$A$GT$::mouse_moved::hb35e8a462d92119a(int64_t* arg1, int64_t arg2 @ zmm0, int64_t arg3 @ zmm1)

{
    void* rsi = arg1[6];
    void var_58;
    _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::size_info::h75f6d6cd23dc8329(&var_58, rsi);
    int32_t rax;
    int32_t rdx;
    rax = dpi::_$LT$impl$u20$core..convert..From$LT$dpi..PhysicalPosition$LT$P$GT$$GT$$u20$for$u20$$LP$X$C$X$RP$$GT$::from::he5767627880a021b(arg2, arg3);
    int64_t var_80;
    var_80 = rax;
    void* r14 = arg1[3];
    char rax_1 = *(r14 + 0x34);
    int64_t rbx;
    rbx = !rax_1;
    int64_t r13;
    r13 = !*(r14 + 0x36);
    void* r12 = arg1[1];
    r13 |= rbx;
    
    if (r13 == 1 && !_$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::selection_is_empty::h06e87f25781b0a34(r12))
        alacritty::input::Processor$LT$T$C$A$GT$::update_selection_scrolling::haef1ad53b13a7ec5(
            rsi, arg1[0xc], rdx);
    
    int32_t r15_1 = *(r12 + 0xc8);
    int64_t rax_3;
    int32_t rdx_3;
    rax_3 = alacritty::event::Mouse::point::h7553a37268becc3a(*(r14 + 0x20), *(r14 + 0x28), 
        &var_58, r15_1);
    float var_48;
    int32_t rsi_3 = var_48;
    
    if (var_48 > 2.14748352e+09f)
        rsi_3 = 0x7fffffff;
    
    if (FCMP_UO(var_48, var_48))
        rsi_3 = 0;
    
    int32_t rax_4 = core::cmp::Ord::clamp::heae1d66c53e20e24(var_80, rsi_3 - 1);
    float var_44;
    int32_t rsi_5 = var_44;
    
    if (var_44 > 2.14748352e+09f)
        rsi_5 = 0x7fffffff;
    
    int64_t r12_1 = rax_4;
    
    if (FCMP_UO(var_44, var_44))
        rsi_5 = 0;
    
    int64_t rbp_1 = core::cmp::Ord::clamp::heae1d66c53e20e24(rdx, rsi_5 - 1);
    *(r14 + 0x20) = r12_1;
    *(r14 + 0x28) = rbp_1;
    char rax_6 =
        alacritty::display::SizeInfo::contains_point::h0a9ac37fde68bbb4(&var_58, r12_1, rbp_1);
    bool rax_7 = alacritty::input::Processor$LT$T$C$A$GT$::cell_side::h8083590e79163558(rsi, r12_1);
    int64_t rax_8;
    int32_t rdx_6;
    rax_8 = alacritty::event::Mouse::point::h7553a37268becc3a(*(r14 + 0x20), *(r14 + 0x28), 
        &var_58, r15_1);
    bool r12_2 = rax_3 != rax_8 | rdx_3 != rdx_6;
    char result;
    
    if (!r12_2 && *(r14 + 0x37) == rax_7)
        result = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::scheduler_mut::h7228edc0b7dad3ea(r14);
    
    if (r12_2 || *(r14 + 0x37) != rax_7 || rax_6 != *(r14 + 0x3a))
    {
        *(r14 + 0x3a) = rax_6;
        int64_t var_70;
        var_70 = rax_7;
        *(r14 + 0x37) = rax_7;
        char rax_9 =
            alacritty::input::Processor$LT$T$C$A$GT$::cursor_state::hd11ac0475868ceff(arg1);
        void* rax_10 = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::window::hc2466ca785044c59(rsi);
        
        if (rax_9 != *(rax_10 + 0xf5))
        {
            *(rax_10 + 0xf5) = rax_9;
            winit::window::Window::set_cursor::h058b386c12dba32c(*(rax_10 + 0x20), 
                *(rax_10 + 0x28), rax_9);
        }
        
        *(r14 + 0x39) = 1;
        result = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::scheduler_mut::h7228edc0b7dad3ea(r14);
        *(r14 + 0x38) = 1;
        
        if (r13)
        {
            char* rbx_3 = arg1[5];
            
            if (!(*rbx_3 & 4))
                result = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::mouse_mode::h5645ae47cef353d4(r12);
            
            if (*rbx_3 & 4 || !result)
                /* tailcall */
                return _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::update_selection::h5d37a5395dd5d55e(arg1, rax_8, rdx_6, var_70);
        }
        
        if (r12_2)
        {
            result = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::terminal_mut::ha68c2ba7b3d97983(r12);
            int32_t rbx_5 = *(r12 + 0x6dc);
            
            if (rbx_5 & 0x2040)
            {
                if (!rax_1)
                    /* tailcall */
                    return
                        alacritty::input::Processor$LT$T$C$A$GT$::mouse_report::hed04f95cad75d625(
                        arg1, 0x20, 0);
                
                if (!*(r14 + 0x35))
                    /* tailcall */
                    return
                        alacritty::input::Processor$LT$T$C$A$GT$::mouse_report::hed04f95cad75d625(
                        arg1, 0x21, 0);
                
                if (!*(r14 + 0x36))
                    /* tailcall */
                    return
                        alacritty::input::Processor$LT$T$C$A$GT$::mouse_report::hed04f95cad75d625(
                        arg1, 0x22, 0);
                
                result = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::terminal_mut::ha68c2ba7b3d97983(r12);
                
                if (rbx_5 & 0x40)
                    /* tailcall */
                    return
                        alacritty::input::Processor$LT$T$C$A$GT$::mouse_report::hed04f95cad75d625(
                        arg1, 0x23, 0);
            }
        }
    }
    
    return result;
}
