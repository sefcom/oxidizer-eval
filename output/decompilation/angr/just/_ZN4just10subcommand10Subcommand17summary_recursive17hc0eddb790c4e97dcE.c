char just::subcommand::Subcommand::summary_recursive(unsigned int a0, unsigned long long a1[3], unsigned long long *a2, unsigned long long a3[87])
{
    unsigned int v0;  // [bp-0xec]
    char *v1;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0xe0]
    char v3;  // [bp-0xd8], Other Possible Types: unsigned long long
    void* v4;  // [bp-0xd0], Other Possible Types: unsigned long long
    char *v5;  // [bp-0xc8], Other Possible Types: unsigned long, unsigned long long
    int v6;  // [bp-0xc0], Other Possible Types: unsigned long
    unsigned long long v7;  // [bp-0xc0]
    void* v8;  // [bp-0xb8], Other Possible Types: unsigned long long
    void* v9;  // [bp-0xb0]
    unsigned long v10;  // [bp-0xa8]
    unsigned long v11;  // [bp-0xa0]
    unsigned long v12;  // [bp-0x98]
    char *v13;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x80]
    char *v15;  // [bp-0x78]
    unsigned long long v16;  // [bp-0x70]
    char v17;  // [bp-0x68]
    unsigned long long v18;  // [bp-0x58]
    char v19;  // [bp-0x50]
    unsigned long long v21;  // rax
    unsigned long long v22;  // r15
    unsigned long v23;  // r12
    unsigned long v24;  // r15
    unsigned long v25;  // rdx
    unsigned long long v26[87];  // rdi
    unsigned long v27;  // rax
    unsigned long v28;  // rdx
    unsigned long v29;  // rax
    unsigned int v31;  // ebp
    unsigned long long v32[2];  // rax

    alloc::str::join_generic_copy(&v17, a1[1], a1[2], ":: [private]\nexport ", 2);
    v0 = a0;
    v3.public_recipes(a3, a0);
    v19.into_iter(&v3);
    v21 = v19.next();
    if (v21)
    {
        v22 = v21;
        v23 = *(a2) + 1;
        do
        {
            if (v23 != 1)
            {
                v3 = &g_82f150;
                v4 = 1;
                v5 = 8;
                *((uint128_t *)&v6) = 0;
                std::io::stdio::_print(&v3);
            }
            v24 = v22 + 144;
            if (v18)
            {
                v1 = v24.lexeme();
                v2 = v25;
                v13 = &v17;
                v14 = <alloc::string::String as core::fmt::Display>::fmt;
                v15 = &v1;
                v16 = <&T as core::fmt::Display>::fmt;
                v3 = &g_8314a0;
                v4 = 2;
                v8 = 0;
                v5 = &v13;
                v7 = 2;
                std::io::stdio::_print(&v3);
            }
            else
            {
                v13 = v24.lexeme();
                v14 = v25;
                v1 = &v13;
                v2 = <&T as core::fmt::Display>::fmt;
                v3 = &g_465db0;
                v4 = 1;
                v8 = 0;
                v5 = &v1;
                v7 = 1;
                std::io::stdio::_print(&v3);
            }
            *(a2) = v23;
            v22 = v19.next();
            v23 += 1;
        } while (v22);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&just::binding::Binding<just::expression::Expression>>>(&v19);
    v26 = a3;
    v27 = a3[84];
    v28 = v27;
    v29 = v27;
    if (v29)
        v29 = a3[86];
    v3 = v27;
    v4 = 0;
    v5 = v27;
    v6 = a3[85];
    v8 = v3;
    v9 = 0;
    v10 = v27;
    v11 = a3[85];
    v12 = v29;
    v31 = (char)v0;
    while (true)
    {
        v32 = v3.next();
        if (!v32)
            return core::ptr::drop_in_place<alloc::string::String>(&v17);
        a1.push(v32[0], v32[1], &g_8314c0);
        v31.summary_recursive(a1, a2, v25);
        if (a1[2])
            a1[2] = a1[2] - 1;
    }
}
