
  int64_t uu_more::Pager::page_down::h5965084d09aa1ace(void* arg1)

{
    int64_t rax_1 = *(arg1 + 0x50);
    int64_t rcx = *(arg1 + 0x58);
    int64_t r8 = rcx * 2;
    int64_t r8_1 = r8 + rax_1;
    
    if (r8 + rax_1 < r8)
        r8_1 = -1;
    
    int64_t rsi = *(arg1 + 0x70);
    
    if (r8_1 >= rsi)
    {
        *(arg1 + 0x50) = rsi - rcx;
        return rax_1;
    }
    
    int64_t rax = rax_1 + rcx;
    
    if (rax_1 + rcx < rax_1)
        rax = -1;
    
    *(arg1 + 0x50) = rax;
    return rax;
}
