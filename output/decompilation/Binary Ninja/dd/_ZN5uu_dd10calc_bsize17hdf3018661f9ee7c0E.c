
  int64_t uu_dd::calc_bsize::hdf3018661f9ee7c0(uint64_t arg1, uint64_t arg2)

{
    int64_t rax;
    int64_t var_18 = rax;
    uint64_t rax_1 = gcd::binary_u64::hd9114b804d0d9df6(arg1, arg2);
    
    if (!rax_1)
    {
        core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
        /* no return */
    }
    
    uint64_t rax_5;
    
    if (!((rax_1 | arg1) >> 0x20))
        rax_5 = COMBINE(0, arg1) / rax_1;
    else
        rax_5 = COMBINE(0, arg1) / rax_1;
    
    return rax_5 * arg2;
}
