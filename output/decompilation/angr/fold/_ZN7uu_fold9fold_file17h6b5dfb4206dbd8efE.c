long long uu_fold::fold_file(unsigned long long a0[2], unsigned int a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x208]
    void* v1;  // [bp-0xe0]
    unsigned long long v2;  // [bp-0xd8]
    void* v3;  // [bp-0xd0]
    void* v4;  // [bp-0xd0]
    char *v5;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0xc0]
    char *v7;  // [bp-0xb8]
    unsigned long long v8;  // [bp-0xb0]
    unsigned long long v9;  // [bp-0xa8]
    unsigned long long v10;  // [bp-0xa0]
    char *v11;  // [bp-0x98]
    unsigned long long v12;  // [bp-0x90]
    void* v13;  // [bp-0x88]
    void* v14;  // [bp-0x70]
    unsigned long long v15;  // [bp-0x68]
    void* v16;  // [bp-0x60]
    unsigned int v17;  // [bp-0x54]
    unsigned long v18;  // [bp-0x48]
    unsigned long long v19;  // [bp-0x40]
    unsigned long v20;  // [bp-0x38]
    char v22;  // r15b
    char *v23;  // r14
    void* v24;  // rbx
    char *v26;  // r14
    unsigned int v27;  // edx
    unsigned int v29;  // ebp
    void* v30;  // rbx
    void* v31;  // r13
    void* v32;  // r12
    void* v33;  // r12
    unsigned long long v34;  // r14
    unsigned long long v35;  // rax
    void* v38;  // rbx
    void* v39;  // r13
    void* v40;  // r12
    void* v42;  // r12
    unsigned long long v43;  // rax
    unsigned long long v49;  // rax
    void* v54;  // r13

    v14 = 0;
    v15 = 1;
    v16 = 0;
    v1 = 0;
    v2 = 1;
    v4 = 0;
    v17 = a1;
    v18 = a1;
    v22 = 0;
    v23 = &v14;
    v24 = 0;
    while (true)
    {
        v9.map_err_context(std::io::append_to_string(v23, a0), a2);
        if (v9 || !v10)
            break;
        v19 = v15;
        v20 = 0 + v15;
        v26 = &v1;
        while (true)
        {
            v29 = (!((char)core::str::validations::next_code_point(&v19) & 1) ? 0x110000 : v27);
            switch (v29)
            {
            case 10:
                v34 = v2;
                v33 = v4;
                v49 = v33.get(v34, v33);
                if (!v49)
                    core::str::slice_error_fail(v34, v33, 0, v33, &g_4e6bf0); /* do not return */
                v5 = v49;
                v6 = v27;
                v7 = &v5;
                v8 = <&T as core::fmt::Display>::fmt;
                v9 = &g_4e6ba0;
                v10 = 2;
                v13 = 0;
                v11 = &v7;
                v12 = 1;
                std::io::stdio::_print(&v9);
                v23 = &v14;
                v1.replace_range(v33);
                v22 = 0;
                v24 = v4;
                if (!v4)
                    goto LABEL_45bdfa;
LABEL_45c193:
                v5 = &v1;
                v6 = <alloc::string::String as core::fmt::Display>::fmt;
                v9 = &g_417f60;
                v10 = 1;
                v13 = 0;
                v11 = &v5;
                v12 = 1;
                std::io::stdio::_print(&v9);
                v1.truncate();
                goto LABEL_45bdfa;
            case 1114112:
                v23 = &v14;
                if (!v4)
                    goto LABEL_45bdfa;
                goto LABEL_45c193;
            default:
                v30 = v24;
                if (v30 >= a2)
                {
                    if ((v22 & 1))
                    {
                        v31 = v54 + 1;
                        v3 = v4;
                    }
                    else
                    {
                        v32 = v4;
                        v31 = v32;
                        v3 = v32;
                    }
                    v33 = v3;
                    v54 = v31;
                    v34 = v2;
                    v35 = v54.get(v34, v33);
                    if (!v35)
                        core::str::slice_error_fail(v34, v33, 0, v54, &g_4e6c08); /* do not return */
                    v5 = v35;
                    v6 = v27;
                    v7 = &v5;
                    v8 = <&T as core::fmt::Display>::fmt;
                    v9 = &g_4e6ba0;
                    v10 = 2;
                    v13 = 0;
                    v11 = &v7;
                    v12 = 1;
                    std::io::stdio::_print(&v9);
                    v26 = &v1;
                    v1.replace_range(v54);
                    v22 = 0;
                    v30 = v4;
                }
                v38 = v30;
                switch (v29)
                {
                case 8:
                    v24 = v38 - 1;
                    if (v38 < 1)
                    {
                        v24 = 0;
                        break;
                    }
                    else
                    {
                        v39 = v54;
                        break;
                    }
                case 9:
                    v24 = (v38 & 18446744073709551608) + 8;
                    v33 = v4;
                    v40 = v33;
                    if (v24 > a2)
                    {
                        if (v33)
                        {
                            if (!(v22 & 1))
                                v42 = v33;
                            else
                                v42 = v54 + 1;
                            v54 = v42;
                            v34 = v2;
                            v43 = v54.get(v34, v33);
                            if (!v43)
                                core::str::slice_error_fail(v34, v33, 0, v54, &g_4e6c20); /* do not return */
                            v5 = v43;
                            v6 = v27;
                            v7 = &v5;
                            v8 = <&T as core::fmt::Display>::fmt;
                            v9 = &g_4e6ba0;
                            v10 = 2;
                            v13 = 0;
                            v11 = &v7;
                            v12 = 1;
                            std::io::stdio::_print(&v9);
                            v26 = &v1;
                            v1.replace_range(v54);
                            v40 = v4;
                        }
                        else
                        {
                            v40 = 0;
                        }
                    }
                    v22 = v18;
                    v39 = v40;
                    break;
                case 13:
                    v24 = 0;
                    break;
                default:
                    if ((char)v17)
                    {
                        if (v29 <= 32)
                        {
                            v0 = 0x100003800;
                            if ((*((char *)&v0 + ((v29 & 63) >> 3)) >> ((char)v29 & 63 & 7) & 1))
                                goto LABEL_45c081;
                        }
                        if (v29 < 128 || !(char)::0x459a00::core::unicode::unicode_data::white_space::lookup(v29))
                            goto LABEL_45c0c3;
LABEL_45c081:
                        v24 = v38 + 1;
                        v22 = 1;
                        v39 = v4;
                        break;
                    }
                    else
                    {
LABEL_45c0c3:
                        v24 = v38 + 1;
                        break;
                    }
                }
                v26.push(v29);
                break;
            }
        }
LABEL_45bdfa:
        v14.truncate();
    }
    core::ptr::drop_in_place<alloc::string::String>(v1, v2);
    core::ptr::drop_in_place<alloc::string::String>(v14, v15);
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&mut dyn std::io::Read>>(a0[0], a0[1]);
    return v9;
}
