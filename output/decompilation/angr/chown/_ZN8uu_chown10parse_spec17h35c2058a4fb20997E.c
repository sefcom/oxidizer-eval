long long uu_chown::parse_spec(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    unsigned int v0;  // [bp-0x134]
    char v1;  // [bp-0x128], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x120]
    char *v3;  // [bp-0x118]
    unsigned long long v4;  // [bp-0x110]
    void* v5;  // [bp-0x108]
    char *v6;  // [bp-0xf8]
    unsigned long long v7;  // [bp-0xf0]
    void* v8;  // [bp-0xe8]
    unsigned long long v9;  // [bp-0xe0]
    unsigned long long v10;  // [bp-0xd8]
    char v11;  // [bp-0xd0]
    int v12;  // [bp-0xc8]
    int v13;  // [bp-0xb8]
    void* v14;  // [sp-0xa0], Other Possible Types: unsigned long long
    void* v15;  // [bp-0x98]
    unsigned long long v16;  // [bp-0x90]
    char v17;  // [bp-0x88]
    unsigned short v18;  // [bp-0x58]
    char v19;  // [bp-0x50]
    unsigned int v20;  // [bp-0x38]
    struct_0 *v22;  // rax
    unsigned long long v23;  // r13
    struct_0 *v24;  // rax
    struct_0 *v25;  // rdx
    unsigned long long v26;  // rax
    struct_0 *v27;  // rdx
    struct_0 *v28;  // rbp
    struct_0 *v29;  // rdx
    unsigned long long v30;  // rax

    v0 = a3;
    if (!v0.slice_contains())
        core::panicking::panic("assertion failed: ['.', ':'].contains(&sep)", 43, &g_4f5fc0); /* do not return */
    v17.into_searcher(a3, a1, a2);
    v15 = 0;
    v16 = a2;
    v18 = 1;
    v14 = 1;
    v22 = v15.next();
    if (v22)
    {
        v23 = v22;
        if (v22)
            goto LABEL_4617f3;
LABEL_4617f2:
        v24 = v22;
    }
    else
    {
        v23 = 1;
        if (!v22)
            goto LABEL_4617f2;
LABEL_4617f3:
        v24 = v25;
    }
    v14 = 0;
    v26 = v15.get_end();
    v27 = v25;
    v28 = v27;
    if (!v26)
        v28 = 0;
    uu_chown::parse_uid(&v1, v23, v24, a1, a2, v0);
    if (!v1)
    {
        if (!v26)
            v26 = 1;
        *((uint128_t *)&v13) = v2;
        uu_chown::parse_gid(&v1, v26, v28, a1, a2);
        if (v1)
            goto LABEL_4618a3;
        *((uint128_t *)&v12) = v2;
        v1 = v23;
        v2 = (char *)v24 + v23;
        if (((unsigned int)v25 != 0x110000 & (char)core::str::validations::next_code_point(&v1)) == 1 && ((unsigned int)v25 - 48 < 10 || (unsigned int)v25 >= 128 && core::unicode::unicode_data::n::lookup((unsigned int)v25)) && !v28 && !(char)a1.equal(a2, v23, v24))
        {
            v8 = 0;
            v9 = a1;
            v10 = a2;
            v11 = 1;
            v6 = &v8;
            v7 = <os_display::Quoted as core::fmt::Display>::fmt;
            v1 = &g_4f5fb0;
            v2 = 1;
            v5 = 0;
            v3 = &v6;
            v4 = 1;
            v19.map_or_else(&v1);
            v20 = 1;
            v1 = v19.new();
            v2 = &g_4f5f38;
LABEL_4618a8:
            v29 = a0;
            *((unsigned long long *)&a0->field_4[4]) = v1;
            *((unsigned long long *)&a0->field_4[12]) = v2;
            v30 = 1;
        }
        else
        {
            v29 = a0;
            *((unsigned long long *)&a0->field_4[0]) = (unsigned long long)v12 CONCAT (unsigned long long)v13;
            v30 = 0;
        }
    }
    else
    {
LABEL_4618a3:
        goto LABEL_4618a8;
    }
    v29->field_0 = v30;
    return v30;
}
