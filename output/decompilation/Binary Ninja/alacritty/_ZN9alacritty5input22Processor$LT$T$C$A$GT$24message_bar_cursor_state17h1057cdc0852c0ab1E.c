
  uint64_t alacritty::input::Processor$LT$T$C$A$GT$::message_bar_cursor_state::h1057cdc0852c0ab1(void* arg1)

{
    uint64_t rbp = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::search_active::hab11a215551a244e(*(arg1 + 0x68));
    void* rsi = *(arg1 + 0x30);
    int64_t var_80;
    _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::size_info::h75f6d6cd23dc8329(&var_80, rsi);
    float var_5c;
    int64_t rcx = var_5c;
    int64_t r14_3 = (rcx >> 0x3f & (var_5c - 9.22337204e+18f)) | rcx;
    
    if (var_5c < 0f)
        r14_3 = 0;
    
    if (var_5c > 1.8446743e+19f)
        r14_3 = -1;
    
    float var_64;
    int64_t rsi_1 = var_64;
    int64_t r13_3 = (rsi_1 >> 0x3f & (var_64 - 9.22337204e+18f)) | rsi_1;
    
    if (var_64 < 0f)
        r13_3 = 0;
    
    if (var_64 > 1.8446743e+19f)
        r13_3 = -1;
    
    int64_t rbp_1 = rbp + var_80;
    void* r15 = *(arg1 + 0x18);
    int32_t r12_1 = *(*(arg1 + 8) + 0xc8);
    void var_58;
    _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::size_info::h75f6d6cd23dc8329(&var_58, rsi);
    int64_t rax_2 = alacritty::event::Mouse::point::h7553a37268becc3a(*(r15 + 0x20), *(r15 + 0x28), 
        &var_58, r12_1);
    uint64_t result;
    result = 0x24;
    
    if (_$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::message::h48f4201a3b3c594d(*(arg1 + 0x38)))
    {
        int64_t rbp_3 = rbp_1 * r13_3 + r14_3;
        int64_t rcx_3 = *(r15 + 0x28);
        
        if (rcx_3 > rbp_3)
        {
            if (rcx_3 > rbp_3 + r13_3)
                return 0;
            
            int64_t var_78;
            int64_t rax_3;
            rax_3 = rax_2 + 3 >= var_78;
            return rax_3 * 3;
        }
    }
    
    return result;
}
