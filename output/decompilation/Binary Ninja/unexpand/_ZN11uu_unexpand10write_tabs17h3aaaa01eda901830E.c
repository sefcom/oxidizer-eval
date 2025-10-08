
  uint64_t uu_unexpand::write_tabs::h3aaaa01eda901830(int64_t* arg1, int64_t* arg2, uint64_t arg3, uint64_t arg4, int64_t arg5, char arg6, char arg7, char arg8)

{
    int64_t rax;
    int64_t var_38 = rax;
    uint64_t rbp = arg4;
    uint64_t r15 = arg3;
    
    if (arg7)
    {
        arg4 = 1;
        
        if (!arg6 && arg5 > rbp + 1)
            goto label_45cc39;
        
        goto label_45cc17;
    }
    
    arg4 = arg8;
    arg3 = arg4 ^ 1;
    arg3 |= arg6;
    
    if (arg3 || arg5 <= rbp + 1)
    {
        label_45cc17:
        arg3 = arg5 > rbp;
        
        if (arg3 & (arg7 | (arg6 & arg4)))
            goto label_45cc39;
    }
    else
    {
        label_45cc39:
        
        while (true)
        {
            char rax_2;
            int64_t rdx_1;
            rax_2 = uu_unexpand::next_tabstop::h080f73c87180f742(arg2, r15, rbp);
            
            if (!(rax_2 & 1))
                break;
            
            uint64_t r13_2 = rdx_1 + rbp;
            
            if (arg5 < r13_2)
                break;
            
            int64_t rax_3 = arg1[2];
            
            if (*arg1 - rax_3 <= 1)
            {
                rbp = r13_2;
                
                if (std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hccae24ef141405a2(arg1, "\t : \ntab size contains invalid…", 1))
                    return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            }
            else
            {
                arg1[1][rax_3] = 9;
                arg1[2] = rax_3 + 1;
                rbp = r13_2;
            }
        }
    }
    
    uint64_t result = 0;
    int64_t rbx_1 = arg5 - rbp;
    
    if (arg5 <= rbp)
        return result;
    
    while (true)
    {
        int64_t rcx_3 = arg1[2];
        
        if (*arg1 - rcx_3 <= 1)
        {
            result = 0;
            
            if (std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hccae24ef141405a2(
                    arg1, " : \ntab size contains invalid c…", 1))
                return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        }
        else
        {
            arg1[1][rcx_3] = 0x20;
            arg1[2] = rcx_3 + 1;
        }
        
        int64_t temp1_1 = rbx_1;
        rbx_1 -= 1;
        
        if (temp1_1 == 1)
            return result;
    }
}
