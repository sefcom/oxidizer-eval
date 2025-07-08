
  uint64_t uu_more::Pager::page_down::h61b22add167296da(void* arg1)

{
    uint64_t result = *(arg1 + 0x40);
    uint64_t rcx_1 = result * 2;
    int64_t rdx = *(arg1 + 0x18);
    int64_t rsi = *(arg1 + 0x30);
    int64_t rcx_2 = rcx_1 + rdx;
    
    if (rcx_1 + rdx < rcx_1)
        rcx_2 = -1;
    
    int64_t rdx_1 = rdx + result;
    
    if (rdx + result < rdx)
        rdx_1 = -1;
    
    int64_t r8_1 = rsi - result;
    
    if (rcx_2 < rsi)
        r8_1 = rdx_1;
    
    *(arg1 + 0x18) = r8_1;
    return result;
}
