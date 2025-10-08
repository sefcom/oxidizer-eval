
  int64_t rg::flags::parse::ParseResult$LT$T$GT$::and_then::h6bcb279c98caa42f(int64_t* arg1, int64_t* arg2)

{
    int64_t rcx = *arg2 - 2;
    int64_t rax = 1;
    
    if (rcx < 3)
        rax = rcx;
    
    if (!rax)
    {
        char rax_2 = arg2[1];
        arg1[1] = rax_2;
        *arg1 = 2;
        return rax_2;
    }
    
    if (rax == 1)
    {
        void var_270;
        memcpy(&var_270, arg2, 0x260);
        return rg::flags::parse::parse::_$u7b$$u7b$closure$u7d$$u7d$::h078e73d04d1b17d8(arg1, 
            &var_270);
    }
    
    int64_t rax_3 = arg2[1];
    arg1[1] = rax_3;
    *arg1 = 4;
    return rax_3;
}
