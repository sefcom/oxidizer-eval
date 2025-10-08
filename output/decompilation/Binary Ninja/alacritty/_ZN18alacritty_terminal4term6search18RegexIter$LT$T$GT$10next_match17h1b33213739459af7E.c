
  int64_t alacritty_terminal::term::search::RegexIter$LT$T$GT$::next_match::h1b33213739459af7(int64_t* arg1, int64_t* arg2)

{
    int64_t result_1;
    int64_t result = result_1;
    void* rsi = arg2[5];
    int64_t rdx = arg2[4];
    int64_t rcx = *arg2;
    int32_t r8 = arg2[1];
    int32_t r9 = arg2[2];
    int32_t r10 = arg2[3];
    
    if (arg2[6] == 1)
    {
        result = r10;
        alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::regex_search_right::hdca176f2ea14268c(arg1, rsi, rdx, rcx, r8, r9);
        return result;
    }
    
    result = r10;
    alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::regex_search_left::h18fa67e9b20e95d7(arg1, rsi, rdx, rcx, r8, r9);
    return result;
}
