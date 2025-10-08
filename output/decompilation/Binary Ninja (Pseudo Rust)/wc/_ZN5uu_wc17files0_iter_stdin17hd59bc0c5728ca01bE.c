
  fn uu_wc::files0_iter_stdin::hd59bc0c5728ca01b(arg1: *mut i128) -> i64

{
    std::io::stdio::stdin::h9a05a2c3e7544b2a();
    let mut var_50: *mut c_void = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
    let mut rax: *mut i32;
    let mut rdx: i8;
    rax = std::io::stdio::Stdin::lock::h8b2bf765bae79e2f(&var_50);
    let mut var_30: i128;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h805faec68bbcdbaf(&var_30, &data_41a0ed[0x51], 1);
    let var_20: i64;
    let var_38: i64 = var_20;
    let mut var_48: i128 = var_30;
    uu_wc::files0_iter::h4a0f15fa04c8f31b(arg1, rax, rdx & 1, &var_48)
}
