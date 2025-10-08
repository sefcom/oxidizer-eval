long long uu_sort::tmp_dir::remove_tmp_dir(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x130], Other Possible Types: unsigned long long
    char v1;  // [bp-0x128]
    unsigned long long v2;  // [bp-0x110]
    int v3;  // [bp-0x108]
    int v4;  // [bp-0xf8]
    unsigned long long v5;  // [bp-0xe8]
    int v6;  // [bp-0xe0]
    int v7;  // [bp-0xd0]
    unsigned long long v8;  // [bp-0xc0]
    void* v9;  // [bp-0xb8]
    void* v10;  // [bp-0x88]
    unsigned long long v11;  // [bp-0x58]
    char v12;  // [bp-0x50]
    char v13;  // [bp-0x48]

    std::fs::read_dir(&v0, a0, a1);
    if (v1 != 2)
    {
        v9 = 0;
        v10 = 0;
        v11 = v0;
        v12 = v1;
        while (true)
        {
            v6.next(&v9);
            if (!(long long)v6)
                break;
            v5 = v8;
            v4 = v7;
            v3 = v6;
            v13.path(&v3);
            v2 = std::fs::remove_file(&v13);
            core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v2);
            core::ptr::drop_in_place<std::fs::DirEntry>(&v3);
        }
        core::ptr::drop_in_place<core::iter::adapters::flatten::Flatten<std::fs::ReadDir>>(&v9);
        if (v1 != 2)
            return std::fs::remove_dir(a0, a1);
    }
    core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>(&v0);
    return std::fs::remove_dir(a0, a1);
}
