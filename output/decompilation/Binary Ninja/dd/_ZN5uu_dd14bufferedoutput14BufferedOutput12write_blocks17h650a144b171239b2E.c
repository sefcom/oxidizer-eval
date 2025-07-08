
  int64_t* uu_dd::bufferedoutput::BufferedOutput::write_blocks::h650a144b171239b2(int64_t* arg1, int64_t* arg2, int64_t arg3, int64_t arg4)

{
    int64_t rsi = *(arg2[5] + 0x78);
    
    if (!rsi)
    {
        core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd();
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
    
    int64_t var_98;
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::h4762251c5e3d149b(&var_98, 
        arg3, arg4, rax_5);
    int64_t rdi_1 = var_98;
    int64_t var_90;
    int64_t rax_6;
    uint64_t rdx_6;
    rax_6 = core::slice::iter::Iter$LT$T$GT$::make_slice::hfbdbc0a6d6290581(rdi_1, var_90 + rdi_1);
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h65897d0b259dad50(arg2, rax_6, rdx_6);
    arg2[2];
    int64_t var_58;
    uu_dd::Output::write_blocks::h78b56ae9a3f355f3(&var_58, &arg2[3], arg2[1]);
    int64_t rax_8;
    
    if (!var_58)
    {
        arg2[2] = 0;
        int64_t var_88;
        int64_t var_80;
        int64_t rax_9;
        uint64_t rdx_8;
        rax_9 = core::slice::iter::Iter$LT$T$GT$::make_slice::hfbdbc0a6d6290581(var_88, 
            var_80 + var_88);
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h65897d0b259dad50(arg2, rax_9, rdx_8);
        int128_t var_38;
        *(arg1 + 0x20) = var_38;
        int128_t var_48;
        *(arg1 + 0x10) = var_48;
        rax_8 = 0;
    }
    else
    {
        int64_t var_50;
        arg1[1] = var_50;
        rax_8 = 1;
    }
    
    *arg1 = rax_8;
    return arg1;
}
