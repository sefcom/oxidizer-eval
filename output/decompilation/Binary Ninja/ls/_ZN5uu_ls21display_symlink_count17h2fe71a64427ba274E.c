
  int64_t uu_ls::display_symlink_count::h2fe71a64427ba274(int128_t* arg1, uint64_t arg2)

{
    void var_1c;
    int64_t rax_1;
    uint64_t rdx;
    rax_1 =
        core::fmt::num::imp::_$LT$impl$u20$u64$GT$::_fmt::h284f18664830c6dd(arg2, &var_1c, 0x14);
    int128_t var_38;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_38, rax_1, rdx);
    int64_t result;
    arg1[1] = result;
    *arg1 = var_38;
    return result;
}
