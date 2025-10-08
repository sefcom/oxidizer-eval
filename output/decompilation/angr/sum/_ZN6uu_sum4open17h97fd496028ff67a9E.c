long long uu_sum::open(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    char *v0;  // [bp-0x128]
    unsigned long long v1;  // [bp-0x120]
    void* v2;  // [bp-0x118]
    unsigned long long v3;  // [bp-0x110]
    unsigned long long v4;  // [bp-0x108]
    char v5;  // [bp-0x100]
    char v6;  // [bp-0xf8]
    char v7;  // [bp-0xf0]
    unsigned int v8;  // [bp-0xe0]
    unsigned long long v9;  // [bp-0xd8]
    unsigned long long v10;  // [bp-0xd0]
    char v11;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0xc0]
    char *v13;  // [bp-0xb8]
    unsigned long long v14;  // [bp-0xb0]
    void* v15;  // [bp-0xa8]
    unsigned long long v17;  // rax
    unsigned long long v18;  // rcx
    unsigned long long v19;  // rax
    unsigned long long v20;  // rdx

    if ((char)a1.equal(a2))
    {
        v17 = std::io::stdio::stdin().new();
        v18 = &g_4e1c78;
        goto LABEL_4572a9;
    }
    v9 = a1;
    v10 = a2;
    if ((char)a1.is_dir(a2))
    {
        v2 = 0;
        v3 = a1;
        v4 = a2;
        v5 = 0;
        v0 = &v2;
        v1 = <os_display::Quoted as core::fmt::Display>::fmt;
        v19 = &g_4e1b58;
        goto LABEL_457362;
    }
    else
    {
        std::fs::metadata(&v11, a1, a2);
        if (v11 == 2)
        {
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2, v12);
            v2 = 0;
            v3 = a1;
            v4 = a2;
            v5 = 0;
            v0 = &v2;
            v1 = <os_display::Quoted as core::fmt::Display>::fmt;
            v19 = &g_4e1b78;
LABEL_457362:
            v11 = v19;
            v12 = 2;
            v15 = 0;
            v13 = &v0;
            v14 = 1;
            v6.map_or_else(&v11);
            v8 = 2;
            v17 = v6.new();
            v20 = 1;
            v18 = &g_4e1c10;
        }
        else
        {
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v11, v12);
            v11.open(&v9);
            v6.map_err_context(&v11);
            if (v17)
            {
                v18 = *((long long *)&v7);
                v20 = 1;
            }
            else
            {
                v17 = *((int *)&v7).new();
                v18 = &g_4e1b98;
LABEL_4572a9:
                v20 = 0;
            }
        }
    }
    a0[1] = v17;
    a0[2] = v18;
    a0[0] = v20;
    return a0;
}
