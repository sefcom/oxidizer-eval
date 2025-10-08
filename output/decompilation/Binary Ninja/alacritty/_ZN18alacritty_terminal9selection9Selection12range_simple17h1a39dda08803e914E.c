
  int64_t* alacritty_terminal::selection::Selection::range_simple::h1a39dda08803e914(int64_t* arg1, int128_t* arg2, int64_t* arg3, int64_t* arg4, int64_t arg5)

{
    int64_t rax;
    int64_t var_28 = rax;
    char rcx = 2;
    
    if (!alacritty_terminal::selection::Selection::is_empty::h0b26168e8eea422c(arg2))
    {
        if (!arg4[2])
        {
            int32_t rax_2 = arg4[1];
            int64_t rcx_1;
            
            if (arg3[1] != rax_2)
            {
                rcx_1 = *arg4;
                
                if (rcx_1)
                    *arg4 = rcx_1 - 1;
                else
                {
                    *arg4 = arg5 - 1;
                    arg4[1] = rax_2 - 1;
                }
            }
            else
            {
                rcx_1 = *arg4;
                
                if (*arg3 != rcx_1)
                {
                    if (!rcx_1)
                    {
                        *arg4 = arg5 - 1;
                        arg4[1] = rax_2 - 1;
                    }
                    else
                        *arg4 = rcx_1 - 1;
                }
            }
        }
        
        int64_t rdx = *arg3;
        int32_t rax_4 = arg3[1];
        int32_t rcx_4 = arg4[1];
        
        if (arg3[2])
        {
            if (rax_4 != rcx_4 || rdx != *arg4)
            {
                rdx += 1;
                *arg3 = rdx;
                
                if (rdx == arg5)
                {
                    *arg3 = 0;
                    rax_4 += 1;
                    arg3[1] = rax_4;
                    rdx = 0;
                }
            }
            else
                rcx_4 = rax_4;
        }
        
        int64_t rsi = *arg4;
        *arg1 = rdx;
        arg1[1] = rax_4;
        arg1[2] = rsi;
        arg1[3] = rcx_4;
        rcx = 0;
    }
    
    arg1[4] = rcx;
    return arg1;
}
