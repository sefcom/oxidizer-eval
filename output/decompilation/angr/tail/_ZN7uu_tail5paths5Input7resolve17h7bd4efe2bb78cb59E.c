long long uu_tail::paths::Input::resolve(struct_0 *a0, unsigned long long a1[6])
{
    char v0;  // [bp-0x58], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    int v3;  // [bp-0x40], Other Possible Types: char
    char v4;  // [bp-0x30]
    char v6;  // al

    if (!((char)(((0 ^ a1[3]) & (0 ^ -(a1[3]))) >> 63)))
    {
        v0.to_owned("/dev/stdin <==\n\n", 10);
        v6 = a1[4].eq(a1[5], v1, v2);
        ::0x50e520::core::ptr::drop_in_place<std::path::PathBuf>(&v0);
        if (!v6)
        {
            std::fs::canonicalize(&v0, a1[4], a1[5]);
            if (v0 != 0x8000000000000000)
            {
                a0->field_10 = v2;
                *((int128_t *)&a0->field_0) = *((int128_t *)&v0);
                return a0;
            }
            *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
            ::0x50e690::core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v0);
            return a0;
        }
    }
    v0.to_owned("/dev/fd/0/dev/stdin <==\n\n", 9);
    std::fs::canonicalize(&v3, v1, v2);
    if (*((long long *)&v3) == 0x8000000000000000)
    {
        *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
        ::0x50e690::core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v3);
    }
    else
    {
        a0->field_10 = *((long long *)&v4);
        *((void*)&a0->field_0) = v3;
    }
    ::0x50e520::core::ptr::drop_in_place<std::path::PathBuf>(&v0);
    return a0;
}
