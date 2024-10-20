long long uu_sum::open::h16e46635846ddf2a(unsigned long long a0[3], char *a1, unsigned long long a2)
{
    char v0;  // [bp-0x120]
    char v1;  // [bp-0x11c]
    char v2;  // [bp-0x118]
    char v3;  // [bp-0x110]
    unsigned int v4;  // [sp-0x108]
    unsigned long v5;  // [sp-0x100], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0xf8]
    void* v7;  // [sp-0xf0]
    char *v8;  // [sp-0xe8]
    unsigned long long v9;  // [sp-0xe0]
    char v10;  // [sp-0xd8]
    void* v11;  // [sp-0xd0], Other Possible Types: char, unsigned long, unsigned long long
    char v12;  // [bp-0xc8], Other Possible Types: unsigned int, unsigned long long
    unsigned short v13;  // [sp-0xc4]
    void* v14;  // [sp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0xb8]
    void* v16;  // [sp-0xb0]
    struct_0 *v19;  // rax
    unsigned long long v22;  // rax
    int v24;  // xmm0
    int v25;  // xmm0

    if (a2 == 1 && *(a1) == 45)
    {
        v19 = __rust_alloc(8, 8);
        if (v19)
        {
            *((long long *)&v19->field_0) = std::io::stdio::stdin::h7215cc131abb55d8();
            a0[1] = v19;
            a0[2] = &g_4dfa70;
            a0[0] = 0;
            return a0;
        }
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    }
    if (!(char)std::path::Path::is_dir::h9ac0db933706da51(a1, a2))
    {
        std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v11, a1, a2);
        if ((int)v11 != 2)
        {
            v11 = 0x1b600000000;
            v12 = 0;
            v13 = 0;
            v12 = 1;
            std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v0, &v11, a1, a2);
            if (!*((int *)&v0))
            {
                v19 = __rust_alloc(4, 4);
                if (v19)
                {
                    v19->field_0 = *((int *)&v1);
                    a0[1] = v19;
                    a0[2] = &g_4df930;
                    a0[0] = 0;
                    return a0;
                }
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            }
            else
            {
                v22 = *((long long *)&v2);
                v11 = 0;
                v12 = 1;
                v14 = 0;
                v15 = v22;
                v19 = __rust_alloc(32, 8);
                if (v19)
                {
                    v25 = *((int128_t *)&v11);
                    v19->field_10 = *((int128_t *)&v14);
                    *((void*)&v19->field_0) = v25;
                    a0[1] = v19;
                    a0[2] = &g_4df7e0;
                    a0[0] = 1;
                    return a0;
                }
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            }
        }
        else
        {
            _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h63fb46542ca77edeE.llvm.1430992003039368830(v12);
            v7 = 0;
            v8 = a1;
            v9 = a2;
            v10 = 0;
            v5 = &v7;
            v6 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v11 = &g_4df988;
            v12 = 2;
            v16 = 0;
            v14 = &v5;
            v15 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v0, &v11);
            v4 = 2;
            v19 = __rust_alloc(32, 8);
            if (!v19)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        }
    }
    else
    {
        v7 = 0;
        v8 = a1;
        v9 = a2;
        v10 = 0;
        v5 = &v7;
        v6 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v11 = &g_4dfa50;
        v12 = 2;
        v16 = 0;
        v14 = &v5;
        v15 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v0, &v11);
        v4 = 2;
        v19 = __rust_alloc(32, 8);
        if (!v19)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    }
    v24 = *((int128_t *)&v0);
    v19->field_10 = *((int128_t *)&v3);
    *((void*)&v19->field_0) = v24;
    a0[1] = v19;
    a0[2] = &g_4df9e0;
    a0[0] = 1;
    return a0;
}
