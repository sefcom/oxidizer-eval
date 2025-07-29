long long uu_ls::PathData::new::get_file_type(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    char v0;  // [bp-0xc8]

    if (a3)
    {
        std::fs::metadata(&v0, a1, a2);
        if (!(*((int *)&v0) == 2))
            goto LABEL_52b1c2;
        ::0x51da70::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v0);
    }
    v0.file_type(a0);
    if ((v0 & 1))
    {
        core::ptr::drop_in_place<core::result::Result<std::fs::FileType,std::io::error::Error>>(&v0);
        std::fs::symlink_metadata(&v0, a1, a2);
        if (*((int *)&v0) == 2)
        {
            ::0x51da70::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v0);
            return 2;
        }
LABEL_52b1c2:
        ::0x51da70::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v0);
    }
    else
    {
        core::ptr::drop_in_place<core::result::Result<std::fs::FileType,std::io::error::Error>>(&v0);
    }
    return 1;
}
