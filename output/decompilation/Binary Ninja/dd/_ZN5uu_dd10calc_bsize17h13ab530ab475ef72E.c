
  int64_t uu_dd::calc_bsize::h13ab530ab475ef72(uint64_t arg1, uint64_t arg2)

{
    int64_t rax;
    int64_t var_18 = rax;
    uint64_t rax_1 = gcd::binary_usize::hd3a68b124c884425(arg1, arg2);
    
    if (!rax_1)
    {
        core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e();
        /* no return */
    }
    
    uint64_t rax_5;
    
    if (!((rax_1 | arg1) >> 0x20))
        rax_5 = COMBINE(0, arg1) / rax_1;
    else
        rax_5 = COMBINE(0, arg1) / rax_1;
    
    return rax_5 * arg2;
}
