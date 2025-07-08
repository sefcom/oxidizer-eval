
  int64_t uu_dd::make_linux_iflags::hef93cf202b98b41f(void* arg1)

{
    uint32_t rax = *(arg1 + 1) << 0xe;
    uint32_t rcx_1 = rax | 0x10000;
    
    if (!*(arg1 + 2))
        rcx_1 = rax;
    
    uint32_t rax_1 = rcx_1 + 0x1000;
    
    if (!*(arg1 + 3))
        rax_1 = rcx_1;
    
    uint32_t rcx_3 = rax_1 | 0x40000;
    
    if (!*(arg1 + 7))
        rcx_3 = rax_1;
    
    uint32_t rax_3 = rcx_3 | 0x100;
    
    if (!*(arg1 + 8))
        rax_3 = rcx_3;
    
    uint32_t rcx_5 = rax_3 | 0x20000;
    
    if (!*(arg1 + 9))
        rcx_5 = rax_3;
    
    uint32_t rax_5 = rcx_5 | 0x800;
    
    if (!*(arg1 + 6))
        rax_5 = rcx_5;
    
    uint32_t rdx_1 = rax_5 | 0x101000;
    
    if (!*(arg1 + 4))
        rdx_1 = rax_5;
    
    int64_t result;
    result = rdx_1;
    return result;
}
