
  int64_t uu_dd::make_linux_oflags::hc5c67f9cb15d8524(char* arg1)

{
    uint32_t rax = *arg1 << 0xa;
    uint32_t rcx_1 = rax | 0x4000;
    
    if (!arg1[2])
        rcx_1 = rax;
    
    uint32_t rax_2 = rcx_1 | 0x10000;
    
    if (!arg1[3])
        rax_2 = rcx_1;
    
    uint32_t rcx_3 = rax_2 | 0x1000;
    
    if (!arg1[4])
        rcx_3 = rax_2;
    
    uint32_t rax_4 = rcx_3 | 0x40000;
    
    if (!arg1[8])
        rax_4 = rcx_3;
    
    uint32_t rcx_5 = rax_4 | 0x100;
    
    if (!arg1[9])
        rcx_5 = rax_4;
    
    uint32_t rax_6 = rcx_5 | 0x20000;
    
    if (!arg1[0xa])
        rax_6 = rcx_5;
    
    uint32_t rcx_7 = rax_6 | 0x800;
    
    if (!arg1[7])
        rcx_7 = rax_6;
    
    uint32_t rdx_1 = rcx_7 | 0x101000;
    
    if (!arg1[5])
        rdx_1 = rcx_7;
    
    int64_t result;
    result = rdx_1;
    return result;
}
