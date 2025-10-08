long long uu_numfmt::format::format_and_print_whitespace(void* a0, unsigned long long a1, unsigned long long a2, struct_0 *a3)
{
    char v0;  // [bp-0x159]
    unsigned long long v1;  // [bp-0x158]
    unsigned int v2;  // [bp-0x158]
    unsigned long long v3;  // [bp-0x150]
    char *v4;  // [bp-0x148], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x140]
    int v6;  // [bp-0x140], Other Possible Types: unsigned long long
    int v7;  // [bp-0x140]
    void* v8;  // [bp-0x138]
    unsigned long long v9;  // [bp-0x128]
    unsigned long long v10;  // [bp-0x120]
    unsigned long long v11;  // [bp-0x118]
    unsigned long long v12;  // [bp-0x100]
    unsigned long long v13;  // [bp-0xf8]
    unsigned long v14;  // [bp-0xf0]
    unsigned long v15;  // [bp-0xe0]
    unsigned long v16;  // [bp-0xd8]
    char v17;  // [bp-0xd0], Other Possible Types: unsigned int
    unsigned long long v18;  // [bp-0xc8]
    unsigned long long v19;  // [bp-0xc8]
    unsigned long long v20;  // [bp-0xc0]
    unsigned long long v21;  // [bp-0xb8]
    unsigned long long v22;  // [bp-0xb0]
    char *v23;  // [bp-0xa8]
    unsigned long long v24;  // [bp-0xa0]
    char *v25;  // [bp-0x98]
    unsigned long long v26;  // [bp-0x90]
    char *v27;  // [bp-0x88]
    unsigned long long v28;  // [bp-0x80]
    char v29;  // [bp-0x78]
    unsigned long long v30;  // [bp-0x68]
    char *v31;  // [bp-0x60], Other Possible Types: char
    unsigned long long v32;  // [bp-0x58]
    unsigned long long v34;  // rbx
    unsigned long long v35;  // r14
    unsigned long long v36;  // r12
    unsigned long long v37;  // r15
    unsigned long long v38;  // r9
    unsigned long v39;  // rdx, Other Possible Types: unsigned long long
    unsigned long long v40;  // rax
    char v44;  // cl

    v31.zip(a1, a2);
    v17.next(&v31);
    if (v18)
    {
        v16 = a3->field_60;
        v15 = a3->field_68;
        v0 = a3->field_c8;
        v14 = a3->field_b8;
        v19 = v18;
        do
        {
            v34 = v19;
            v35 = v20;
            v36 = v21;
            v37 = v22;
            v12 = v36;
            v13 = v37;
            if ((char)uucore::features::ranges::contain(v16, v15, *((long long *)&v17)))
            {
                v38 = v35;
                if (*((long long *)&v17) > 1)
                {
                    v1 = &g_502540;
                    v3 = 1;
                    v4 = 8;
                    *((uint128_t *)&v6) = 0;
                    std::io::stdio::_print(&v1);
                    if (!1.get(v34, v35))
                        core::str::slice_error_fail(v34, v35, 1, v35, &g_502568); /* do not return */
                    v38 = v39;
                    v36 = v12;
                    v37 = v13;
                }
                uu_numfmt::format::format_string(&v23, v36, v37, a3, !v14 & v35, v38 + v37);
                memcpy(&v9, &v24, 16);
                v11 = v26;
                if (((char)v23 & 1))
                {
                    *((unsigned long long *)&a0[16]) = v11;
                    *((int128_t *)a0) = *((int128_t *)&v9);
                    return v11;
                }
                v30 = v11;
                memcpy(&v29, &v9, 16);
                v27 = &v29;
                v28 = <alloc::string::String as core::fmt::Display>::fmt;
                v1 = &g_4198c0;
                v3 = 1;
                v8 = 0;
                v4 = &v27;
                v5 = 1;
                std::io::stdio::_print(&v1);
                core::ptr::drop_in_place<alloc::string::String>(&v29);
            }
            else
            {
                if ((v0 & 1))
                {
                    v2 = 0;
                    if ((char)core::slice::<impl [T]>::starts_with(v34, v35, ::0x466cd0::core::char::methods::encode_utf8_raw(10, &v2)))
                    {
                        v1 = &g_502540;
                        v3 = 1;
                        v4 = 8;
                        *((uint128_t *)&v7) = 0;
                        std::io::stdio::_print(&v1);
                        v40 = 1.get(v34, v35);
                        if (!v40)
                            core::str::slice_error_fail(v34, v35, 1, v35, &g_502550); /* do not return */
                        v34 = v40;
                        v35 = v39;
                    }
                }
                v9 = v34;
                v10 = v35;
                v23 = &v9;
                v24 = <&T as core::fmt::Display>::fmt;
                v25 = &v12;
                v26 = <&T as core::fmt::Display>::fmt;
                v1 = &g_4195a0;
                v3 = 2;
                v8 = 0;
                v4 = &v23;
                v5 = 2;
                std::io::stdio::_print(&v1);
            }
            v17.next(&v31);
            v19 = v18;
        } while (v19);
    }
    v17 = ((v44 & 1) ? 0 : 10);
    v31 = &v17;
    v32 = <char as core::fmt::Display>::fmt;
    v1 = &g_4198c0;
    v3 = 1;
    v8 = 0;
    v4 = &v31;
    v6 = 1;
    std::io::stdio::_print(&v1);
    *((unsigned long long *)a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
