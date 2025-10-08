
  int64_t* alacritty_terminal::grid::Grid$LT$T$GT$::clear_viewport::hc98fe91fe9268e98(int64_t* arg1)

{
    int32_t rax_1 = arg1[0x13] - 1;
    int64_t rcx = arg1[0x12];
    int64_t* var_50 = arg1;
    int64_t var_48 = rcx;
    int64_t var_38 = rcx - 1;
    int32_t var_30 = rax_1;
    int64_t* i_2;
    _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$alacritty_terminal..grid..BidirectionalIterator$GT$::prev::h095ab9c52e150b73(&i_2, &var_50);
    
    for (int64_t* i = i_2; i; i = i_2)
    {
        if (!_$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$alacritty_terminal..grid..GridCell$GT$::is_empty::h97d2bea97497be2b(i))
            break;
        
        int32_t var_58;
        
        if (var_58 < 0)
            break;
        
        _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$alacritty_terminal..grid..BidirectionalIterator$GT$::prev::h095ab9c52e150b73(&i_2, &var_50);
    }
    
    int64_t r14 = rax_1 + 1;
    int64_t* result = alacritty_terminal::grid::Grid$LT$T$GT$::scroll_up::hf31756b0f8886f88(arg1, 
        0, arg1[0x13], r14);
    int64_t r15 = arg1[0x13];
    
    if (r15 != r14)
    {
        int64_t i_3 = 0;
        int64_t i_1;
        
        do
        {
            i_1 = i_3 + 1;
            result = alacritty_terminal::grid::row::Row$LT$T$GT$::reset::h7a49f1c8f619314f(
                _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1, i_3), 
                *(arg1 + 0x4c));
            i_3 = i_1;
        } while (r15 - r14 != i_1);
    }
    
    return result;
}
