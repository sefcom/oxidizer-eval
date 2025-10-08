void uu_ptx::get_output_chunks(unsigned long a0, void* a1, unsigned long a2, unsigned long a3, void* a4, unsigned long a5, unsigned long long a6[11])
{
    unsigned long long v0;  // [bp-0x1c0]
    unsigned long long v1;  // [bp-0x1b8]
    unsigned long v2;  // [bp-0x1b0]
    void* v3;  // [bp-0x1a8]
    unsigned long long v4;  // [bp-0x1a0]
    unsigned long long v5;  // [bp-0x198]
    unsigned long v6;  // [bp-0x190]
    unsigned long long v7;  // [bp-0x188]
    char *v8;  // [bp-0x180]
    unsigned long v9;  // [bp-0x170]
    unsigned long v10;  // [bp-0x168]
    unsigned long long v11;  // [bp-0x158]
    unsigned long v12;  // [bp-0x150]
    void* v13;  // [bp-0x148]
    unsigned long long v14;  // [bp-0x140]
    unsigned long v15;  // [bp-0x138]
    void* v16;  // [bp-0x130]
    unsigned long v17;  // [bp-0x128]
    unsigned long long v18;  // [bp-0x120]
    char *v19;  // [bp-0x118]
    unsigned long long v20;  // [bp-0x110]
    unsigned long v21;  // [bp-0x108]
    struct_0 *v22;  // [bp-0xf8]
    unsigned long long v23;  // [bp-0xf0]
    unsigned long long v24;  // [bp-0xe8]
    char *v25;  // [bp-0xe0]
    unsigned long long v26;  // [bp-0xd8]
    void* v27;  // [bp-0xd0]
    char v28;  // [bp-0xc0]
    unsigned long long v29;  // [bp-0xb8]
    unsigned long v30;  // [bp-0xb0]
    char v31;  // [bp-0xa8]
    unsigned long long v32;  // [bp-0xa0]
    unsigned long v33;  // [bp-0x98]
    char v34;  // [bp-0x90]
    unsigned long long v35;  // [bp-0x88]
    unsigned long v36;  // [bp-0x80]
    char v37;  // [bp-0x78]
    unsigned long long v38;  // [bp-0x70]
    unsigned long v39;  // [bp-0x68]
    char v40;  // [bp-0x60]
    void* v41;  // [bp-0x50]
    char v42;  // [bp-0x48]
    char v43;  // [bp-0x38]
    unsigned long long v44;  // rbp
    unsigned long v45;  // rdx
    void* v46;  // rbx
    unsigned long v47;  // rax
    unsigned long v48;  // rax
    unsigned long long v49;  // rax
    unsigned long long v51;  // rax
    unsigned long v52;  // rbp
    unsigned long v53;  // rax
    unsigned long long v54;  // rax
    void* v55;  // rbx
    unsigned long long v56;  // rax
    unsigned long long v57;  // rbp
    unsigned long long v58;  // rax

    v44 = a6[9] >> 1;
    v10 = a6[10];
    v0 = v44 - a6[10].max();
    v21 = a6[5];
    v4 = ~(a6[5] * 2 + a3) + v44.max();
    v5 = v44.with_capacity_in(1, 1, &g_651510);
    v6 = v45;
    v7 = 0;
    v1 = v44.with_capacity_in(1, 1, &g_651510);
    v2 = v45;
    v3 = 0;
    v11 = v44.with_capacity_in(1, 1, &g_651510);
    v12 = v45;
    v13 = 0;
    v46 = a1;
    v14 = v44.with_capacity_in(1, 1, &g_651510);
    v15 = v45;
    v16 = 0;
    uu_ptx::trim_idx(v46, a2, 0, a2);
    v47 = v45 - v0.max();
    v48 = uu_ptx::trim_idx(v46, a2, uu_ptx::trim_broken_word_left(v46, a2, v47, v45), v45);
    v49 = v48.index(v45, v46, a2, &g_6519d0);
    v28.collect(v49, v49 + v45 * 4);
    v9 = v48;
    v1.spec_extend(v29, v30 + v29);
    if (v0 < v3)
        core::panicking::panic("assertion failed: max_before_size >= before.len()assertion failed: max_after_size >= after.len()\\backslash{}\\$\\$ {}{}", 49, &g_6519e8); /* do not return */
    uu_ptx::trim_idx(a4, a5, 0, uu_ptx::trim_broken_word_right(a4, a5, 0, v4.min(a5)));
    v51 = 0.index(v45, a4, a5, &g_651a00);
    v31.collect(v51, v51 + v45 * 4);
    v8 = &v11;
    v11.spec_extend(v32, v33 + v32);
    if (v4 < v13)
        core::panicking::panic("assertion failed: max_after_size >= after.len()\\backslash{}\\$\\$ {}{}", 47, &g_651a18); /* do not return */
    v52 = uu_ptx::trim_idx(a4, a5, v45, a5);
    v53 = a5.min(v52 + v0 - (v3 + v10).max());
    v0 = uu_ptx::trim_idx(a4, a5, v52, uu_ptx::trim_broken_word_right(a4, a5, v52, v53));
    v54 = v0.index(v45, a4, a5, &g_651a30);
    v34.collect(v54, v54 + v45 * 4);
    v14.spec_extend(v35, v36 + v35);
    v55 = a1;
    uu_ptx::trim_idx(v55, a2, 0, v9);
    v56 = v4 - (v10 + v13).max();
    v57 = uu_ptx::trim_idx(v55, a2, uu_ptx::trim_broken_word_left(v55, a2, v45 - v56.max(), v45), v45);
    v58 = v57.index(v45, v55, a2, &g_651a48);
    v37.collect(v58, v58 + v45 * 4);
    v5.spec_extend(v38, v39 + v38);
    if (v45 != a5)
    {
        if (v0 != v45)
        {
            v8 = &v14;
            if (v45 == a5)
                goto LABEL_52ca4b;
        }
        v8.spec_extend(a6[4], v21 + a6[4]);
    }
LABEL_52ca4b:
    if (v9)
    {
        if (v57 == v45)
        {
            v17 = &a6[3];
            v18 = <alloc::string::String as core::fmt::Display>::fmt;
            v19 = &v1;
            v20 = <alloc::string::String as core::fmt::Display>::fmt;
            v23 = &g_455170;
            v24 = 2;
            v27 = 0;
            v25 = &v17;
            v26 = 2;
            v40.map_or_else(&v23);
            core::ptr::drop_in_place<alloc::string::String>(&v1);
            v3 = v41;
            memcpy(&v1, &v40, 16);
        }
        else if (v57)
        {
            v18 = <alloc::string::String as core::fmt::Display>::fmt;
            v19 = &v5;
            v20 = <alloc::string::String as core::fmt::Display>::fmt;
            v23 = &g_455170;
            v24 = 2;
            v27 = 0;
            v25 = &v17;
            v26 = 2;
            v42.map_or_else(&v23);
            core::ptr::drop_in_place<alloc::string::String>(&v5);
            v7 = *((long long *)&v43);
            memcpy(&v5, &v42, 16);
        }
    }
    v22->field_10 = 0;
    v22->field_0 = *((int128_t *)&v14);
    *((void* *)((char *)&v22->field_18 + 8)) = v3;
    *((int128_t *)&(&v22->field_10)[1]) = *((int128_t *)&v1);
    *((int128_t *)&v22->field_28) = *((int128_t *)&v11);
    *((void* *)&v22->field_30) = v13;
    *((int128_t *)((char *)&v22->field_30 + 8)) = *((int128_t *)&v5);
    (&v22->field_40)[1] = v7;
    core::ptr::drop_in_place<alloc::string::String>(&v37);
    core::ptr::drop_in_place<alloc::string::String>(&v34);
    core::ptr::drop_in_place<alloc::string::String>(&v31);
    core::ptr::drop_in_place<alloc::string::String>(&v28);
    return;
}
