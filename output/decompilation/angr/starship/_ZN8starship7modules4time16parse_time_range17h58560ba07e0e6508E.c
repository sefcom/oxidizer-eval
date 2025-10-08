void starship::modules::time::parse_time_range(unsigned int a0[5], unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xb8]
    unsigned int v1;  // [bp-0xb4]
    unsigned long long v2;  // [bp-0xb0]
    char v3;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0xa0]
    char v5;  // [bp-0x98]
    char v6;  // [bp-0x80]
    unsigned long long v7;  // [bp-0x78]
    unsigned long long v8;  // [bp-0x70]
    char v9;  // [bp-0x68]
    char v10;  // [bp-0x58]
    char v11;  // [bp-0x48]
    unsigned long long v13;  // rdx
    unsigned long long v14;  // r15
    unsigned long long v15;  // rax
    unsigned int v16;  // r14d
    unsigned int v17;  // eax
    unsigned int v18;  // edx
    unsigned int v19[5];  // rcx

    v6.to_vec(a1, a2);
    v0.into_searcher(45, v7, v8);
    memcpy(&v11, &v5, 16);
    memcpy(&v10, &v3, 16);
    memcpy(&v9, &v0, 16);
    if (v9.fold() != 1)
    {
        a0[0] = 0;
        v17 = 0;
        v19 = 12;
    }
    else if (((char)core::str::<impl str>::find(v7, v8, 45) & 1))
    {
        ::0xa7cbe0::core::str::<impl str>::split_at_checked(&v0, v7, v8, v13);
        if (!*((long long *)&v0))
            core::str::slice_error_fail(v7, v8, 0, v13, &g_11f3e60); /* do not return */
        v7 = v3;
        v14 = v4;
        v15 = 1.get(v7, v14);
        if (!v15)
        {
            v8 = v14;
            core::str::slice_error_fail(v7, v8, 1, v14, &g_11f63f0); /* do not return */
        }
        v0.parse_from_str(*((long long *)&v0), v2, "%H:%M:%SdivergedNoMemoryBufError@", 8);
        v16 = v2;
        v0.parse_from_str(v15, v13, "%H:%M:%SdivergedNoMemoryBufError@", 8);
        v17 = v2;
        v18 = v0 ^ 1;
        a0[0] = v0 ^ 1;
        a0[1] = v1;
        a0[2] = v16;
        a0[3] = v18;
        a0[4] = v1;
        v19 = 20;
    }
    else
    {
        core::option::unwrap_failed(&g_11f63d8); /* do not return */
    }
    *((unsigned int *)(a0 + v19)) = v17;
    core::ptr::drop_in_place<alloc::string::String>(&v6);
    return;
}
