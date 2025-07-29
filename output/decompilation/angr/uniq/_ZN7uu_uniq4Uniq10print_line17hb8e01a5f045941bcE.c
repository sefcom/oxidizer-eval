long long uu_uniq::Uniq::print_line(char a0[55], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, char a6)
{
    char v0;  // [bp-0xe8]
    unsigned long long v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    void* v3;  // [bp-0xd8]
    unsigned long long v4;  // [bp-0xd0]
    void* v5;  // [bp-0xc8]
    unsigned long long v6;  // [bp-0xc0]
    char v7;  // [bp-0xb8]
    unsigned long long v8;  // [bp-0xb0]
    char v9;  // [bp-0xa8]
    unsigned long long v10;  // [bp-0xa0]
    unsigned long v11;  // [bp-0x98]
    char *v12;  // [bp-0x90]
    unsigned long long v13;  // [bp-0x88]
    unsigned long long v14;  // [bp-0x80]
    unsigned long long v15;  // [bp-0x78]
    char *v16;  // [bp-0x70]
    unsigned long long v17;  // [bp-0x68]
    char *v18;  // [bp-0x60]
    unsigned long long v19;  // [bp-0x58]
    char v20;  // [bp-0x50]
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax
    unsigned long long v24;  // rax

    v8 = a5;
    if ((char)a0[54].should_print_delimiter(a5, a6))
    {
        v21 = (unsigned long long)a1.write_all(a2, &v0, 1).map_err_context();
        if (v21)
            return v21;
    }
    if (a0[51])
    {
        v12 = &v8;
        v13 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v1 = 2;
        v3 = 0;
        v4 = 7;
        v5 = 0;
        v6 = 32;
        v7 = 3;
        v14 = &g_58b6a0;
        v15 = 2;
        v18 = &v1;
        v19 = 1;
        v16 = &v12;
        v17 = 1;
        v9.map_or_else(&v14);
        v20.chain(v10, v11 + v10, a3, a4 + a3);
        v1.from_iter(&v20, &g_58b688);
        v22 = (unsigned long long)a1.write_all(a2, v2, 0);
        ::0x4a0520::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v1);
        ::0x4a0510::core::ptr::drop_in_place<alloc::string::String>(&v9);
        v23 = v22.map_err_context();
        if (v23)
            return v23;
    }
    else
    {
        v24 = (unsigned long long)a1.write_all(a2, a3, a4).map_err_context();
        if (v24)
            return v24;
    }
    *((int *)&v0) = (a0[53] ? 0 : 10);
    return (unsigned long long)a1.write_all(a2, &v0, 1).map_err_context();
}
