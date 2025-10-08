long long fish::parse_util::detect_errors_in_backgrounded_job(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0x108], Other Possible Types: unsigned long, unsigned long long, char
    char v1;  // [bp-0x108]
    unsigned int v2;  // [bp-0x104]
    char v3;  // [bp-0x100], Other Possible Types: unsigned long, unsigned long long
    void* v4;  // [bp-0xf8], Other Possible Types: unsigned long long
    uint128_t v5;  // [bp-0xf0]
    void* v6;  // [bp-0xd8]
    unsigned long long v7;  // [bp-0xd0]
    void* v8;  // [bp-0xc8]
    int v9;  // [bp-0xb8], Other Possible Types: void*
    unsigned long long v10;  // [bp-0xb0]
    int v11;  // [bp-0xa8], Other Possible Types: void*
    unsigned long v12;  // [bp-0xa0]
    int v13;  // [bp-0x9f]
    unsigned long long v14;  // [bp-0x98]
    char v15;  // [bp-0x90]
    int v16;  // [bp-0x88], Other Possible Types: void*
    unsigned long long v17;  // [bp-0x80]
    int v18;  // [bp-0x78], Other Possible Types: void*
    unsigned long v19;  // [bp-0x70]
    int v20;  // [bp-0x6f]
    unsigned long long v21;  // [bp-0x68]
    char v22;  // [bp-0x60]
    char v23;  // [bp-0x58]
    char v24;  // [bp-0x50]
    char v25;  // [bp-0x40]
    unsigned int v27;  // r14d
    unsigned long long v28;  // rax
    struct_2 *v29;  // rdx
    unsigned long long v30;  // r12
    unsigned long long v31;  // rax
    struct_1 **v32;  // rbp
    unsigned long long v33[2];  // r14
    unsigned long long v34;  // rax
    unsigned long long v35;  // rcx
    char v36;  // al
    unsigned long v37;  // rdx
    unsigned long v38;  // cc_ndep
    unsigned long long v39;  // rax
    struct_0 *v40;  // r14
    char v41;  // bpl
    unsigned int v43;  // edi
    unsigned int v44;  // esi
    char *v46;  // r14

    v0.try_source_range(a1);
    if (*((int *)&v0) != 1)
        return 0;
    v27 = *((int *)&v3);
    v28 = a0.parent(a1, &g_14c3478);
    v29->field_40(&v0, v28);
    if (*((int *)&v0) == 9)
    {
        v30 = v3;
        v31 = a0.parent(v30, &g_14c29c0);
        v32 = v29->field_40;
        v32(&v0, v31);
        if (!(*((long long *)&v0) == 12 || (int)*((long long *)&v0) == 17))
        {
            v32(&v23, v31);
            if (*((int *)&v23) == 37)
            {
                v33 = *((long long *)&v24);
                v34 = v33[0];
                v35 = v33[1];
                v0 = v33[0];
                v3 = v35 * 160 + v34;
                v36 = v0.position(v30);
                if (!(v36 & 1))
                    core::option::expect_failed("Should have found the job in the listUnexpected decorator keyword", 37, &g_14de188); /* do not return */
                v37 = &v29->padding_0[1];
                if ((char)_ccall(4, 24, v29 + 1, 0, _ccall(17, (unsigned long long)(v36 & 1), 0, v38)))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14de1a0); /* do not return */
                if (v37 < v33[1])
                {
                    v39 = v37 * 160;
                    if (*((int *)(v33[0] + v39)) != 2)
                    {
                        v40 = v33[0] + v39;
                        v41 = v40->field_c;
                        v1 = v41;
                        if (!v1.slice_contains(&g_a1e24c, 2))
                        {
                            v0 = &g_14de148;
                            v3 = 1;
                            v4 = 8;
                            v5 = 0;
                            core::panicking::panic_fmt(&v1, &g_14de1b8); /* do not return */
                        }
                        if (!a2)
                            return 1;
                        v16 = 0;
                        v17 = 4;
                        *((uint128_t *)&v18) = 0;
                        *((uint128_t *)&v20) = 0;
                        v1.try_source_range(v40);
                        v43 = 0;
                        if (v1)
                            v43 = v2;
                        v19 = v43.start();
                        v1.try_source_range(v40);
                        v44 = 0;
                        if (v1)
                            v44 = v3;
                        v21 = a0.length(v44);
                        v22 = 1;
                        v6 = 0;
                        v7 = 4;
                        v8 = 0;
                        v0 = 1;
                        *((int *)&v3) = (v41 == 1 ? "a" : "o");
                        v4 = v41 == 1 | 2;
                        fish_printf::printf_impl::sprintf_locale(&v25, &v6, g_14de118[0].localize(), v29, ".", &v0, 1);
                        v25.unwrap(&g_14de1d0);
                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v0);
                        memcpy(&v0, &v6, 16);
                        v4 = 0;
                        v46 = &v16;
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v16);
                        v18 = 0;
                        *((int128_t *)&v16) = *((int128_t *)&v0);
                        a2.push(v46, 0x14de1d0);
                        return 1;
                    }
                }
            }
        }
        else if (a2)
        {
            v9 = 0;
            v10 = 4;
            *((uint128_t *)&v11) = 0;
            *((uint128_t *)&v13) = 0;
            v12 = v2.start();
            v14 = a0.length(v27);
            v15 = 1;
            v0 = 0;
            v3 = 4;
            v4 = 0;
            fish_printf::printf_impl::sprintf_locale(&(char)v6, &v0, g_14de158[0].localize(), v29, ".", 8, 0);
            (char)v6.unwrap(&g_14de170);
            memcpy(&(char)v6, &v0, 16);
            v8 = 0;
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v9);
            v11 = 0;
            *((int128_t *)&v9) = *((int128_t *)&v6);
            a2.push(&v9, &g_14de170);
            return (unsigned int)v32 & 0xffffff00 | 1;
        }
        else
        {
            return (unsigned int)v32 & 0xffffff00 | 1;
        }
    }
    return 0;
}
