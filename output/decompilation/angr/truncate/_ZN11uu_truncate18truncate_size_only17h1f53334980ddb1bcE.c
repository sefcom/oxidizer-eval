long long uu_truncate::truncate_size_only(unsigned long long a0, unsigned long long a1, unsigned long long a2[3], unsigned long a3, char a4)
{
    unsigned long long v0;  // [bp-0x170]
    char v1;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned int v2;  // [bp-0x160], Other Possible Types: unsigned long long
    char *v3;  // [bp-0x158], Other Possible Types: unsigned long long
    unsigned int v4;  // [bp-0x150], Other Possible Types: unsigned long long
    void* v5;  // [bp-0x148]
    char *v6;  // [bp-0x130]
    unsigned long long v7;  // [bp-0x128]
    void* v8;  // [bp-0x120]
    unsigned long v9;  // [bp-0x118]
    unsigned long v10;  // [bp-0x110]
    char v11;  // [bp-0x108]
    char v12;  // [bp-0x100]
    unsigned long long v13;  // [bp-0xf0]
    int v14;  // [bp-0xe8], Other Possible Types: char
    int v15;  // [bp-0xe0]
    unsigned int v16;  // [bp-0xd0]
    int v17;  // [bp-0xb0]
    void* v19;  // r12
    unsigned long long v20[3];  // 4096
    unsigned long long v21[3];  // r14
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax
    unsigned long long v25;  // rax

    uu_truncate::parse_mode_and_size(&v1, a0, a1);
    if (*((int *)&v1) != 4)
    {
        memcpy(&(char)v15, &(char)v3, 16);
        *((int128_t *)&v14) = *((int128_t *)&v1);
        return uu_truncate::truncate_size_only::{{closure}}(&(char)v14);
    }
    v0 = v3;
    if ((v2 == 5 || v2 == 6) && !v0)
    {
        v14.to_vec("division by zero", 16);
        v16 = 1;
        return v14.new();
    }
    v19 = 0;
    v20 = a2;
    while (true)
    {
        v21 = v20;
        if (a3 * 24 == v19)
            return 0;
        std::fs::metadata(&v14, v21);
        if (*((long long *)&v14) == 2)
        {
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2, (long long)v15);
        }
        else if (((short)(int)v17 & 0xf000) == 0x1000)
        {
            v8 = 0;
            v9 = *((long long *)(a2 + v19 + 8));
            v10 = *((long long *)(a2 + v19 + 16));
            v11 = 1;
            v6 = &v8;
            v7 = <os_display::Quoted as core::fmt::Display>::fmt;
            v1 = &g_4e4020;
            v2 = 2;
            v5 = 0;
            v3 = &v6;
            v4 = 1;
            v12.map_or_else(&v1);
            v4 = 1;
            memcpy(&v1, &v12, 16);
            v3 = v13;
            v25 = v1.new();
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(*((long long *)&v14), (long long)v15);
            return v25;
        }
        v22 = (unsigned long long)v2.to_size();
        v23 = uu_truncate::file_truncate(v21[1], v21[2], a4, v22);
        v19 += 24;
        v20 = v21 + 1;
        if (v23)
            return v23;
    }
}
