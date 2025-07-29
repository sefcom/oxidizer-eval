long long uu_tail::paths::path_is_tailable(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0xc8], Other Possible Types: unsigned long long
    char v1;  // [bp-0xc0]
    unsigned long long v3;  // rax

    v3 = a0.is_file(a1);
    if ((char)v3)
        return v3 & 0xffffffffffffff00 | 1;
    std::fs::metadata(&v0, a0, a1);
    ::0x50e680::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v0, *((long long *)&v1));
    if (v0 != 2)
    {
        std::fs::metadata(&v0, a0, a1);
        return v0.is_ok_and();
    }
    return 0;
}
