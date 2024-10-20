long long uu_more::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h755054d49dc64265(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x48]
    unsigned long long v2;  // [sp-0x40]
    int v3;  // [bp-0x38], Other Possible Types: unsigned long long
    void* v4;  // [sp-0x30]
    unsigned long v5;  // [sp-0x20], Other Possible Types: unsigned long long
    unsigned long v6;  // [sp-0x18], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x10]
    unsigned long long v9;  // rax
    unsigned long long v10;  // rsi
    unsigned long long v11;  // rdx

    v5 = a1;
    v9 = crossterm::terminal::disable_raw_mode::h3c82b348bf6944de(a0, a1);
    if (!v9)
    {
        v0 = &g_514c30;
        v1 = 1;
        v2 = 8;
        *((int128_t *)&v3) = 0;
        std::io::stdio::_print::he918bceb0c89db46(&v0, v10, v11);
        v6 = &v5;
        v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h55a1b3e49f16f19f;
        v0 = &g_514920;
        v1 = 2;
        v4 = 0;
        v2 = &v6;
        v3 = 1;
        return std::io::stdio::_print::he918bceb0c89db46(&v0, v10, v11);
    }
    v0 = v9;
    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
}
