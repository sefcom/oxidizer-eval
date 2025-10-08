
  int64_t uu_dd::make_linux_oflags::h8059fc6e2ea11e72(char* arg1)

{
    uint32_t rax = *arg1 << 0xa;
    uint32_t rcx = rax + 0x4000;
    
    if (!arg1[2])
        rcx = rax;
    
    uint32_t rax_1 = rcx + 0x10000;
    
    if (!arg1[3])
        rax_1 = rcx;
    
    uint32_t rcx_1 = rax_1 + 0x1000;
    
    if (!arg1[4])
        rcx_1 = rax_1;
    
    uint32_t rax_3 = rcx_1 | 0x40000;
    
    if (!arg1[8])
        rax_3 = rcx_1;
    
    uint32_t rcx_3 = rax_3 | 0x100;
    
    if (!arg1[9])
        rcx_3 = rax_3;
    
    uint32_t rax_5 = rcx_3 | 0x20000;
    
    if (!arg1[0xa])
        rax_5 = rcx_3;
    
    uint32_t rcx_5 = rax_5 | 0x800;
    
    if (!arg1[7])
        rcx_5 = rax_5;
    
    uint32_t rdx_1 = rcx_5 | 0x101000;
    
    if (!arg1[5])
        rdx_1 = rcx_5;
    
    int64_t result;
    result = rdx_1;
    return result;
}
