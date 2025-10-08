long long fd::run(struct_0 *a0)
{
    unsigned int v0;  // [bp-0x894]
    unsigned long v1;  // [bp-0x890]
    unsigned long long v2;  // [bp-0x888]
    unsigned long long v3;  // [bp-0x880]
    unsigned long v4;  // [bp-0x878]
    void* v5;  // [bp-0x870]
    unsigned long long v6;  // [bp-0x868]
    void* v7;  // [bp-0x860]
    unsigned long long v8;  // [bp-0x858]
    unsigned long long v9;  // [bp-0x850]
    unsigned long long v10;  // [bp-0x848]
    unsigned long long v11;  // [bp-0x840]
    unsigned long long v12;  // [bp-0x838]
    unsigned long long v13;  // [bp-0x830]
    unsigned long long v14;  // [bp-0x828]
    char v15;  // [bp-0x820], Other Possible Types: unsigned long
    char v16;  // [bp-0x81f]
    unsigned long long v17;  // [bp-0x818]
    unsigned long v18;  // [bp-0x810], Other Possible Types: unsigned long long
    int v19;  // [bp-0x808]
    char *v20;  // [bp-0x800]
    char *v21;  // [bp-0x7f0]
    char v22;  // [bp-0x620], Other Possible Types: unsigned long long
    unsigned long long v23;  // [bp-0x618]
    char v24;  // [bp-0x610]
    char v25;  // [bp-0x428]
    char v26;  // [bp-0x3a0]
    unsigned long v27;  // [bp-0x358]
    unsigned long long v28;  // [bp-0x350]
    char v29;  // [bp-0x348]
    char v30;  // [bp-0x230]
    unsigned long long v31;  // [bp-0x228]
    unsigned long long v32;  // [bp-0x220]
    char v33;  // [bp-0x218]
    char v34;  // [bp-0x4e]
    unsigned long long v36;  // rax
    unsigned long long v37;  // rax
    unsigned long long *v38;  // rsi
    char v39[8];  // rax
    unsigned long long v40;  // r13
    unsigned long long v41;  // rax
    unsigned int v42;  // ecx
    unsigned int v43;  // ecx
    unsigned long long v44;  // rax

    v25.parse();
    v15.gen_completions(*((int *)&v30));
    if (v15 == 1)
    {
LABEL_5fa269:
        a0->field_8 = v36;
        goto LABEL_5fa296;
    }
    else
    {
        if (v16 == 5)
        {
            v36 = fd::set_working_dir(&v25);
            if (v36)
                goto LABEL_5fa269;
            v15.search_paths(&v25);
            if ((char)(((0 ^ *((long long *)&v15)) & (0 ^ -(*((long long *)&v15)))) >> 63))
            {
                a0->field_8 = v17;
LABEL_5fa296:
                a0->field_0 = 1;
            }
            else
            {
                v2 = *((long long *)&v15);
                v3 = v17;
                v4 = v18;
                if (v18)
                {
                    v37 = fd::ensure_search_pattern_is_not_a_path(&v25);
                    if (v37)
                        goto LABEL_5fa31a;
                    v5 = 0;
                    v6 = 8;
                    v38 = &v28;
                    if (v27 == 0x8000000000000000)
                        v38 = &v6;
                    v7 = 0;
                    v39 = &v29;
                    if (v27 == 0x8000000000000000)
                        v39 = &v7;
                    v15.chain(*(v38), *(v38) + *(v39) * 24, &v26);
                    v21 = &v25;
                    v22.collect(&v15);
                    v40 = v22;
                    if (v40 == 0x8000000000000000)
                    {
                        a0->field_8 = v10;
                        a0->field_0 = 1;
                    }
                    else
                    {
                        v9 = v40;
                        v10 = v23;
                        v11 = *((long long *)&v24);
                        v0 = (unsigned int)::libc.so.0::memcpy(&v15, &v25, 0x200) & 0xffffff00 | 1;
                        v8 = v11;
                        fd::construct_config(&v22, &v15, v10, v11);
                        v1 = v40;
                        if (v22 == 2)
                        {
                            a0->field_8 = v23;
                            a0->field_0 = 1;
                            v40 = v1;
                            goto LABEL_5fa531;
                        }
                        else
                        {
                            v31 = v22;
                            v32 = v23;
                            v0 = (unsigned int)::libc.so.0::memcpy(&v33, &v24, 488) & 0xffffff00 | 1;
                            v41 = fd::ensure_use_hidden_option_for_leading_dot_pattern(v34, v10, v8);
                            v40 = v1;
                            if (v41)
                            {
                                v43 = v42 & 0xffffff00 | 1;
                            }
                            else
                            {
                                v15.into_iter(&v9);
                                v20 = &v31;
                                v0 = 0;
                                v22.collect(&v15);
                                v41 = v23;
                                if (v22 != 0x8000000000000000)
                                {
                                    v12 = v22;
                                    v13 = v41;
                                    v14 = *((long long *)&v24);
                                    ::libc.so.0::memcpy(&v15, &v31, 504);
                                    fd::walk::scan(a0, v17, v18, &v12, &v15);
                                    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v5);
                                    return core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v2);
                                }
                                v43 = 0;
                            }
                            v0 = v43;
                            a0->field_8 = v41;
                            a0->field_0 = 1;
                            core::ptr::drop_in_place<fd::config::Config>(&v31);
                            if ((char)v0)
                            {
LABEL_5fa531:
                                core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v9);
                            }
                        }
                    }
                    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v5);
                    v44 = core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v2);
                    if (v40 != 0x8000000000000000)
                        return v44;
                }
                else
                {
                    v15 = &g_8027c8;
                    v17 = 1;
                    v18 = 8;
                    *((uint128_t *)&v19) = 0;
                    v37 = anyhow::__private::format_err(&v15);
LABEL_5fa31a:
                    a0->field_8 = v37;
                    a0->field_0 = 1;
                    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v2);
                }
            }
        }
        else
        {
            fd::print_completions(a0, v16);
        }
        return core::ptr::drop_in_place<fd::cli::Opts>(&v25);
    }
}
