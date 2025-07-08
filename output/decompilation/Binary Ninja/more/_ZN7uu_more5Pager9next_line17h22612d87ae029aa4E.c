
  int64_t uu_more::Pager::next_line::h22612d87ae029aa4(void* arg1)

{
    int64_t rax_1 = *(arg1 + 0x18);
    int64_t rcx = -1;
    
    if (rax_1 != -1)
        rcx = rax_1 + 1;
    
    *(arg1 + 0x18) = rcx;
    return rax_1 + 1;
}
