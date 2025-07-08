
  int64_t uu_shred::get_size::h94b39895cde5bfc0(int64_t* arg1)

{
    int64_t rsi;
    int64_t rdi;
    
    if (*arg1 != -0x8000000000000000)
    {
        int64_t rax_1;
        int64_t rdx_1;
        rax_1 =
            uu_shred::get_size::_$u7b$$u7b$closure$u7d$$u7d$::ha01372414ef3048b(arg1[1], arg1[2]);
        rdi = rax_1;
        rsi = rdx_1;
    }
    else
        rdi = 0;
    
    int64_t var_18 = arg1[2];
    int128_t var_28 = *arg1;
    return core::option::Option$LT$T$GT$::or_else::hc94a834c3c270ed5(rdi, rsi, &var_28);
}
