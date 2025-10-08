void uu_cp::copy_attributes(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5[12])
{
    char *v0;  // [bp-0x220], Other Possible Types: unsigned long long
    char *v1;  // [bp-0x218], Other Possible Types: unsigned long long
    char *v2;  // [bp-0x210], Other Possible Types: unsigned long long
    char v3;  // [bp-0x208]
    unsigned long long v4;  // [bp-0x200]
    unsigned long long v5;  // [bp-0x1f8]
    char *v6;  // [bp-0x1f0], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x1e8]
    char *v8;  // [bp-0x1e0]
    unsigned long long v9;  // [bp-0x1d8]
    unsigned long long v10;  // [bp-0x1c0]
    unsigned long long v11;  // [bp-0x1b8]
    char *v12;  // [bp-0x1b0]
    unsigned long long v13;  // [bp-0x1a8]
    void* v14;  // [bp-0x1a0]
    char v16;  // [bp-0x190]
    char v17;  // [bp-0x110]
    unsigned long long v18;  // [bp-0x108]
    unsigned long long v19;  // [bp-0x100]
    char v20;  // [bp-0xf8]
    unsigned long long v21;  // [bp-0xe0]
    unsigned long long v22;  // [bp-0xd8]
    unsigned long long v23;  // [bp-0xd0]
    unsigned long long v24;  // [bp-0xd0]
    char v25;  // [bp-0xc8]
    char v26;  // [bp-0xc0]
    int v30;  // xmm0
    int v31;  // xmm1

    v4 = a3;
    v5 = a4;
    v0 = 1;
    v1 = a1;
    v2 = a2;
    v3 = 1;
    v21 = 1;
    v22 = a3;
    v24 = a4;
    v25 = 1;
    v6 = &v0;
    v7 = <os_display::Quoted as core::fmt::Display>::fmt;
    v8 = &v21;
    v9 = <os_display::Quoted as core::fmt::Display>::fmt;
    v10 = &g_55eb98;
    v11 = 2;
    v14 = 0;
    v12 = &v6;
    v13 = 2;
    v17.map_or_else(&v10);
    v6 = v18;
    v7 = v19;
    std::fs::symlink_metadata(&v10, a1, a2);
    memcpy(&v20, &v12, 16);
    memcpy(&v26, &v14, 144);
    v21 = &g_55eb98;
    v22 = v23;
    memcpy(&v24, &v20, 16);
    v0 = &v21;
    v1 = &v4;
    v2 = &v6;
    uu_cp::handle_preserve(&v10, a5[0], a5[1], &v0);
    *((long long *)&a0[48]) = *((long long *)&v16);
    v30 = *((int128_t *)&v10);
    v31 = *((int128_t *)&v12);
    *((int128_t *)&a0[32]) = *((int128_t *)&v14);
    a0[16] = v31;
    *(a0) = v30;
    core::ptr::drop_in_place<alloc::string::String>(&v17);
    return;
}
