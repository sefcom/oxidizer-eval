long long uu_tail::paths::path_is_tailable(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0xd0]
    unsigned long long v2;  // rax

    v2 = a0.is_file(a1);
    if ((char)v2)
        return v2 & 0xffffffffffffff00 | 1;
    std::fs::metadata(&v0, a0, a1);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v0);
    if (*((int *)&v0) != 2)
    {
        std::fs::metadata(&v0, a0, a1);
        return v0.is_ok_and();
    }
    return 0;
}
