long long binary::install::find_library_path(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0xe0]
    unsigned long long v1;  // [bp-0xd8]
    unsigned long long v2;  // [bp-0xd0]
    unsigned long long v3;  // [bp-0xc8]
    unsigned long long v4;  // [bp-0xc0]
    unsigned long long v5;  // [bp-0xb8]
    unsigned long long v6;  // [bp-0xb0]
    char *v7;  // [bp-0xa8], Other Possible Types: unsigned long long
    void* v8;  // [bp-0x98]
    char v9;  // [bp-0x88]
    char v10;  // [bp-0x80]
    unsigned long long v11;  // [bp-0x78]
    char *v12;  // [bp-0x70]
    unsigned long long v13;  // [bp-0x68]
    char v14;  // [bp-0x60]
    unsigned long long v15;  // [bp-0x58]
    unsigned long long v16;  // [bp-0x50]
    uint128_t v17;  // [bp-0x48]
    uint128_t v18;  // [bp-0x38]
    char v19;  // [bp-0x20]
    unsigned int v21;  // eax
    unsigned long long v22;  // r14
    int v24;  // [bp-0xa0], Other Possible Types: unsigned long long

    if (::0x1bcf200::core::sync::atomic::atomic_load() >= 3)
    {
        v5 = &g_1ce6df0;
        v6 = 1;
        v7 = 8;
        *((uint128_t *)&v24) = 0;
        v0 = "binary::install";
        v1 = 15;
        v2 = "binary::install";
        v3 = 15;
        v4 = log::__private_api::loc(&g_1ce6e20);
        log::__private_api::log(&v5, 3, &v0);
    }
    v18 = 0;
    v17 = 0;
    v21 = dladdr(31457304, &v17);
    v22 = v17;
    if ((!v22 | !v21) != 1)
    {
        v14.to_str(v22, strlen(v22) + 1);
        if (*((int *)&v14) != 1)
        {
            v9.to_vec(v15, v16);
            v9.pop();
            if (::0x1bcf200::core::sync::atomic::atomic_load() >= 3)
            {
                memcpy(&v19, &v10, 16);
                v12 = &v19;
                v13 = <std::path::Display as core::fmt::Display>::fmt;
                v5 = &g_1ce6e00;
                v6 = 1;
                v8 = 0;
                v7 = &v12;
                v24 = 1;
                v0 = "binary::install";
                v1 = 15;
                v2 = "binary::install";
                v3 = 15;
                v4 = log::__private_api::loc(&g_1ce6e38);
                log::__private_api::log(&v5, 3, &v0);
            }
            a0->field_10 = v11;
            a0->field_0 = *((int128_t *)&v9);
            return v11;
        }
    }
    if (::0x1bcf200::core::sync::atomic::atomic_load() <= 1)
        return a0.to_vec("/libweekQ", 4);
    v5 = &g_1ce6e10;
    v6 = 1;
    v7 = 8;
    *((uint128_t *)&v24) = 0;
    v0 = "binary::install";
    v1 = 15;
    v2 = "binary::install";
    v3 = 15;
    v4 = log::__private_api::loc(&g_1ce6e50);
    log::__private_api::log(&v5, 2, &v0);
    return a0.to_vec("/libweekQ", 4);
}
