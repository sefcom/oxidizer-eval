
  int64_t uu_ls::dired::calculate_subdired::h85725549554709aa(void* arg1, int64_t arg2)

{
    int64_t rax = *(arg1 + 0x10);
    int64_t rax_3;
    
    if (!rax)
        rax_3 = 2;
    else
        rax_3 = *((rax << 4) + *(arg1 + 8) - 8) + 3;
    
    int64_t rcx_2;
    rcx_2 = *(arg1 + 0x28);
    int64_t rsi = rax_3 + (rcx_2 << 1);
    /* tailcall */
    return alloc::vec::Vec$LT$T$C$A$GT$::push::h0c7c203ff3f53050(arg1 + 0x18, rsi, arg2 + rsi);
}
