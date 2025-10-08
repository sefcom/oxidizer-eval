long long uu_unexpand::open(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x90], Other Possible Types: unsigned long long
    char v1;  // [bp-0x88]
    unsigned int v2;  // [bp-0x78]
    char *v3;  // [bp-0x70]
    unsigned long long v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    unsigned long long v8;  // [bp-0x48]
    char *v9;  // [bp-0x40]
    unsigned long long v10;  // [bp-0x38]
    void* v11;  // [bp-0x30]
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rcx

    if ((char)a1.is_dir(a2))
    {
        v5 = a1;
        v6 = a2;
        v3 = &v5;
        v4 = <std::path::Display as core::fmt::Display>::fmt;
        v7 = &g_4e81a0;
        v8 = 2;
        v11 = 0;
        v9 = &v3;
        v10 = 1;
        v0.map_or_else(&v7);
        v2 = 1;
        *((double *)&a0->field_8) = v0.new();
        a0->field_10 = &g_4e8290;
        a0->field_0 = 0;
        return &g_4e8290;
    }
    if ((char)a1.equal(a2, "-allfirst-onlyno-utf8--first-only--all-a--tabs=", 1))
    {
        v14 = std::io::stdio::stdin().new();
        v15 = &g_4e8218;
    }
    else
    {
        (char)v7.open(a1, a2);
        v0.map_err_context(&(char)v7, a1, a2);
        v13 = v0;
        if (v0)
        {
            v16 = *((long long *)&v1);
            a0->field_8 = v0;
            a0->field_10 = v16;
            a0->field_0 = 0;
            return v13;
        }
        v14 = *((int *)&v1).new();
        v15 = &g_4e81c0;
    }
    return a0.with_capacity(v14, v15);
}
