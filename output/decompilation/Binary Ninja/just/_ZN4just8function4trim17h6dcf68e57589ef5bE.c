
  int64_t* just::function::trim::h6dcf68e57589ef5b(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    int64_t rax;
    uint64_t rdx;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_matches::hfd0add22eadc0a63(arg3, arg4);
    int128_t var_20;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_20, rax, rdx);
    int64_t var_10;
    arg1[3] = var_10;
    *(arg1 + 8) = var_20;
    *arg1 = 0;
    return arg1;
}
