
  int64_t uu_shred::get_size::hc596c7d8cb6dc047(int64_t* arg1)

{
    int64_t rdi = 0;
    int64_t rsi;
    
    if (!(0 + -(*arg1)))
    {
        int64_t rax_1;
        int64_t rdx_1;
        rax_1 =
            uu_shred::get_size::_$u7b$$u7b$closure$u7d$$u7d$::h37444d1bac9f2cfe(arg1[1], arg1[2]);
        rdi = rax_1;
        rsi = rdx_1;
    }
    
    /* tailcall */
    return core::option::Option$LT$T$GT$::or_else::h28e0349789744498(rdi, rsi, arg1);
}
