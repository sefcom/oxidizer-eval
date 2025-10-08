
  int64_t alacritty_terminal::grid::resize::_$LT$impl$u20$alacritty_terminal..grid..Grid$LT$T$GT$$GT$::shrink_lines::h17439bedf3b4c61e(int64_t* arg1, int64_t arg2)

{
    int64_t rcx_1 = arg1[7] + 1;
    int32_t rbp;
    
    if (rcx_1 <= arg2)
        rbp = arg2 - 1;
    else
    {
        alacritty_terminal::grid::Grid$LT$T$GT$::scroll_up::hf31756b0f8886f88(arg1, 0, arg1[0x13], 
            rcx_1 - arg2);
        rbp = arg2 - 1;
        arg1[7] = core::cmp::Ord::min::h08e004ced85b11eb(arg1[7], rbp);
    }
    
    arg1[0xd] = core::cmp::Ord::min::h08e004ced85b11eb(arg1[0xd], rbp);
    int64_t rcx_3 = arg1[2];
    
    if (!rcx_3)
    {
        core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
        /* no return */
    }
    
    int64_t rax_6 = arg1[0x13] - arg2 + rcx_3 + arg1[3];
    uint64_t rdx_6;
    
    if (!((rax_6 | rcx_3) >> 0x20))
        rdx_6 = COMBINE(0, rax_6) % rcx_3;
    else
        rdx_6 = COMBINE(0, rax_6) % rcx_3;
    
    arg1[3] = rdx_6;
    int64_t rax_10 = arg2 - arg1[4];
    int64_t rdx_7 = arg1[5];
    arg1[5] = rax_10 + rdx_7;
    int64_t result = rax_10 + rdx_7 + 0x3e8;
    
    if (rcx_3 > result)
        result =
            alacritty_terminal::grid::storage::Storage$LT$T$GT$::truncate::h2d132ed67c9d1788(arg1);
    
    arg1[4] = arg2;
    arg1[0x13] = arg2;
    return result;
}
