
  int64_t uu_dd::bufferedoutput::BufferedOutput::write_blocks::h5d07776a954ba78d(int64_t* arg1, int64_t* arg2, int64_t arg3, int64_t arg4)

{
    int64_t rsi = *(arg2[5] + 0x78);
    
    if (!rsi)
    {
        core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
        /* no return */
    }
    
    int64_t rax_2 = arg2[2] + arg4;
    uint64_t rdx_4;
    
    if (!((rax_2 | rsi) >> 0x20))
        rdx_4 = COMBINE(0, rax_2) % rsi;
    else
        rdx_4 = COMBINE(0, rax_2) % rsi;
    
    int64_t rax_5 = 0;
    
    if (arg4 >= rdx_4)
        rax_5 = arg4 - rdx_4;
    
    int64_t var_78;
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::h7e728461df3b0667(&var_78, 
        arg3, arg4, rax_5);
    int64_t rsi_4 = var_78;
    int64_t var_70;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1c2f192315d36a70(arg2, rsi_4, var_70 + rsi_4);
    arg2[2];
    int32_t var_58;
    uu_dd::Output::write_blocks::hd1d1fad151688f0b(&var_58, &arg2[3], arg2[1]);
    int64_t result;
    
    if (var_58 != 1)
    {
        int128_t var_38;
        *(arg1 + 0x20) = var_38;
        int128_t var_48;
        *(arg1 + 0x10) = var_48;
        arg2[2] = 0;
        int64_t var_68;
        int64_t var_60;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1c2f192315d36a70(arg2, var_68, var_60 + var_68);
        result = 0;
    }
    else
    {
        int64_t var_50;
        arg1[1] = var_50;
        result = 1;
    }
    
    *arg1 = result;
    return result;
}
