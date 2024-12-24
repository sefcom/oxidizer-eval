long long uu_tail::args::FilterMode::from::hddf2b68e449940c2(unsigned long long a0[3], unsigned long long a1)
{
    int v0;  // [bp-0xd8], Other Possible Types: char, unsigned long long
    unsigned long long v1;  // [sp-0xd0]
    unsigned long long v2;  // [sp-0xc8]
    unsigned int v3;  // [bp-0xc0], Other Possible Types: unsigned long long
    void* v4;  // [sp-0xb8]
    char v5;  // [bp-0xa8]
    char v6;  // [bp-0xa0]
    char v7;  // [bp-0x98]
    unsigned long v8;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x80]
    int v10;  // [sp-0x78]
    int v11;  // [sp-0x68]
    char v12;  // [bp-0x58]
    char v13;  // [bp-0x48]
    char v14;  // [bp-0x40]
    char v15;  // [bp-0x30]
    char v17;  // bpl
    unsigned long long v18[3];  // rax
    unsigned long long v19[3];  // rax
    unsigned long long v20;  // rcx
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax

    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "zero-terminatedbytesinvalid number of bytes: ''", 15);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h4a5379ebc0b1294b(&v0, a1, "bytesinvalid number of bytes: ''", 5);
    v18 = clap_builder::parser::error::MatchesError::unwrap::h0d816367cf4a1b20("bytesinvalid number of bytes: ''", 5, &v0);
    if (!v18)
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h4a5379ebc0b1294b(&v0, a1, "linesinvalid number of lines: ", 5);
        v19 = clap_builder::parser::error::MatchesError::unwrap::h0d816367cf4a1b20("linesinvalid number of lines: ", 5, &v0);
        if (!v19)
        {
            v21 = (v17 ? 0 : 10);
            a0[0] = 0;
            a0[1] = 10;
            a0[2] = v21;
            return v22;
        }
        uu_tail::args::parse_num::h320a3be83ace3a2a(&v5, v19[1], v19[2]);
        if (*((int *)&v5) != 3)
        {
            *((int128_t *)&v11) = *((int128_t *)&v7);
            *((int128_t *)&v10) = *((int128_t *)&v5);
            v8 = &v10;
            v9 = _$LT$uucore..parser..parse_size..ParseSizeError$u20$as$u20$core..fmt..Display$GT$::fmt::h087313f03a8e15e6;
            v0 = &g_5bd3f8;
            v1 = 1;
            v4 = 0;
            v2 = &v8;
            v3 = 1;
            ::0x4f9120::core::option::Option$LT$T$GT$::map_or_else::h8f742f83fa3dc9e1(&v14, &v0);
            v3 = 1;
            *((int128_t *)&v0) = *((int128_t *)&v14);
            v2 = *((long long *)&v15);
            v23 = ::0x4f9360::alloc::boxed::Box$LT$T$GT$::new::hd193c16ada578a46(&v0);
            a0[1] = v23;
            a0[2] = &g_5bd388;
            a0[0] = 5;
            core::ptr::drop_in_place$LT$uucore..parser..parse_size..ParseSizeError$GT$::haab6b80b87c5e866(&v10);
            return v22;
        }
        v22 = *((long long *)&v6);
        v20 = *((long long *)&v7);
        v21 = (v17 ? 0 : 10);
    }
    else
    {
        uu_tail::args::parse_num::h320a3be83ace3a2a(&v5, v18[1], v18[2]);
        if (*((int *)&v5) != 3)
        {
            *((int128_t *)&v11) = *((int128_t *)&v7);
            *((int128_t *)&v10) = *((int128_t *)&v5);
            v8 = &v10;
            v9 = _$LT$uucore..parser..parse_size..ParseSizeError$u20$as$u20$core..fmt..Display$GT$::fmt::h087313f03a8e15e6;
            v0 = &g_5bd330;
            v1 = 2;
            v4 = 0;
            v2 = &v8;
            v3 = 1;
            ::0x4f9120::core::option::Option$LT$T$GT$::map_or_else::h8f742f83fa3dc9e1(&v12, &v0);
            v3 = 1;
            *((int128_t *)&v0) = *((int128_t *)&v12);
            v2 = *((long long *)&v13);
            v23 = ::0x4f9360::alloc::boxed::Box$LT$T$GT$::new::hd193c16ada578a46(&v0);
            a0[1] = v23;
            a0[2] = &g_5bd388;
            a0[0] = 5;
            v22 = core::ptr::drop_in_place$LT$uucore..parser..parse_size..ParseSizeError$GT$::haab6b80b87c5e866(&v10);
            return v22;
        }
        v20 = *((long long *)&v6);
        v21 = *((long long *)&v7);
        v22 = 4;
    }
    a0[0] = v22;
    a0[1] = v20;
    a0[2] = v21;
    return v22;
}
