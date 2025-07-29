long long uu_wc::is_stdin_small_file()
{
    unsigned int v0;  // [bp-0xbc]
    char v1;  // [bp-0xb8], Other Possible Types: unsigned long long
    char v2;  // [bp-0xb0]
    char v3;  // [bp-0x80]
    char v4;  // [bp-0x68]
    unsigned int v6;  // ebx

    std::io::stdio::stdin();
    v0 = 0;
    v1.metadata(&v0);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v1, *((long long *)&v2));
    return (v1 == 2 ? 0 : v6 & 0xffffff00 | *((long long *)&v4) < 10485761 & (0xf000 & *((int *)&v3)) == 0x8000);
}
