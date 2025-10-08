
  int64_t alacritty::input::Processor$LT$T$C$A$GT$::process_mouse_bindings::hcb4c2767c9cc745f(int64_t* arg1, int16_t arg2, int16_t arg3)

{
    void* r14 = arg1[1];
    char rax = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::search_active::hab11a215551a244e(arg1[0xd]);
    bool rax_1 =
        alacritty::config::bindings::BindingMode::new::h37ed06d7071d7006(*(r14 + 0x6dc), rax);
    char rax_2 = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::mouse_mode::h5645ae47cef353d4(r14);
    int32_t rax_3 = *arg1[5];
    void* r14_2 = arg1[8];
    void var_48;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hca503cae22e9811d(&var_48, *(r14_2 + 0x1c0), *(r14_2 + 0x1c8));
    int64_t var_38;
    
    if (var_38)
    {
        uint8_t rax_6 = (rax_3 & 4) >> 2;
        
        if ((rax_2 ^ 1) | rax_6)
        {
            int64_t* var_40;
            int64_t* r14_3 = var_40;
            int64_t i_2 = var_38 << 6;
            char rbp_1 = 0;
            int64_t* r12_1 = r14_3;
            int64_t i;
            
            do
            {
                if (alacritty::config::bindings::Binding$LT$T$GT$::is_triggered_by::h66634300bdaa8c9a(r12_1, rax_1, rax_3, arg2, arg3))
                {
                    rbp_1 = 1;
                    _$LT$alacritty..config..bindings..Action$u20$as$u20$alacritty..input..Execute$LT$T$GT$$GT$::execute::hbc4eac16f06c9ab7(r12_1, arg1);
                }
                
                r12_1 = &r12_1[8];
                i = i_2;
                i_2 -= 0x40;
            } while (i != 0x40);
            
            if (!((~(rax_2 & rax_6) | rbp_1) & 1) && var_38)
            {
                int64_t i_3 = var_38 << 6;
                int64_t i_1;
                
                do
                {
                    if (alacritty::config::bindings::Binding$LT$T$GT$::is_triggered_by::h66634300bdaa8c9a(r14_3, rax_1, rax_3 & 0x920, arg2, arg3))
                        _$LT$alacritty..config..bindings..Action$u20$as$u20$alacritty..input..Execute$LT$T$GT$$GT$::execute::hbc4eac16f06c9ab7(r14_3, arg1);
                    
                    r14_3 = &r14_3[8];
                    i_1 = i_3;
                    i_3 -= 0x40;
                } while (i_1 != 0x40);
            }
        }
    }
    
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alacritty..config..bindings..Binding$LT$winit..event..MouseButton$GT$$GT$$GT$::hbbeb5ea571877f44(&var_48);
}
