long long uu_numfmt::format::format_string(void* a0, unsigned long long a1, unsigned long long a2, struct_0 *a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x158], Other Possible Types: unsigned long, unsigned long long
    char v1;  // [bp-0x150], Other Possible Types: unsigned long long
    char *v2;  // [bp-0x148], Other Possible Types: unsigned long long
    int v3;  // [bp-0x140], Other Possible Types: unsigned long long
    void* v4;  // [sp-0x138], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v5;  // [sp-0x130]
    int v6;  // [bp-0x128], Other Possible Types: char
    unsigned long long v7;  // [bp-0x118]
    char *v8;  // [sp-0x108], Other Possible Types: char, unsigned long long
    unsigned long v9;  // [sp-0x100], Other Possible Types: unsigned long long
    char *v10;  // [sp-0xf8], Other Possible Types: void*, unsigned long long
    unsigned long long v11;  // [sp-0xf0], Other Possible Types: unsigned short
    void* v12;  // [bp-0xe8]
    int v13;  // [bp-0xd8]
    unsigned long long v14;  // [bp-0xc8]
    int v15;  // [bp-0xb8]
    unsigned long long v16;  // [bp-0xa8]
    unsigned long v17;  // [bp-0x98]
    unsigned long long v18;  // [bp-0x88]
    unsigned long long v19;  // [bp-0x80]
    unsigned long v20;  // [bp-0x70]
    int v21;  // [bp-0x68], Other Possible Types: char
    unsigned long long v22;  // [bp-0x58]
    int v23;  // [bp-0x48], Other Possible Types: char
    char v24;  // [bp-0x38]
    unsigned long long v26;  // 4096
    unsigned long long v27;  // rax
    unsigned long long v28;  // rdx
    void* v29;  // r12
    char v30;  // r13b
    unsigned long long v31;  // rax
    unsigned long long v32;  // rax
    unsigned long long v33;  // r12
    unsigned long long v35;  // r12
    unsigned long long v37;  // r15
    unsigned long long v39;  // rax
    unsigned long long v40;  // rax

    v19 = a4;
    v26 = a1;
    if (!((char)(((0 ^ a3->field_88) & (0 ^ -(a3->field_88))) >> 63)))
    {
        v27 = a3->field_90.strip_suffix_of(a3->field_98, a1, a2);
        if (v27)
        {
            a2 = v28;
            if (!v27)
                goto LABEL_46a5ce;
LABEL_46a5cd:
            v26 = v27;
        }
        else
        {
            a2 = a2;
            if (v27)
                goto LABEL_46a5cd;
LABEL_46a5ce:
            v26 = a1;
        }
    }
    v20 = a3->field_88;
    if (a3->field_10 == 1)
    {
        v29 = a3->field_18;
    }
    else if (a3->field_b0 == 5)
    {
        v30 = 5;
        if (a3->field_b1 != 5)
            goto LABEL_46a618;
        v29 = uu_numfmt::format::parse_implicit_precision(v26, a2);
    }
    else
    {
LABEL_46a618:
        v29 = 0;
    }
    uu_numfmt::format::transform_from(&v8, v26, a2, *((long long *)&a3->field_a0), v30);
    v31 = v8;
    if (v8 == 0x8000000000000000)
    {
        uu_numfmt::format::transform_to(&v0, *((long long *)&a3->field_a8), a3->field_b1, a3->field_ca, v29);
        memcpy(&v6, &v1, 16);
        v7 = v3;
        if (*((int *)&v0) == 1)
        {
            v31 = v7;
            *((unsigned long long *)&a0[24]) = v7;
            a0[8] = v6;
        }
        else
        {
            v22 = v7;
            memcpy(&v21, &v6, 16);
            if (v20 == 0x8000000000000000)
            {
                v16 = v22;
                v15 = v21;
                v32 = a5;
                if (!(a3->field_0 & 1))
                    goto LABEL_46a7dc;
LABEL_46a729:
                v33 = a3->field_8;
            }
            else
            {
                v17 = &a3->field_88;
                v8 = &v21;
                v9 = <alloc::string::String as core::fmt::Display>::fmt;
                v10 = &v17;
                v11 = <&T as core::fmt::Display>::fmt;
                v0 = &g_4195a0;
                v1 = 2;
                v4 = 0;
                v2 = &v8;
                v3 = 2;
                v6.map_or_else(&v0);
                v15 = v6;
                v16 = v7;
                v32 = a5;
                if ((a3->field_0 & 1))
                    goto LABEL_46a729;
LABEL_46a7dc:
                v33 = v32;
                if (!((char)v19 & 1))
                    v33 = a3->field_b8;
            }
            v35 = v33;
            if (!v35)
            {
                v14 = v16;
                v13 = v15;
            }
            else if (v35 <= 0)
            {
                v39 = -(v35);
                if (v39 > 65535)
                {
                    v0 = &g_502460;
                    v1 = 1;
                    v2 = 8;
                    *((uint128_t *)&v3) = 0;
                    core::panicking::panic_fmt(&v0, &g_5024a0); /* do not return */
                }
                v8 = &v15;
                v9 = <alloc::string::String as core::fmt::Display>::fmt;
                v10 = 0;
                v11 = v39;
                v0 = &g_4198c0;
                v1 = 1;
                v4 = &g_41acd8;
                v5 = 1;
                v2 = &v8;
                v3 = 2;
                v6.map_or_else(&v0);
                goto LABEL_46aa72;
            }
            else if (a3->field_51 != 1)
            {
                if (v35 > 65535)
                {
                    v0 = &g_502460;
                    v1 = 1;
                    v2 = 8;
                    *((uint128_t *)&v3) = 0;
                    core::panicking::panic_fmt(&v0, &g_5024b8); /* do not return */
                }
                v8 = &v15;
                v9 = <alloc::string::String as core::fmt::Display>::fmt;
                v10 = 0;
                v11 = v35;
                v0 = &g_4198c0;
                v1 = 1;
                v4 = &g_41ad08;
                v5 = 1;
                v2 = &v8;
                v3 = 2;
                v6.map_or_else(&v0);
LABEL_46aa72:
                v13 = v6;
                v14 = v7;
            }
            else if (v35 <= 65535)
            {
                v8 = &v15;
                v9 = <alloc::string::String as core::fmt::Display>::fmt;
                v10 = 0;
                v11 = v35;
                v0 = &g_4198c0;
                v1 = 1;
                v4 = &g_41ad38;
                v5 = 1;
                v2 = &v8;
                v3 = 2;
                v6.map_or_else(&v0);
                memcpy(&v17, &v6, 16);
                v18 = v7;
                if (!((char)v19 & 1))
                    v32 = a3->field_b8;
                if (v32)
                {
                    if (v32 <= 0)
                    {
                        v37 = -(v32);
                        if (v37 > 65535)
                        {
                            v0 = &g_502460;
                            v1 = 1;
                            v2 = 8;
                            *((uint128_t *)&v3) = 0;
                            core::panicking::panic_fmt(&v0, &g_5024d0); /* do not return */
                        }
                        v8 = &v17;
                        v9 = <alloc::string::String as core::fmt::Display>::fmt;
                        v10 = 0;
                        v11 = v37;
                        v0 = &g_4198c0;
                        v1 = 1;
                        v4 = &g_41acd8;
                        v5 = 1;
                        v2 = &v8;
                        v3 = 2;
                        v6.map_or_else(&v0);
                    }
                    else if (v32 <= 65535)
                    {
                        v8 = &v17;
                        v9 = <alloc::string::String as core::fmt::Display>::fmt;
                        v10 = 0;
                        v11 = v32;
                        v0 = &g_4198c0;
                        v1 = 1;
                        v4 = &g_41ad08;
                        v5 = 1;
                        v2 = &v8;
                        v3 = 2;
                        v6.map_or_else(&v0);
                    }
                    else
                    {
                        v0 = &g_502460;
                        v1 = 1;
                        v2 = 8;
                        *((uint128_t *)&v3) = 0;
                        core::panicking::panic_fmt(&v0, &g_5024e8); /* do not return */
                    }
                    v13 = v6;
                    v14 = v7;
                    core::ptr::drop_in_place<alloc::string::String>(&v17);
                }
                else
                {
                    v14 = v18;
                    memcpy(&v13, &v17, 16);
                }
            }
            else
            {
                v0 = &g_502460;
                v1 = 1;
                v2 = 8;
                *((uint128_t *)&v3) = 0;
                core::panicking::panic_fmt(&v0, &g_502500); /* do not return */
            }
            v0 = &a3->padding_20;
            v1 = <alloc::string::String as core::fmt::Display>::fmt;
            v2 = &v13;
            v3 = <alloc::string::String as core::fmt::Display>::fmt;
            v4 = &a3->padding_20[24];
            v5 = <alloc::string::String as core::fmt::Display>::fmt;
            v8 = &g_41aca8;
            v9 = 3;
            v12 = 0;
            v10 = &v0;
            v11 = 3;
            v23.map_or_else(&v8);
            *((long long *)&a0[24]) = *((long long *)&v24);
            a0[8] = v23;
            *((unsigned long long *)a0) = 0;
            v40 = (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v13);
            if (v35)
                v40 = (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v15);
            if (v20 != 0x8000000000000000)
                return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v21);
            return v40;
        }
    }
    else
    {
        *((unsigned long long *)&a0[8]) = v8;
        *((unsigned long *)&a0[16]) = v9;
        *((unsigned long long *)&a0[24]) = v10;
    }
    *((unsigned long long *)a0) = 1;
    return v31;
}
