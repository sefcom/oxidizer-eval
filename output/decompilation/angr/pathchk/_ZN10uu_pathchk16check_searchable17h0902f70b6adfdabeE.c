long long uu_pathchk::check_searchable(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x110]
    unsigned long long v1;  // [bp-0x108]
    char *v2;  // [bp-0x100]
    unsigned long long v3;  // [bp-0xf8]
    unsigned long long v4;  // [bp-0xf0]
    unsigned long long v5;  // [bp-0xe8]
    char *v6;  // [bp-0xe0]
    unsigned long long v7;  // [bp-0xd8]
    void* v8;  // [bp-0xd0]
    char v9;  // [bp-0xc0]
    char v10;  // [bp-0xb8]
    unsigned long v12;  // rbx
    unsigned long long v13;  // rbx
    unsigned long long v14;  // r14
    char v15;  // al
    unsigned long long v16;  // r14

    std::fs::symlink_metadata(&v9, a0, a1);
    v13 = v12 & 0xffffffffffffff00 | 1;
    if (*((int *)&v9) == 2)
    {
        v14 = *((long long *)&v10);
        v0 = v14;
        v15 = (char)v14.kind();
        v13 = v13 & 0xffffffffffffff00 | !v15;
        v16 = v14;
        if (v15)
        {
            v1 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
            v2 = &v0;
            v3 = <std::io::error::Error as core::fmt::Display>::fmt;
            v4 = &g_4deae8;
            v5 = 2;
            v8 = 0;
            v6 = &v2;
            v7 = 1;
            core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v1.write_fmt(&v4));
            v16 = v0;
        }
        core::ptr::drop_in_place<std::io::error::Error>(v16);
    }
    return v13 & 4294967295;
}
