
  fn uu_shred::get_size::hc596c7d8cb6dc047(arg1: *mut i64) -> i64

{
    let mut rdi: i64 = 0;
    let mut rsi: i64;
    
    if !(0 + -(*arg1))
    {
        let mut rax_1: i64;
        let mut rdx_1: i64;
        rax_1 =
            uu_shred::get_size::_$u7b$$u7b$closure$u7d$$u7d$::h37444d1bac9f2cfe(arg1[1], arg1[2]);
        rdi = rax_1;
        rsi = rdx_1;
    }
    
    /* tailcall */
    core::option::Option$LT$T$GT$::or_else::h28e0349789744498(rdi, rsi, arg1)
}
