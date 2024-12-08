long long uu_ls::show_dir_name::h8589ba1cf46b2091(unsigned long long a0[6], unsigned long long a1, char a2[240])
{
    unsigned long v0;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x90]
    int v2;  // [bp-0x88]
    unsigned long long v3;  // [sp-0x78]
    char v4;  // [bp-0x68]
    char v5;  // [bp-0x60]
    char v6;  // [bp-0x58]
    unsigned long v7;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x48]
    unsigned long long v9;  // [sp-0x40]
    unsigned long long v10;  // [sp-0x38]
    void* v11;  // [sp-0x30]
    unsigned long long v13;  // rdi

    uucore::features::quoting_style::escape_dir_name::h947a3e289450b31e(&v4, a0[4], a0[5], &a2[1 + 5]);
    if (!(!a2[238] & a2[239]))
    {
        v3 = *((long long *)&v6);
        *((int128_t *)&v2) = *((int128_t *)&v4);
        v0 = &v2;
        v1 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v7 = &g_612750;
        v8 = 2;
        v11 = 0;
        v9 = &v0;
        v10 = 1;
        ::0x51ce30::core::result::Result$LT$T$C$E$GT$::unwrap::h53ffd2860aadbbb3(std::io::Write::write_fmt::h9d32c17c2cadc496(a1, &v7));
        v13 = &v2;
    }
    else
    {
        uu_ls::create_hyperlink::hf30c045666fb4898(&v2, *((long long *)&v5), *((long long *)&v6), a0);
        v0 = &v2;
        v1 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v7 = &g_612750;
        v8 = 2;
        v11 = 0;
        v9 = &v0;
        v10 = 1;
        ::0x51ce30::core::result::Result$LT$T$C$E$GT$::unwrap::h53ffd2860aadbbb3(std::io::Write::write_fmt::h9d32c17c2cadc496(a1, &v7));
        ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v2);
        v13 = &v4;
    }
    return ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(v13);
}
