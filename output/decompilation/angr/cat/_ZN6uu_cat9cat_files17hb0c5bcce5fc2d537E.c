long long uu_cat::cat_files(unsigned long long a0, unsigned long a1, char a2[5])
{
    unsigned long long v0;  // [bp-0x178]
    int v1;  // [bp-0x178]
    unsigned long long v2;  // [bp-0x170]
    char *v3;  // [bp-0x168], Other Possible Types: unsigned long long
    int v4;  // [bp-0x160], Other Possible Types: unsigned int, unsigned long long
    void* v5;  // [bp-0x158]
    char *v6;  // [bp-0x148]
    int v7;  // [bp-0x148]
    unsigned long long v8;  // [bp-0x140]
    char *v9;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x130]
    void* v11;  // [bp-0x120]
    unsigned long long v12;  // [bp-0x118]
    void* v13;  // [bp-0x110]
    void* v14;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned long v15;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned long long v16;  // [bp-0xf8]
    char v17;  // [bp-0xf0]
    unsigned long long v18;  // [bp-0xe8]
    unsigned long long v19;  // [bp-0xe0]
    int v20;  // [bp-0xd8]
    unsigned long long v21;  // [bp-0xc8]
    int v22;  // [bp-0xb8]
    unsigned long long v23;  // [bp-0xa8]
    int v24;  // [bp-0xa0], Other Possible Types: char
    unsigned long long v25;  // [bp-0x90]
    char v26;  // [bp-0x88]
    unsigned short v27;  // [bp-0x50]
    char v28;  // [bp-0x4f]
    char v29;  // [bp-0x4e]
    char v30;  // [bp-0x48]
    unsigned long long v32[3];  // rax
    unsigned long long v33;  // rdx
    void* v34;  // rbx

    v26.new();
    v27 = 1;
    v29 = 0;
    v11 = 0;
    v12 = 8;
    v13 = 0;
    v18 = a0;
    v19 = a0 + a1 * 24;
    if (v18.next())
    {
        do
        {
            uu_cat::cat_path(&v22, v32[1], v32[2], a2, &v26);
            if ((long long)v22 == 9223372036854775814)
            {
                v22.drop_in_place<core::result::Result<(),uu_cat::CatError>>();
            }
            else
            {
                v21 = v23;
                v20 = v22;
                v14 = 0;
                v15 = v32[1];
                v16 = v32[2];
                v17 = 0;
                v6 = &v14;
                v8 = <os_display::Quoted as core::fmt::Display>::fmt;
                v9 = &v20;
                v10 = <uu_cat::CatError as core::fmt::Display>::fmt;
                v0 = &g_572da0;
                v2 = 2;
                v5 = 0;
                v3 = &v6;
                v4 = 2;
                v30.map_or_else(&v0);
                v11.push(&v30);
                core::ptr::drop_in_place<uu_cat::CatError>(&v20);
            }
            v32 = v18.next();
        } while (v32);
        if ((v28 & 1))
        {
            v0 = &g_572dc0;
            v2 = 1;
            v3 = 8;
            *((uint128_t *)&v4) = 0;
            std::io::stdio::_print(&v0);
        }
    }
    if (v13)
    {
        v14 = uucore::util_name();
        v15 = v33;
        *((unsigned long long **)&v7) = &v14;
        v8 = <&T as core::fmt::Display>::fmt;
        *((unsigned long long **)&v1) = &g_572dd0;
        v2 = 2;
        v5 = 0;
        v3 = &(unsigned long long)v7;
        v4 = 1;
        v24.map_or_else(&(unsigned long long)v1);
        v7 = v24;
        v9 = v25;
        alloc::str::join_generic_copy(&v14, 8, v13, <&T as core::fmt::Display>::fmt, v25);
        v3 = v16;
        *((int128_t *)&v1) = *((int128_t *)&v14);
        v4 = (unsigned int)v13;
        v34 = (unsigned long long)v1.new();
        ::0x49b7a0::core::ptr::drop_in_place<alloc::string::String>(&(unsigned long long)v7);
    }
    else
    {
        v34 = 0;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v11);
    return v34;
}
