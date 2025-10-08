long long fd::filesystem::is_existing_directory(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x38]
    unsigned long long v2;  // rbp
    unsigned long v3;  // cc_ndep

    if ((char)a0.is_dir(a1))
    {
        v2 = vvar_16{reg 56} & 0xffffffffffffff00 | 1;
        if (!a0.file_name(a1))
        {
            normpath::imp::normalize(&v0, a0, a1);
            v2 = v2 & 0xffffffffffffff00 | _ccall(1, 8, 0, *((long long *)&v0), v3) & 255;
            core::ptr::drop_in_place<core::result::Result<normpath::base::BasePathBuf,std::io::error::Error>>(&v0);
        }
    }
    else
    {
        v2 = 0;
    }
    return v2 & 4294967295;
}
