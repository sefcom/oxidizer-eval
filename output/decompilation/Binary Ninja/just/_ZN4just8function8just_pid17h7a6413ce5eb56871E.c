
  int64_t* just::function::just_pid::h7a6413ce5eb56871(int64_t* arg1)

{
    void var_12;
    int64_t rax_1;
    uint64_t rdx;
    rax_1 = core::fmt::num::imp::_$LT$impl$u20$u32$GT$::_fmt::hcfe26aa883005358(
        std::process::id::hbddb6ac2895e6a42(), &var_12, 0xa);
    int128_t var_30;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_30, rax_1, rdx);
    int64_t var_20;
    arg1[3] = var_20;
    *(arg1 + 8) = var_30;
    *arg1 = 0;
    return arg1;
}
