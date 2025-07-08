
  fn uu_wc::files0_iter_stdin::h027d8be6f7e7f770(arg1: *mut i128) -> i64

{
    std::io::stdio::stdin::h7215cc131abb55d8();
    let mut var_50: *mut c_void = &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5;
    let mut rax: *mut i32;
    let mut rdx: i8;
    rax = std::io::stdio::Stdin::lock::h161a36d857331d7f(&var_50);
    let mut var_30: i128;
    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_30, &data_41e2be[0x29], 1);
    let var_20: i64;
    let var_38: i64 = var_20;
    let mut var_48: i128 = var_30;
    uu_wc::files0_iter::hd579310a299db12a(arg1, rax, rdx & 1, &var_48)
}
