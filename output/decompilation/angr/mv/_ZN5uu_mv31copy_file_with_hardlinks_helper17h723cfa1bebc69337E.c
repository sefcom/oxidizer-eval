long long uu_mv::copy_file_with_hardlinks_helper(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0xe9]
    char v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xd8]
    char v3;  // [bp-0xc8], Other Possible Types: unsigned long long
    char v4;  // [bp-0xc0]
    unsigned long long v5;  // [bp-0xb8]
    unsigned long long v6;  // [bp-0xb0]
    char v7;  // [bp-0xa8]
    unsigned long long v8;  // [bp-0x98]
    unsigned long long v9;  // [bp-0x90]
    unsigned long long v10;  // [bp-0x88]
    unsigned long long v11;  // [bp-0x80]
    char v12;  // [bp-0x78]
    unsigned long long v13;  // [bp-0x68]
    char v14;  // [bp-0x58], Other Possible Types: unsigned long long
    char v15;  // [bp-0x50]
    unsigned long long v16;  // [bp-0x40]
    char v17;  // [bp-0x38]
    unsigned long v19;  // rdx
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax

    v8 = a0;
    v9 = a1;
    v10 = a2;
    v11 = a3;
    v0 = 0;
    v14.check_hardlink(a4, a0, a1, a2, a3, a5, &v0);
    memcpy(&v1, &v15, 16);
    v2 = v16;
    if (v14 != 9223372036854775812)
    {
        memcpy(&v7, &v17, 16);
        memcpy(&v4, &v1, 16);
        v6 = v2;
        v3 = v14;
        return (unsigned long long)v3.from();
    }
    memcpy(&v12, &v1, 16);
    v13 = v2;
    if (*((long long *)&v12) != 0x8000000000000000)
    {
        v5 = v2;
        memcpy(&v3, &v1, 16);
        v21 = std::fs::hard_link(&v3, a2, a3);
        ::0x4c7450::core::ptr::drop_in_place<std::path::PathBuf>(&v3);
        return v21;
    }
    ::0x4c7ea0::core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v12);
    if (std::fs::copy(a0, a1, a2, a3))
        return v19;
    v20 = uucore::features::fsxattr::copy_xattrs(&v8, &v10);
    if (!v20)
        return 0;
    return v20;
}
