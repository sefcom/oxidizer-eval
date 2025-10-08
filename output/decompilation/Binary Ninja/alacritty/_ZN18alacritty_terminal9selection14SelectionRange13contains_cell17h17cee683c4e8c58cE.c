
  int64_t alacritty_terminal::selection::SelectionRange::contains_cell::h17cee683c4e8c58c(int64_t* arg1, int64_t* arg2, int64_t arg3, int32_t arg4, bool arg5)

{
    int64_t rax;
    int64_t var_28 = rax;
    int64_t* r14 = arg2;
    int64_t* rbx = arg1;
    rax = !arg5;
    int32_t rbp = arg2[2];
    arg2 = arg4 == rbp;
    arg2 &= rax;
    
    if (arg2 != 1)
        goto label_9bd66d;
    
    char result;
    
    if (arg3 != r14[1])
    {
        label_9bd66b:
        rbp = arg4;
        label_9bd66d:
        int64_t r15_1 = r14[1];
        result = 1;
        
        if (!alacritty_terminal::selection::SelectionRange::contains::h3bc08e8a28ad661f(rbx, r15_1, 
            rbp))
        {
            if (*(*r14 + 0x14) & 0x20)
                /* tailcall */
                return alacritty_terminal::selection::SelectionRange::contains::h3bc08e8a28ad661f(
                    rbx, r15_1 + 1, rbp);
            
            return 0;
        }
    }
    else
    {
        int32_t rax_1 = rbx[1];
        arg1 = rax_1 == arg4;
        int64_t rsi = *rbx;
        
        if (arg1 & rsi == arg3)
            return 0;
        
        int32_t rdi = rbx[3];
        int64_t r8 = rbx[2];
        
        if (rdi == arg4 & r8 == arg3)
            return 0;
        
        if (rbx[4] != 1)
            goto label_9bd66b;
        
        r8 = r8 == arg3;
        rdi = rdi == arg4;
        arg3 = rsi == arg3;
        rsi = rax_1 == arg4;
        result = 0;
        
        if (!(rsi & r8))
        {
            rbp = arg4;
            rdi &= arg3;
            
            if (!rdi)
                goto label_9bd66d;
        }
    }
    
    return result;
}
