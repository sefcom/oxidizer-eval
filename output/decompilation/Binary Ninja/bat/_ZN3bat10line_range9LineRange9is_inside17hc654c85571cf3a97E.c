
  int64_t bat::line_range::LineRange::is_inside::hc654c85571cf3a97(int32_t* arg1, int64_t arg2, char arg3, int64_t arg4)

{
    int64_t rax = *(arg1 + 8);
    char r9 = arg1[4];
    int64_t r8 = *(arg1 + 0x18);
    
    if (*arg1 != 1)
    {
        if (!(r9 & 1))
        {
            arg4 = rax <= arg2;
            rax = arg2 <= r8;
            rax &= arg4;
            return rax;
        }
        
        if (!(arg3 & 1))
        {
            rax = rax <= arg2;
            return rax;
        }
        
        if (rax > arg2)
            return 0;
    }
    else
    {
        int64_t rdi = 0;
        
        if (arg4 >= rax)
            rdi = arg4 - rax;
        
        rax = rdi <= arg2;
        rax &= arg3;
        
        if (!(r9 & 1))
        {
            arg4 = arg2 <= r8;
            rax &= arg4;
            return rax;
        }
        
        if (!rax)
            return 0;
    }
    
    int64_t rax_3 = 0;
    
    if (arg4 >= r8)
        rax_3 = arg4 - r8;
    
    rax_3 = arg2 <= rax_3;
    return rax_3;
}
