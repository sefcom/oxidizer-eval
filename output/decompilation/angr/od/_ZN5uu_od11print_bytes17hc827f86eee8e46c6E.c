long long uu_od::print_bytes(unsigned long long a0, unsigned long a1, struct_2 *a2, unsigned long long a3[6])
{
    char *v0;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x160]
    char *v2;  // [sp-0x158]
    unsigned long long v3;  // [sp-0x150]
    void* v4;  // [sp-0x148], Other Possible Types: char *
    unsigned long long v5;  // [sp-0x140]
    unsigned int v6;  // [bp-0x134]
    unsigned long long v7;  // [bp-0x130]
    unsigned long long v8;  // [bp-0x128]
    char *v9;  // [bp-0x120], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x118]
    void* v11;  // [bp-0x110]
    unsigned long long v12;  // [sp-0x108]
    char v13;  // [sp-0x100]
    unsigned long long v14;  // [bp-0xf8]
    unsigned long long v15;  // [bp-0xe8]
    unsigned long long v16;  // [bp-0xd8]
    unsigned long long v17;  // [bp-0xd0]
    char v18;  // [bp-0xc8]
    unsigned long v19;  // [bp-0xc0]
    unsigned long long v20;  // [bp-0xb8]
    unsigned long long v21;  // [sp-0xb0]
    char *v22;  // [sp-0xa8], Other Possible Types: void*
    unsigned long v23;  // [sp-0xa0], Other Possible Types: unsigned long long
    char *v24;  // [bp-0x98]
    unsigned long long v25;  // [bp-0x90]
    unsigned long long v26;  // [bp-0x88]
    void* v27;  // [bp-0x78]
    unsigned long long v28;  // [bp-0x70]
    void* v29;  // [bp-0x68]
    unsigned long v30;  // [bp-0x60]
    unsigned long v31;  // [bp-0x58]
    unsigned long long v32;  // [bp-0x50]
    char v33;  // [bp-0x48]
    struct_1 *v35;  // rax
    unsigned long long v36;  // rbx
    unsigned int v37;  // eax
    void* v38;  // rbp
    unsigned long long v39;  // rdx
    struct_0 **v41;  // r12
    unsigned long long v44;  // rax
    void* v45;  // r14

    v26 = a0;
    v31 = a3[1];
    v32 = a3[2] * 104 + a3[1];
    v35 = v31.next();
    if (!v35)
        return v35;
    v19 = a2->field_8;
    v30 = a3[4];
    v36 = a3[5];
    v37 = (unsigned int)a3[4] & 0xffffff00 | 1;
    while (true)
    {
        v6 = v37;
        v27 = 0;
        v28 = 1;
        v29 = 0;
        if (v19)
        {
            if (v36)
            {
                v38 = 0;
                do
                {
                    if ((v38 | v36) >> 32)
                    {
                        v39 = ((unsigned long long)((0 CONCAT v38) % v36) CONCAT (unsigned long long)((0 CONCAT v38) / v36)) >> 64;
                        if (v39 >= 8)
                            core::panicking::panic_bounds_check(v39, 8, &g_5957f0); /* do not return */
                    }
                    else
                    {
                        v39 = ((unsigned int)((0 CONCAT (unsigned int)v38) % (v36 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v38) / (v36 & 4294967295))) >> 32;
                        if (v39 >= 8)
                            core::panicking::panic_bounds_check(v39, 8, &g_5957f0); /* do not return */
                    }
                    v20 = &g_432030;
                    v21 = <&T as core::fmt::Display>::fmt;
                    v22 = 0;
                    v23 = *((long long *)&v35->padding_18[8 + 8 * v39]);
                    v7 = 2;
                    v9 = 1;
                    v10 = 1;
                    v11 = 0;
                    v12 = 32;
                    v13 = 1;
                    v0 = &g_432030;
                    v1 = 1;
                    v4 = &v7;
                    v5 = 1;
                    v2 = &v20;
                    v3 = 2;
                    (unsigned int)v27.spec_write_fmt(&v0).unwrap(&g_595808);
                    v41 = v35->field_8;
                    if (v35->field_0 == 2)
                    {
                        v41(&v7, a2.get_full_buffer(v38));
                        v27.append_elements(v8, v9, &g_595640);
                        ::0x4aa180::core::ptr::drop_in_place<alloc::string::String>(&v7);
                    }
                    else if ((unsigned int)v35->field_0 == 1)
                    {
                        a2.read_float(v38, v35->field_10);
                        v41(&v7);
                        v27.append_elements(v8, v9, &g_595640);
                        ::0x4aa180::core::ptr::drop_in_place<alloc::string::String>(&v7);
                    }
                    else
                    {
                        v41(&v7, a2.read_uint(v38, v35->field_10));
                        v27.append_elements(v8, v9, &g_595640);
                        ::0x4aa180::core::ptr::drop_in_place<alloc::string::String>(&v7);
                    }
                    v38 += v35->field_10;
                } while (v38 < v19);
            }
            else
            {
                core::panicking::panic_const::panic_const_rem_by_zero(&g_5957d8); /* do not return */
            }
        }
        if (v35->field_60)
        {
            v44 = 1.count(1);
            v45 = v30 - v44;
            if (v30 < v44)
                v45 = 0;
            uu_od::prn_char::format_ascii_dump(&v33, a2.get_buffer(0), a2);
            v0 = &g_432030;
            v1 = <&T as core::fmt::Display>::fmt;
            v2 = &v33;
            v3 = <alloc::string::String as core::fmt::Display>::fmt;
            v4 = 0;
            v5 = v45;
            v7 = 2;
            v9 = 1;
            v10 = 2;
            v11 = 0;
            v12 = 32;
            v13 = 1;
            v14 = 2;
            v15 = 2;
            v16 = 1;
            v17 = 32;
            v18 = 3;
            v20 = &g_5957a0;
            v21 = 2;
            v24 = &v7;
            v25 = 2;
            v22 = &v0;
            v23 = 3;
            (unsigned int)v27.spec_write_fmt(&v20).unwrap(&g_5957c0);
            ::0x4aa180::core::ptr::drop_in_place<alloc::string::String>(&v33);
        }
        if (((char)v6 & 1))
        {
            v0 = &v26;
            v1 = <&T as core::fmt::Display>::fmt;
            v7 = &g_432030;
            v8 = 1;
            v11 = 0;
            v9 = &v0;
            v10 = 1;
            std::io::stdio::_print(&v7);
        }
        else
        {
            v20 = &g_432030;
            v21 = <&T as core::fmt::Display>::fmt;
            v22 = 0;
            v23 = v26.count(a1 + v26);
            v7 = 2;
            v9 = 1;
            v10 = 1;
            v11 = 0;
            v12 = 32;
            v13 = 1;
            v0 = &g_432030;
            v1 = 1;
            v4 = &v7;
            v5 = 1;
            v2 = &v20;
            v3 = 2;
            std::io::stdio::_print(&v0);
        }
        v0 = &v27;
        v1 = <alloc::string::String as core::fmt::Display>::fmt;
        v7 = &g_5956b8;
        v8 = 2;
        v11 = 0;
        v9 = &v0;
        v10 = 1;
        std::io::stdio::_print(&v7);
        ::0x4aa180::core::ptr::drop_in_place<alloc::string::String>(&v27);
        v35 = v31.next();
        v37 = 0;
        if (!v35)
            return 0;
    }
}
