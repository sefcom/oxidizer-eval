long long uu_wc::files0_iter_stdin::h027d8be6f7e7f770(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    unsigned long v0;  // [sp-0x50], Other Possible Types: unsigned long long
    int v1;  // [sp-0x48]
    unsigned long long v2;  // [sp-0x38]
    char v3;  // [bp-0x30]
    char v4;  // [bp-0x20]
    unsigned int v7;  // edx

    v0 = std::io::stdio::stdin::h7215cc131abb55d8();
    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v3, "-", 1);
    v2 = *((long long *)&v4);
    *((int128_t *)&v1) = *((int128_t *)&v3);
    return uu_wc::files0_iter::hd579310a299db12a(a0, std::io::stdio::Stdin::lock::h161a36d857331d7f(&v0), v7 & 1, &v1);
}
