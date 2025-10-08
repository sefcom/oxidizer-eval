long long uu_uniq::Uniq::print_line(char a0[55], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, char a6)
{
    unsigned long long v0;  // [bp-0xa0]
    char v1;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x90]
    unsigned long long v3;  // [bp-0x88]
    unsigned long long v4;  // [bp-0x78]
    char v5;  // [bp-0x70]
    char v6;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x68]
    char *v8;  // [bp-0x60]
    unsigned long long v9;  // [bp-0x58]
    unsigned long long v10;  // [bp-0x50]
    unsigned long long v11;  // [bp-0x48]
    char *v12;  // [bp-0x40]
    unsigned long long v13;  // [bp-0x38]
    char v14;  // bl
    unsigned int v15;  // eax
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax

    v4 = a5;
    v14 = (a0[53] ? 0 : 10);
    v15 = a0[54];
    if (!a5 != 1 && !v15 == 4 && (a6 || (v15 | 2) == 3))
    {
        v6 = v14;
        v16 = (unsigned long long)a1.write_all(a2, &v6, 1).map_err_context();
        if (v16)
            return v16;
    }
    if (a0[51])
    {
        v12 = &v4;
        v13 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v6 = &g_4f46e0;
        v7 = 2;
        v10 = &g_419460;
        v11 = 1;
        v8 = &v12;
        v9 = 1;
        v1.map_or_else(&v6);
        v0 = v1;
        v6.chain(v2, v3 + v2, a3, a4 + a3);
        v1.collect(&v6);
        v17 = (unsigned long long)a1.write_all(a2, v2, v3);
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v1, v2);
        core::ptr::drop_in_place<alloc::string::String>(v0, v2);
        v18 = v17.map_err_context();
        if (v18)
            return v18;
    }
    else
    {
        v19 = (unsigned long long)a1.write_all(a2, a3, a4).map_err_context();
        if (v19)
            return v19;
    }
    v5 = v14;
    return (unsigned long long)a1.write_all(a2, &v5, 1).map_err_context();
}
