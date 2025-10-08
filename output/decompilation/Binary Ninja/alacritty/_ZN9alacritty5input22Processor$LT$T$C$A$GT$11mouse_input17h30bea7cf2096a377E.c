
  void* alacritty::input::Processor$LT$T$C$A$GT$::mouse_input::h30bea7cf2096a377(int64_t* arg1, char arg2, int16_t arg3, int16_t arg4)

{
    if (arg3)
    {
        uint32_t rax = arg3;
        
        if (rax == 1)
        {
            *(arg1[3] + 0x36) = arg2;
            label_85aee5:
            
            if (alacritty::input::Processor$LT$T$C$A$GT$::message_bar_cursor_state::h1057cdc0852c0ab1(arg1) != 3)
                goto label_85afb5;
            
            goto label_85aef2;
        }
        
        if (rax != 2)
            goto label_85aee5;
        
        *(arg1[3] + 0x35) = arg2;
        
        if (alacritty::input::Processor$LT$T$C$A$GT$::message_bar_cursor_state::h1057cdc0852c0ab1(
                arg1) == 3)
            goto label_85aef2;
        
        goto label_85afb5;
    }
    
    *(arg1[3] + 0x34) = arg2;
    
    if (alacritty::input::Processor$LT$T$C$A$GT$::message_bar_cursor_state::h1057cdc0852c0ab1(arg1)
        == 3)
    {
        label_85aef2:
        
        if (!arg2)
        {
            void* r14_1 = arg1[6];
            void var_58;
            _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::size_info::h75f6d6cd23dc8329(&var_58, r14_1);
            int64_t* r13 = arg1[7];
            int64_t rax_4 = core::option::Option$LT$T$GT$::map_or::h79f8debf1d8849b2(
                _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::message::h48f4201a3b3c594d(r13), 
                &var_58);
            void* r12_3 = arg1[1];
            _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::clear_selection::h2f28545a903d1aa1(r12_3, arg1[0xf]);
            _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::pop_message::h6034976c9c1b5621(r14_1, r13);
            int64_t rax_6 = core::option::Option$LT$T$GT$::map_or::h79f8debf1d8849b2(
                _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::message::h48f4201a3b3c594d(r13), 
                &var_58);
            bool c = rax_4 < rax_6;
            rax_6 = rax_4 != rax_6 && !c;
            rax_6 = rax_6 - 0;
            void* result;
            int64_t* rbx;
            
            if (!rax_6)
            {
                rbx = 3;
                result = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::window::hc2466ca785044c59(r14_1);
                
                if (3 == *(result + 0xf5))
                    return result;
            }
            else if (rax_6 != 1)
            {
                rbx = nullptr;
                result = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::window::hc2466ca785044c59(r14_1);
                
                if (0 == *(result + 0xf5))
                    return result;
            }
            else
            {
                rbx = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::mouse_mode::h5645ae47cef353d4(r12_3) ^ 1;
                rbx <<= 3;
                result = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::window::hc2466ca785044c59(r14_1);
                
                if (rbx == *(result + 0xf5))
                    return result;
            }
            
            *(result + 0xf5) = rbx;
            /* tailcall */
            return winit::window::Window::set_cursor::h058b386c12dba32c(*(result + 0x20), 
                *(result + 0x28), rbx);
        }
    }
    else
    {
        label_85afb5:
        
        if (!arg2)
        {
            alacritty::input::Processor$LT$T$C$A$GT$::on_mouse_press::hb0b3ff8166bd0e60(arg1, arg3, 
                arg4);
            /* tailcall */
            return
                alacritty::input::Processor$LT$T$C$A$GT$::process_mouse_bindings::hcb4c2767c9cc745f(
                arg1, arg3, arg4);
        }
    }
    
    /* tailcall */
    return alacritty::input::Processor$LT$T$C$A$GT$::on_mouse_release::hac8a1c7846717501(arg1, 
        arg3);
}
