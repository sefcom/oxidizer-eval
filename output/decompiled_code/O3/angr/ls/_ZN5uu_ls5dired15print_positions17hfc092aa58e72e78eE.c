long long uu_ls::dired::print_positions::hfc092aa58e72e78e(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long a3)
{
    unsigned long v0;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x90]
    unsigned long v2;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x80]
    unsigned long long v4;  // [sp-0x78]
    int v5;  // [sp-0x70], Other Possible Types: unsigned long long
    void* v6;  // [sp-0x68]
    unsigned long v7;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x50]
    unsigned long v9;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long v10;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x38]
    unsigned long long v13;  // rax
    unsigned long long v14;  // rsi
    unsigned long long v15;  // rdx

    v10 = a0;
    v11 = a1;
    v0 = &v10;
    v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9e0c9cf7625be423;
    v2 = &g_423d10;
    v3 = 1;
    v6 = 0;
    v4 = &v0;
    v5 = 1;
    std::io::stdio::_print::he918bceb0c89db46(&v2, a1, a2);
    v7 = a2;
    v8 = a3 * 16 + a2;
    v13 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd3b94d023c62f9ad(&v7);
    if (!v13)
    {
        v2 = &g_613348;
        v3 = 1;
        v4 = 8;
        *((int128_t *)&v5) = 0;
        return std::io::stdio::_print::he918bceb0c89db46(&v2, v14, v15);
    }
    do
    {
        v9 = v13;
        v0 = &v9;
        v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5ddf481d599f44e2;
        v2 = &g_613358;
        v3 = 1;
        v6 = 0;
        v4 = &v0;
        v5 = 1;
        std::io::stdio::_print::he918bceb0c89db46(&v2, v14, v15);
        v13 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd3b94d023c62f9ad(&v7);
    } while (v13);
}
