
  int64_t* just::function::trim_start_match::h93698abdc24bc85e(int64_t* arg1, int64_t arg2, int64_t arg3, uint64_t arg4, int64_t arg5, uint64_t arg6)

{
    int64_t r14 = arg3;
    int64_t rax;
    uint64_t rdx;
    rax =
        _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(
        arg5, arg6, arg3, arg4);
    
    if (!rax)
        rdx = arg4;
    
    if (rax)
        r14 = rax;
    
    int128_t var_30;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_30, r14, rdx);
    int64_t var_20;
    arg1[3] = var_20;
    *(arg1 + 8) = var_30;
    *arg1 = 0;
    return arg1;
}
