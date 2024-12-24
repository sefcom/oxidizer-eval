long long uu_ls::extract_sort::h5f434fbbdea75741(unsigned long long a0)
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
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb6c62c6da4772362(&v1, a0, "sort", 4);
    v6 = clap_builder::parser::error::MatchesError::unwrap::h46c725aee7e39242("sort", 4, &v1);
    if (!v6)
    {
        v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a0, "tUvX /rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/mod.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/sort/unstable/heapsort.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/sort/un", 1);
        v10 = v9 | -0x100 | 3;
        if ((char)v9)
            return v10;
        v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a0, "StUvX /rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/mod.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/sort/unstable/heapsort.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/sort/u", 1);
        v10 = v12 | -0x100 | 2;
        if ((char)v12)
        {
            return v10;
        }
        else if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a0, "UvX /rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/mod.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/sort/unstable/heapsort.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/sort/uns", 1))
        {
            v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a0, "vX /rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/mod.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/sort/unstable/heapsort.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/sort/unst", 1);
            v10 = v15 | -0x100 | 4;
            if (!(char)v15)
            {
                v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a0, "X /rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/mod.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/sort/unstable/heapsort.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/sort/unstable/quicksort.rsmid > len", 1);
                v10 = v17 | -0x100 | (char)((v17 & 255) * 4) | 1;
                return v10;
            }
            return v10;
        }
    }
    else
    {
        v7 = v6[1];
        v8 = v6[2];
        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5c7bfcefa99095d7(v7, v8, "nonehelpNoneshimcallSlimname", 4))
        {
            v11 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5c7bfcefa99095d7(v7, v8, "name", 4);
            v10 = v11 | -0x100 | 1;
            if ((char)v11)
                return v10;
            v13 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5c7bfcefa99095d7(v7, v8, "time", 4);
            v10 = v13 | -0x100 | 3;
            if ((char)v13)
                return v10;
            v14 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5c7bfcefa99095d7(v7, v8, "sizei128", 4);
            v10 = v14 | -0x100 | 2;
            if ((char)v14)
                return v10;
            v16 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5c7bfcefa99095d7(v7, v8, "versionextensionwidthinternal error: entered unreachable code: Invalid field for --sort", 7);
            v10 = v16 | -0x100 | 4;
            if ((char)v16)
                return v10;
            v18 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5c7bfcefa99095d7(v7, v8, "extensionwidthinternal error: entered unreachable code: Invalid field for --sort", 9);
            v10 = v18 | -0x100 | 5;
            if ((char)v18)
                return v10;
            v19 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5c7bfcefa99095d7(v7, v8, "widthinternal error: entered unreachable code: Invalid field for --sort", 5);
            v10 = v19 | -0x100 | 6;
            if ((char)v19)
                return v10;
            v1 = &g_612478;
            v2 = 1;
            v3 = &v0;
            *((int128_t *)&v4) = 0;
            core::panicking::panic_fmt::he12d0d7468628bb4(&v1); /* do not return */
        }
    }
    return 0;
}
