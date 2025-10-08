
  fn uu_ls::display_symlink_count::h2fe71a64427ba274(arg1: *mut i128, arg2: u64) -> i64

{
    let mut var_1c: ();
    let mut rax_1: i64;
    let mut rdx: u64;
    rax_1 =
        core::fmt::num::imp::_$LT$impl$u20$u64$GT$::_fmt::h284f18664830c6dd(arg2, &var_1c, 0x14);
    let mut var_38: i128;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_38, rax_1, rdx);
    let result: i64;
    arg1[1] = result;
    *arg1 = var_38;
    result
}
