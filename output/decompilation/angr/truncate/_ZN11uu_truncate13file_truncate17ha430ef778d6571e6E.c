long long uu_truncate::file_truncate(unsigned long long a0, unsigned long long a1, char a2, unsigned long long a3)
{
    unsigned long v0;  // [bp-0x158]
    unsigned int v1;  // [bp-0x154]
    void* v2;  // [bp-0x150], Other Possible Types: unsigned long long
    char *v3;  // [bp-0x148], Other Possible Types: unsigned long long
    unsigned int v4;  // [bp-0x140], Other Possible Types: unsigned long long
    void* v5;  // [bp-0x138]
    void* v6;  // [bp-0x128], Other Possible Types: unsigned int
    unsigned long long v7;  // [bp-0x120]
    unsigned long long v8;  // [bp-0x118]
    char v9;  // [bp-0x110]
    char *v10;  // [bp-0x108]
    unsigned long long v11;  // [bp-0x100]
    char v12;  // [bp-0xf8]
    unsigned long long v13;  // [bp-0xe8]
    char v14;  // [bp-0xe0], Other Possible Types: unsigned long long
    char v15;  // [bp-0xd8], Other Possible Types: unsigned int
    char v16;  // [bp-0xd7]
    unsigned short v17;  // [bp-0xd4]
    char v18;  // [bp-0xa8]
    unsigned long long v21;  // rdi
    unsigned long long v22;  // rax
    void* v23;  // r15
    char v24;  // al

    std::fs::metadata(&v14, a0, a1);
    v21 = 2;
    if (v14 != 2)
    {
        if ((0xf000 & *((int *)&v18)) == 0x1000)
        {
            v6 = 0;
            v7 = a0;
            v8 = a1;
            v9 = 1;
            v10 = &v6;
            v11 = <os_display::Quoted as core::fmt::Display>::fmt;
            v0 = &g_4e4020;
            v2 = 2;
            v5 = 0;
            v3 = &v10;
            v4 = 1;
            v12.map_or_else(&(char)v0);
            v4 = 1;
            memcpy(&(char)v0, &v12, 16);
            v3 = v13;
            v22 = (char)v0.new();
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v14, *((long long *)&v15));
            return v22;
        }
        v21 = v14;
    }
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v21, *((long long *)&v15));
    v14 = 0x1b600000000;
    v15 = 0;
    v17 = 0;
    v16 = 1;
    (char)v0.open(&v14, a0, a1);
    if ((int)v0 == 1)
    {
        v23 = v2;
        v24 = (char)v23.kind();
        if (!a2 && !v24)
        {
            core::ptr::drop_in_place<std::io::error::Error>(v23);
            v23 = 0;
        }
    }
    else
    {
        v6 = v1;
        v23 = v6.set_len(a3);
        core::ptr::drop_in_place<std::fs::File>(v1);
    }
    return v23.map_err_context(a0, a1);
}
