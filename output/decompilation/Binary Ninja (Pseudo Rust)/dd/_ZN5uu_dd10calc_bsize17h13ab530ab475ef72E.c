
  fn uu_dd::calc_bsize::h13ab530ab475ef72(arg1: u64, arg2: u64) -> i64

{
    let rax: i64;
    let var_18: i64 = rax;
    let rax_1: u64 = gcd::binary_usize::hd3a68b124c884425(arg1, arg2);
    
    if rax_1 == 0
    {
        core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e();
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
