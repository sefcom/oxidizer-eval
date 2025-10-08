void starship::modules::directory::contract_repo_path(unsigned long long *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    struct_0 *v0;  // [bp-0x180]
    unsigned long long v1;  // [bp-0x178]
    unsigned long long v2;  // [bp-0x170]
    char v3;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x160]
    unsigned long long v5;  // [bp-0x158]
    char v6;  // [bp-0x150]
    unsigned long long v7;  // [bp-0x148]
    unsigned long long v8;  // [bp-0x140]
    unsigned long long v9;  // [bp-0x138]
    unsigned long long v10;  // [bp-0x130]
    unsigned long long v11;  // [bp-0x128]
    char v12;  // [bp-0x120]
    unsigned long long v13;  // [bp-0x118]
    unsigned long long v14;  // [bp-0x110]
    char v15;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned long long v16;  // [bp-0x100]
    char *v17;  // [bp-0xf8], Other Possible Types: unsigned long
    unsigned long long v18;  // [bp-0xf0]
    void* v19;  // [bp-0xe8]
    unsigned long long v20;  // [bp-0xc8]
    unsigned long long v21;  // [bp-0xc0]
    void* v22;  // [bp-0xb8]
    unsigned long long v23;  // [bp-0xb0]
    unsigned long long v24;  // [bp-0xa8]
    unsigned long long v25;  // [bp-0xa0]
    char v26;  // [bp-0x98]
    char *v27;  // [bp-0x80]
    unsigned long long v28;  // [bp-0x78]
    char *v29;  // [bp-0x70]
    unsigned long long v30;  // [bp-0x68]
    int v31;  // [bp-0x60], Other Possible Types: char
    unsigned long v32;  // [bp-0x50]
    char v33;  // [bp-0x48]
    unsigned long long v35;  // rbx
    unsigned long long v36;  // rdi
    unsigned long long v38;  // rdi

    starship::modules::directory::real_path(&v6, a3, a4);
    v1 = a1;
    v20 = a1;
    v2 = a2;
    v21 = a2;
    v22 = 0;
    while (true)
    {
        v23.next(&v20);
        if (v24)
        {
            starship::modules::directory::real_path(&v9, v24, v25);
            if (!v10.eq(v11, v7, v8))
            {
                core::ptr::drop_in_place<std::path::PathBuf>(&v9);
            }
            else
            {
                v15.components(v1, v2);
                v3.collect(&v15);
                v35 = v5;
                v36 = ~(v23);
                if (!((char)__CFADD__(v36, v35)))
                    core::panicking::panic_bounds_check(v36 + v35, v35, &g_11f4338); /* do not return */
                v12.from_utf8_lossy((unsigned long long)(v36 + v35) * 56 + v4.as_os_str(), a2);
                if (v23)
                {
                    v38 = v35;
                    if (v38 < v23)
                        core::slice::index::slice_start_index_len_fail(v38 - v23, v35, &g_11f4350); /* do not return */
                    v26.from_iter((v38 - v23) * 56 + v4, v23);
                    v33.to_slash_lossy(&v26);
                    v27 = &v12;
                    v28 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
                    v29 = &v33;
                    v30 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
                    v15 = &g_11f4318;
                    v16 = 2;
                    v19 = 0;
                    v17 = &v27;
                    v18 = 2;
                    v31.map_or_else(0, a2, &v15);
                    core::ptr::drop_in_place<versions::Chunk>(&v33);
                    v0->field_10 = v32;
                    *((void*)&v0->field_0) = v31;
                    core::ptr::drop_in_place<std::path::PathBuf>(&v26);
                }
                else
                {
                    v15.spec_to_string(v13, v14);
                    v0->field_10 = v17;
                    v0->field_0 = *((int128_t *)&v15);
                }
                core::ptr::drop_in_place<versions::Chunk>(&v12);
                core::ptr::drop_in_place<alloc::vec::Vec<std::path::Component>>(v3, v4);
                core::ptr::drop_in_place<std::path::PathBuf>(&v9);
                break;
            }
        }
        else
        {
            *(a0) = 0x8000000000000000;
            break;
        }
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&v6);
    return;
}
