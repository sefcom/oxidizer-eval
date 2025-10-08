
  fn uu_dd::calc_bsize::hdf3018661f9ee7c0(arg1: u64, arg2: u64) -> i64

{
    let rax: i64;
    let var_18: i64 = rax;
    let rax_1: u64 = gcd::binary_u64::hd9114b804d0d9df6(arg1, arg2);
    
    if rax_1 == 0
    {
        core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
        /* no return */
    }
    
    let mut rax_5: u64;
    
    if (rax_1 | arg1) >> 0x20 == 0
    {
        rax_5 = COMBINE(0, arg1) / rax_1;
    }
    else
    {
        rax_5 = COMBINE(0, arg1) / rax_1;
    }
    
    rax_5 * arg2
}
