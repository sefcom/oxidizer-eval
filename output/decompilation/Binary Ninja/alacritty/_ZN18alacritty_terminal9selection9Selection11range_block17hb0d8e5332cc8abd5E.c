
  int64_t* alacritty_terminal::selection::Selection::range_block::hb0d8e5332cc8abd5(int64_t* arg1, int128_t* arg2, int64_t* arg3, int64_t* arg4)

{
    char rax;
    int64_t rcx;
    rax = alacritty_terminal::selection::Selection::is_empty::h0b26168e8eea422c(arg2);
    rcx = 2;
    
    if (!rax)
    {
        int64_t rdx = *arg3;
        int64_t rsi = *arg4;
        int64_t rax_2;
        uint32_t rdi_1;
        
        if (rdx <= rsi)
        {
            rax_2 = rdx;
            rcx = rsi;
            
            if (arg4[2])
                goto label_9bd98a;
        }
        else
        {
            rdi_1 = arg3[2];
            arg3[2] = arg4[2];
            arg4[2] = rdi_1;
            *arg3 = rsi;
            *arg4 = rdx;
            rax_2 = rsi;
            rcx = rdx;
            
            if (rdi_1)
                goto label_9bd98a;
        }
        
        if (arg3[1] == arg4[1])
        {
            rdx = rdx != rsi;
            rsi = rcx;
            
            if (rdx & rsi)
                goto label_9bd984;
            
            goto label_9bd98a;
        }
        
        int32_t rdx_1;
        int32_t rsi_1;
        
        if (!rcx)
        {
            rcx = 0;
            rdx_1 = arg3[1];
            rsi_1 = arg4[1];
            
            if (arg3[2])
                goto label_9bd99b;
        }
        else
        {
            label_9bd984:
            rcx -= 1;
            *arg4 = rcx;
            label_9bd98a:
            rdx_1 = arg3[1];
            rsi_1 = arg4[1];
            
            if (arg3[2])
            {
                label_9bd99b:
                rdi_1 = rdx_1 == rsi_1;
                
                if (!(rdi_1 & rax_2 == rcx))
                {
                    rax_2 += 1;
                    *arg3 = rax_2;
                }
                else
                    rsi_1 = rdx_1;
            }
        }
        
        *arg1 = rax_2;
        arg1[1] = rdx_1;
        arg1[2] = rcx;
        arg1[3] = rsi_1;
        rcx = 1;
    }
    
    arg1[4] = rcx;
    return arg1;
}
