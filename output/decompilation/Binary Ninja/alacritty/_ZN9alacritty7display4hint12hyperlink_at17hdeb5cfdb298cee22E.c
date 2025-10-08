
  void** alacritty::display::hint::hyperlink_at::hdeb5cfdb298cee22(void** arg1, void* arg2, int64_t arg3, int32_t arg4)

{
    int32_t rbx = arg4;
    int64_t r12 = arg3;
    void* rax = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg2 + 0x28, arg4);
    int64_t rsi_1 = *(rax + 0x10);
    
    if (r12 >= rsi_1)
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(r12, rsi_1);
        /* no return */
    }
    
    void* rax_2 = alacritty_terminal::term::cell::Cell::hyperlink::h5de1efd02cb51dbc(
        *(*(rax + 8) + r12 * 0x18));
    void** result;
    
    if (!rax_2)
    {
        result = arg1;
        result[5] = 2;
    }
    else
    {
        void* var_38_1 = rax_2;
        int32_t rax_4 = *(arg2 + 0xc0) - 1;
        int64_t rcx_2 = *(arg2 + 0xb8) - 1;
        void* var_68 = arg2 + 0x28;
        int64_t var_60_1 = r12;
        int32_t var_58_1 = rbx;
        int64_t var_50_1 = rcx_2;
        int32_t var_48_1 = rax_4;
        int32_t var_98_1 = rbx;
        int64_t var_88_1 = r12;
        void** var_80;
        int64_t var_78;
        int32_t var_70;
        
        while (true)
        {
            _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hccebf77f76d7c458(&var_80, &var_68);
            int64_t* rax_5 = var_80;
            
            if (!rax_5)
                break;
            
            void* rax_6 =
                alacritty_terminal::term::cell::Cell::hyperlink::h5de1efd02cb51dbc(*rax_5);
            
            if (!rax_6)
                break;
            
            if (!alacritty::display::hint::hyperlink_at::_$u7b$$u7b$closure$u7d$$u7d$::h03a543be530673e5(rax_2, rax_6))
                break;
            
            var_98_1 = var_70;
            var_88_1 = var_78;
        }
        
        var_68 = arg2 + 0x28;
        int64_t var_60_2 = r12;
        int32_t var_58_2 = rbx;
        int64_t var_50_2 = rcx_2;
        int32_t var_48_2 = rax_4;
        
        while (true)
        {
            _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$alacritty_terminal..grid..BidirectionalIterator$GT$::prev::h095ab9c52e150b73(&var_80, &var_68);
            void** rax_10 = var_80;
            
            if (!rax_10)
                break;
            
            void* rax_11 =
                alacritty_terminal::term::cell::Cell::hyperlink::h5de1efd02cb51dbc(*rax_10);
            
            if (!rax_11)
                break;
            
            if (!alacritty::display::hint::hyperlink_at::_$u7b$$u7b$closure$u7d$$u7d$::h03a543be530673e5(rax_2, rax_11))
                break;
            
            r12 = var_78;
            rbx = var_70;
        }
        
        result = arg1;
        *result = rax_2;
        result[1] = r12;
        result[2] = rbx;
        result[3] = var_88_1;
        result[4] = var_98_1;
        result[5] = 0;
    }
    
    return result;
}
