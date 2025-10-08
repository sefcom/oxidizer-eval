
  int64_t alacritty::display::hint::visible_regex_match_iter::h3b713c9c9910fb82(int64_t* arg1, void* arg2, int64_t arg3)

{
    int32_t rax = *(arg2 + 0xc0);
    int32_t rbp = *(arg2 + 0xc8);
    int32_t r12_1 = -(rbp);
    int32_t r15_1 = ~rbp;
    int32_t result = rax + r15_1;
    int32_t rax_1 = alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::line_search_left::h51103e5e6ff36c7a(arg2, r12_1);
    int64_t rax_2;
    int32_t rdx;
    rax_2 = alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::line_search_right::h7ee6c3b77284b281(arg2, result);
    int32_t rax_3 = core::cmp::Ord::max::h3396bb7148673668(rax_1, 0xffffff9c - rbp);
    int32_t rax_5 = core::cmp::Ord::min::h08e004ced85b11eb(rdx, rax + r15_1 + 0x64);
    *arg1 = 0;
    arg1[1] = rax_3;
    arg1[2] = rax_2;
    arg1[3] = rax_5;
    arg1[4] = arg3;
    arg1[5] = arg2;
    arg1[6] = 1;
    arg1[7] = r12_1;
    *(arg1 + 0x3c) = 0;
    *(arg1 + 0x44) = 0;
    arg1[8] = result;
    return result;
}
