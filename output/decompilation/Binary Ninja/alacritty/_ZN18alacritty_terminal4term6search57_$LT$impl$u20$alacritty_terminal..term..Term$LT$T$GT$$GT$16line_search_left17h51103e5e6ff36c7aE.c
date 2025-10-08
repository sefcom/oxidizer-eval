
  uint64_t alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::line_search_left::h51103e5e6ff36c7a(void* arg1, int32_t arg2)

{
    int64_t rax;
    int64_t var_38 = rax;
    int32_t rbp = arg2;
    int64_t rax_1 = *(arg1 + 0x50);
    int32_t r13 = 0;
    
    if (rax_1 >= *(arg1 + 0xc0))
        r13 = rax_1 - *(arg1 + 0xc0);
    
    int64_t r14_1 = *(arg1 + 0xb8) - 1;
    int64_t rsi_1;
    
    while (true)
    {
        int32_t r12_1 = rbp;
        
        if (rbp > -(r13))
        {
            rbp = r12_1 - 1;
            void* rax_3 = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1 + 0x28, rbp);
            rsi_1 = *(rax_3 + 0x10);
            
            if (r14_1 >= rsi_1)
                break;
            
            if (*(*(rax_3 + 8) + r14_1 * 0x18 + 0x14) & 0x10)
                continue;
        }
        
        return r12_1;
    }
    
    core::panicking::panic_bounds_check::h025cadc56a971af7(r14_1, rsi_1);
    /* no return */
}
