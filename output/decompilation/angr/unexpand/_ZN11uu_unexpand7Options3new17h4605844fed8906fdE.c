long long uu_unexpand::Options::new(struct_0 *a0, unsigned long long a1)
{
    int v0;  // [bp-0x1b8], Other Possible Types: char
    unsigned long long v1;  // [bp-0x1b8]
    struct_1 *v2;  // [bp-0x1b0], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x1a8]
    int v4;  // [bp-0x198]
    unsigned long long v5;  // [bp-0x198]
    unsigned long long *v6;  // [bp-0x190]
    unsigned long long v7;  // [bp-0x188]
    int v8;  // [bp-0x178], Other Possible Types: char
    unsigned long long v9;  // [bp-0x168]
    unsigned long long v10;  // [bp-0x160]
    unsigned long v11;  // [bp-0x158]
    unsigned long long v12;  // [bp-0x150]
    int v13;  // [bp-0x128], Other Possible Types: char
    unsigned long long v14;  // [bp-0x118]
    int v15;  // [bp-0x108]
    unsigned long long v16;  // [bp-0x100]
    unsigned long long v17;  // [bp-0xf8]
    char v18;  // [bp-0xe8]
    int v19;  // [bp-0xe8]
    int v20;  // [bp-0xd8]
    int v21;  // [bp-0xc8]
    int v22;  // [bp-0xb8]
    int v23;  // [bp-0xa8]
    int v24;  // [bp-0x98]
    int v25;  // [bp-0x88]
    int v26;  // [bp-0x78]
    int v27;  // [bp-0x68]
    int v28;  // [bp-0x58]
    int v29;  // [bp-0x48]
    char v30;  // [bp-0x38]
    unsigned long long *v32;  // rax
    char v33;  // bpl
    char v34;  // al
    struct_1 *v35;  // rax
    struct_1 *v36;  // r14
    int v37;  // xmm0
    int v38;  // xmm0

    v8.try_get_many(a1, "tabskindAuto/", 4);
    v18.unwrap("tabskindAuto/", 4, &v8);
    if (*((long long *)&v18))
    {
        v26 = v22;
        v25 = v21;
        v24 = v20;
        v23 = v19;
        v0.from_iter(&v23, &g_57a9d8);
        alloc::str::join_generic_copy(&v8, v2, v3, ",-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 1);
        v17 = v9;
        *((int128_t *)&v15) = *((int128_t *)&v8);
        uu_unexpand::tabstops_parse(&v8, v16, v9);
        memcpy(&v13, &v8, 16);
        v14 = v10;
        if ((v8 & 1))
        {
            a0->field_18 = v14;
            *((void*)&a0->field_8[0]) = v13;
            *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
            ::0x49d580::core::ptr::drop_in_place<alloc::string::String>(&(char)v15);
            ::0x49d680::core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v0);
            return a0;
        }
        v7 = v14;
        v4 = v13;
        ::0x49d580::core::ptr::drop_in_place<alloc::string::String>(&(char)v15);
        ::0x49d680::core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v0);
    }
    else
    {
        v32 = 8.alloc_impl(8);
        if (!v32)
            alloc::alloc::handle_alloc_error(8, 8); /* do not return */
        *(v32) = 8;
        v5 = 1;
        v6 = v32;
        v7 = 1;
    }
    if ((char)a1.get_flag("allfirst-onlyno-utf8--first-only--all-a--tabs=", 3) || (char)a1.contains_id("tabskindAuto/", 4))
        v33 = (char)a1.get_flag("first-onlyno-utf8--first-only--all-a--tabs=", 10) ^ 1;
    v34 = a1.get_flag("no-utf8--first-only--all-a--tabs=", 7);
    v8.try_get_many(a1, "filesizei128", 4);
    v18.unwrap("filesizei128", 4, &v8);
    if (*((long long *)&v18))
    {
        memcpy(&v30, &v22, 16);
        v29 = v21;
        v28 = v20;
        v27 = v19;
        v0.from_iter(&v27, &g_57a9d8);
    }
    else
    {
        v35 = 8.alloc_impl(24);
        if (!v35)
            alloc::alloc::handle_alloc_error(8, 24); /* do not return */
        v36 = v35;
        v8.to_vec("-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 1);
        v3 = v9;
        v37 = *((int128_t *)&v8);
        v0 = v37;
        v36->field_10 = v9;
        *((void*)&v36->field_0) = v37;
        v1 = 1;
        v2 = v36;
        v3 = 1;
    }
    v9 = v3;
    v38 = *((int128_t *)&v1);
    v8 = v38;
    v12 = v7;
    memcpy(&v10, &(char)v5, 16);
    *((void*)&a0->field_0) = v38;
    a0->field_20 = v11;
    a0->field_28 = v12;
    a0->field_8[1] = v9;
    a0->field_18 = v10;
    a0->field_30 = v33;
    a0->field_31 = v34 ^ 1;
    return a0;
}
