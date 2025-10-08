
  int64_t alacritty::input::Processor$LT$T$C$A$GT$::on_left_click::h80b65c175310b8cb(void* arg1, int64_t arg2, int32_t arg3)

{
    void* r12 = *(arg1 + 0x18);
    char rax = *(r12 + 0x37);
    uint32_t r15_1 = **(arg1 + 0x28) & 0x20;
    
    switch (*(r12 + 0x3b))
    {
        case 1:
        {
            void* r13_1 = *(arg1 + 8);
            *(r12 + 0x38) = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::selection_is_empty::h06e87f25781b0a34(r13_1) ^ 1;
            _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::clear_selection::h2f28545a903d1aa1(r13_1, *(arg1 + 0x78));
            _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::start_selection::h2cb86ce3a4356ab4(arg1, (r15_1 >> 5), arg2, arg3, rax);
            break;
        }
        case 2:
        {
            if (!r15_1)
            {
                *(r12 + 0x38) = 1;
                r15_1 = 2;
                _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::start_selection::h2cb86ce3a4356ab4(arg1, r15_1, arg2, arg3, rax);
            }
            break;
        }
        case 3:
        {
            if (!r15_1)
            {
                *(r12 + 0x38) = 1;
                r15_1 = 3;
                _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::start_selection::h2cb86ce3a4356ab4(arg1, r15_1, arg2, arg3, rax);
            }
            break;
        }
    }
    
    void* r12_1 = *(arg1 + 8);
    char result = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::terminal_mut::ha68c2ba7b3d97983(r12_1);
    
    if (*(r12_1 + 0x6de) & 1)
    {
        result = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::search_active::hab11a215551a244e(*(arg1 + 0x68));
        
        if (!result)
        {
            *(r12_1 + 0x290) = arg2;
            *(r12_1 + 0x298) = arg3;
            /* tailcall */
            return _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::mark_dirty::hcc81c19e5a883d56(*(arg1 + 0x78));
        }
    }
    
    return result;
}
