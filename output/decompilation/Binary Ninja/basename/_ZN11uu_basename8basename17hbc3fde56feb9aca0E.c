
  int64_t* uu_basename::basename::hbc3fde56feb9aca0(int64_t* arg1, int64_t arg2, uint64_t arg3, int64_t arg4, uint64_t arg5)

{
    int64_t r13 = arg2;
    int64_t rax;
    uint64_t rdx;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::h3730f7e24d6185fc(arg2, arg3);
    bool cond:0 = rdx;
    
    if (!rdx)
        rdx = arg3;
    
    if (cond:0)
        r13 = rax;
    
    int64_t var_a0;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he971b2aaaca9c129(&var_a0, r13, rdx);
    int64_t r13_1 = var_a0;
    int64_t var_98;
    int64_t var_90;
    std::path::Path::components::hd0346d362206f2e9(&var_a0, var_98, var_90);
    void var_60;
    _$LT$std..path..Components$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h8d3527ff230619be(&var_60, &var_a0);
    core::option::Option$LT$T$GT$::map_or_else::h121bac109a08f39f(arg1, &var_60, arg4, arg5);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hb191495a642b50e5(r13_1, var_98);
    return arg1;
}
