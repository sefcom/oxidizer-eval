long long uu_cp::file_or_link_exists(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0xc0]

    std::fs::symlink_metadata(&v0, a0, a1);
    ::0x4d4630::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v0);
    return vvar_4{reg 56} & 0xffffff00 | *((int *)&v0) != 2;
}
