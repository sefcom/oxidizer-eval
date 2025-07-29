long long uu_numfmt::format::format_and_print_whitespace(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x149]
    unsigned long long v1;  // [bp-0x148]
    unsigned int v2;  // [bp-0x148]
    unsigned long long v3;  // [bp-0x140]
    char *v4;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x130]
    int v6;  // [bp-0x130], Other Possible Types: unsigned long long
    int v7;  // [bp-0x130]
    void* v8;  // [bp-0x128]
    unsigned long long v9;  // [bp-0x118]
    unsigned long long v10;  // [bp-0x110]
    unsigned long long v11;  // [bp-0x108]
    unsigned long v12;  // [bp-0xf0]
    struct struct_1 v13[16];  // [bp-0xe0]
    unsigned long long v14;  // [bp-0xd8]
    char *v15;  // [bp-0xd0]
    unsigned long long v16;  // [bp-0xc8]
    char *v17;  // [bp-0xc0]
    unsigned long long v18;  // [bp-0xb8]
    char v19;  // [bp-0xb0], Other Possible Types: unsigned int
    unsigned long long v20;  // [bp-0xa8]
    unsigned long long v21;  // [bp-0xa8]
    unsigned long long v22;  // [bp-0xa0]
    int v23;  // [bp-0x98]
    char *v24;  // [bp-0x88]
    unsigned long long v25;  // [bp-0x80]
    char v26;  // [bp-0x78]
    unsigned long long v27;  // [bp-0x68]
    char *v28;  // [bp-0x60], Other Possible Types: char
    unsigned long long v29;  // [bp-0x58]
    struct_2 *v31;  // rcx
    unsigned long long v32;  // r13
    unsigned long long v33;  // rbp
    unsigned long long v34;  // rbx
    unsigned long long v35;  // r12
    unsigned long long v36;  // r14
    unsigned long long v37;  // r9
    unsigned long long v38;  // rax
    unsigned long long v39;  // rdx
    char v43;  // cl

    v28.zip(a1, a2);
    v19.next(&v28);
    if (v20)
    {
        v32 = v31->field_60;
        v33 = v31->field_68;
        v0 = v31->field_c8;
        v12 = v31->field_b8;
        v21 = v20;
        do
        {
            v34 = v21;
            v35 = *((long long *)&v19);
            v36 = v22;
            *((void*)&v13->field_0) = v23;
            if ((char)uucore::features::ranges::contain(v32, v33, v35))
            {
                v37 = v36;
                if (v35 > 1)
                {
                    v1 = &g_58e398;
                    v3 = 1;
                    v4 = 8;
                    *((uint128_t *)&v6) = 0;
                    std::io::stdio::_print(&v1);
                    if (!1.get(v34, v36))
                        core::str::slice_error_fail(v34, v36, 1, v36, &g_58e3c0); /* do not return */
                    v37 = v39;
                }
                uu_numfmt::format::format_string(&v15, *((long long *)&v13[0]), v14, v31, !v12 & v36, v37 + v14);
                memcpy(&v9, &v16, 16);
                v11 = v18;
                if (((char)v15 & 1))
                {
                    a0->field_10 = v11;
                    *((int128_t *)&a0->field_0) = *((int128_t *)&v9);
                    return v11;
                }
                v27 = v11;
                memcpy(&v26, &v9, 16);
                v24 = &v26;
                v25 = <alloc::string::String as core::fmt::Display>::fmt;
                v1 = &g_415500;
                v3 = 1;
                v8 = 0;
                v4 = &v24;
                v5 = 1;
                std::io::stdio::_print(&v1);
                ::0x4ab5f0::core::ptr::drop_in_place<alloc::string::String>(&v26);
            }
            else
            {
                if ((v0 & 1))
                {
                    v2 = 0;
                    if ((char)core::slice::<impl [T]>::starts_with(v34, v36, ::0x4abfe0::core::char::methods::encode_utf8_raw(10, &v2), v39))
                    {
                        v1 = &g_58e398;
                        v3 = 1;
                        v4 = 8;
                        *((uint128_t *)&v7) = 0;
                        std::io::stdio::_print(&v1);
                        v38 = 1.get(v34, v36);
                        if (!v38)
                            core::str::slice_error_fail(v34, v36, 1, v36, &g_58e3a8); /* do not return */
                        v34 = v38;
                        v36 = v39;
                    }
                }
                v9 = v34;
                v10 = v36;
                v15 = &v9;
                v16 = <&T as core::fmt::Display>::fmt;
                v17 = &(char)v13;
                v18 = <&T as core::fmt::Display>::fmt;
                v1 = &g_4151a8;
                v3 = 2;
                v8 = 0;
                v4 = &v15;
                v5 = 2;
                std::io::stdio::_print(&v1);
            }
            v19.next(&v28);
            v21 = v20;
        } while (v21);
    }
    v19 = ((v43 & 1) ? 0 : 10);
    v28 = &v19;
    v29 = <char as core::fmt::Display>::fmt;
    v1 = &g_415500;
    v3 = 1;
    v8 = 0;
    v4 = &v28;
    v6 = 1;
    std::io::stdio::_print(&v1);
    *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
    return 0x8000000000000000;
}
