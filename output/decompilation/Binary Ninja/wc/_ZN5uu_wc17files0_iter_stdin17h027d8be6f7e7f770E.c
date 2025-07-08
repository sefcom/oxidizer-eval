
  int64_t uu_wc::files0_iter_stdin::h027d8be6f7e7f770(int128_t* arg1)

{
    std::io::stdio::stdin::h7215cc131abb55d8();
    void* var_50 = &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5;
    int32_t* rax;
    char rdx;
    rax = std::io::stdio::Stdin::lock::h161a36d857331d7f(&var_50);
    int128_t var_30;
    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_30, &data_41e2be[0x29], 1);
    int64_t var_20;
    int64_t var_38 = var_20;
    int128_t var_48 = var_30;
    return uu_wc::files0_iter::hd579310a299db12a(arg1, rax, rdx & 1, &var_48);
}
