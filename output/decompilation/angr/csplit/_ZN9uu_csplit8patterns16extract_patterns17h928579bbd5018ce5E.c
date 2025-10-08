long long uu_csplit::patterns::extract_patterns(unsigned long a0, unsigned long long a1[3], unsigned long long a2)
{
    unsigned int v0;  // [bp-0x1f4]
    unsigned long long v1;  // [bp-0x1f0]
    unsigned int v2;  // [bp-0x1e4]
    struct_0 *v3;  // [bp-0x1e0]
    int v4;  // [bp-0x1d8]
    unsigned int v5;  // [bp-0x1d8]
    unsigned long long v6;  // [bp-0x1d0]
    int v7;  // [bp-0x1c8], Other Possible Types: char
    unsigned long long v8;  // [bp-0x1c8]
    unsigned long long v9;  // [bp-0x1c0]
    int v10;  // [bp-0x1b8]
    int v11;  // [bp-0x1a8]
    unsigned long long v12;  // [bp-0x1a0]
    unsigned long long v13;  // [bp-0x198]
    char v14;  // [bp-0x190]
    unsigned int v15;  // [bp-0x190]
    unsigned int v16;  // [bp-0x18c]
    int v17;  // [bp-0x188], Other Possible Types: char
    unsigned long long v18;  // [bp-0x180]
    int v19;  // [bp-0x178]
    unsigned long long v20;  // [bp-0x168]
    unsigned long long v21;  // [bp-0x160]
    int v22;  // [bp-0x158]
    int v23;  // [bp-0x158]
    int v24;  // [bp-0x158]
    int v25;  // [bp-0x148]
    void* v26;  // [bp-0x138]
    void* v27;  // [bp-0x138]
    unsigned long long v28[3];  // [bp-0x130]
    unsigned long long v29[3];  // [bp-0x128]
    unsigned long long v30;  // [bp-0x120]
    unsigned long long v31;  // [bp-0x118]
    unsigned long long v32;  // [bp-0x110]
    void* v33;  // [bp-0x108]
    unsigned long long v34;  // [bp-0x100]
    unsigned long long v35;  // [bp-0xf8]
    int v36;  // [bp-0xf0]
    char v37;  // [bp-0xe0]
    unsigned long long v38;  // [bp-0xd8]
    int v39;  // [bp-0xd0]
    int v40;  // [bp-0xc0]
    int v41;  // [bp-0xb0]
    unsigned long long v42;  // [bp-0xa0]
    int v43;  // [bp-0x98]
    int v44;  // [bp-0x88]
    char v45;  // [bp-0x70]
    char v46;  // [bp-0x50]
    unsigned long long v48;  // rdx
    char *v49;  // rbp
    char *v50;  // r15
    char *v51;  // r12
    unsigned long long v52[3];  // rax
    unsigned long long v53;  // rbx
    int v54;  // xmm0
    unsigned long long v55;  // rax
    int v56;  // xmm0
    unsigned long long v57;  // r15
    unsigned long long v58;  // r14
    unsigned long long v60;  // r12
    unsigned long long v61;  // rax
    unsigned long long v62;  // rax
    unsigned long long v63;  // rax
    unsigned long long v64;  // rax

    v31 = a2.with_capacity_in(8, 56, &g_642b10);
    v32 = v48;
    v33 = 0;
    (char)v4.new("^(/(?P<UPTO>.+)/|%(?P<SKIPTO>.+)%)(?P<OFFSET>[\\+-]?\\d+)?$^\\{(?P<TIMES>\\d+)|\\*\\}$/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.1/src/regex/string.rs: warning: line number '' is the same as preceding line number\n", 57);
    v2 = (int)v45.unwrap(&(char)v4, &g_642b28) & 0xffffff00 | 1;
    (char)v4.new("^\\{(?P<TIMES>\\d+)|\\*\\}$/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.1/src/regex/string.rs: warning: line number '' is the same as preceding line number\n", 23);
    v46.unwrap(&(char)v4, &g_642b40);
    v29[0] = a1;
    v30 = &a1[a2];
    v49 = &v7;
    v50 = &v37;
    v51 = &v14;
    while (true)
    {
        v26 = 0;
        v28 = v29;
        if (v28 == v30)
        {
            *((unsigned long long *)((char *)&v3->field_8 + 8)) = 0;
            *((int128_t *)&(&v3->field_0)[1]) = *((int128_t *)&v31);
            v3->field_0 = 13;
            v2 = 0;
            core::ptr::drop_in_place<regex::regex::string::Regex>(&v46);
            return core::ptr::drop_in_place<regex::regex::string::Regex>(&v45);
        }
        v29[0] = v28 + 1;
        v52 = *((long long *)v26.get_or_insert_with(&v29));
        if (v52)
        {
            v50.captures_at(&v46, v52[1], v52[2]);
            v53 = 1;
            v1 = 1;
            if (*((int *)&v37) != 2)
            {
                v13 = v42;
                v54 = *((int128_t *)&v37);
                v11 = v41;
                v10 = v40;
                v7 = v39;
                v4 = v54;
                v27 = 0;
                if (!((char)v27 & 1) && v29 != v30)
                    v29[0] = v29 + 1;
                v51.get_group_by_name(&v7, "TIMESOFFSETSKIPTOsrc/uu/csplit/src/patterns.rs", 5);
                if (((char)v15 & 1))
                {
                    v55 = (long long)v17.get(v18, v12, v13);
                    if (!v55)
                        core::str::slice_error_fail(v12, v13, (long long)v17, v18, &g_642b58); /* do not return */
                    v51 = &v14;
                    ::0x51cb20::core::num::<impl usize>::from_ascii_radix(&v14, v55, a2);
                    v50 = &v37;
                    v53 = v14.unwrap() + 1;
                    v1 = 1;
                }
                else
                {
                    v1 = 0;
                }
                core::ptr::drop_in_place<regex::regex::string::Captures>(&(char)v4);
            }
        }
        else
        {
            v53 = 1;
            v1 = 1;
        }
        v50.captures_at(&v45, v28[1], v28[2]);
        if (*((int *)&v37) == 2)
        {
            core::ptr::drop_in_place<core::option::Option<regex::regex::string::Captures>>(v50);
            ::0x51cb20::core::num::<impl usize>::from_ascii_radix(v50, v28[1], v28[2]);
            if (v37 != 1)
            {
                v6 = v38;
                v8 = v1;
                v9 = v53;
                v5 = 0;
                v31.push(&v5, &g_642bd0);
                continue;
            }
            else
            {
                (char)v4.clone(v28);
                *((unsigned long long *)((char *)&v3->field_8 + 8)) = v8;
                *((int128_t *)&(&v3->field_0)[1]) = (int128_t)v4;
                v3->field_0 = 7;
                break;
            }
        }
        v13 = v42;
        v56 = *((int128_t *)&v37);
        v11 = v41;
        v10 = v40;
        v7 = v39;
        v4 = v56;
        v51.get_group_by_name(v49, "OFFSETSKIPTOsrc/uu/csplit/src/patterns.rs", 6);
        if (((char)v15 & 1))
        {
            v57 = v12;
            v58 = v13;
            v60 = v18;
            v61 = (long long)v17.get(v60, v57, v58);
            if (!v61)
                core::str::slice_error_fail(v57, v58, (long long)v17, v60, &g_642b58); /* do not return */
            v0 = core::num::<impl i32>::from_ascii_radix(v61, v48).unwrap();
            v49 = &v7;
            v50 = &v37;
            v51 = &v14;
        }
        else
        {
            v0 = 0;
        }
        v51.get_group_by_name(v49, "UPTOQ", 4);
        if (v15 == 1)
        {
            v57 = v12;
            v58 = v13;
            v60 = v18;
            v62 = (long long)v17.get(v60, v57, v58);
            if (!v62)
                core::str::slice_error_fail(v57, v58, (long long)v17, v60, &g_642b58); /* do not return */
            v34.new(v62, a2);
            v49 = &v7;
            v50 = &v37;
            v51 = &v14;
            if (v34)
            {
                memcpy(&v25, &v36, 16);
                memcpy(&v22, &v34, 16);
                v24 = v23;
            }
            else
            {
                uu_csplit::patterns::extract_patterns::{{closure}}(&v14, v28, &v35);
                v63 = *((long long *)&v15);
                memcpy(&v22, &v17, 16);
                v25 = v19;
                v24 = v22;
                if (v63 != 13)
                    goto LABEL_520f02;
            }
            v22 = v24;
            v44 = v25;
            v43 = v22;
            v19 = v44;
            v17 = v22;
            v16 = v0;
            v20 = v1;
            v21 = v53;
            v15 = 1;
            v31.push(&v15, &g_642ba0);
        }
        else
        {
            v51.get_group_by_name(v49, "SKIPTOsrc/uu/csplit/src/patterns.rs", 6);
            if (((char)v15 & 1))
            {
                v57 = v12;
                v58 = v13;
                v60 = v18;
                v64 = (long long)v17.get(v60, v57, v58);
                if (!v64)
                    core::str::slice_error_fail(v57, v58, (long long)v17, v60, &g_642b58); /* do not return */
                v34.new(v64, a2);
                v49 = &v7;
                v50 = &v37;
                v51 = &v14;
                if (v34)
                {
                    memcpy(&v25, &v36, 16);
                    memcpy(&v22, &v34, 16);
                    v24 = v23;
                }
                else
                {
                    uu_csplit::patterns::extract_patterns::{{closure}}(&v14, v28, &v35);
                    v63 = *((long long *)&v15);
                    memcpy(&v22, &v17, 16);
                    v25 = v19;
                    v24 = v22;
                    if (v63 != 13)
                    {
LABEL_520f02:
                        v44 = v25;
                        v43 = v22;
                        *((void*)((char *)&v3->field_8 + 8)) = v25;
                        *((void*)&(&v3->field_0)[1]) = v22;
                        v3->field_0 = v63;
                        core::ptr::drop_in_place<regex::regex::string::Captures>(&(char)v4);
                        break;
                    }
                }
                v22 = v24;
                v44 = v25;
                v43 = v22;
                v19 = v44;
                v17 = v22;
                v16 = v0;
                v20 = v1;
                v21 = v53;
                v15 = 2;
                v31.push(&v15, &g_642bb8);
            }
        }
        core::ptr::drop_in_place<regex::regex::string::Captures>(&(char)v4);
    }
    core::ptr::drop_in_place<regex::regex::string::Regex>(&v46);
    core::ptr::drop_in_place<regex::regex::string::Regex>(&v45);
    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<uu_csplit::patterns::Pattern>>(&v31);
}
