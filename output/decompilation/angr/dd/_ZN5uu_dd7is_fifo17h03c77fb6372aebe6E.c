long long uu_dd::is_fifo(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0xc0]
    char v1;  // [bp-0x88]

    std::fs::metadata(&v0, a0, a1);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v0);
    return vvar_4{reg 56} & 0xffffff00 | (*((int *)&v1) & 0xf000) == 0x1000 & *((int *)&v0) != 2;
}
