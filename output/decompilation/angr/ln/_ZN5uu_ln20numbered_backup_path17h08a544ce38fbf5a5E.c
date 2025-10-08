long long uu_ln::numbered_backup_path(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x130]
    struct_0 *v1;  // [bp-0x128]
    unsigned long long v2;  // [bp-0x120]
    unsigned long long v3;  // [bp-0x118]
    unsigned long long v4;  // [bp-0x110]
    char *v5;  // [bp-0x108]
    unsigned long long v6;  // [bp-0x100]
    unsigned long long v7;  // [bp-0xf8]
    unsigned long long v8;  // [bp-0xf0]
    unsigned long v9;  // [bp-0xe8]
    unsigned long long v10;  // [bp-0xe0]
    unsigned long long v11;  // [bp-0xd8]
    char *v12;  // [bp-0xd0]
    unsigned long long v13;  // [bp-0xc8]
    void* v14;  // [bp-0xc0]

    v0 = 1;
    while (true)
    {
        v5 = &v0;
        v6 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v10 = &g_4f6218;
        v11 = 2;
        v14 = 0;
        v12 = &v5;
        v13 = 1;
        v7.map_or_else(&v10);
        uu_ln::simple_backup_path(&v2, a1, a2, v8, v9);
        core::ptr::drop_in_place<alloc::string::String>(&v7);
        std::fs::metadata(&v10, v3, v4);
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v10);
        if ((unsigned int)v10 == 2)
            break;
        v0 += 1;
        core::ptr::drop_in_place<std::path::PathBuf>(&v2);
    }
    v1->field_10 = v4;
    v1->field_0 = *((int128_t *)&v2);
    return v4;
}
