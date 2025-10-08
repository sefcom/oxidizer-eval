long long fish::autoload::AutoloadFileCache::check(void* a0, unsigned long long a1[3], unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, char a6)
{
    char v0;  // [bp-0x172]
    char v1;  // [bp-0x171]
    unsigned int v2;  // [bp-0x170], Other Possible Types: unsigned long
    unsigned int v3;  // [bp-0x170]
    void* v4;  // [bp-0x168]
    unsigned long v5;  // [bp-0x160]
    char v6;  // [bp-0x158], Other Possible Types: unsigned long long
    int v7;  // [bp-0x158]
    unsigned long long v8;  // [bp-0x150]
    unsigned long long v9;  // [bp-0x148]
    int v10;  // [bp-0x148]
    char *v11;  // [bp-0x140], Other Possible Types: int
    int v12;  // [bp-0x138]
    char v13;  // [bp-0x128]
    char v14;  // [bp-0x118]
    unsigned long long v15;  // [bp-0x108]
    unsigned int v16;  // [bp-0x100]
    unsigned long long v17[3];  // [bp-0xf8]
    unsigned long long v18;  // [bp-0xf0]
    unsigned long long v19;  // [bp-0xe8]
    char *v20;  // [bp-0xe0]
    int v21;  // [bp-0xd8]
    int v22;  // [bp-0xc8]
    int v23;  // [bp-0xb8]
    int v24;  // [bp-0xa8], Other Possible Types: char
    unsigned long long v25;  // [bp-0x98]
    int v26;  // [bp-0x88]
    char v27;  // [bp-0x78]
    char v28;  // [bp-0x68]
    char v29;  // [bp-0x48]
    unsigned long long v30;  // [bp-0x38]
    void* v31;  // r14
    struct_1 *v33;  // rax
    struct_1 *v34;  // rbx
    unsigned int v35;  // edx
    struct_0 *v36;  // rax
    unsigned long long v37;  // rax
    void* v38;  // rbx
    unsigned long long v39;  // rax
    int v40;  // xmm0
    int v41;  // xmm1

    v0 = fish::autoload::AutoloadFileCache::check::{{closure}}(a2, a3);
    v1 = fish::autoload::AutoloadFileCache::check::{{closure}}(a2, a3);
    v5 = &a1[3 + 2];
    v33 = a1[3 + 2].get_inner(a4, a5);
    if (v33)
    {
        v34 = v33;
        if (a6)
        {
            return a0.clone(&v34->field_18);
        }
        else if (v34->field_18 != 0x8000000000000000)
        {
            v2 = v34->field_70;
            if (v34->field_68.is_fresh(v3, fish::autoload::AutoloadFileCache::current_timestamp(), v35))
                return v4.clone(&v34->field_18);
            v6.remove(v5, a4, a5);
            core::ptr::drop_in_place<core::option::Option<fish::autoload::KnownFile>>(&v6);
        }
        else
        {
            return a0.clone(&v34->field_18);
        }
    }
    v2 = a1 + 1;
    v36 = a1 + 1.get(a4, a5);
    if (v36)
    {
        if (a6 || v36->field_0.is_fresh(v36->field_8, fish::autoload::AutoloadFileCache::current_timestamp(), v35))
        {
            *((unsigned long long *)v31) = 9223372036854775809;
            return 9223372036854775809;
        }
        v2.pop(a4, a5);
    }
    v4 = v31;
    v6.locate_file(a1[1], a1[2], a4, a5, v0, 0);
    v17[0] = a1;
    v18 = a4;
    v19 = a5;
    v20 = &v1;
    v24.or_else(&v6, &v17);
    *((unsigned long long *[3])&v7) = a1;
    v8 = a4;
    v9 = a5;
    v11 = &v1;
    v17.or_else(&v24, &(unsigned long long)v7);
    if (v17 == 9223372036854775809)
    {
        (unsigned long long)v7.to_vec(a4, a5);
        v25 = v9;
        memcpy(&v24, &(unsigned long long)v7, 16);
        v37 = v2.put(&v24, fish::autoload::AutoloadFileCache::current_timestamp(), v35);
        v38 = v4;
        if ((unsigned int)v37 != 0x3b9aca00)
        {
            v6 = &g_14c58b0;
            v8 = 1;
            v9 = 8;
            *((uint128_t *)&v11) = 0;
            core::panicking::panic_fmt(&v6, &g_14c58c0); /* do not return */
        }
    }
    else
    {
        (unsigned long long)v7.to_vec(a4, a5);
        v30 = v9;
        memcpy(&v29, &(unsigned long long)v7, 16);
        v24.clone(&v17);
        v39 = fish::autoload::AutoloadFileCache::current_timestamp();
        v38 = v4;
        memcpy(&v14, &v28, 16);
        memcpy(&v13, &v27, 16);
        v12 = v26;
        *((int128_t *)&v10) = *((int128_t *)&v25);
        v7 = v24;
        v15 = v39;
        v16 = v35;
        v24.insert(v5, &v29, &(unsigned long long)v7);
        if ((long long)v24 != 9223372036854775809)
        {
            v6 = &g_14c58a0;
            v8 = 1;
            v9 = 8;
            *((uint128_t *)&v11) = 0;
            core::panicking::panic_fmt(&v6, &g_14c58d8); /* do not return */
        }
        v37 = (unsigned long long)core::ptr::drop_in_place<core::option::Option<fish::autoload::KnownFile>>(&v24);
    }
    v38[64] = v23;
    v40 = *((int128_t *)&v17);
    v41 = *((int128_t *)&v19);
    v38[48] = v22;
    v38[32] = v21;
    v38[16] = v41;
    *(v38) = v40;
    return v37;
}
