long long uu_join::parse_field_number(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xa8]
    char v1;  // [bp-0xa7]
    unsigned long v2;  // [bp-0xa0]
    char *v3;  // [bp-0x98]
    unsigned long long v4;  // [bp-0x90]
    void* v5;  // [bp-0x88]
    unsigned long long v6;  // [bp-0x80]
    unsigned long long v7;  // [bp-0x78]
    char v8;  // [bp-0x70]
    unsigned long long v9;  // [bp-0x68]
    unsigned long long v10;  // [bp-0x60]
    char *v11;  // [bp-0x58]
    unsigned long long v12;  // [bp-0x50]
    void* v13;  // [bp-0x48]
    char v14;  // [bp-0x38]
    unsigned int v15;  // [bp-0x20]
    unsigned long long v17;  // rax

    v17 = ::0x469360::core::num::<impl usize>::from_ascii_radix(&v0, a1, a2);
    if (v0 == 1)
    {
        if (v1 == 2)
        {
            a0->field_8 = 18446744073709551615;
        }
        else
        {
            v5 = 0;
            v6 = a1;
            v7 = a2;
            v8 = 1;
            v3 = &v5;
            v4 = <os_display::Quoted as core::fmt::Display>::fmt;
            v9 = &g_4fe598;
            v10 = 1;
            v13 = 0;
            v11 = &v3;
            v12 = 1;
            v14.map_or_else(&v9);
            v15 = 1;
            *((double *)&a0->field_0) = v14.new();
            a0->field_8 = &g_4fe360;
            return &g_4fe360;
        }
    }
    else
    {
        if (v2)
        {
            v17 = v2 - 1;
            a0->field_8 = v17;
        }
        else
        {
            v5 = 0;
            v6 = a1;
            v7 = a2;
            v8 = 1;
            v3 = &v5;
            v4 = <os_display::Quoted as core::fmt::Display>::fmt;
            v9 = &g_4fe598;
            v10 = 1;
            v13 = 0;
            v11 = &v3;
            v12 = 1;
            v14.map_or_else(&v9);
            v15 = 1;
            *((double *)&a0->field_0) = v14.new();
            a0->field_8 = &g_4fe360;
            return &g_4fe360;
        }
    }
    a0->field_0 = 0;
    return v17;
}
