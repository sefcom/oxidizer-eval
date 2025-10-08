long long uu_rm::is_writable(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0xb0]
    char v1;  // [bp-0xa8]
    char v2;  // [bp-0x78]

    std::fs::metadata(&v0, a0, a1);
    if (*((int *)&v0) != 2)
        return v2 >> 7;
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2, *((long long *)&v1));
    return 0;
}
