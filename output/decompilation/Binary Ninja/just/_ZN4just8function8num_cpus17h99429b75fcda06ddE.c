
  int64_t* just::function::num_cpus::h99429b75fcda06dd(int64_t* arg1)

{
    void var_1c;
    int64_t rax_1;
    uint64_t rdx;
    rax_1 = core::fmt::num::imp::_$LT$impl$u20$u64$GT$::_fmt::h284f18664830c6dd(
        num_cpus::linux::get_num_cpus::h28a5c9f1704b633e(), &var_1c, 0x14);
    int128_t var_38;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_38, rax_1, rdx);
    int64_t var_28;
    arg1[3] = var_28;
    *(arg1 + 8) = var_38;
    *arg1 = 0;
    return arg1;
}
