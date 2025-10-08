
  int64_t uu_more::Pager::should_close::h4a303d1ec4dab858(void* arg1)

{
    int64_t rax = *(arg1 + 0x50);
    int64_t rcx = -1;
    
    if (rax + *(arg1 + 0x58) >= rax)
        rcx = rax + *(arg1 + 0x58);
    
    int64_t result;
    result = rcx >= *(arg1 + 0x70);
    return result;
}
