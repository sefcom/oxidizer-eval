void uu_ptx::format_tex_line(unsigned long a0, char a1[91], unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7, unsigned long long a8, unsigned long a9)
{
    void* v0;  // [bp-0x208]
    unsigned long long v1;  // [bp-0x200]
    void* v2;  // [bp-0x1f8]
    char *v3;  // [bp-0x1f0], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x1e8]
    char *v5;  // [bp-0x1e0]
    unsigned long long v6;  // [bp-0x1d8]
    char *v7;  // [bp-0x1d0], Other Possible Types: void*
    unsigned long v8;  // [bp-0x1c8], Other Possible Types: unsigned long long
    char *v9;  // [bp-0x1c0], Other Possible Types: char
    unsigned long long v10;  // [bp-0x1b8]
    char *v11;  // [bp-0x1b0], Other Possible Types: unsigned long
    char v12;  // [bp-0x1a8], Other Possible Types: unsigned long long
    unsigned long v13;  // [bp-0x198]
    int v14;  // [bp-0x190]
    unsigned long v15;  // [bp-0x180]
    int v16;  // [bp-0x178]
    unsigned long long v17;  // [bp-0x170]
    char *v18;  // [bp-0x168]
    int v19;  // [bp-0x158]
    unsigned long long v20;  // [bp-0x150]
    unsigned long v21;  // [bp-0x148]
    int v22;  // [bp-0x138]
    unsigned long long v23;  // [bp-0x130]
    unsigned long v24;  // [bp-0x128]
    int v25;  // [bp-0x118]
    unsigned long long v26;  // [bp-0x110]
    unsigned long v27;  // [bp-0x108]
    int v28;  // [bp-0xf8]
    unsigned long long v29;  // [bp-0xf0]
    unsigned long v30;  // [bp-0xe8]
    struct_0 *v31;  // [bp-0xe0]
    char v32[91];  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v33;  // [bp-0xd0]
    char *v34;  // [bp-0xc8]
    unsigned long long v35;  // [bp-0xc0]
    void* v36;  // [bp-0xb8]
    char *v37;  // [bp-0xa8], Other Possible Types: char
    unsigned long long v38;  // [bp-0xa0]
    char v39;  // [bp-0x90]
    char v40;  // [bp-0x78]
    char v41;  // [bp-0x60]
    char v42;  // [bp-0x48]

    v0 = 0;
    v1 = 1;
    v2 = 0;
    *((char *[91])&v32[0]) = a1;
    v33 = <alloc::string::String as core::fmt::Display>::fmt;
    v3 = &g_651a90;
    v4 = 2;
    v7 = 0;
    v5 = &v32;
    v6 = 1;
    (unsigned int)v0.spec_write_fmt(&v3).unwrap(&g_651b30);
    uu_ptx::prepare_line_chunks(&v3, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    v18 = v5;
    *((int128_t *)&v16) = *((int128_t *)&v3);
    v21 = v8;
    *((int128_t *)&v19) = *((int128_t *)&v6);
    v24 = v11;
    *((int128_t *)&v22) = *((int128_t *)&v9);
    v27 = v13;
    *((int128_t *)&v25) = *((int128_t *)&v12);
    v30 = v15;
    v28 = v14;
    uu_ptx::format_tex_field(&v39, v17, v18);
    uu_ptx::format_tex_field(&v40, v20, v21);
    uu_ptx::format_tex_field(&v41, v23, v24);
    uu_ptx::format_tex_field(&v42, v26, v27);
    uu_ptx::format_tex_field(&v37, v29, v30);
    v3 = &v39;
    v4 = <alloc::string::String as core::fmt::Display>::fmt;
    v5 = &v40;
    v6 = <alloc::string::String as core::fmt::Display>::fmt;
    v7 = &v41;
    v8 = <alloc::string::String as core::fmt::Display>::fmt;
    v9 = &v42;
    v10 = <alloc::string::String as core::fmt::Display>::fmt;
    v11 = &v37;
    v12 = <alloc::string::String as core::fmt::Display>::fmt;
    v32 = &g_651ab0;
    v33 = 6;
    v36 = 0;
    v34 = &v3;
    v35 = 5;
    (unsigned int)v0.spec_write_fmt(&v32).unwrap(&g_651b48);
    core::ptr::drop_in_place<alloc::string::String>(&v37);
    core::ptr::drop_in_place<alloc::string::String>(&v42);
    core::ptr::drop_in_place<alloc::string::String>(&v41);
    core::ptr::drop_in_place<alloc::string::String>(&v40);
    core::ptr::drop_in_place<alloc::string::String>(&v39);
    if (a1[89] || a1[90] == 1)
    {
        uu_ptx::format_tex_field(&v32, a8, a9);
        v37 = &v32;
        v38 = <alloc::string::String as core::fmt::Display>::fmt;
        v3 = &g_651b10;
        v4 = 2;
        v7 = 0;
        v5 = &v37;
        v6 = 1;
        (unsigned int)v0.spec_write_fmt(&v3).unwrap(&g_651b60);
        core::ptr::drop_in_place<alloc::string::String>(&v32);
    }
    v31->field_10 = 0;
    v31->field_0 = *((int128_t *)&v0);
    core::ptr::drop_in_place<alloc::string::String>(&(char)v28);
    core::ptr::drop_in_place<alloc::string::String>(&(char)v25);
    core::ptr::drop_in_place<alloc::string::String>(&(char)v22);
    core::ptr::drop_in_place<alloc::string::String>(&(char)v19);
    core::ptr::drop_in_place<alloc::string::String>(&(char)v16);
    return;
}
