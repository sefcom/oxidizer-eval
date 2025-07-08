
  fn uu_shred::get_size::h94b39895cde5bfc0(arg1: *mut i64) -> i64

{
    let mut rsi: i64;
    let mut rdi: i64;
    
    if *arg1 != -0x8000000000000000
    {
        let mut rax_1: i64;
        let mut rdx_1: i64;
        rax_1 =
            uu_shred::get_size::_$u7b$$u7b$closure$u7d$$u7d$::ha01372414ef3048b(arg1[1], arg1[2]);
        rdi = rax_1;
        rsi = rdx_1;
    }
    else
    {
        rdi = 0;
    }
    
    let var_18: i64 = arg1[2];
    let mut var_28: i128 = *arg1;
    core::option::Option$LT$T$GT$::or_else::hc94a834c3c270ed5(rdi, rsi, &var_28)
}
