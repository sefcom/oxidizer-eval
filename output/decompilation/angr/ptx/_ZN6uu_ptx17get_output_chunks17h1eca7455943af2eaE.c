void uu_ptx::get_output_chunks(unsigned long a0, void* a1, unsigned long a2, unsigned long a3, void* a4, unsigned long a5, unsigned long long a6[11])
{
    unsigned int v0;  // [bp-0x1c4]
    unsigned long long v1;  // [bp-0x1c0]
    unsigned long long v2;  // [bp-0x1b8]
    unsigned long long v3;  // [bp-0x1b0]
    void* v4;  // [bp-0x1a8]
    unsigned long long v5;  // [bp-0x198]
    unsigned long long v6;  // [bp-0x190]
    unsigned long long v7;  // [bp-0x188]
    unsigned long v8;  // [bp-0x178]
    unsigned long long v9;  // [bp-0x170]
    char *v10;  // [bp-0x168]
    unsigned long v11;  // [bp-0x160]
    unsigned long long v12;  // [bp-0x150]
    unsigned long long v13;  // [bp-0x148]
    void* v14;  // [bp-0x140]
    unsigned long long v15;  // [bp-0x138]
    unsigned long long v16;  // [bp-0x130]
    void* v17;  // [bp-0x128]
    unsigned long v18;  // [bp-0x120]
    unsigned long long v19;  // [bp-0x118]
    char *v20;  // [bp-0x110]
    unsigned long long v21;  // [bp-0x108]
    unsigned long v22;  // [bp-0x100]
    struct_0 *v23;  // [bp-0xf8]
    unsigned long long v24;  // [bp-0xf0]
    unsigned long long v25;  // [bp-0xe8]
    char *v26;  // [bp-0xe0]
    unsigned long long v27;  // [bp-0xd8]
    void* v28;  // [bp-0xd0]
    char v29;  // [bp-0xc0]
    unsigned long long v30;  // [bp-0xb8]
    unsigned long long v31;  // [bp-0xb0]
    char v32;  // [bp-0xa8]
    unsigned long long v33;  // [bp-0xa0]
    unsigned long long v34;  // [bp-0x98]
    char v35;  // [bp-0x90]
    unsigned long long v36;  // [bp-0x88]
    unsigned long long v37;  // [bp-0x80]
    char v38;  // [bp-0x78]
    unsigned long long v39;  // [bp-0x70]
    unsigned long long v40;  // [bp-0x68]
    char v41;  // [bp-0x60]
    void* v42;  // [bp-0x50]
    char v43;  // [bp-0x48]
    char v44;  // [bp-0x38]
    unsigned long long v45;  // r15
    unsigned long v46;  // rdx
    void* v47;  // rbx
    unsigned long v48;  // rax
    unsigned long long v49;  // rax
    unsigned long long v51;  // rax
    unsigned long long v52;  // r15
    unsigned long v53;  // rax
    unsigned long long v54;  // rax
    unsigned long long v55;  // rax
    void* v56;  // r13
    unsigned long v57;  // rax
    unsigned long long v58;  // r15
    unsigned long long v59;  // rax

    v45 = a6[9] >> 1;
    v11 = a6[10];
    v1 = core::cmp::max_by(v45 - a6[10]);
    v22 = a6[5];
    v9 = core::cmp::max_by(~(a6[5] * 2 + a3) + v45);
    v5 = v45.with_capacity_in(&g_73b368);
    v6 = v46;
    v7 = 0;
    v2 = v45.with_capacity_in(&g_73b368);
    v3 = v46;
    v4 = 0;
    v12 = v45.with_capacity_in(&g_73b368);
    v13 = v46;
    v14 = 0;
    v15 = v45.with_capacity_in(&g_73b368);
    v16 = v46;
    v17 = 0;
    v47 = a1;
    uu_ptx::trim_idx(v47, a2, 0, a2);
    v48 = core::cmp::max_by(v46 - v1);
    v8 = uu_ptx::trim_idx(v47, a2, uu_ptx::trim_broken_word_left(v47, a2, v48, v46), v46);
    v49 = v8.index(v46, v47, a2, &g_73b798);
    v0 = (int)v29.from_iter(v49, v49 + v46 * 4) & 0xffffff00 | 1;
    v2.append_elements(v30, v31, &g_73b380);
    if (v1 < v4)
        core::panicking::panic("assertion failed: max_before_size >= before.len()assertion failed: max_after_size >= after.len()\\backslash{}\\$\\$ {}{}", 49, &g_73b7b0); /* do not return */
    uu_ptx::trim_idx(a4, a5, 0, uu_ptx::trim_broken_word_right(a4, a5, 0, ::0x59d580::core::cmp::min_by(v9, a5)));
    v51 = 0.index(v46, a4, a5, &g_73b7c8);
    v0 = (int)v32.from_iter(v51, v51 + v46 * 4) & 0xffffff00 | 1;
    v10 = &v12;
    v12.append_elements(v33, v34, &g_73b380);
    if (v9 < v14)
        core::panicking::panic("assertion failed: max_after_size >= after.len()\\backslash{}\\$\\$ {}{}", 47, &g_73b7e0); /* do not return */
    v52 = uu_ptx::trim_idx(a4, a5, v46, a5);
    v53 = ::0x59d580::core::cmp::min_by(a5, v52 + core::cmp::max_by(v1 - (v4 + v11)));
    v54 = uu_ptx::trim_idx(a4, a5, v52, uu_ptx::trim_broken_word_right(a4, a5, v52, v53));
    v55 = v54.index(v46, a4, a5, &g_73b7f8);
    v1 = v54;
    v0 = (int)v35.from_iter(v55, v55 + v46 * 4) & 0xffffff00 | 1;
    v15.append_elements(v36, v37, &g_73b380);
    v56 = a1;
    uu_ptx::trim_idx(v56, a2, 0, v8);
    v57 = core::cmp::max_by(v46 - core::cmp::max_by(v9 - (v11 + v14)));
    v58 = uu_ptx::trim_idx(v56, a2, uu_ptx::trim_broken_word_left(v56, a2, v57, v46), v46);
    v59 = v58.index(v46, v56, a2, &g_73b810);
    v38.from_iter(v59, v59 + v46 * 4);
    v5.append_elements(v39, v40, &g_73b380);
    if (v46 != a5)
    {
        if (v1 != v46)
        {
            v10 = &v15;
            if (v46 == a5)
                goto LABEL_5a26fe;
        }
        v10.append_elements(a6[4], v22, &g_73b380);
    }
LABEL_5a26fe:
    if (v8)
    {
        if (v58 == v46)
        {
            v18 = &a6[3];
            v19 = <alloc::string::String as core::fmt::Display>::fmt;
            v20 = &v2;
            v21 = <alloc::string::String as core::fmt::Display>::fmt;
            v24 = &g_488830;
            v25 = 2;
            v28 = 0;
            v26 = &v18;
            v27 = 2;
            v41.map_or_else(&v24);
            ::0x59dd00::core::ptr::drop_in_place<alloc::string::String>(&v2);
            v4 = v42;
            memcpy(&v2, &v41, 16);
        }
        else if (v58)
        {
            v19 = <alloc::string::String as core::fmt::Display>::fmt;
            v20 = &v5;
            v21 = <alloc::string::String as core::fmt::Display>::fmt;
            v24 = &g_488830;
            v25 = 2;
            v28 = 0;
            v26 = &v18;
            v27 = 2;
            v43.map_or_else(&v24);
            ::0x59dd00::core::ptr::drop_in_place<alloc::string::String>(&v5);
            v7 = *((long long *)&v44);
            memcpy(&v5, &v43, 16);
        }
    }
    v23->field_10 = 0;
    v23->field_0 = *((int128_t *)&v15);
    *((void* *)((char *)&v23->field_18 + 8)) = v4;
    *((int128_t *)&(&v23->field_10)[1]) = *((int128_t *)&v2);
    *((int128_t *)&v23->field_28) = *((int128_t *)&v12);
    *((void* *)&v23->field_30) = v14;
    *((int128_t *)((char *)&v23->field_30 + 8)) = *((int128_t *)&v5);
    (&v23->field_40)[1] = v7;
    v0 = 0;
    ::0x59dd00::core::ptr::drop_in_place<alloc::string::String>(&v38);
    v0 = 0;
    ::0x59dd00::core::ptr::drop_in_place<alloc::string::String>(&v35);
    v0 = 0;
    ::0x59dd00::core::ptr::drop_in_place<alloc::string::String>(&v32);
    ::0x59dd00::core::ptr::drop_in_place<alloc::string::String>(&v29);
    return;
}
