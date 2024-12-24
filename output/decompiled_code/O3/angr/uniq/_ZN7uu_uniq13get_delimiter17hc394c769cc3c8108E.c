long long uu_uniq::get_delimiter::hc394c769cc3c8108(unsigned long long a0)
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x40]
    unsigned long long v3;  // [sp-0x38]
    int v4;  // [sp-0x30]
    unsigned long long v6[3];  // rax
    unsigned long long v7;  // rbx
    unsigned long long v8;  // r14
    unsigned long long v9;  // rax
    void* v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h47d7dd8915266b2f(&v1, a0, "all-repeated", 12);
    v6 = core::option::Option$LT$T$GT$::or_else::h25b428d7126211cd(clap_builder::parser::error::MatchesError::unwrap::hb013c76017727f65("all-repeated", 12, &v1), a0);
    if (!v6)
    {
        v9 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::hfa828e742123c8eb(a0, "group", 5);
        v10 = v9 | -0x100 | ((char)v9 ^ 1) * 2 + 2;
        return v10;
    }
    v7 = v6[1];
    v8 = v6[2];
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h08af43259c164d47(v7, v8, "append", 6))
        return 0;
    v11 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h08af43259c164d47(v7, v8, "prepend", 7);
    v10 = v11 | -0x100 | 1;
    if ((char)v11)
        return v10;
    v12 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h08af43259c164d47(v7, v8, "separate\n       ", 8);
    v10 = v12 | -0x100 | 2;
    if ((char)v12)
        return v10;
    v13 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h08af43259c164d47(v7, v8, "both", 4);
    v10 = v13 | -0x100 | 3;
    if ((char)v13)
        return v10;
    v14 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h08af43259c164d47(v7, v8, "none", 4);
    v10 = v14 | -0x100 | 4;
    if ((char)v14)
        return v10;
    v1 = &g_531118;
    v2 = 1;
    v3 = &v0;
    *((int128_t *)&v4) = 0;
    core::panicking::panic_fmt::he12d0d7468628bb4(&v1); /* do not return */
}
