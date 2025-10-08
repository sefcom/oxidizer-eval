
  int64_t uu_more::Pager::next_line::hfb1901652829b949(void* arg1)

{
    int64_t result = *(arg1 + 0x50);
    int64_t rcx = *(arg1 + 0x70);
    int64_t rdx = 0;
    
    if (rcx >= 1)
        rdx = rcx - 1;
    
    if (result < rdx)
    {
        result += 1;
        *(arg1 + 0x50) = result;
    }
    
    return result;
}
