long long uu_touch::determine_atime_mtime_change::h31ae1ad087cd154f(struct_1 *a0)
{
    unsigned long v0;  // [sp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xc8]
    unsigned long v2;  // [sp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0xb8]
    unsigned long long v4;  // [sp-0xb0]
    unsigned long long v5;  // [sp-0xa8]
    char v6;  // [bp-0xa0]
    char v7;  // [bp-0x98]
    char v8;  // [bp-0x90]
    char v9;  // [bp-0x80]
    unsigned long v10;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x70]
    unsigned long long v12;  // [sp-0x68]
    unsigned long long v13;  // [sp-0x60]
    void* v14;  // [sp-0x58]
    int v15;  // [sp-0x48]
    int v16;  // [sp-0x38]
    unsigned long long v17;  // [sp-0x28]
    unsigned long long v19;  // rax
    struct struct_0 **v20;  // rcx
    struct struct_0 **v21;  // rdx
    unsigned long long v22[3];  // rax
    unsigned long long v23;  // r14
    unsigned long long v24;  // r15
    unsigned long long v25;  // rbp
    char v26;  // al
    unsigned long long v28;  // rax
    void* v29;  // rcx

    v19 = a0->field_10;
    if (!v19)
    {
LABEL_53f784:
        v25 = vvar_68{reg 56} | -0x100 | 2;
        if (!(!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a0, "accessmodificationno-createno-dereference`DateTime + TimeDelta` overflowed/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/chrono-0.4.38/src/datetime/mod.rs", 6)))
            goto LABEL_53f7a0;
        v26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a0, "modificationno-createno-dereference`DateTime + TimeDelta` overflowed/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/chrono-0.4.38/src/datetime/mod.rs", 12);
        v25 = 0;
LABEL_53f7e5:
        v29 = v29 | -0x100 | 2 - (!(v25 & 255 & 255) & v26);
        return v29 & 4294967295;
    }
    v20 = a0->field_8;
    v21 = 0;
    while (!(*((long long *)(v20 + v21 + 8)) == 4) || !(*((int *)*((long long *)(v20 + v21))) == 1701669236))
    {
        v21 += 2;
        if (v19 << 4 == v21)
            goto LABEL_53f784;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb5b178e22cf50651(&v6, a0, &anon.a8009f0f96d850c1c46a2cf3287456a4.24.llvm.17503802422331354604, 4);
    v0 = &anon.a8009f0f96d850c1c46a2cf3287456a4.24.llvm.17503802422331354604;
    v1 = 4;
    if (*((int *)&v6) != 2)
    {
        v17 = *((long long *)&v9);
        *((int128_t *)&v16) = *((int128_t *)&v8);
        *((int128_t *)&v15) = *((int128_t *)&v6);
        v2 = &v0;
        v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h96a4dadc93632c03;
        v4 = &v15;
        v5 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
        v10 = &anon.baab62fa9d6ba0389a8386834aaa7826.3.llvm.3656620608646900075;
        v11 = 2;
        v14 = 0;
        v12 = &v2;
        v13 = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v10); /* do not return */
    }
    v22 = *((long long *)&v7);
    if (v22)
    {
        v23 = v22[1];
        v24 = v22[2];
        v25 = vvar_68{reg 56} | -0x100 | 1;
        if (!(char)::0x53ad50::_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hce6c1a51027c4ec5("accessusemtimemodifyNo such file or directory: \nsetting times of : No such file or directory", 6, v23, v24) && !(char)::0x53ad50::_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hce6c1a51027c4ec5("atimeaccessusemtimemodifyNo such file or directory: \nsetting times of : No such file or directory", 5, v23, v24))
            v25 = (unsigned int)::0x53ad50::_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hce6c1a51027c4ec5("usemtimemodifyNo such file or directory: \nsetting times of : No such file or directory", 3, v23, v24);
        if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a0, "accessmodificationno-createno-dereference`DateTime + TimeDelta` overflowed/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/chrono-0.4.38/src/datetime/mod.rs", 6))
        {
            if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a0, "modificationno-createno-dereference`DateTime + TimeDelta` overflowed/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/chrono-0.4.38/src/datetime/mod.rs", 12))
            {
                return v29 & 4294967295;
            }
            else if (true)
            {
                return 0 & 4294967295;
            }
            else
            {
                return v29 & 4294967295;
            }
        }
    }
LABEL_53f7a0:
    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a0, "modificationno-createno-dereference`DateTime + TimeDelta` overflowed/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/chrono-0.4.38/src/datetime/mod.rs", 12);
    v29 = v28 & 4294967295;
    v26 = v28 | -0x100 | 1;
    if (!(char)v29)
    {
        v25 = v25 | -0x100 | 1;
        return 0 & 4294967295;
    }
    v25 = v25 | -0x100 | 1;
    goto LABEL_53f7e5;
}
