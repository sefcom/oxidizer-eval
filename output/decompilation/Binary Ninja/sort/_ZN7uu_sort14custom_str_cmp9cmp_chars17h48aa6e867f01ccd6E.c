
  uint64_t uu_sort::custom_str_cmp::cmp_chars::h48aa6e867f01ccd6(int32_t arg1, int32_t arg2, int32_t arg3) __pure

{
    int32_t rcx;
    bool c;
    bool z;
    
    if (!arg3)
    {
        c = arg1 < arg2;
        z = arg1 == arg2;
    }
    else
    {
        rcx = arg1 & 0x5f;
        
        if (arg1 - 0x61 >= 0x1a)
            rcx = arg1;
        
        int32_t rdx_1 = arg2 & 0x5f;
        
        if (arg2 - 0x61 >= 0x1a)
            rdx_1 = arg2;
        
        c = rcx < rdx_1;
        z = rcx == rdx_1;
    }
    
    int32_t rax;
    rax = c;
    rcx = !z;
    
    if (!rax)
        return rcx;
    
    return 0xff;
}
