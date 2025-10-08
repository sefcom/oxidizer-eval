
  void alacritty_terminal::grid::row::Row$LT$T$GT$::shrink::hd1c482736534eb30(int128_t* arg1, void* arg2, int64_t arg3)

{
    if (*(arg2 + 0x10) <= arg3)
    {
        *arg1 = -0x8000000000000000;
        return;
    }
    
    int128_t var_50;
    alloc::vec::Vec$LT$T$C$A$GT$::split_off::h4284604988914e8f(&var_50, arg2, arg3);
    int64_t var_40;
    int64_t r12_1 = var_40;
    int64_t var_48;
    int64_t var_38 = var_48;
    int64_t var_30_1 = r12_1 * 0x18 + var_48;
    char rax_4;
    int64_t rdx;
    rax_4 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::rposition::he9dbe64162a19a23(&var_38);
    int64_t rax_5 = core::option::Option$LT$T$GT$::map_or::h056726a80e331dcc(rax_4, rdx);
    int64_t rsi_2 = r12_1 - rax_5;
    
    if (r12_1 >= rax_5)
    {
        var_40 = rax_5;
        r12_1 = rax_5;
        core::ptr::drop_in_place$LT$$u5b$alacritty_terminal..term..cell..Cell$u5d$$GT$::hee3a2d0d3617f058(rax_5 * 0x18 + var_48, rsi_2);
    }
    
    *(arg2 + 0x18) = core::cmp::Ord::min::h7c13e9bfb8ea3862(*(arg2 + 0x18), arg3);
    
    if (!r12_1)
    {
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alacritty_terminal..term..cell..Cell$GT$$GT$::h3a26ff64830026d7(&var_50);
    }
    else
    {
        arg1[1] = var_40;
        *arg1 = var_50;
    }
}
