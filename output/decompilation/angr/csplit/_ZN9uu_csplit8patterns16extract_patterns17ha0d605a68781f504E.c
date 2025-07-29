long long uu_csplit::patterns::extract_patterns(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x218]
    unsigned int v1;  // [bp-0x214]
    unsigned long long v2;  // [bp-0x210]
    char v3;  // [bp-0x208], Other Possible Types: unsigned int
    int v4;  // [bp-0x207]
    unsigned int v5;  // [bp-0x204]
    int v6;  // [bp-0x200], Other Possible Types: char
    unsigned long long v7;  // [bp-0x1f8]
    int v8;  // [bp-0x1f0]
    unsigned long long v9;  // [bp-0x1e0]
    unsigned long long v10;  // [bp-0x1d8]
    struct_0 *v11;  // [bp-0x1d0]
    int v12;  // [bp-0x1c8], Other Possible Types: char
    unsigned int v13;  // [bp-0x1c8]
    unsigned long long v14;  // [bp-0x1b8]
    int v15;  // [bp-0x1b8]
    unsigned long long v16;  // [bp-0x1b0]
    int v17;  // [bp-0x1a8]
    int v18;  // [bp-0x198]
    unsigned long long v19;  // [bp-0x190]
    unsigned long long v20;  // [sp-0x188]
    int v21;  // [sp-0x178]
    int v22;  // [bp-0x178]
    int v23;  // [bp-0x178]
    int v24;  // [bp-0x168]
    char v25;  // [sp-0x150]
    char v26;  // [sp-0x14f]
    unsigned long long v27;  // [bp-0x148]
    unsigned long long v28;  // [bp-0x140]
    unsigned long long v29;  // [bp-0x138]
    unsigned long long v30;  // [bp-0x130]
    unsigned long long v31;  // [bp-0x128]
    void* v32;  // [bp-0x120]
    void* v33;  // [bp-0x118]
    void* v34;  // [bp-0x118]
    unsigned long long v35[3];  // [bp-0x110]
    struct struct_1 v36[8];  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned long long v37;  // [bp-0x100]
    int v38;  // [sp-0xf8]
    int v39;  // [sp-0xe8]
    char v40;  // [bp-0xd8]
    unsigned long long v41;  // [sp-0xc8]
    struct struct_1 v43[16];  // [bp-0xb8]
    int v44;  // [bp-0xa8]
    int v45;  // [bp-0x98]
    int v46;  // [bp-0x88]
    unsigned long long v47;  // [bp-0x78]
    char v48;  // [bp-0x70]
    char v49;  // [bp-0x50]
    unsigned long long v51;  // rdx
    char *v52;  // rbp
    char *v53;  // r15
    char *v54;  // r13
    char v55;  // al
    unsigned long long v56[3];  // rax
    unsigned long long v57;  // r12
    unsigned long long v58;  // rax
    char v59;  // al
    unsigned long long v60;  // r15
    unsigned long long v61;  // rbp
    unsigned long long v63;  // r14
    unsigned long long v64;  // rax
    unsigned long long v65;  // rax
    unsigned long long v66;  // rax
    unsigned long long v67;  // rax

    v30 = a2.with_capacity_in(8, 56, &g_72f710);
    v31 = v51;
    v32 = 0;
    (char)v12.new("^(/(?P<UPTO>.+)/|%(?P<SKIPTO>.+)%)(?P<OFFSET>[\\+-]?[0-9]+)?$^\\{(?P<TIMES>[0-9]+)|\\*\\}$/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.1/src/regex/string.rs: warning: \n", 60);
    v0 = (int)v48.unwrap(&(char)v12, &g_72f728) & 0xffffff00 | 1;
    (char)v12.new("^\\{(?P<TIMES>[0-9]+)|\\*\\}$/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.1/src/regex/string.rs: warning: \n", 26);
    v49.unwrap(&(char)v12, &g_72f740);
    v52 = &v36;
    v36 = a1;
    v37 = a1 + a2 * 24;
    v53 = &(char)v43;
    v54 = &(char)v12;
    while (true)
    {
        v33 = 0;
        if (!(v55 & 1))
            v35 = v52.next();
        if (!v35)
        {
            *((unsigned long long *)((char *)&v11->field_8 + 8)) = 0;
            *((int128_t *)&(&v11->field_0)[1]) = *((int128_t *)&v30);
            v11->field_0 = 13;
            v0 = 0;
            ::0x59cf90::core::ptr::drop_in_place<regex::regex::string::Regex>(&v49);
            return ::0x59cf90::core::ptr::drop_in_place<regex::regex::string::Regex>(&v48);
        }
        v56 = *((long long *)v33.get_or_insert_with(v52));
        if (v56)
        {
            v53.captures_at(&v49, v56[1], v56[2]);
            v57 = 1;
            v2 = 1;
            if (*((int *)&v43[0]) != 2)
            {
                v20 = v47;
                v18 = v46;
                v17 = v45;
                v15 = v44;
                *((struct struct_1 [16])&v12) = v43;
                v34 = 0;
                if (!((char)v34 & 1))
                    v52.next();
                v3.get_group_by_name(&v14, "TIMESOFFSETSKIPTOsrc/uu/csplit/src/patterns.rs", 5);
                if ((v3 & 1))
                {
                    v58 = *((long long *)&v6).get(v7, v19, v20);
                    if (!v58)
                        core::str::slice_error_fail(v19, v20, *((long long *)&v6), v7, &g_72f758); /* do not return */
                    ::0x59cb80::core::num::<impl u64>::from_str_radix(&v3, v58, a2);
                    if (v3)
                    {
                        v26 = (char)v4;
                        v59 = 1;
                    }
                    else
                    {
                        v27 = *((long long *)&v6);
                    }
                    v53 = &(char)v43;
                    v54 = &(char)v12;
                    v25 = v59;
                    v57 = v25.unwrap() + 1;
                    v2 = 1;
                }
                else
                {
                    v2 = 0;
                }
                core::ptr::drop_in_place<regex::regex::string::Captures>(v54);
            }
        }
        else
        {
            v57 = 1;
            v2 = 1;
        }
        v53.captures_at(&v48, v35[1], v35[2]);
        if (*((int *)&v43[0]) == 2)
        {
            core::ptr::drop_in_place<core::option::Option<regex::regex::string::Captures>>(v53);
            ::0x59cb80::core::num::<impl u64>::from_str_radix(v54, v35[1], v35[2]);
            if (!v12)
            {
                v14 = v2;
                v16 = v57;
                v13 = 0;
                v30.push(v54, &g_72f7d0);
                continue;
            }
            else
            {
                (char)v12.clone(v35);
                *((unsigned long long *)((char *)&v11->field_8 + 8)) = v14;
                *((int128_t *)&(&v11->field_0)[1]) = (int128_t)v12;
                v11->field_0 = 7;
                break;
            }
        }
        v20 = v47;
        v18 = v46;
        v17 = v45;
        v15 = v44;
        *((struct struct_1 [16])&v12) = v43;
        (char)v3.get_group_by_name(&v14, "OFFSETSKIPTOsrc/uu/csplit/src/patterns.rs", 6);
        if ((v3 & 1))
        {
            v60 = v19;
            v61 = v20;
            v63 = v7;
            v64 = *((long long *)&v6).get(v63, v60, v61);
            if (!v64)
                core::str::slice_error_fail(v60, v61, *((long long *)&v6), v63, &g_72f758); /* do not return */
            v1 = core::num::<impl i32>::from_str_radix(v64, v51).unwrap();
            v52 = &v36;
            v53 = &(char)v43;
            v54 = &(char)v12;
        }
        else
        {
            v1 = 0;
        }
        (char)v3.get_group_by_name(&v14, "UPTOQ", 4);
        if (*((int *)&v3) == 1)
        {
            v60 = v19;
            v61 = v20;
            v63 = v7;
            v65 = *((long long *)&v6).get(v63, v60, v61);
            if (!v65)
                core::str::slice_error_fail(v60, v61, *((long long *)&v6), v63, &g_72f758); /* do not return */
            v25.new(v65, a2);
            v52 = &v36;
            v53 = &(char)v43;
            v54 = &(char)v12;
            if (*((long long *)&v25))
            {
                memcpy(&v24, &v28, 16);
                memcpy(&v21, &v25, 16);
                v23 = v22;
            }
            else
            {
                v41 = v29;
                memcpy(&v40, &v27, 16);
                uu_csplit::patterns::extract_patterns::{{closure}}(&(char)v3, v35, &v40);
                v66 = *((long long *)&v3);
                memcpy(&v21, &v6, 16);
                v24 = v8;
                v23 = v21;
                if (!(v66 == 13))
                    goto LABEL_59ed16;
            }
            v21 = v23;
            v39 = v24;
            v38 = v21;
            v8 = v39;
            v6 = v21;
            v5 = v1;
            v9 = v2;
            v10 = v57;
            v3 = 1;
            v30.push(&(char)v3, &g_72f7a0);
        }
        else
        {
            (char)v3.get_group_by_name(&v14, "SKIPTOsrc/uu/csplit/src/patterns.rs", 6);
            if ((v3 & 1))
            {
                v60 = v19;
                v61 = v20;
                v63 = v7;
                v67 = *((long long *)&v6).get(v63, v60, v61);
                if (!v67)
                    core::str::slice_error_fail(v60, v61, *((long long *)&v6), v63, &g_72f758); /* do not return */
                v25.new(v67, a2);
                v52 = &v36;
                v53 = &(char)v43;
                v54 = &(char)v12;
                if (*((long long *)&v25))
                {
                    memcpy(&v24, &v28, 16);
                    memcpy(&v21, &v25, 16);
                    v23 = v22;
                }
                else
                {
                    v41 = v29;
                    memcpy(&v40, &v27, 16);
                    uu_csplit::patterns::extract_patterns::{{closure}}(&(char)v3, v35, &v40);
                    v66 = *((long long *)&v3);
                    memcpy(&v21, &v6, 16);
                    v24 = v8;
                    v23 = v21;
                    if (v66 != 13)
                    {
LABEL_59ed16:
                        v39 = v24;
                        v38 = v21;
                        *((void*)((char *)&v11->field_8 + 8)) = v24;
                        *((void*)&(&v11->field_0)[1]) = v21;
                        v11->field_0 = v66;
                        core::ptr::drop_in_place<regex::regex::string::Captures>(&(char)v12);
                        break;
                    }
                }
                v21 = v23;
                v39 = v24;
                v38 = v21;
                v8 = v39;
                v6 = v21;
                v5 = v1;
                v9 = v2;
                v10 = v57;
                v3 = 2;
                v30.push(&(char)v3, &g_72f7b8);
            }
        }
        core::ptr::drop_in_place<regex::regex::string::Captures>(v54);
    }
    ::0x59cf90::core::ptr::drop_in_place<regex::regex::string::Regex>(&v49);
    ::0x59cf90::core::ptr::drop_in_place<regex::regex::string::Regex>(&v48);
    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<uu_csplit::patterns::Pattern>>(&v30);
}
