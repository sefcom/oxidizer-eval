long long uu_expand::Options::new(struct_1 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x1b1]
    unsigned int v1;  // [bp-0x1b0]
    unsigned int v2;  // [bp-0x1ad]
    int v3;  // [bp-0x1a8], Other Possible Types: unsigned long long
    unsigned long long *v4;  // [bp-0x1a0], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x198]
    char v6;  // [bp-0x188]
    unsigned long long v7;  // [bp-0x180]
    unsigned long long v8;  // [bp-0x178]
    int v9;  // [bp-0x168], Other Possible Types: char
    unsigned long long v10;  // [bp-0x168]
    struct_0 *v11;  // [bp-0x160]
    unsigned long long v12;  // [bp-0x158]
    int v13;  // [bp-0x148], Other Possible Types: unsigned long long *, char, unsigned long
    char v14;  // [bp-0x140], Other Possible Types: unsigned long
    char v15;  // [bp-0x13f]
    unsigned int v16;  // [bp-0x13c]
    void* v17;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long *v18;  // [bp-0x130]
    unsigned long long v19;  // [bp-0x128]
    unsigned long long v20;  // [bp-0x120]
    int v21;  // [bp-0x118], Other Possible Types: char
    unsigned long long v22;  // [bp-0x108]
    char v23;  // [bp-0xf8]
    int v24;  // [bp-0xf8]
    int v25;  // [bp-0xe8]
    int v26;  // [bp-0xd8]
    int v27;  // [bp-0xc8]
    int v28;  // [bp-0xb8]
    int v29;  // [bp-0xa8]
    int v30;  // [bp-0x98]
    int v31;  // [bp-0x88]
    int v32;  // [bp-0x78]
    int v33;  // [bp-0x68]
    int v34;  // [bp-0x58]
    char v35;  // [bp-0x48]
    char v37;  // bpl
    unsigned long long v38;  // r15
    unsigned long long *v39;  // r12
    unsigned long long v40;  // r13
    int v41;  // xmm0
    int v42;  // xmm1
    unsigned int v43;  // edx
    unsigned long long *v44;  // rax
    char v45;  // al
    unsigned long long v46;  // rdx
    struct_0 *v47;  // rax
    struct_0 *v48;  // r14
    int v49;  // xmm0
    int v50;  // xmm0

    v13.try_get_many(a1, _ZN9uu_expand7options4TABS17he4f92886d41ef3e1E, g_57b9d8);
    (char)v24.unwrap(_ZN9uu_expand7options4TABS17he4f92886d41ef3e1E, g_57b9d8, &v13);
    if (*((long long *)&v23))
    {
        v31 = v27;
        v30 = v26;
        v29 = v25;
        v28 = v24;
        v6.from_iter(&v28, &g_57b568);
        alloc::str::join_generic_copy(&v9, v7, v8, ", -/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs--tabs=", 1);
        v5 = v12;
        *((int128_t *)&v3) = *((int128_t *)&v9);
        uu_expand::tabstops_parse(&v13, v4, v12);
        v37 = v14;
        if (v13 != 9223372036854775814)
        {
            v2 = v16;
            v1 = *((int *)&v15);
            v41 = *((int128_t *)&v17);
            v42 = *((int128_t *)&v19);
            v43 = v1;
            *((unsigned int *)&a0->padding_11[3]) = v2;
            *((unsigned int *)&a0->padding_11[0]) = v43;
            *((unsigned long *)&a0->padding_1[7]) = v13;
            a0->field_10 = v37;
            *((void*)&a0->field_18[0]) = v41;
            *((void*)&a0->field_28) = v42;
            *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
            ::0x49d1a0::core::ptr::drop_in_place<alloc::string::String>(&(char)v3);
            ::0x49d2a0::core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v6);
            return a0;
        }
        v38 = v17;
        v39 = v18;
        v40 = v19;
        ::0x49d1a0::core::ptr::drop_in_place<alloc::string::String>(&(char)v3);
        ::0x49d2a0::core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v6);
    }
    else
    {
        v44 = 8.alloc_impl(8);
        if (!v44)
            alloc::alloc::handle_alloc_error(8, 8); /* do not return */
        v39 = v44;
        *(v44) = 8;
        v38 = 1;
        v37 = 0;
        v40 = 1;
    }
    v3 = v38;
    v4 = v39;
    v5 = v40;
    v0 = a1.get_flag(_ZN9uu_expand7options7INITIAL17hcadd7da68475aed2E, g_57b9e8);
    v45 = a1.get_flag(_ZN9uu_expand7options7NO_UTF817hac2db96005fc52ceE, g_57b9f8);
    v13 = v39;
    v14 = &v39[v40];
    v17 = 0;
    if (!v13.reduce())
        core::option::unwrap_failed(&g_57b580); /* do not return */
    alloc::slice::<impl [T]>::repeat(&v13, " -/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs--tabs=", 1, v46);
    v8 = v17;
    memcpy(&v6, &v13, 16);
    v13.try_get_many(a1, _ZN9uu_expand7options5FILES17h7df57fd68273d6a6E, g_57ba08);
    (char)v24.unwrap(_ZN9uu_expand7options5FILES17h7df57fd68273d6a6E, g_57ba08, &v13);
    if (*((long long *)&v23))
    {
        memcpy(&v35, &v27, 16);
        v34 = v26;
        v33 = v25;
        v32 = v24;
        v9.from_iter(&v32, &g_57b568);
    }
    else
    {
        v47 = 8.alloc_impl(24);
        if (!v47)
            alloc::alloc::handle_alloc_error(8, 24); /* do not return */
        v48 = v47;
        v13.to_vec("-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs--tabs=", 1);
        v12 = v17;
        v49 = *((int128_t *)&v13);
        v9 = v49;
        v48->field_10 = v17;
        *((void*)&v48->field_0) = v49;
        v10 = 1;
        v11 = v48;
        v12 = 1;
    }
    v17 = v12;
    v50 = *((int128_t *)&v10);
    v13 = v50;
    v20 = v5;
    memcpy(&v18, &v3, 16);
    v22 = v8;
    memcpy(&v21, &v6, 16);
    a0->field_40 = v8;
    *((void*)&a0->padding_29[7]) = v21;
    *((void*)&a0->field_0) = v50;
    a0->field_18[1] = v19;
    *((unsigned long long *)&a0->field_28) = v20;
    *((int128_t *)&a0->field_10) = *((int128_t *)&v17);
    a0->field_48 = v0;
    a0->field_49 = v45 ^ 1;
    a0->field_4a = v37;
    return a0;
}
