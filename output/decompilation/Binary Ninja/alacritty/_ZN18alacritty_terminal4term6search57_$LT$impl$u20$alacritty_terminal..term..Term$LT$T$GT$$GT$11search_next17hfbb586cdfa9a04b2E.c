
  int64_t alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::search_next::hfbb586cdfa9a04b2(int128_t* arg1, void* arg2, int64_t arg3, int64_t arg4, int32_t arg5, int32_t arg6, char arg7, char arg8, int64_t arg9)

{
    int64_t rax;
    int64_t var_38 = rax;
    int64_t rax_1;
    int32_t rdx_1;
    rax_1 = alacritty_terminal::term::Term$LT$T$GT$::expand_wide::h832c6afc1f08b7ff(arg2, arg4, 
        arg5, arg6);
    char rax_2;
    int32_t rdx_3;
    rax_2 = core::option::Option$LT$T$GT$::filter::h5e6e15b0378eaa93(arg8, arg9, *(arg2 + 0x50));
    
    if (!arg6)
        return alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::next_match_left::h616e5d17b4241fb0(arg1, arg2, arg3, rax_1, rdx_1, arg7, rax_2, rdx_3);
    
    return alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::next_match_right::h82c3562c445bfed2(arg1, arg2, arg3, rax_1, rdx_1, arg7, rax_2, rdx_3);
}
