
  int64_t* just::function::trim_end_matches::hed5e180b7ddf0fd8(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, char* arg5, int64_t arg6)

{
    int64_t rax;
    uint64_t rdx_1;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::h866ed9564db8fc93(arg3, arg4, arg5, 
        arg6);
    int128_t var_20;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_20, rax, rdx_1);
    int64_t var_10;
    arg1[3] = var_10;
    *(arg1 + 8) = var_20;
    *arg1 = 0;
    return arg1;
}
