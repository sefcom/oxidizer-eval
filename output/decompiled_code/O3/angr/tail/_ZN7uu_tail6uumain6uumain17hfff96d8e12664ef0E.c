long long uu_tail::uumain::uumain::hfff96d8e12664ef0(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long long a3, unsigned long a4, unsigned long a5)
{
    int v0;  // [bp-0xf8], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v1;  // [sp-0xf0], Other Possible Types: unsigned long long
    unsigned long v2;  // [sp-0xe8], Other Possible Types: unsigned long long
    char v3;  // [bp-0xe0], Other Possible Types: unsigned int, unsigned long long
    void* v4;  // [sp-0xd8]
    char v5;  // [bp-0xd0]
    char v6;  // [bp-0xc0]
    char v7;  // [bp-0xb0]
    unsigned long v8;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0xa0]
    unsigned long v10;  // [sp-0x98], Other Possible Types: unsigned long long
    void* v11;  // [sp-0x90]
    unsigned long long v12;  // [sp-0x88]
    int v13;  // [sp-0x80]
    int v14;  // [sp-0x70]
    int v15;  // [sp-0x60]
    unsigned long long v16;  // [sp-0x50]
    void* v17;  // [sp-0x48]
    unsigned long long v18;  // [sp-0x40]
    unsigned long long v19;  // [sp-0x38]
    char v20;  // [sp-0x30]
    char v21;  // [bp-0x28]
    char v22;  // [bp-0x18]
    unsigned long long v24;  // rax
    unsigned long long v25;  // rsi
    unsigned long long v26;  // rdx
    unsigned long long v27;  // rcx
    unsigned long long v28;  // r8
    unsigned long long v29;  // r9

    uu_tail::args::parse_args::h9983bca9ade990b3(&v0, a0, a1, a3);
    if (v10 == 5)
        return v11;
    v16 = *((long long *)&v7);
    *((int128_t *)&v15) = *((int128_t *)&v6);
    *((int128_t *)&v14) = *((int128_t *)&v5);
    *((int128_t *)&v13) = *((int128_t *)&v3);
    v10 = v0;
    v11 = v1;
    v12 = v2;
    uu_tail::args::Settings::check_warnings::h544db5b344938098(&v10, *((long long *)&v7), v12);
    v24 = uu_tail::args::Settings::verify::h166b64d801c1b853(&v10);
    if ((char)v24 == 2)
    {
        v11 = 0;
    }
    else if ((unsigned int)v24 == 1)
    {
        v17 = 0;
        v18 = "-cannot follow ";
        v19 = 1;
        v20 = 1;
        v8 = &v17;
        v9 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v0 = &g_5ba5a0;
        v1 = 2;
        v4 = 0;
        v2 = &v8;
        v3 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h7197d7d9b341a9f6(&v21, &v0);
        v3 = 1;
        *((int128_t *)&v0) = *((int128_t *)&v21);
        v2 = *((long long *)&v22);
        v11 = alloc::boxed::Box$LT$T$GT$::new::h543fbd56e704b284(&v0);
    }
    else
    {
        ::0x4a7110::core::ptr::drop_in_place$LT$uu_tail..args..Settings$GT$::h309d5455889327ec(&v10);
        return uu_tail::uu_tail::ha2a704c1a8b84f93(&v10, v25, v26, v27, v28, v29);
    }
    ::0x4a7110::core::ptr::drop_in_place$LT$uu_tail..args..Settings$GT$::h309d5455889327ec(&v10);
    return v11;
}
