long long fish::history::file::decode_item_fish_2_0(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x178], Other Possible Types: unsigned long long
    struct_0 *v1;  // [bp-0x170]
    unsigned long long v2;  // [bp-0x168]
    unsigned long long v3;  // [bp-0x160]
    char *v4;  // [bp-0x158]
    unsigned long long v5;  // [bp-0x150]
    struct_0 *v6;  // [bp-0x148]
    char *v7;  // [bp-0x140]
    unsigned long long v8;  // [bp-0x138]
    char *v9;  // [bp-0x130]
    struct_0 *v10;  // [bp-0x128]
    unsigned long long v11;  // [bp-0x120]
    void* v12;  // [bp-0x110]
    void* v13;  // [bp-0x108]
    unsigned long long v14;  // [bp-0x100]
    unsigned long long v15;  // [bp-0xf8]
    unsigned long long v16;  // [bp-0xf0]
    unsigned long long v17;  // [bp-0xe8]
    void* v18;  // [bp-0xe0]
    unsigned long long v19;  // [bp-0xd8]
    void* v20;  // [bp-0xd0]
    int v21;  // [bp-0xc8], Other Possible Types: char
    unsigned long long v22;  // [bp-0xb8]
    void* v23;  // [bp-0xb0]
    unsigned long long v24;  // [bp-0xa8]
    void* v25;  // [bp-0xa0]
    void* v26;  // [bp-0x98]
    unsigned int v27;  // [bp-0x90]
    void* v28;  // [bp-0x88]
    char v29;  // [bp-0x80]
    char v30;  // [bp-0x70]
    unsigned long long v31;  // [bp-0x60]
    unsigned long long v32[3];  // [bp-0x58]
    char *v33;  // [bp-0x50]
    unsigned long long v34;  // [bp-0x48]
    void* v35;  // [bp-0x40]
    unsigned long long v37;  // rbx
    unsigned long long v38;  // rax
    void* v39;  // rdx
    unsigned long long v40;  // r13
    unsigned long long v41;  // rbp
    unsigned long long v42;  // r15
    unsigned long long v43;  // rbx
    unsigned long long *v44;  // rax
    unsigned long long v45;  // r12
    unsigned long long v46;  // rbx
    unsigned long long v48;  // rax
    unsigned long long v49;  // r14
    struct_0 *v52;  // rdi
    int v55;  // xmm1
    int v56;  // xmm2

    fish::history::file::read_line(&v0, a1, a2);
    v37 = v0;
    v38 = fish::history::file::trim_start(v1, v2);
    if (!(char)core::slice::<impl [T]>::starts_with(v38, v39, "- cmd- when:%---...- cmd: - cmd: - cmd:    when:ignoring corrupted history entry around offset%s: %d.%06d ms%s: ??? mssrc/history.rswrealpath failed to produce a canonical version of ''.", 5))
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    fish::history::file::extract_prefix_and_unescape_yaml(&v0, v38, v39);
    v11 = v0;
    v16 = 9223372036854775809;
    if (v0 == 9223372036854775809)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return a0;
    }
    v10 = v1;
    v8 = v3;
    v40 = a2 - v37;
    v9 = v4;
    if (a2 < v37)
        core::slice::index::slice_start_index_len_fail(v37, a2, &g_14d9bf0); /* do not return */
    fish::common::str2wcstring(&v30, v4, v5);
    v41 = a1 + v37;
    v35 = 0;
    v18 = 0;
    v19 = 8;
    v20 = 0;
    v13 = 0;
    v12 = 0;
    while (true)
    {
        fish::history::file::read_line(&v0, v41, v40);
        v42 = v0;
        fish::history::file::trim_leading_spaces(&v0, v1, v2);
        v43 = v0;
        v44 = v35.get_or_insert_with(v43);
        if (!v43 || *(v44) != v43)
            break;
        fish::history::file::extract_prefix_and_unescape_yaml(&v0, v1, v2);
        v15 = v0;
        if (v0 == 9223372036854775809)
        {
            core::ptr::drop_in_place<core::option::Option<(alloc::borrow::Cow<[u8]>,alloc::borrow::Cow<[u8]>)>>(&v0);
            break;
        }
        v6 = v1;
        v14 = v3;
        v7 = v4;
        v45 = v40;
        v40 = v45 - v42;
        if (v45 < v42)
            core::slice::index::slice_start_index_len_fail(v42, v40, &g_14d9bd8); /* do not return */
        v41 += v42;
        if (v2 != 4)
        {
            if (v2 == 5 && (v6->field_4 * 0x100000000 | v6->field_0) == 495673696624)
            {
                v17 = v43;
                v46 = v43;
                while (true)
                {
                    fish::history::file::read_line(&v0, v41, v40);
                    v42 = v0;
                    fish::history::file::trim_leading_spaces(&v0, v1, v2);
                    if (v0 <= v46)
                        break;
                    v48 = core::slice::<impl [T]>::strip_prefix(v1, v2);
                    if (!v48)
                        break;
                    v49 = v40;
                    if (v49 < v42)
                        core::slice::index::slice_start_index_len_fail(v42, v40, &g_14d9bc0); /* do not return */
                    fish::history::file::maybe_unescape_yaml_fish_2_0(&v32, v48, a2);
                    fish::common::str2wcstring(&v0, v33, v34);
                    v18.push(&v0, &g_14d9ba8);
                    v41 += v42;
                    core::ptr::drop_in_place<terminfo::expand::Parameter>(v32, v33);
                    v40 = v49 - v42;
                    v46 = v17;
                }
            }
        }
        else
        {
            if (v6->field_0 == 1852139639)
            {
                core::str::converts::from_utf8(&v0, v7, v5);
                if (!(v0 & 1))
                {
                    core::num::<impl i64>::from_ascii_radix(&v0, v1, v2);
                    if (!v0)
                    {
                        v52 = v1;
LABEL_13be273:
                        v12 = fish::history::file::time_from_seconds(v52);
                        v13 = v39;
                        goto LABEL_13be290;
                    }
                }
                v52 = 0;
                goto LABEL_13be273;
            }
        }
LABEL_13be290:
        core::ptr::drop_in_place<terminfo::expand::Parameter>(v14, v7);
        core::ptr::drop_in_place<terminfo::expand::Parameter>(v15, v6);
    }
    v22 = v31;
    memcpy(&v21, &v30, 16);
    v26 = v12;
    v27 = (unsigned int)v13;
    v23 = 0;
    v24 = 8;
    v25 = 0;
    v28 = 0;
    v29 = 0;
    v21.set_required_paths(&v18);
    *((int128_t *)&a0[64]) = *((int128_t *)&v28);
    v55 = *((int128_t *)&v22);
    v56 = *((int128_t *)&v24);
    *((int128_t *)&a0[48]) = *((int128_t *)&v26);
    a0[32] = v56;
    a0[16] = v55;
    *(a0) = v21;
    core::ptr::drop_in_place<terminfo::expand::Parameter>(v8, v9);
    return (unsigned long long)core::ptr::drop_in_place<terminfo::expand::Parameter>(v11, v10);
}
