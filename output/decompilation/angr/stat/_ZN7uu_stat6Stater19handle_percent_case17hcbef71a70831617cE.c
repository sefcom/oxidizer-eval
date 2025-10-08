long long uu_stat::Stater::handle_percent_case(void* a0, unsigned int *a1, unsigned long long a2, unsigned long long *a3, unsigned int a4, unsigned long long a5, unsigned long long a6)
{
    char v0[6];  // [bp-0x110]
    unsigned short v1;  // [bp-0x10c]
    struct_0 *v2;  // [bp-0x108]
    unsigned long long v3;  // [bp-0x100]
    unsigned long long v4;  // [bp-0xf8]
    int v5;  // [bp-0xf8]
    unsigned long long v6;  // [bp-0xf0]
    char *v7;  // [bp-0xe8], Other Possible Types: char, unsigned long, unsigned long long
    unsigned int v8;  // [bp-0xe0], Other Possible Types: unsigned long long
    void* v9;  // [bp-0xd8]
    void* v10;  // [bp-0xc0]
    unsigned long v11;  // [bp-0xb8]
    char v12;  // [bp-0xa8]
    char v13;  // [bp-0xa0], Other Possible Types: unsigned long long
    unsigned long v14;  // [bp-0x98]
    void* v15;  // [bp-0x90], Other Possible Types: unsigned long long
    int v16;  // [bp-0x88], Other Possible Types: unsigned long long
    char *v17;  // [bp-0x80]
    char v18;  // [bp-0x78], Other Possible Types: unsigned long long
    char v19;  // [bp-0x70], Other Possible Types: unsigned int
    void* v20;  // [bp-0x68]
    unsigned long v21;  // [bp-0x60]
    char *v22;  // [bp-0x58]
    unsigned long long v23;  // [bp-0x50]
    int v24;  // [bp-0x48], Other Possible Types: char
    char v25;  // [bp-0x38]
    unsigned long long v26;  // r12
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax
    unsigned long long v29;  // rax
    unsigned long v30;  // rdx
    unsigned long v31;  // rax
    void* v32;  // rcx
    unsigned long long v33;  // rax
    unsigned long long v34;  // rbp
    unsigned long long *v35;  // rdx
    unsigned int *v36;  // rdi
    unsigned long long v38;  // rbx
    unsigned long long v39;  // r15
    unsigned int v40;  // edx
    unsigned long v41;  // rax

    v26 = *(a3);
    v27 = v26 + 1;
    *(a3) = v27;
    if (v27 < a4)
    {
        if (v27 >= a2)
        {
            core::panicking::panic_bounds_check(v27, a2, &g_519d60); /* do not return */
        }
        else if (a1[1 + v26] == 37)
        {
            *(a3) = v26 + 2;
        }
        else
        {
            v1 = 0;
            *((unsigned int *)&v0) = 0;
            a1.process_flags(a2, a3, a4, &v0);
            v38 = *(a3);
            v28 = v38.get(a5, a6);
            if (!v28)
                core::str::slice_error_fail(a5, a6, v38, a6, &g_519d78); /* do not return */
            v19.scan_num(v28, a2);
            if ((v19 & 1))
            {
                v38 += v21;
                if (v38 >= a4)
                {
LABEL_47530c:
                    v4 = v26;
                    v6 = v38.min(a4 - 1);
                    v7 = 0;
                    v29 = v4.index(a1, a2);
                    v12.collect(v29, v29 + v30 * 4);
                    v15 = 0;
                    *((int128_t *)&v16) = *((int128_t *)&v13);
                    v18 = 1;
                    v22 = &v15;
                    v23 = <os_display::Quoted as core::fmt::Display>::fmt;
                    *((unsigned long long **)&v5) = &g_5199e0;
                    v6 = 2;
                    v9 = 0;
                    v7 = &v22;
                    v8 = 1;
                    v24.map_or_else(&(unsigned long long)v5);
                    v8 = 1;
                    v5 = v24;
                    v7 = *((long long *)&v25);
                    *((double *)&v2->field_8) = (unsigned long long)v5.new();
                    v2->field_10 = &g_519a38;
                    v2->field_0 = 5;
                    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v12);
                }
                if (v38 >= a2)
                    core::panicking::panic_bounds_check(v38, a2, &g_519d90); /* do not return */
                if (a1[v38] == 37)
                    goto LABEL_47530c;
                v10 = v20;
            }
            else
            {
                v10 = 0;
            }
            v31 = uu_stat::check_bound(a5, a6, a4, v26, v38);
            if (v31)
            {
LABEL_475452:
                v32 = a0;
            }
            else
            {
                if (v38 >= v3)
                    core::panicking::panic_bounds_check(v38, v3, &g_519dc0); /* do not return */
                if (a1[v38] != 46)
                {
                    v36 = a1;
                    v34 = 0;
                    v32 = a0;
                    v35 = a3;
LABEL_47551b:
                    *(v35) = v38;
                    v39 = v38 + 1;
                    if ((v39 < a2 & v39 < a4))
                    {
                        v19 = v36[1 + v38];
                        if (v38 >= a2)
                        {
                            core::panicking::panic_bounds_check(v38, a2, &g_519df0); /* do not return */
                        }
                        else if ((v36[v38] | 4) == 76 && (v19 == 114 || v19 == 100))
                        {
                            v15 = &v36[v38];
                            v16 = <char as core::fmt::Display>::fmt;
                            v17 = &v19;
                            v18 = <char as core::fmt::Display>::fmt;
                            v4 = &g_41cfd0;
                            v6 = 2;
                            v9 = 0;
                            v7 = &v15;
                            v8 = 2;
                            v12.map_or_else(&v4);
                            *(v35) = v39;
                            v4 = v13;
                            v6 = v14 + v13;
                            if (((char)core::str::validations::next_code_point(&v4) & 1) && v40 != 0x110000)
                            {
                                v2->field_20 = v1;
                                *((char [6])&v2->field_1c) = v0;
                                v2->field_0 = v34;
                                v2->field_8 = v11;
                                v2->field_10 = v10;
                                v2->field_18 = v40;
                                return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v12);
                            }
                            core::option::unwrap_failed(&g_519e08); /* do not return */
                        }
                    }
                    if (v38 >= a2)
                        core::panicking::panic_bounds_check(v38, a2, &g_519e20); /* do not return */
                    v41 = v36[v38];
                    *((unsigned short *)&v32[32]) = v1;
                    *((char [6])&v32[28]) = v0;
                    *((unsigned long long *)v32) = v34;
                    *((unsigned long *)&v32[8]) = v11;
                    *((void* *)&v32[16]) = v10;
                    *((unsigned int *)&v32[24]) = v41;
                    return v41;
                }
                v38 += 1;
                v31 = uu_stat::check_bound(a5, a6, a4, v26, v38);
                if (v31)
                    goto LABEL_475452;
                v33 = v38.get(a5, a6);
                if (!v33)
                    core::str::slice_error_fail(a5, a6, v38, a6, &g_519dd8); /* do not return */
                (char)v5.scan_num(v33, a2);
                if (((char)v5 & 1))
                {
                    v11 = (unsigned int)v6;
                    v34 = ~((unsigned int)v11) >> 30 & 4294967294;
                    v38 += v7;
                }
                else
                {
                    v34 = 1;
                }
                v31 = uu_stat::check_bound(a5, a6, a4, v26, v38);
                v32 = a0;
                v35 = a3;
                v36 = a1;
                if (!v31)
                    goto LABEL_47551b;
            }
            *((unsigned long *)&v32[8]) = v31;
            *((char **)&v32[16]) = &g_519a38;
            *((unsigned long long *)v32) = 5;
            return &g_519a38;
        }
    }
    *((unsigned long long *)a0) = 3;
    *((unsigned int *)&a0[8]) = 37;
    return v27;
}
