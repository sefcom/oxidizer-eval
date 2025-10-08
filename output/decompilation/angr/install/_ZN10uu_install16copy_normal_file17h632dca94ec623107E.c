long long uu_install::copy_normal_file(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0xb0]
    unsigned long long v1;  // [bp-0xa8]
    unsigned long long v2;  // [bp-0xa0]
    int v3;  // [bp-0x98], Other Possible Types: char
    unsigned long long v4;  // [bp-0x88]
    char v5;  // [bp-0x80]
    unsigned long long v6;  // [bp-0x70]
    unsigned long long v7;  // [bp-0x68]
    unsigned long long v8;  // [bp-0x60]
    int v9;  // [bp-0x58]
    unsigned long long v10;  // [bp-0x48]
    char v11;  // [bp-0x40]
    unsigned long long v12;  // [bp-0x30]
    unsigned long long v14;  // rdx

    v1 = std::fs::copy(a0, a1, a2, a3);
    v2 = v14;
    if (!((char)v1 & 1))
    {
        core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v1);
        return 0;
    }
    v0 = v14;
    std::sys::pal::unix::os::split_paths::bytes_to_path(&v3, a0, a1);
    std::sys::pal::unix::os::split_paths::bytes_to_path(&v5, a2, a3);
    v10 = v4;
    v9 = v3;
    memcpy(&v11, &v5, 16);
    v12 = v6;
    v8 = v14;
    v7 = 8;
    return v7.new();
}
