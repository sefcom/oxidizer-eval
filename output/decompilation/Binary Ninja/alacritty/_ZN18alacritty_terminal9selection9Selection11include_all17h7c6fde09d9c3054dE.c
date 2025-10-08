
  bool alacritty_terminal::selection::Selection::include_all::h7c6fde09d9c3054d(int64_t* arg1)

{
    int64_t rdi = *arg1;
    int32_t rsi = arg1[1];
    int64_t rdx = arg1[3];
    int32_t rcx = arg1[4];
    
    if (arg1[6] != 1)
    {
        bool rax_1 = _$LT$alacritty_terminal..index..Point$LT$L$C$C$GT$$u20$as$u20$core..cmp..Ord$GT$::cmp::h96fd75b64b1be1c4(rdi, rsi, rdx, rcx);
        bool cond:0 = rax_1 <= 0;
        rax_1 = rax_1 > 0;
        arg1[2] = rax_1;
        arg1[5] = cond:0;
        return rax_1;
    }
    
    bool cond:1 = rdi == rdx;
    
    if (rdi <= rdx)
    {
        rcx = rsi > rcx;
        
        if (!(cond:1 & rcx))
        {
            arg1[2] = 0;
            arg1[5] = 1;
            return cond:1;
        }
    }
    
    arg1[2] = 1;
    arg1[5] = 0;
    return true;
}
