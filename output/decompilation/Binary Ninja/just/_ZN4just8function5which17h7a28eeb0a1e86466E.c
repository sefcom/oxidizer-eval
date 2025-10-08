
  int64_t* just::function::which::h7a28eeb0a1e86466(int64_t* arg1, int64_t* arg2, int64_t arg3, uint64_t arg4)

{
    char var_28;
    just::which::which::hd176e22496e4e776(&var_28, *arg2, arg3, arg4);
    int64_t var_20;
    int64_t rax = var_20;
    int64_t var_18;
    int64_t rcx = var_18;
    int64_t var_10;
    int64_t rdx = var_10;
    int64_t rsi_1 = 1;
    
    if (!(var_28 & 1))
    {
        rsi_1 = 0;
        bool o_1 = -(rax) == -0x8000000000000000;
        
        if (o_1)
            rax = 0;
        
        if (o_1)
            rcx = 1;
        
        if (o_1)
            rdx = 0;
    }
    
    arg1[1] = rax;
    arg1[2] = rcx;
    arg1[3] = rdx;
    *arg1 = rsi_1;
    return arg1;
}
