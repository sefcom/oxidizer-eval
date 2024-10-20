long long uu_shred::get_size::hf38d5d9b9ee0ec02(unsigned long long a0[3])
{
    unsigned long v0;  // [sp-0xf0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xe8]
    unsigned long long v2;  // [sp-0xe0]
    unsigned long long v3;  // [sp-0xd8]
    void* v4;  // [sp-0xd0]
    void* v5;  // [sp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0xb8]
    unsigned long long v7;  // [sp-0xb0]
    char v8;  // [sp-0xa8]
    void* v9;  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x98]
    void* v11;  // [sp-0x90], Other Possible Types: unsigned long long
    char v12;  // [sp-0x88]
    unsigned short v13;  // [sp-0x80]
    char v14;  // [sp-0x7e]
    char v15;  // [bp-0x78]
    char v16;  // [bp-0x70]
    char v17;  // [bp-0x68]
    char v18;  // [bp-0x60]
    unsigned long v19;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v20;  // [sp-0x50]
    char v21;  // [bp-0x40]
    char v22;  // [bp-0x38]
    unsigned long long v24;  // rbx
    unsigned long long v26;  // r14
    unsigned long long v27;  // r15
    unsigned long long v28;  // rsi
    unsigned long long v29;  // rdi
    unsigned long long v30;  // rdx
    unsigned long long v31;  // rsi

    v24 = a0[0];
    if (v24 == 0x8000000000000000)
        return 0;
    v26 = a0[1];
    v27 = a0[2];
    v13 = 0;
    v14 = 0;
    v9 = 0;
    v11 = 0;
    uucore::parser::parse_size::Parser::parse::h4bb7d9f2e0cc66ae(&v15, &v9, v26, v27);
    if (*((int *)&v15) != 3)
    {
        v28 = *((long long *)&v16);
        v29 = *((long long *)&v17);
    }
    else if (*((long long *)&v18))
    {
        v5 = 0;
        v6 = v26;
        v7 = v27;
        v8 = 1;
        v19 = &v5;
        v20 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v0 = &anon.edec59db3b863b6761f2fcbb7c5018ad.77.llvm.1026247603497507326;
        v1 = 2;
        v4 = 0;
        v2 = &v19;
        v3 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v21, &v0);
        v28 = *((long long *)&v21);
        v29 = *((long long *)&v22);
    }
    else
    {
        if (!v24)
            return 1;
        __rust_dealloc(v26);
    }
    if (!v28)
    {
        v9 = uucore::util_name::h359eff083fe53467();
        v10 = v30;
        v5 = &v9;
        v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1af1f4b84ab3dbee;
        v0 = &g_4ef7b0;
        v1 = 2;
        v4 = 0;
        v2 = &v5;
        v3 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v31, v30);
        v9 = 0;
        v10 = v26;
        v11 = v27;
        v12 = 1;
        v5 = &v9;
        v6 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v0 = &g_4ef7d0;
        v1 = 2;
        v4 = 0;
        v2 = &v5;
        v3 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v31, v30);
        std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
    }
    __rust_dealloc(v29);
}
