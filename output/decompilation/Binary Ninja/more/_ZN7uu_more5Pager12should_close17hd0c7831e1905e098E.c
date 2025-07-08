
  int64_t uu_more::Pager::should_close::hd0c7831e1905e098(void* arg1)

{
    uint64_t rax = *(arg1 + 0x40);
    int64_t rcx = -1;
    
    if (rax + *(arg1 + 0x18) >= rax)
        rcx = rax + *(arg1 + 0x18);
    
    int64_t result;
    result = rcx >= *(arg1 + 0x30);
    return result;
}
