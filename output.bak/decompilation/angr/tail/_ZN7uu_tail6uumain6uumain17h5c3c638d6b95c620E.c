long long uu_tail::uumain::uumain::h5c3c638d6b95c620(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0xf8], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v1;  // [sp-0xf0], Other Possible Types: unsigned long long
    struct struct_0 **v2;  // [sp-0xe8], Other Possible Types: unsigned long, unsigned long long
    char v3;  // [bp-0xe0], Other Possible Types: unsigned int, unsigned long long
    void* v4;  // [sp-0xd8]
    char v5;  // [bp-0xd0]
    char v6;  // [bp-0xc0]
    char v7;  // [bp-0xb0]
    char *v8;  // [sp-0xa8]
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

    uu_tail::args::parse_args::h21b79a77363e2b6a(&v0, a0, a1);
    if (v10 == 5)
        return v11;
    v16 = *((long long *)&v7);
    *((int128_t *)&v15) = *((int128_t *)&v6);
    *((int128_t *)&v14) = *((int128_t *)&v5);
    *((int128_t *)&v13) = *((int128_t *)&v3);
    v10 = v0;
    v11 = v1;
    v12 = v2;
    uu_tail::args::Settings::check_warnings::hc95159a783f4a1c8(&v10);
    v24 = uu_tail::args::Settings::verify::h67589dab63f9aa61(&v10);
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
        v9 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v0 = &g_5b85d0;
        v1 = 2;
        v4 = 0;
        v2 = &v8;
        v3 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h0da0019156620c79();
        v3 = 1;
        *((int128_t *)&v0) = *((int128_t *)&v21);
        v2 = *((long long *)&v22);
        v11 = alloc::boxed::Box$LT$T$GT$::new::h6de0ca5f93407dd6(&v0);
    }
    else
    {
        ::0x4a6190::core::ptr::drop_in_place$LT$uu_tail..args..Settings$GT$::h333061858f2bc617(&v10);
        return uu_tail::uu_tail::h84841135fb1b0c3f(&v10);
    }
    ::0x4a6190::core::ptr::drop_in_place$LT$uu_tail..args..Settings$GT$::h333061858f2bc617(&v10);
    return v11;
}
