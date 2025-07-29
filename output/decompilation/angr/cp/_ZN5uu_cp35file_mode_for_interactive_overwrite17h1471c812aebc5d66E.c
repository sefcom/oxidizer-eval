long long uu_cp::file_mode_for_interactive_overwrite(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x16c]
    char *v1;  // [bp-0x168]
    unsigned long long v2;  // [bp-0x160]
    unsigned long long v3;  // [bp-0x158]
    struct struct_1 v4[16];  // [bp-0x148]
    void* v5;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x130]
    void* v7;  // [bp-0x128]
    char *v8;  // [bp-0x120], Other Possible Types: unsigned long long
    char v9;  // [bp-0x118]
    unsigned long long v10;  // [bp-0x108]
    unsigned long long v11;  // [bp-0x100]
    char *v12;  // [bp-0xf8]
    unsigned long long v13;  // [bp-0xf0]
    char *v14;  // [bp-0xe8]
    unsigned long long v15;  // [bp-0xe0]
    char v16;  // [bp-0xd8]
    unsigned long long v17;  // [bp-0xc8]
    char v18;  // [bp-0xc0]
    char v19;  // [bp-0x88]
    unsigned long v21;  // rbp
    int v22;  // xmm0

    std::fs::metadata(&v18, a1, a2);
    if (*((int *)&v18) == 2)
    {
        *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
        return (unsigned long long)::0x4d4630::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v18);
    }
    v21 = *((int *)&v19);
    if ((char)v21 < 0)
    {
        *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v0 = (unsigned int)v21 & 3967;
    v1 = &v0;
    v2 = core::fmt::num::<impl core::fmt::Octal for i32>::fmt;
    *((unsigned long long *)&v4[0]) = 2;
    v5 = 0;
    v6 = 4;
    v7 = 0;
    v8 = 34359738400;
    v9 = 3;
    v10 = &g_4390f0;
    v11 = 1;
    v14 = &v4[0].field_0;
    v15 = 1;
    v12 = &v1;
    v13 = 1;
    v16.map_or_else(&v10);
    memcpy(&v1, &v16, 16);
    v3 = v17;
    uucore::features::fs::display_permissions_unix(&v10, v21 & 4294967295, 0);
    v5 = v3;
    v22 = *((int128_t *)&v1);
    memcpy(&v6, &v10, 16);
    v8 = v12;
    a0->field_20 = 0;
    a0->field_28 = v8;
    a0->field_10 = v5;
    a0->field_18 = v6;
    *((void*)&a0->field_0) = v22;
    return v6;
}
