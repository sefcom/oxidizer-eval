long long uu_cp::file_mode_for_interactive_overwrite(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x12c]
    char *v1;  // [bp-0x128]
    unsigned long long v2;  // [bp-0x120]
    unsigned long long v3;  // [bp-0x118]
    int v4;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x100]
    char *v6;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0xf0]
    unsigned long long v8;  // [bp-0xe8]
    unsigned long long v9;  // [bp-0xe0]
    char v10;  // [bp-0xd8]
    unsigned long long v11;  // [bp-0xc8]
    char v12;  // [bp-0xc0]
    char v13;  // [bp-0x88]
    unsigned long v15;  // rbp
    int v16;  // xmm0

    std::fs::metadata(&v12, a1, a2);
    if (*((int *)&v12) == 2)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return (unsigned long long)core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v12);
    }
    v15 = *((int *)&v13);
    if ((char)v15 < 0)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v0 = (unsigned int)v15 & 3967;
    v1 = &v0;
    v2 = core::fmt::num::<impl core::fmt::Octal for i32>::fmt;
    v4 = &g_420910;
    v5 = 1;
    v8 = &g_424bf8;
    v9 = 1;
    v6 = &v1;
    v7 = 1;
    v10.map_or_else(&v4);
    memcpy(&v1, &v10, 16);
    v3 = v11;
    uucore::features::fs::display_permissions_unix(&v10, v15 & 4294967295, 0);
    v6 = v3;
    v16 = *((int128_t *)&v1);
    v4 = v16;
    memcpy(&v7, &v10, 16);
    v9 = v11;
    *((unsigned long long **)&a0[32]) = &g_424bf8;
    *((unsigned long long *)&a0[40]) = v9;
    *((unsigned long long *)&a0[16]) = v6;
    *((unsigned long long *)&a0[24]) = v7;
    *(a0) = v16;
    return v7;
}
