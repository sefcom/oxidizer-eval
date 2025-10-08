
  int64_t alacritty_terminal::selection::Selection::range_semantic::h4a75215fc3ee45a7(int64_t* arg1, void* arg2, int64_t arg3, int32_t arg4, int64_t arg5, int32_t arg6)

{
    int32_t rbp = arg4;
    bool rax = arg4 != arg6;
    arg4 = arg3 != arg5;
    arg4 |= rax;
    char var_48;
    
    if (!arg4)
        alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::bracket_search::h6feec58954ead82f(&var_48, arg2, arg3, rbp);
    
    int64_t result;
    int32_t rdx_2;
    
    if (arg4 || !(var_48 & 1))
    {
        int64_t rax_1;
        int32_t rdx_4;
        rax_1 = alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::semantic_search_left::h4cec90c032934a57(arg2, arg3, rbp);
        result = alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::semantic_search_right::h18d14e89e94ed13a(arg2, arg5, arg6);
        *arg1 = rax_1;
        arg1[1] = rdx_4;
        arg1[2] = result;
    }
    else
    {
        int64_t result_1;
        result = result_1;
        int32_t var_38;
        int32_t rcx_1 = var_38;
        int64_t result_2;
        
        if (rcx_1 < rbp || result < arg3 & rcx_1 == rbp)
        {
            rdx_2 = rbp;
            result_2 = arg3;
        }
        else
        {
            rdx_2 = rcx_1;
            result_2 = result;
            result = arg3;
            rcx_1 = rbp;
        }
        
        *arg1 = result;
        arg1[1] = rcx_1;
        arg1[2] = result_2;
    }
    
    arg1[3] = rdx_2;
    arg1[4] = 0;
    return result;
}
