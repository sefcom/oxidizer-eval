
  int64_t uu_fmt::linebreak::BreakArgs::compute_width::h78d96ea40f73ab18(void* arg1, int32_t* arg2, int64_t arg3, int32_t arg4)

{
    if (arg4)
        return 0;
    
    int64_t result = *(arg2 + 0x30);
    
    if (*arg2 != 1)
        return result;
    
    int64_t rdi = *(arg1 + 0x40);
    
    if (!rdi)
    {
        int64_t result_1 = result;
        core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
        /* no return */
    }
    
    int64_t rax_2 = *(arg2 + 8) + arg3;
    uint64_t rcx_3;
    
    if (!((rax_2 | rdi) >> 0x20))
        rcx_3 = COMBINE(0, rax_2) / rdi;
    else
        rcx_3 = COMBINE(0, rax_2) / rdi;
    
    return result - arg3 + (rcx_3 + 1) * rdi;
}
