long long uu_expand::Options::new(void* a0, unsigned long long a1)
{
    char v0;  // [bp-0x155]
    unsigned int v1;  // [bp-0x154]
    unsigned int v2;  // [bp-0x150]
    unsigned int v3;  // [bp-0x14d]
    unsigned long long v4;  // [bp-0x148]
    unsigned long long v5;  // [bp-0x140]
    struct_0 *v6;  // [bp-0x138], Other Possible Types: unsigned long long *, char
    unsigned long long *v7;  // [bp-0x138], Other Possible Types: unsigned long long
    char v8;  // [bp-0x130]
    struct_0 *v9;  // [bp-0x130], Other Possible Types: unsigned long
    char v10;  // [bp-0x12f]
    unsigned int v11;  // [bp-0x12c]
    unsigned long long v12;  // [bp-0x128]
    unsigned long long v13;  // [bp-0x128]
    unsigned long long *v14;  // [bp-0x120]
    char v15;  // [bp-0x118]
    struct_0 *v16;  // [bp-0xf0]
    int v17;  // [bp-0xe8], Other Possible Types: char
    unsigned long long v18;  // [bp-0xe0]
    unsigned long long v19;  // [bp-0xd8]
    char v20;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v21;  // [bp-0xc0]
    unsigned long long v22;  // [bp-0xb8]
    char v23;  // [bp-0xb0]
    char v24;  // [bp-0x70]
    unsigned long long v26;  // rbp
    unsigned long long *v27;  // r14
    int v28;  // xmm0
    int v29;  // xmm1
    unsigned int v30;  // edx
    unsigned long long *v31;  // rax
    char v32;  // al
    unsigned long long v33;  // rdx
    struct_0 *v34;  // rax
    struct_0 *v35;  // r12
    int v36;  // xmm0

    v6.try_get_many(a1, "tabskindAuto/", 4);
    v23.unwrap("tabskindAuto/", 4, &v6);
    if (*((long long *)&v23))
    {
        v20.collect(&v23);
        alloc::str::join_generic_copy(&v17, v21, v22);
        v26 = *((long long *)&v17);
        uu_expand::tabstops_parse(&v6, v18, v19);
        if (v6 != 9223372036854775814)
        {
            v3 = v11;
            v2 = *((int *)&v10);
            v28 = *((int128_t *)&v12);
            v29 = *((int128_t *)&v15);
            v30 = v2;
            *((unsigned int *)&a0[20]) = v3;
            *((unsigned int *)&a0[17]) = v30;
            *((struct_0 **)&a0[8]) = v6;
            *((char *)&a0[16]) = v1;
            a0[24] = v28;
            a0[40] = v29;
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<alloc::string::String>(v26, v18);
            core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v20, v21);
            return a0;
        }
        v1 = v8;
        v4 = v12;
        v27 = v14;
        v5 = *((long long *)&v15);
        core::ptr::drop_in_place<alloc::string::String>(v26, v18);
        core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v20, v21);
    }
    else
    {
        v31 = 8.alloc_impl(8);
        if (!v31)
            alloc::alloc::handle_alloc_error(8, 8); /* do not return */
        v27 = v31;
        *(v31) = 8;
        v4 = 1;
        v1 = 0;
        v5 = 1;
    }
    v0 = a1.get_flag("initialno-utf8FILES/+src/uu/expand/src/expand.rs", 7);
    v32 = a1.get_flag("no-utf8FILES/+src/uu/expand/src/expand.rs", 7);
    v6 = v27;
    v9 = &v27[v5];
    v12 = 0;
    if (!((char)v6.reduce() & 1))
        core::option::unwrap_failed(&g_4e8878); /* do not return */
    alloc::slice::<impl [T]>::repeat(&v6, v33);
    v16 = v9;
    v6.try_get_many(a1, "FILES/+src/uu/expand/src/expand.rs", 5);
    v24.unwrap("FILES/+src/uu/expand/src/expand.rs", 5, &v6);
    if (*((long long *)&v24))
    {
        v6.collect(&v24);
        v7 = v6;
        v13 = v12;
    }
    else
    {
        v34 = 8.alloc_impl(24);
        if (!v34)
            alloc::alloc::handle_alloc_error(8, 24); /* do not return */
        v35 = v34;
        v6.to_vec("---tabs=", 1);
        v19 = v12;
        v36 = *((int128_t *)&v6);
        v17 = v36;
        v35->field_10 = v12;
        *((void*)&v35->field_0) = v36;
        v7 = 1;
        v9 = v35;
        v13 = 1;
    }
    *((unsigned long long *)&a0[16]) = v13;
    *((unsigned long long **)a0) = v7;
    *((unsigned long *)&a0[8]) = v9;
    *((unsigned long long *)&a0[24]) = v4;
    *((unsigned long long **)&a0[32]) = v27;
    *((unsigned long long *)&a0[40]) = v5;
    *((unsigned long long **)&a0[48]) = v6;
    *((struct_0 **)&a0[56]) = v16;
    *((unsigned long long *)&a0[64]) = v12;
    *((char *)&a0[72]) = v0;
    *((char *)&a0[73]) = v32 ^ 1;
    *((char *)&a0[74]) = v1;
    return a0;
}
