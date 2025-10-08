
  int32_t* alacritty_terminal::grid::Grid$LT$T$GT$::reset_region::h357539938d7ad127(void* arg1, int32_t arg2)

{
    int32_t var_2c = arg2;
    int32_t* result = _$LT$core..ops..range..RangeTo$LT$T$GT$$u20$as$u20$core..ops..range..RangeBounds$LT$T$GT$$GT$::end_bound::h14c9d6fe65901d1b(&var_2c);
    int32_t r15 = *result;
    
    if (r15 > 0)
    {
        int32_t rbp_1 = *(arg1 + 0x4c);
        int32_t rsi = 0;
        int32_t r12_1;
        
        do
        {
            r12_1 = rsi + 1;
            result = alacritty_terminal::grid::row::Row$LT$T$GT$::reset::h7a49f1c8f619314f(
                _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1, rsi), 
                rbp_1);
            rsi = r12_1;
        } while (r15 != r12_1);
    }
    
    return result;
}
