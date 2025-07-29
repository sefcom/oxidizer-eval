long long uu_numfmt::format::format_and_print_delimited(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    struct_1 *v0;  // [bp-0x1f8]
    unsigned long long v1;  // [bp-0x1e8]
    unsigned long long v2;  // [bp-0x1e0]
    int v3;  // [bp-0x1d8]
    unsigned long long v4;  // [bp-0x1c8]
    struct struct_0 v5[8];  // [bp-0x1b8]
    unsigned long long v6;  // [bp-0x1b0]
    unsigned long long v8;  // [bp-0x1a8]
    unsigned long long v9;  // [bp-0x1a8]
    unsigned long long v10;  // [bp-0x1a0]
    char *v11;  // [bp-0x198]
    unsigned long long v12;  // [bp-0x190]
    unsigned long long v13;  // [bp-0x180]
    char *v14;  // [bp-0x178]
    unsigned long long v15;  // [bp-0x170]
    char v16;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long long v17;  // [bp-0x160]
    char *v18;  // [bp-0x158]
    unsigned long long v19;  // [bp-0x150]
    void* v20;  // [bp-0x148]
    void* v21;  // [bp-0x100]
    unsigned long long v22;  // [bp-0xf8]
    unsigned short v23;  // [bp-0xf0]
    int v24;  // [bp-0xe8]
    unsigned long long v25;  // [bp-0xd8]
    char v26;  // [bp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v27;  // [bp-0xc8]
    unsigned long long v28;  // [bp-0xc0]
    uint128_t v29;  // [bp-0xb8]
    unsigned long long v31[15];  // rcx
    char v32;  // al
    unsigned int v34;  // r9

    if ((char)(((0 ^ v31[14]) & (0 ^ -(v31[14]))) >> 63))
        core::option::unwrap_failed(&g_58e380); /* do not return */
    *((unsigned long long *[15])&v5[0]) = &v31[14];
    v16.into_searcher(&v31[14], a1, a2);
    v21 = 0;
    v22 = a2;
    v23 = 1;
    v26.zip(&v16);
    (char)v6.next(&v26);
    if (v8)
    {
        v9 = v8;
        do
        {
            v1 = v9;
            v2 = v10;
            v32 = uucore::features::ranges::contain(v31[12], v31[13], v6);
            if (v6 > 1)
            {
                v11 = &v5[0].field_0;
                v12 = <&T as core::fmt::Display>::fmt;
                v16 = &g_415500;
                v17 = 1;
                v20 = 0;
                v18 = &v11;
                v19 = 1;
                std::io::stdio::_print(&v16);
            }
            if (!v32)
            {
                v11 = &v1;
                v12 = <&T as core::fmt::Display>::fmt;
                v16 = &g_415500;
                v17 = 1;
                v20 = 0;
                v18 = &v11;
                v19 = 1;
                std::io::stdio::_print(&v16);
            }
            else
            {
                uu_numfmt::format::format_string(&v11, core::str::<impl str>::trim_start_matches(v1, v2), a2, v31, 0, v34);
                memcpy(&v3, &v12, 16);
                v4 = v13;
                if (((char)v11 & 1))
                {
                    v0->field_10 = v4;
                    *((void*)&v0->field_0) = v3;
                    return v4;
                }
                v25 = v4;
                v24 = v3;
                v14 = &v24;
                v15 = <alloc::string::String as core::fmt::Display>::fmt;
                v16 = &g_415500;
                v17 = 1;
                v20 = 0;
                v18 = &v14;
                v19 = 1;
                std::io::stdio::_print(&v16);
                ::0x4ab5f0::core::ptr::drop_in_place<alloc::string::String>(&v24);
            }
            (char)v6.next(&v26);
            v9 = v8;
        } while (v9);
    }
    v26 = &g_58e370;
    v27 = 1;
    v28 = 8;
    v29 = 0;
    std::io::stdio::_print(&v26);
    *((unsigned long long *)&v0->field_0) = 0x8000000000000000;
    return a0;
}
