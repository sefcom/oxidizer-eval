
  uint64_t alacritty::input::keyboard::_$LT$impl$u20$alacritty..input..Processor$LT$T$C$A$GT$$GT$::process_key_bindings::h19a8c305713b2048(int64_t* arg1, int16_t* arg2)

{
    void* r15 = arg1[1];
    char rax = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::search_active::hab11a215551a244e(arg1[0xd]);
    char var_ed =
        alacritty::config::bindings::BindingMode::new::h37ed06d7071d7006(*(r15 + 0x6dc), rax);
    int32_t var_ec = *arg1[5];
    char var_ee = 2;
    char var_e0;
    winit::keyboard::Key::as_ref::ha61159f0166fa8fb(&var_e0, arg2);
    int128_t var_b8;
    int64_t var_a8;
    int64_t var_80;
    int16_t var_50;
    
    if (var_e0 != 0x20)
    {
        core::ptr::drop_in_place$LT$winit..keyboard..Key$LT$$RF$str$GT$$GT$::h2dc152dabd79984b(
            &var_e0);
        _$LT$winit..keyboard..Key$LT$Str$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha91dda63f770d88e(&var_50, arg2);
    }
    else
    {
        char* var_d8;
        uint64_t var_d0;
        alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::hb778be1bb3f3f772(&var_80, var_d8, var_d0);
        smol_str::Repr::new::hdb169bdb6c6b5e78(&var_b8, &var_80);
        int64_t var_38_1 = var_a8;
        int128_t var_48_1 = var_b8;
        var_50 = 1;
        core::ptr::drop_in_place$LT$winit..keyboard..Key$LT$$RF$str$GT$$GT$::h2dc152dabd79984b(
            &var_e0);
    }
    
    var_e0 = &var_50;
    int16_t* var_d8_1 = arg2;
    char* var_d0_1 = &var_ed;
    int32_t* var_c8 = &var_ec;
    char* var_c0 = &var_ee;
    void* r14_1 = arg1[8];
    int64_t r13 = *(r14_1 + 0x2f0);
    char const (** const var_e8_1)[0x20];
    int128_t var_70;
    int128_t var_60;
    int64_t rsi_5;
    int64_t r15_2;
    
    if (r13)
    {
        int64_t rbp_1 = 0;
        var_e8_1 = &data_c82c48;
        r15_2 = 0;
        
        do
        {
            void* r14_2 = arg1[8];
            rsi_5 = *(r14_2 + 0x2f0);
            
            if (r15_2 >= rsi_5)
                goto label_856c49;
            
            alacritty::input::keyboard::_$LT$impl$u20$alacritty..input..Processor$LT$T$C$A$GT$$GT$::process_key_bindings::_$u7b$$u7b$closure$u7d$$u7d$::h1896a1048bc44dc4(&var_80, &var_e0, *(r14_2 + 0x2e8) + rbp_1);
            
            if (var_80 == -0x7fffffffffffffcb)
                core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..config..bindings..Action$GT$$GT$::h1f9d15c7c9cc1a23(&var_80);
            else
            {
                int128_t var_98_1 = var_60;
                var_a8 = var_70;
                var_b8 = var_80;
                _$LT$alacritty..config..bindings..Action$u20$as$u20$alacritty..input..Execute$LT$T$GT$$GT$::execute::hbc4eac16f06c9ab7(&var_b8, arg1);
                core::ptr::drop_in_place$LT$alacritty..config..bindings..Action$GT$::hffcdaa1347139d5c(&var_b8);
            }
            
            r15_2 += 1;
            rbp_1 += 0x60;
        } while (r13 != r15_2);
        
        r14_1 = arg1[8];
    }
    
    int64_t r13_1 = *(r14_1 + 0x2d8);
    
    if (!r13_1)
    {
        label_856c18:
        uint32_t rbx_1 = var_ee;
        core::ptr::drop_in_place$LT$winit..keyboard..Key$GT$::h52f71c141f8140f2(&var_50);
        rbx_1 &= 1;
        return rbx_1;
    }
    
    r15_2 = 0;
    var_e8_1 = &data_c82c30;
    
    while (true)
    {
        void* r14_3 = arg1[8];
        rsi_5 = *(r14_3 + 0x2d8);
        
        if (r15_2 >= rsi_5)
            break;
        
        void* rsi_8 = *(*(r14_3 + 0x2d0) + (r15_2 << 3));
        
        if (*(rsi_8 + 0x40) != 5)
        {
            alacritty::input::keyboard::_$LT$impl$u20$alacritty..input..Processor$LT$T$C$A$GT$$GT$::process_key_bindings::_$u7b$$u7b$closure$u7d$$u7d$::h1896a1048bc44dc4(&var_80, &var_e0, 
                alacritty::config::ui_config::HintBinding::key_binding::h0eda263f8a34080b(rsi_8
                    + 0x40));
            
            if (var_80 == -0x7fffffffffffffcb)
                core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..config..bindings..Action$GT$$GT$::h1f9d15c7c9cc1a23(&var_80);
            else
            {
                int128_t var_98_2 = var_60;
                var_a8 = var_70;
                var_b8 = var_80;
                _$LT$alacritty..config..bindings..Action$u20$as$u20$alacritty..input..Execute$LT$T$GT$$GT$::execute::hbc4eac16f06c9ab7(&var_b8, arg1);
                core::ptr::drop_in_place$LT$alacritty..config..bindings..Action$GT$::hffcdaa1347139d5c(&var_b8);
            }
        }
        
        r15_2 += 1;
        
        if (r13_1 == r15_2)
            goto label_856c18;
    }
    
    label_856c49:
    core::panicking::panic_bounds_check::h025cadc56a971af7(r15_2, rsi_5);
    /* no return */
}
