
  int64_t* uu_wc::WcError::zero_len::ha16d8c94c3e1381e(int64_t* arg1, int64_t* arg2, int64_t arg3)

{
    int64_t rcx = -0x8000000000000000;
    
    if (!arg2)
    {
        *arg1 = -0x7ffffffffffffffd;
        return arg1;
    }
    
    char const* const rsi;
    int64_t rdi;
    
    if (*arg2 != -0x7fffffffffffffff)
    {
        int64_t var_28;
        uu_wc::escape_name_wrapper::haaae7e5c159f0dd0(&var_28, arg2[1], arg2[2]);
        rcx = var_28;
        char* var_20;
        rsi = var_20;
        int64_t var_18;
        rdi = var_18;
    }
    else
    {
        rsi = &data_41a0ed[0x51];
        rdi = 1;
    }
    
    *arg1 = rcx;
    arg1[1] = rsi;
    arg1[2] = rdi;
    arg1[3] = arg3;
    return arg1;
}
