
  uint64_t fd::filter::time::TimeFilter::applies_to::h799254edd03bffec(int32_t* arg1, int64_t arg2, int32_t arg3)

{
    int64_t rcx = *(arg1 + 8);
    int32_t rax = arg1[4];
    
    if (*arg1 == 1)
    {
        int32_t rdi;
        rdi = arg3 > rax;
        uint64_t rax_1;
        rax_1 = arg2 > rcx;
        
        if (arg2 == rcx)
            return rdi;
        
        return rax_1;
    }
    
    int32_t rdi_1;
    rdi_1 = arg3 < rax;
    uint64_t rax_2;
    rax_2 = arg2 < rcx;
    
    if (arg2 == rcx)
        return rdi_1;
    
    return rax_2;
}
