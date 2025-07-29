long long FakeCrypt::fileops::decrypt_directory(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x120], Other Possible Types: unsigned long long
    char v1;  // [bp-0x118]
    unsigned long long v2;  // [bp-0x110]
    unsigned long long v3;  // [bp-0x108]
    unsigned long long v4;  // [bp-0x100]
    int v5;  // [bp-0xf8]
    int v6;  // [bp-0xe8]
    unsigned long long v7;  // [bp-0xd8]
    int v8;  // [bp-0xc8]
    int v9;  // [bp-0xb8]
    unsigned long long v10;  // [bp-0xa8]
    void* v11;  // [bp-0xa0]
    void* v12;  // [bp-0x70]
    unsigned long long v13;  // [bp-0x40]
    char v14;  // [bp-0x38]
    unsigned long long v16;  // rax

    std::fs::read_dir(&v0, a0, a1);
    if (v1 == 2)
        return core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>(&v0);
    v11 = 0;
    v12 = 0;
    v13 = v0;
    v14 = v1;
    while (true)
    {
        v8.next(&v11);
        if (!(long long)v8)
            break;
        v7 = v10;
        v6 = v9;
        v5 = v8;
        v2.path(&v5);
        if ((char)v3.is_dir(v4))
            FakeCrypt::fileops::decrypt_directory(v3, v4, a2, a3);
        else
            FakeCrypt::fileops::decrypt_file(v3, v4, a2, a3);
        ::0x454570::core::ptr::drop_in_place<std::path::PathBuf>(&v2);
        core::ptr::drop_in_place<std::fs::DirEntry>(&v5);
    }
    v16 = (unsigned long long)core::ptr::drop_in_place<core::iter::adapters::flatten::Flatten<std::fs::ReadDir>>(&v11);
    if (v1 != 2)
        return v16;
    return core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>(&v0);
}
