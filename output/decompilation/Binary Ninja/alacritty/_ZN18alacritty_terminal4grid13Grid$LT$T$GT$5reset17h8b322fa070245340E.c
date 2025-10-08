
  int64_t alacritty_terminal::grid::Grid$LT$T$GT$::reset::h8b322fa070245340(void* arg1)

{
    int64_t rax = *(arg1 + 0x28);
    int64_t rcx = *(arg1 + 0x98);
    
    if (rax < rcx)
        rcx = rax;
    
    int64_t rax_1 = *(arg1 + 0x10);
    *(arg1 + 0x28) = rcx;
    
    if (rax_1 > rcx + 0x3e8)
        alacritty_terminal::grid::storage::Storage$LT$T$GT$::truncate::h2d132ed67c9d1788(arg1);
    
    *(arg1 + 0xa0) = 0;
    int128_t var_50;
    _$LT$alacritty_terminal..grid..Cursor$LT$T$GT$$u20$as$u20$core..default..Default$GT$::default::hc6ed34f88d23cf01(&var_50);
    core::ptr::drop_in_place$LT$alacritty_terminal..grid..Cursor$LT$alacritty_terminal..term..cell..Cell$GT$$GT$::hdbfd31c2680bb7f5(arg1 + 0x60);
    int128_t zmm0 = var_50;
    int128_t var_30;
    *(arg1 + 0x80) = var_30;
    int128_t var_40;
    *(arg1 + 0x70) = var_40;
    *(arg1 + 0x60) = zmm0;
    _$LT$alacritty_terminal..grid..Cursor$LT$T$GT$$u20$as$u20$core..default..Default$GT$::default::hc6ed34f88d23cf01(&var_50);
    core::ptr::drop_in_place$LT$alacritty_terminal..grid..Cursor$LT$alacritty_terminal..term..cell..Cell$GT$$GT$::hdbfd31c2680bb7f5(arg1 + 0x30);
    int128_t zmm0_1 = var_50;
    *(arg1 + 0x50) = var_30;
    *(arg1 + 0x40) = var_40;
    *(arg1 + 0x30) = zmm0_1;
    *(arg1 + 0xa0) = 0;
    int64_t rax_2 = *(arg1 + 0x28);
    int64_t r15 = *(arg1 + 0x98);
    int32_t result_1 = 0;
    int32_t result = rax_2 - r15;
    
    if (rax_2 >= r15)
        result_1 = result;
    
    int32_t i_1 = -(result_1);
    
    if (i_1 < r15)
    {
        int32_t i;
        
        do
        {
            i = i_1 + 1;
            result = alacritty_terminal::grid::row::Row$LT$T$GT$::reset::h7a49f1c8f619314f(
                _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1, i_1), 
                *(arg1 + 0x4c));
            i_1 = i;
        } while (i < r15);
    }
    
    return result;
}
