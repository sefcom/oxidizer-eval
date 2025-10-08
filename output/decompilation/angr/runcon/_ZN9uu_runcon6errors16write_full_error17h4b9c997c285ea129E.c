long long uu_runcon::errors::write_full_error(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char *v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x70]
    struct_2 *v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x58]
    char *v8;  // [bp-0x50]
    unsigned long long v9;  // [bp-0x48]
    void* v10;  // [bp-0x40]
    unsigned long long v12;  // rax
    struct_2 *v13;  // rdx
    unsigned long long v14;  // rax
    unsigned int v15;  // ebp

    v2 = a2;
    v3 = &g_4ebde0;
    v0 = &v2;
    v1 = <&T as core::fmt::Display>::fmt;
    v6 = &g_4196b0;
    v7 = 1;
    v10 = 0;
    v8 = &v0;
    v9 = 1;
    if ((char)a0.write_fmt(a1, &v6))
    {
        return vvar_26{reg 56} & 0xffffff00 | 1;
    }
    else if (g_4ebe10(v2))
    {
        while (true)
        {
            v4 = v12;
            v5 = v13;
            v0 = &v4;
            v1 = <&T as core::fmt::Display>::fmt;
            v6 = &g_4ebdb0;
            v7 = 1;
            v10 = 0;
            v8 = &v0;
            v9 = 1;
            v14 = a0.write_fmt(a1, &v6);
            v15 = v14;
            if ((char)v14)
                return v15;
            v12 = v5->field_30(v4);
            if (!v12)
                return v15;
        }
    }
    else
    {
        return 0;
    }
}
