long long uu_install::perform_backup(void* a0, unsigned long long a1, unsigned long long a2, char a3[104])
{
    char *v0;  // [bp-0x150]
    unsigned long long v1;  // [bp-0x148]
    unsigned long v2;  // [bp-0x140]
    unsigned long long v3;  // [bp-0x138]
    unsigned long long v4;  // [bp-0x130]
    unsigned long long v5;  // [bp-0x128]
    char v6;  // [bp-0x120]
    char v7;  // [bp-0x110]
    unsigned long long v8;  // [bp-0x100]
    unsigned long long v9;  // [bp-0xf8]
    unsigned long long v10;  // [bp-0xf0]
    char *v11;  // [bp-0xe8]
    char v12;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0xd8]
    char *v14;  // [bp-0xd0]
    int v15;  // [bp-0xc8], Other Possible Types: unsigned long long
    void* v16;  // [bp-0xc0]
    char v17;  // [bp-0xb8]
    unsigned long long v18;  // [bp-0xa8]
    unsigned long long v20;  // rax

    std::fs::metadata(&v12, a1, a2);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v12);
    if (*((int *)&v12) == 2)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    if (a3[97])
    {
        v3 = 1;
        v4 = a1;
        v5 = a2;
        v6 = 1;
        v0 = &v3;
        v1 = <os_display::Quoted as core::fmt::Display>::fmt;
        v12 = &g_502498;
        v13 = 2;
        v16 = 0;
        v14 = &v0;
        v15 = 1;
        std::io::stdio::_print(&v12);
    }
    uucore::features::backup_control::get_backup_path(&v0, a3[103]);
    if (v0 != 0x8000000000000000)
    {
        v20 = std::fs::rename(a1, a2, &v0);
        v9 = a1;
        v10 = a2;
        v11 = &v0;
        if (v20)
        {
            uu_install::perform_backup::{{closure}}(&v3, &v9, v20);
            v18 = v8;
            memcpy(&v17, &v7, 16);
            *((int128_t *)&v15) = *((int128_t *)&v6);
            memcpy(&v13, &v4, 16);
            v12 = v3;
            *((double *)&a0[8]) = v12.new();
            *((char **)&a0[16]) = &g_502208;
            *((unsigned long long *)a0) = 9223372036854775809;
            return (unsigned long long)core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v0);
        }
    }
    *((unsigned long *)&a0[16]) = v2;
    *((int128_t *)a0) = *((int128_t *)&v0);
    return v2;
}
