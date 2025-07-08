
  int64_t uu_more::Pager::prev_line::h2dc79d29e0a18308(void* arg1)

{
    int64_t rax_1 = *(arg1 + 0x18);
    int64_t rcx = 0;
    
    if (rax_1 >= 1)
        rcx = rax_1 - 1;
    
    *(arg1 + 0x18) = rcx;
    return rax_1 - 1;
}
