long long uu_truncate::file_truncate::h2176164238a3ede6(unsigned long long a0, unsigned long long a1, char a2, unsigned long long a3)
{
    char v0;  // [bp-0x120]
    char v1;  // [bp-0x11c]
    char v2;  // [bp-0x118]
    char v3;  // [bp-0x110]
    unsigned int v4;  // [sp-0x108]
    void* v5;  // [bp-0x100], Other Possible Types: unsigned int
    unsigned long long v6;  // [sp-0xf8]
    unsigned long long v7;  // [sp-0xf0]
    char v8;  // [sp-0xe8]
    unsigned long v9;  // [sp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0xd8]
    char v11;  // [bp-0xd0], Other Possible Types: unsigned long long
    char v12;  // [bp-0xc8], Other Possible Types: unsigned int, unsigned long long
    char v13;  // [sp-0xc7]
    char v14;  // [bp-0xc4], Other Possible Types: unsigned short
    unsigned long long v15;  // [sp-0xc0]
    unsigned long long v16;  // [sp-0xb8]
    void* v17;  // [sp-0xb0]
    char v18;  // [bp-0x98]
    uint128_t v20[2];  // rax
    unsigned long long v21;  // r15
    unsigned int v22;  // ebp
    int v23;  // xmm0

    std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v11, a0, a1);
    if (*((int *)&v11) == 2)
    {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h73a364c4334582c2(*((long long *)&v12));
    }
    else if ((0xf000 & *((int *)&v18)) == 0x1000)
    {
        v5 = 0;
        v6 = a0;
        v7 = a1;
        v8 = 1;
        v9 = &v5;
        v10 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v11 = &g_4e07c8;
        v12 = 2;
        v17 = 0;
        v15 = &v9;
        v16 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v0, &v11);
        v4 = 1;
        v20 = __rust_alloc(32, 8);
        if (v20)
        {
            v23 = *((int128_t *)&v0);
            v20[1] = *((int128_t *)&v3);
            *((void*)&v20[0]) = v23;
            return v20;
        }
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    }
    v11 = 0x1b600000000;
    v12 = 0;
    v14 = 0;
    v13 = 1;
    v14 = a2;
    std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v0, &v11, a0, a1);
    if (!*((int *)&v0))
    {
        v22 = *((int *)&v1);
        v5 = v22;
        v21 = std::fs::File::set_len::hd21acd2eeb028efb(&v5, a3);
        close(v22);
        if (!v21)
            goto LABEL_480f68;
LABEL_480f58:
        v20 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::ha786de2b61e4a2b3(v21, a0, a1);
    }
    else
    {
        v21 = *((long long *)&v2);
        if (!(!(char)std::io::error::Error::kind::hb2ff5fa058639b3d(v21)) || !(!a2))
            goto LABEL_480f58;
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h73a364c4334582c2(v21);
LABEL_480f68:
        v20 = 0;
    }
    return v20;
}
