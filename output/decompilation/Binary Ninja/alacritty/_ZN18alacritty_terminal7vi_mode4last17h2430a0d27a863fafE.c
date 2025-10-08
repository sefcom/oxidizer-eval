
  int64_t alacritty_terminal::vi_mode::last::h2430a0d27a863faf(void* arg1, int64_t arg2, int32_t arg3)

{
    int64_t rax;
    int32_t rdx;
    rax = alacritty_terminal::term::Term$LT$T$GT$::expand_wide::h832c6afc1f08b7ff(arg1, arg2, arg3, 
        1);
    int32_t rbx = rdx;
    char var_30;
    alacritty_terminal::vi_mode::last_occupied_in_line::h9d6671481df7c379(&var_30, arg1, rdx);
    int64_t var_28;
    
    if (var_30 & 1 && rax < var_28)
        return var_28;
    
    if (!alacritty_terminal::vi_mode::is_wrap::h0d49787c150cddfa(arg1, rax, rbx))
        return *(arg1 + 0xb8) - 1;
    
    uint8_t i;
    
    do
    {
        i = alacritty_terminal::vi_mode::is_wrap::h0d49787c150cddfa(arg1, rax, rbx);
        rbx += 1;
    } while (i);
    alacritty_terminal::vi_mode::last_occupied_in_line::h9d6671481df7c379(&var_30, arg1, rbx - 1);
    
    if (!var_30)
        return rax;
    
    return var_28;
}
