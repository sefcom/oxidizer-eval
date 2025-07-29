long long uu_dd::is_fifo(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0xb8]
    char v1;  // [bp-0x80]
    unsigned int v3;  // ebx

    std::fs::metadata(&v0, a0, a1);
    if (*((int *)&v0) != 2)
    {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v0);
        return v3 & 0xffffff00 | (0xf000 & *((int *)&v1)) == 0x1000;
    }
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v0);
    return 0;
}
