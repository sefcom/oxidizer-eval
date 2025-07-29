long long uu_test::path(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
    char v0;  // [bp-0x230]
    char v1;  // [bp-0xc8]
    char *v3;  // rdi

    v3 = &v0;
    if ((char)a2 == 8)
    {
        std::fs::symlink_metadata(v3, a0, a1);
        if (*((int *)&v0) == 2)
        {
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v0);
            return 0;
        }
    }
    else
    {
        std::fs::metadata(v3, a0, a1);
        if (*((int *)&v0) == 2)
        {
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v0);
            return 0;
        }
    }
    memcpy(&v1, &v0, 176);
    goto (long long)(g_42eb70[a2] + (char *)&g_42eb70[0]);
}
