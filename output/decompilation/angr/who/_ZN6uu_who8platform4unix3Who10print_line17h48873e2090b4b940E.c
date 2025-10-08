void uu_who::platform::unix::Who::print_line(char a0[31], unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned long long a4, unsigned long long a5, unsigned int a6, unsigned long a7, unsigned int a8, unsigned long a9, unsigned int a10, unsigned long a11, unsigned int a12, unsigned long a13, unsigned int a14)
{
    char v0;  // [bp-0x130], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x128]
    char *v2;  // [bp-0x120]
    unsigned long long v3;  // [bp-0x118]
    void* v4;  // [bp-0x110], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x108]
    char *v6;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned int v7[2];  // [sp-0xf8], Other Possible Types: unsigned long long
    void* v8;  // [bp-0xf0], Other Possible Types: unsigned long long
    unsigned short v9;  // [bp-0xe8]
    unsigned long long v10;  // [bp-0xe0]
    void* v11;  // [bp-0xd0]
    char v12;  // [bp-0xc8]
    unsigned long long v13;  // [bp-0xc0]
    unsigned long v14;  // [bp-0xb8]
    unsigned long long v15;  // [bp-0xb0]
    unsigned long long v16;  // [bp-0xa8]
    unsigned long long v17;  // [bp-0xa0]
    unsigned long long v18;  // [bp-0x98]
    char *v19;  // [bp-0x90]
    unsigned long long v20;  // [bp-0x88]
    char v21;  // [bp-0x80]
    char v22;  // [bp-0x70]
    char v23;  // [bp-0x60]
    char v24;  // [bp-0x50]
    char v25;  // [bp-0x40]
    unsigned int v26[2];  // rax
    unsigned long long v34;  // rdx

    v15 = a1;
    v16 = a2;
    v17 = a4;
    v18 = a5;
    memcpy(&v21, &a6, 16);
    memcpy(&v22, &a8, 16);
    memcpy(&v23, &a10, 16);
    memcpy(&v24, &a12, 16);
    memcpy(&v25, &a14, 16);
    v10 = 64.with_capacity_in(1, 1, &g_4fefd8);
    v11 = 0;
    v26 = 4.alloc_impl(8);
    if (!v26)
        alloc::alloc::handle_alloc_error(4, 8); /* do not return */
    v26[0] = 32;
    v26[1] = a3;
    v6 = 2;
    *((unsigned int *[2])&v7[0]) = v26;
    v8 = 2;
    v0.into_iter(&v6);
    v12.collect(&v0);
    v6 = &v15;
    v7 = <&T as core::fmt::Display>::fmt;
    v0 = &g_418a60;
    v1 = 1;
    v4 = &g_41ab98;
    v5 = 1;
    v2 = &v6;
    v3 = 1;
    (unsigned int)v10.spec_write_fmt(&v0).unwrap(&g_4feff0);
    if (a0[29])
        v10.spec_extend(v13, v14 + v13);
    v6 = &v17;
    v7 = <&T as core::fmt::Display>::fmt;
    v0 = &g_4ff008;
    v1 = 1;
    v4 = &g_41abc8;
    v5 = 1;
    v2 = &v6;
    v3 = 1;
    (unsigned int)v10.spec_write_fmt(&v0).unwrap(&g_4ff018);
    v6 = &v21;
    v7 = <&T as core::fmt::Display>::fmt;
    v8 = 0;
    v9 = 10;
    v0 = &g_4ff008;
    v1 = 1;
    v4 = &g_41abf8;
    v5 = 1;
    v2 = &v6;
    v3 = 2;
    (unsigned int)v10.spec_write_fmt(&v0).unwrap(&g_4ff030);
    if (!a0[26])
    {
        if (a0[27])
        {
            v6 = &v22;
            v7 = <&T as core::fmt::Display>::fmt;
            v0 = &g_4ff008;
            v1 = 1;
            v4 = &g_41ac28;
            v5 = 1;
            v2 = &v6;
            v3 = 1;
            (unsigned int)v10.spec_write_fmt(&v0).unwrap(&g_4ff048);
        }
        v6 = &v23;
        v7 = <&T as core::fmt::Display>::fmt;
        v0 = &g_4ff008;
        v1 = 1;
        v4 = &g_41ac58;
        v5 = 1;
        v2 = &v6;
        v3 = 1;
        (unsigned int)v10.spec_write_fmt(&v0).unwrap(&g_4ff060);
    }
    v6 = &v24;
    v7 = <&T as core::fmt::Display>::fmt;
    v0 = &g_4ff008;
    v1 = 1;
    v4 = &g_41ab98;
    v5 = 1;
    v2 = &v6;
    v3 = 1;
    (unsigned int)v10.spec_write_fmt(&v0).unwrap(&g_4ff078);
    if (a0[30])
    {
        v6 = &v25;
        v7 = <&T as core::fmt::Display>::fmt;
        v0 = &g_4ff008;
        v1 = 1;
        v4 = &g_41abc8;
        v5 = 1;
        v2 = &v6;
        v3 = 1;
        (unsigned int)v10.spec_write_fmt(&v0).unwrap(&g_4ff090);
    }
    v6 = core::str::<impl str>::trim_end_matches(v34, 0);
    v7 = v34;
    v19 = &v6;
    v20 = <&T as core::fmt::Display>::fmt;
    v0 = &g_4fef18;
    v1 = 2;
    v4 = 0;
    v2 = &v19;
    v3 = 1;
    std::io::stdio::_print(&v0);
    core::ptr::drop_in_place<alloc::string::String>(&v12);
    core::ptr::drop_in_place<alloc::string::String>(&v10);
    return;
}
