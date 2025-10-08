long long uu_chown::parse_uid(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned int a5)
{
    int v0;  // [bp-0x128], Other Possible Types: char, unsigned long
    char v1;  // [bp-0x124]
    unsigned long v2;  // [bp-0x120], Other Possible Types: unsigned long long
    char *v3;  // [bp-0x118], Other Possible Types: unsigned long long
    unsigned int v4;  // [bp-0x110], Other Possible Types: unsigned long long
    void* v5;  // [bp-0x108]
    char *v6;  // [bp-0xf8]
    unsigned long long v7;  // [bp-0xf0]
    void* v8;  // [bp-0xe8]
    unsigned long long v9;  // [bp-0xe0]
    unsigned long long v10;  // [bp-0xd8]
    char v11;  // [bp-0xd0]
    int v12;  // [bp-0xc8], Other Possible Types: char
    unsigned long long v13;  // [bp-0xb8]
    char v14;  // [bp-0xb0]
    char v15;  // [bp-0x38]
    unsigned long v17;  // rax
    unsigned long long v18;  // rax
    unsigned int v19;  // eax
    unsigned long v20;  // rax

    if (!a2)
    {
        *((unsigned int *)&a0[8]) = 0;
        *((unsigned long long *)a0) = 0;
        return v20;
    }
    v14.locate(a1, a2);
    if (!((char)(((0 ^ *((long long *)&v14)) & (0 ^ -(*((long long *)&v14)))) >> 63)))
    {
        v19 = *((int *)&v15);
        *((unsigned int *)&a0[8]) = 1;
        *((unsigned int *)&a0[12]) = v19;
        *((unsigned long long *)a0) = 0;
        return core::ptr::drop_in_place<uucore::features::entries::Passwd>(&v14);
    }
    if (!46.is_contained_in(a3, a4) || a5 != 58 || 58.is_contained_in(a3, a4))
    {
        v18 = ::0x45e500::core::num::<impl u32>::from_ascii_radix(a1, a2);
        if (((char)v18 & 1))
        {
            v8 = 0;
            v9 = a3;
            v10 = a4;
            v11 = 1;
            v6 = &v8;
            v7 = <os_display::Quoted as core::fmt::Display>::fmt;
            v0 = &g_4f5f08;
            v2 = 1;
            v5 = 0;
            v3 = &v6;
            v4 = 1;
            v12.map_or_else(&(char)v0);
            v4 = 1;
            v0 = v12;
            v3 = v13;
            *((double *)a0) = (char)v0.new();
            *((unsigned long long **)&a0[8]) = &g_4f5f38;
        }
        else
        {
            *((unsigned int *)&a0[8]) = 1;
            *((unsigned int *)&a0[12]) = v18 >> 32;
            *((unsigned long long *)a0) = 0;
        }
    }
    else
    {
        uu_chown::parse_spec(&v0, a3, a4, 46);
        if (*((int *)&v0) == 1)
        {
            v17 = v2;
            *((unsigned long long *)&a0[8]) = v3;
        }
        else
        {
            *((long long *)&a0[8]) = *((long long *)&v1);
            v17 = 0;
        }
        *((unsigned long *)a0) = v17;
    }
    return core::ptr::drop_in_place<core::result::Result<uucore::features::entries::Passwd,std::io::error::Error>>(&v14);
}
