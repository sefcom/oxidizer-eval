long long uu_stat::quote_file_name(struct_0 *a0, unsigned long long a1, unsigned long long a2, char a3)
{
    char *v0;  // [bp-0x90], Other Possible Types: char
    unsigned long long v1;  // [bp-0x88]
    unsigned long v2;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x70]
    char *v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    void* v7;  // [bp-0x58]
    unsigned long long v8;  // [bp-0x48]
    unsigned long long v9;  // [bp-0x40]
    char *v10;  // [bp-0x38]
    unsigned long long v11;  // [bp-0x30]
    char v12;  // [bp-0x28]

    v8 = a1;
    v9 = a2;
    if (a3 < 2)
    {
        alloc::str::<impl str>::replace(&v12, a1, a2);
        v10 = &v12;
        v11 = <alloc::string::String as core::fmt::Display>::fmt;
        v3 = &g_519bc8;
        v4 = 2;
        v7 = 0;
        v5 = &v10;
        v6 = 1;
        v0.map_or_else(&v3);
        a0->field_10 = v2;
        a0->field_0 = *((int128_t *)&v0);
        return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v12);
    }
    else if (a3 == 2)
    {
        v0 = &v8;
        v1 = <&T as core::fmt::Display>::fmt;
        v3 = &g_519be8;
        v4 = 2;
        v7 = 0;
        v5 = &v0;
        v6 = 1;
        return a0.map_or_else(&v3);
    }
    else
    {
        return a0.to_vec(a1, a2);
    }
}
