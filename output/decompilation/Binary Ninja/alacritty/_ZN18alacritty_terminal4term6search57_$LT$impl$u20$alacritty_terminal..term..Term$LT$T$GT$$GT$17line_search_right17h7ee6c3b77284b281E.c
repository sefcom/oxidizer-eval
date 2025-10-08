
  int64_t alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::line_search_right::h7ee6c3b77284b281(void* arg1, int32_t arg2)

{
    int64_t rax;
    int64_t var_38 = rax;
    int32_t rbp = arg2;
    int32_t r13 = *(arg1 + 0xc0);
    int64_t result = *(arg1 + 0xb8) - 1;
    int64_t rsi_1;
    
    while (true)
    {
        int32_t r12_1 = rbp;
        rbp = r12_1 + 1;
        
        if (rbp < r13)
        {
            void* rax_1 = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1 + 0x28, r12_1);
            rsi_1 = *(rax_1 + 0x10);
            
            if (result >= rsi_1)
                break;
            
            if (*(*(rax_1 + 8) + result * 0x18 + 0x14) & 0x10)
                continue;
        }
        
        return result;
    }
    
    core::panicking::panic_bounds_check::h025cadc56a971af7(result, rsi_1);
    /* no return */
}
