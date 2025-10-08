long long fish::builtins::history::history(unsigned long long a0, struct_0 *a1, unsigned long long a2[2], unsigned long long a3)
{
    void* v0;  // [bp-0x140], Other Possible Types: unsigned long long
    unsigned long v1;  // [bp-0x138]
    unsigned long v2;  // [bp-0x130]
    void* v3;  // [bp-0x128]
    unsigned long long v4;  // [bp-0x118]
    unsigned int v5;  // [bp-0x100]
    unsigned short v6;  // [bp-0xfc]
    void* v7;  // [bp-0xf8]
    unsigned long long v8;  // [bp-0xf0]
    char v9;  // [bp-0xc8]
    char v10;  // [bp-0xb0]
    char v11;  // [bp-0x98]
    char v12;  // [bp-0x70]
    unsigned long long v14;  // rbx
    unsigned long long v15;  // rcx
    unsigned long long v16;  // rbx
    unsigned long long v17;  // r14
    void* v18;  // rdi
    void* v19;  // rdi
    unsigned long long v20;  // rax

    v6 = 2053;
    v4 = 0x8000000000000000;
    v3 = 0;
    v5 = 0;
    v7 = 0;
    v14 = fish::builtins::history::parse_cmd_opts(&v3, &v7, a2, a3, a0, a1);
    v15 = 1;
    if (((char)v14 & 1))
    {
        v16 = v14 & 0x300000000;
    }
    else
    {
        v16 = 0x200000000;
        if (a3)
        {
            if ((char)v5)
            {
                fish::builtins::shared::builtin_print_help(a0, a1, a2[0], a2[1]);
                v16 = 0;
                v15 = 0;
            }
            else
            {
                v1 = a2[0];
                v2 = a2[1];
                fish::reader::commandline_get_state(&v9, 1);
                v17 = *((long long *)&v12);
                if (!*((long long *)&v12))
                    v17 = fish::builtins::history::history::{{closure}}(a0);
                v8 = v17;
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v10);
                core::ptr::drop_in_place<core::option::Option<fish::path::BaseDirectory>>(&v11);
                v18 = v7;
                v19 = v18;
                if (v19 < a3)
                {
                    v0 = v18;
                    v20 = *((long long *)((char *)a2 + 0x10 * v18)).try_from(*((long long *)(8 + (char *)a2 + 0x10 * v18)));
                    if ((char)v20 == 8)
                    {
                        v19 = v0;
                        v0 = v17;
                        if (a3 < v19)
                            core::slice::index::slice_start_index_len_fail(v19, a3, &g_14ca798); /* do not return */
                        goto (long long)(g_9f2854[(char)v6] + (char *)&g_9f2854[0]);
                    }
                    else if (fish::builtins::history::set_hist_cmd(v1, v2, &v6, v20 & 4294967295, a1->field_10))
                    {
                        v19 = v0 + 1;
                        v7 = v19;
                        v0 = v17;
                        if (a3 < v19)
                            core::slice::index::slice_start_index_len_fail(v19, a3, &g_14ca798); /* do not return */
                        goto (long long)(g_9f2854[(char)v6] + (char *)&g_9f2854[0]);
                    }
                    else
                    {
                        v15 = 1;
                        core::ptr::drop_in_place<alloc::sync::Arc<fish::history::History>>(&v8);
                    }
                }
                else
                {
                    v0 = v17;
                    if (a3 < v19)
                        core::slice::index::slice_start_index_len_fail(v19, a3, &g_14ca798); /* do not return */
                    goto (long long)(g_9f2854[(char)v6] + (char *)&g_9f2854[0]);
                }
            }
        }
    }
    core::ptr::drop_in_place<fish::builtins::history::HistoryCmdOpts>(&v3);
    return v16 | v15;
}
