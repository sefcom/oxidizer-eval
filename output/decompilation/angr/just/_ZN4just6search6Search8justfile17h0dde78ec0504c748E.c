long long just::search::Search::justfile(unsigned long long *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    void* v0;  // [bp-0x170]
    unsigned long long v1;  // [bp-0x168]
    unsigned long long v2;  // [bp-0x160]
    void* v3;  // [bp-0x158]
    void* v4;  // [bp-0x148]
    unsigned long long v5;  // [bp-0x138]
    char v6;  // [bp-0x130]
    int v7;  // [bp-0x128], Other Possible Types: char
    unsigned long long v8;  // [bp-0x120]
    void* v9;  // [bp-0x118], Other Possible Types: unsigned long long
    void* v10;  // [bp-0x110]
    unsigned long long v11;  // [bp-0x108]
    unsigned long long v12;  // [bp-0x108]
    int v13;  // [bp-0x100], Other Possible Types: char
    int v14;  // [bp-0xff]
    void* v15;  // [bp-0xf8]
    int v16;  // [bp-0xf0]
    unsigned long long v17;  // [bp-0xb0]
    unsigned long long v18;  // [bp-0xa8]
    char v19;  // [bp-0xa0]
    unsigned long long v20;  // [bp-0x88]
    unsigned long long v21;  // [bp-0x80]
    unsigned long long v22;  // [bp-0x78]
    char v23;  // [bp-0x70]
    int v24;  // [bp-0x48]
    struct_0 *v26;  // r12
    struct_1 *v27;  // r13
    unsigned long long v28;  // 4096
    unsigned long long v29;  // r8
    unsigned long long v30;  // rbp
    unsigned long long v31;  // rax
    unsigned long long v32;  // rdx
    unsigned long long v33;  // rdx
    int v35;  // xmm0
    int v36;  // xmm0
    char v37;  // al
    unsigned long long *v38;  // rcx

    v26 = &v23;
    v27 = &v19;
    v28 = a4;
    while (true)
    {
        v29 = v28;
        v1 = a3;
        v2 = v29;
        a3 = a3.parent(v29);
        v3 = 0;
        v4 = 0;
        std::fs::read_dir(&v20, v1, v2);
        if ((char)v21 == 2)
        {
            just::search::Search::project_root::{{closure}}(&v10, v1, v2, v20);
            v36 = *((int128_t *)&v10);
            v37 = (char)v13;
            *((long long *)&v0[17]) = (long long)v14;
            *((void* *)&v0[24]) = v15;
            *(v0) = v36;
            *((char *)&v0[16]) = v37;
            return core::ptr::drop_in_place<alloc::collections::btree::set::BTreeSet<std::path::PathBuf>>(&v3);
        }
        v5 = v20;
        v6 = v21;
        while (true)
        {
            v20.next(&v5);
            if ((int)v20 != 1)
                break;
            if (!v21)
            {
                just::search::Search::project_root::{{closure}}(&v10, v1, v2, v22);
                v35 = *((int128_t *)&v12);
                v7 = v35;
                v9 = v15;
                *((void* *)&v0[24]) = v15;
                v0[8] = v35;
                *((void* *)v0) = v10;
                core::ptr::drop_in_place<std::fs::ReadDir>(&v5);
                return core::ptr::drop_in_place<alloc::collections::btree::set::BTreeSet<std::path::PathBuf>>(&v3);
            }
            v27->field_10 = v26->field_10;
            v27->field_0 = v26->field_0;
            v17 = v21;
            v18 = v22;
            v7.file_name(&v17);
            core::str::converts::from_utf8(&v10, v8, v9);
            v12 = v12;
            if ((int)v10 != 1)
            {
                v30 = *((long long *)&v13);
                v10 = 0;
                v11 = 2;
                *((uint128_t *)&v16) = g_82e5c0;
                *((uint128_t *)&v13) = g_82e5b0;
                if (v10.next())
                {
                    v33 = v32;
                    do
                    {
                        if ((char)::0x60cdf0::core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v12, v30, v31, v33))
                        {
                            v24.path(&v17);
                            v3.insert(&v24);
                        }
                        v31 = v10.next();
                        v33 = v32;
                    } while (v31);
                }
                v27 = &v19;
                v12 = 2;
            }
            core::ptr::drop_in_place<std::fs::DirEntry>(&v17);
            core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v7);
        }
        core::ptr::drop_in_place<std::fs::ReadDir>(&v5);
        if (v4)
            break;
        if (a1)
        {
            v20.components(v1, v2);
            v10.components(a1, a2);
            if (v20.eq(&v10))
            {
                core::ptr::drop_in_place<alloc::collections::btree::set::BTreeSet<std::path::PathBuf>>(&v3);
                v38 = a0;
                *(v38) = 9223372036854775813;
                return 9223372036854775813;
            }
        }
        core::ptr::drop_in_place<alloc::collections::btree::set::BTreeSet<std::path::PathBuf>>(&v3);
        v28 = v32;
        if (!a3)
        {
            *(v38) = 9223372036854775813;
            return 9223372036854775813;
        }
    }
    if (v4 != 1)
    {
        *((void* *)&v0[24]) = v4;
        *((int128_t *)&v0[8]) = *((int128_t *)&v3);
        *(a0) = 9223372036854775812;
        return 9223372036854775812;
    }
    v10.into_iter(&v3);
    v20.next(&v10);
    if ((char)(((0 ^ v20) & (0 ^ -(v20))) >> 63))
        core::option::unwrap_failed(&g_830db0); /* do not return */
    *((int128_t *)&v0[16]) = *((int128_t *)&v21);
    *((unsigned long long *)&v0[8]) = v20;
    *((unsigned long long *)v0) = 9223372036854775814;
    return core::ptr::drop_in_place<alloc::collections::btree::set::IntoIter<std::path::PathBuf>>(&v10);
}
