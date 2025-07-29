long long uu_ln::relative_path(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    int v0;  // [bp-0xd8], Other Possible Types: char
    unsigned long long v1;  // [bp-0xc8]
    int v2;  // [bp-0xc0], Other Possible Types: char
    unsigned long long v3;  // [bp-0xb0]
    int v4;  // [bp-0xa8]
    unsigned long long v5;  // [bp-0x98]
    int v6;  // [bp-0x88]
    unsigned long long v7;  // [bp-0x78]
    int v8;  // [bp-0x68]
    unsigned long long v9;  // [bp-0x58]
    int v10;  // [bp-0x48], Other Possible Types: char
    char v11;  // [bp-0x38]
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax

    uucore::features::fs::canonicalize(&v0, a1, a2, 2, 1);
    if (!((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63)))
    {
        v5 = v1;
        v4 = v0;
        v13 = a3.parent(a4);
        if (!v13)
            core::option::unwrap_failed(&g_5881c8); /* do not return */
        uucore::features::fs::canonicalize(&v2, v13, a2, 2, 1);
        if (*((long long *)&v2) == 0x8000000000000000)
        {
            core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v2);
            v14 = (unsigned long long)::0x4a2ec0::core::ptr::drop_in_place<std::path::PathBuf>(&v4);
            if (*((long long *)&v0) != 0x8000000000000000)
            {
                *((unsigned long long *)&a0->padding_1[7]) = a1;
                a0->field_10 = a2;
                *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
                return v14;
            }
        }
        else
        {
            v7 = v3;
            v6 = v2;
            v9 = v5;
            v8 = v4;
            uucore::features::fs::make_path_relative_to(&v10, &v8, &v6);
            v15 = *((long long *)&v11);
            a0->field_10 = v15;
            *((void*)&a0->field_0) = v10;
            if (*((long long *)&v2) == 0x8000000000000000)
                v15 = (unsigned long long)core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v2);
            if (*((long long *)&v0) == 0x8000000000000000)
                return (unsigned long long)core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v0);
            return v15;
        }
    }
    v14 = (unsigned long long)core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v0);
    *((unsigned long long *)&a0->padding_1[7]) = a1;
    a0->field_10 = a2;
    *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
    return v14;
}
