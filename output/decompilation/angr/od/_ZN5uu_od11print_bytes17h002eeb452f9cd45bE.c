long long uu_od::print_bytes(unsigned long long a0, unsigned long a1, struct_3 *a2)
{
    char v0;  // [bp-0x111]
    unsigned long long v1;  // [bp-0x110]
    unsigned long long v2;  // [bp-0x108]
    char *v3;  // [bp-0x100], Other Possible Types: unsigned long long
    int v4;  // [bp-0xf8], Other Possible Types: unsigned long long
    void* v5;  // [bp-0xf0], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0xe8], Other Possible Types: unsigned short
    unsigned int v7;  // [bp-0xdc]
    char *v8;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0xd0]
    void* v10;  // [bp-0xc8], Other Possible Types: char *
    unsigned short v11;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0xb8]
    unsigned long long v13;  // [sp-0xb0]
    unsigned long v14;  // [bp-0xa0]
    unsigned long v15;  // [bp-0x98]
    unsigned long long v16;  // [bp-0x90]
    void* v17;  // [bp-0x80]
    unsigned long long v18;  // [bp-0x78]
    void* v19;  // [bp-0x70]
    unsigned long long v20;  // [bp-0x68]
    unsigned long long v21;  // [bp-0x60]
    void* v22;  // [bp-0x58]
    unsigned short v23;  // [bp-0x50]
    unsigned long v24;  // [bp-0x48]
    unsigned long long v25;  // [bp-0x40]
    unsigned long v26;  // [bp-0x38]
    struct_2 *v28;  // rcx
    unsigned long long v29;  // rax
    struct_1 *v30;  // r12
    unsigned long v31;  // rax
    unsigned long long v32;  // rbp
    struct_1 *v33;  // r12
    void* v34;  // rbx
    unsigned long long v35;  // rdx
    struct_0 **v37;  // r15
    unsigned long long v40;  // rax
    void* v41;  // rbx
    unsigned long long v44;  // rax
    unsigned long v45;  // rcx

    v16 = a0;
    v29 = v28->field_10;
    if (!v29)
        return v29;
    v30 = v28->field_8;
    v25 = 104 * v29 + (char *)v30;
    v31 = (char *)&v30[1].field_0 + 7;
    v14 = a2->field_0;
    v15 = a2->field_8;
    v24 = v28->field_20;
    v32 = v28->field_28;
    v0 = a2->field_18;
    v7 = 1;
    while (true)
    {
        v33 = v30;
        v26 = v31;
        v17 = 0;
        v18 = 1;
        v19 = 0;
        if (v15)
        {
            if (v32)
            {
                v34 = 0;
                do
                {
                    if ((v34 | v32) >> 32)
                    {
                        v35 = ((unsigned long long)((0 CONCAT v34) % v32) CONCAT (unsigned long long)((0 CONCAT v34) / v32)) >> 64;
                        if (v35 >= 8)
                            core::panicking::panic_bounds_check(v35, 8, &g_503aa0); /* do not return */
                    }
                    else
                    {
                        v35 = ((unsigned int)((0 CONCAT (unsigned int)v34) % (v32 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v34) / (v32 & 4294967295))) >> 32;
                        if (v35 >= 8)
                            core::panicking::panic_bounds_check(v35, 8, &g_503aa0); /* do not return */
                    }
                    if (*((long long *)&v33->padding_18[8 + 8 * v35]) > 65535)
                    {
                        v1 = &g_5038d8;
                        v2 = 1;
                        v3 = 8;
                        *((uint128_t *)&v4) = 0;
                        core::panicking::panic_fmt(&v1, &g_503ad0); /* do not return */
                    }
                    v20 = &g_41a940;
                    v21 = <&T as core::fmt::Display>::fmt;
                    v22 = 0;
                    v23 = *((long long *)&v33->padding_18[8 + 8 * v35]);
                    v8 = &g_41a940;
                    v9 = 1;
                    v12 = &g_41d2a8;
                    v13 = 1;
                    v10 = &v20;
                    v11 = 2;
                    (unsigned int)v17.spec_write_fmt(&v8).unwrap(&g_503ab8);
                    v37 = v33->field_8;
                    if (!v33->field_0)
                    {
                        v37(&v1, v14.read_uint(v0, v34, v33->field_10));
                        v17.spec_extend(v2, &v3[v2]);
                    }
                    else if ((unsigned int)v33->field_0 == 1)
                    {
                        v14.read_float(v0, v34, v33->field_10);
                        v37(&v1);
                        v17.spec_extend(v2, &v3[v2]);
                    }
                    else
                    {
                        v37(&v1, a2.get_full_buffer(v34));
                        v17.spec_extend(v2, &v3[v2]);
                    }
                    core::ptr::drop_in_place<alloc::string::String>(&v1);
                    v34 += v33->field_10;
                } while (v34 < v15);
            }
            else
            {
                core::panicking::panic_const::panic_const_rem_by_zero(&g_503a88); /* do not return */
            }
        }
        if (v33->field_60)
        {
            v40 = 1.count(1);
            v41 = v24 - v40;
            if (v24 < v40)
                v41 = 0;
            uu_od::prn_char::format_ascii_dump(&v20, a2.get_buffer(0), a2);
            if (v41 > 65535)
            {
                v1 = &g_5038d8;
                v2 = 1;
                v3 = 8;
                *((uint128_t *)&v4) = 0;
                core::panicking::panic_fmt(&v1, &g_503a70); /* do not return */
            }
            v1 = &g_41a940;
            v2 = <&T as core::fmt::Display>::fmt;
            v3 = &v20;
            v4 = <alloc::string::String as core::fmt::Display>::fmt;
            v5 = 0;
            v6 = (unsigned short)v41;
            v8 = &g_503a20;
            v9 = 2;
            v12 = &g_41df20;
            v13 = 2;
            v10 = &v1;
            v11 = 3;
            (unsigned int)v17.spec_write_fmt(&v8).unwrap(&g_503a40);
            core::ptr::drop_in_place<alloc::string::String>(&v20);
        }
        if (((char)v7 & 1))
        {
            v8 = &v16;
            v9 = <&T as core::fmt::Display>::fmt;
            v1 = &g_41a940;
            v2 = 1;
            v5 = 0;
            v3 = &v8;
            v4 = 1;
            std::io::stdio::_print(&v1);
        }
        else
        {
            v44 = v16.count(a1 + v16);
            if (v44 > 65535)
            {
                v1 = &g_5038d8;
                v2 = 1;
                v3 = 8;
                *((uint128_t *)&v4) = 0;
                core::panicking::panic_fmt(&v1, &g_503a58); /* do not return */
            }
            v8 = &g_41a940;
            v9 = <&T as core::fmt::Display>::fmt;
            v10 = 0;
            v11 = v44;
            v1 = &g_41a940;
            v2 = 1;
            v5 = &g_41d2a8;
            v6 = 1;
            v3 = &v8;
            v4 = 2;
            std::io::stdio::_print(&v1);
        }
        v8 = &v17;
        v9 = <alloc::string::String as core::fmt::Display>::fmt;
        v1 = &g_502418;
        v2 = 2;
        v5 = 0;
        v3 = &v8;
        v4 = 1;
        std::io::stdio::_print(&v1);
        core::ptr::drop_in_place<alloc::string::String>(&v17);
        v45 = v26;
        v7 = 0;
        if (v45 == v25)
        {
            v30 = v45;
            v31 = v45;
            if (v30 == v25)
                return v45;
        }
        else
        {
            v30 = v45;
            v31 = v45 + 104;
            if (v30 == v25)
                return v45 + 104;
        }
    }
}
