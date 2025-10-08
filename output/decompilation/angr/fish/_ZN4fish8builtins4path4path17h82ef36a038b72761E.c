long long fish::builtins::path::path(unsigned long long a0, struct_0 *a1, unsigned long long a2[6], unsigned long long a3)
{
    unsigned long long v0;  // [bp-0xe8]
    unsigned long long v1;  // [bp-0xd8]
    unsigned long long v3;  // [bp-0xd0]
    void* v4;  // [bp-0xc8]
    unsigned long long v5;  // [bp-0xc0]
    void* v6;  // [bp-0xb8]
    unsigned long long v7;  // [bp-0xa8]
    char v8;  // [bp-0xa0]
    unsigned long long v9;  // [bp-0x98]
    unsigned long long v10;  // [bp-0x90]
    char v11;  // [bp-0x88]
    unsigned long long v12;  // [bp-0x80]
    void* v13;  // [bp-0x78], Other Possible Types: unsigned long long
    char v14;  // [bp-0x68]
    unsigned long v15;  // [bp-0x60]
    unsigned long v16;  // [bp-0x58]
    unsigned long v17;  // [bp-0x48]
    char v18;  // [bp-0x40]
    unsigned long long v20;  // r12
    unsigned long long v21;  // r14
    unsigned long long v23;  // rdx
    unsigned long v24;  // rbp
    unsigned long long v25;  // r13
    struct_1 **v26;  // r14
    unsigned long long v27;  // r15
    unsigned long long v28;  // r12
    unsigned long long v29;  // r13
    unsigned long long v30;  // rax
    void* v31;  // rax
    void* v32;  // rcx
    unsigned long long v34;  // rdx

    v20 = 0x200000000;
    v21 = 1;
    if (a3)
    {
        if (a3 == 1)
        {
            v4 = 0;
            v5 = 4;
            v6 = 0;
            v11 = 1;
            v12 = v1;
            v13 = v3;
            fish_printf::printf_impl::sprintf_locale(&v8, &v4, g_14cb260[0].localize(), v23, ".", &v11, 1);
            v8.unwrap(&g_14cb278);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v11);
            memcpy(&v11, &v4, 16);
            v13 = 0;
            a1->field_10.append(&v11);
            fish::builtins::shared::builtin_print_error_trailer(a0, a1->field_10, v1, v3);
            goto LABEL_135e906;
        }
        v1 = a2[0];
        v3 = a2[1];
        v24 = a2[2];
        v25 = v24 + a2[3] * 4;
        if (v24.eq_by(v25, "-h--help", "--help") || v24.eq_by(v25, "--help", &g_a05752))
            goto LABEL_135e984;
        v17 = a2[3];
        v8.to_string(v24, a2[3]);
        if ((char)v9.equal(v10, "basenameq", 8))
        {
            v26 = fish::builtins::path::path_basename;
        }
        else
        {
            v0 = v9;
            v27 = v1;
            if ((char)v9.equal(v10, &g_5492c0, 16))
            {
                v26 = fish::builtins::path::path_change_extension;
                v1 = v27;
            }
            else if ((char)v0.equal(v10, "dirname", 7))
            {
                v26 = fish::builtins::path::path_dirname;
                v1 = v27;
            }
            else if ((char)v0.equal(v10, "extensionfilterismtimenormalizeresolve-h--help", 9))
            {
                v26 = fish::builtins::path::path_extension;
                v1 = v27;
            }
            else if ((char)v0.equal(v10, "filterismtimenormalizeresolve-h--help", 6))
            {
                v26 = fish::builtins::path::path_filter;
                v1 = v27;
            }
            else if ((char)v0.equal(v10, "ismtimenormalizeresolve-h--help", 2))
            {
                v26 = fish::builtins::path::path_is;
                v1 = v27;
            }
            else if ((char)v0.equal(v10, "mtimenormalizeresolve-h--help", 5))
            {
                v26 = fish::builtins::path::path_mtime;
                v1 = v27;
            }
            else if ((char)v0.equal(v10, "normalizeresolve-h--help", 9))
            {
                v26 = fish::builtins::path::path_normalize;
                v1 = v27;
            }
            else if ((char)v0.equal(v10, "resolve-h--help", 7))
            {
                v26 = fish::builtins::path::path_resolve;
                v1 = v27;
            }
            else if ((char)v0.equal(v10, "sortrmkxInfoEDOMquitfilemodekmrkgetmkCANksav!", 4))
            {
                v26 = fish::builtins::path::path_sort;
                v1 = v27;
            }
            else
            {
                v4 = 0;
                v5 = 4;
                v6 = 0;
                v11 = 1;
                v12 = v27;
                v13 = v3;
                v14 = 1;
                v15 = v24;
                v16 = v17;
                fish_printf::printf_impl::sprintf_locale(&v18, &v4, g_14cb230[0].localize(), v34, ".", &v11, 2);
                v18.unwrap(&g_14cb248);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v11);
                memcpy(&v11, &v4, 16);
                v13 = 0;
                a1->field_10.append(&v11);
                fish::builtins::shared::builtin_print_error_trailer(a0, a1->field_10, v1, v3);
                core::ptr::drop_in_place<alloc::string::String>(&v8);
                goto LABEL_135e906;
            }
        }
        core::ptr::drop_in_place<alloc::string::String>(&v8);
        v7 = v7;
        if (v7 == 2)
        {
LABEL_135eb89:
            v30 = v26(a0, a1, &a2[2], v7 - 1);
            v20 = 0xffffffff00000000 & v30;
            v21 = v30 & 4294967295;
            v31 = (unsigned int)v30 & 0xffff0000;
            v32 = (unsigned int)v30 & 0xff00;
        }
        else
        {
            v28 = a2[4];
            v29 = v28 + a2[5] * 4;
            if (!v28.eq_by(v29, "-h--help", "--help"))
            {
                v7 = a3;
                if (v28.eq_by(v29, "--help", &g_a05752))
                    goto LABEL_135ec17;
                goto LABEL_135eb89;
            }
            else
            {
LABEL_135ec17:
LABEL_135e984:
                fish::builtins::shared::builtin_print_help(a0, a1, v1, v3);
                v20 = 0;
                v31 = 0;
                v32 = 0;
                v21 = 0;
            }
        }
    }
    else
    {
LABEL_135e906:
        v31 = 0;
        v32 = 0;
    }
    return v20 | v31 | v32 | v21;
}
