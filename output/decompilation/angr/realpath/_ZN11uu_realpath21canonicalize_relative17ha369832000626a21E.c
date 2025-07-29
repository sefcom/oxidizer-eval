long long uu_realpath::canonicalize_relative(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    char v3;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x40]
    unsigned long long v6;  // [bp-0x38]
    char v7;  // [bp-0x30]

    uucore::features::fs::canonicalize(&v3, a1, a2, a3, a4);
    if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
    {
        a0[1] = v1;
        a0[0] = 0x8000000000000000;
        return v3;
    }
    v0 = v3;
    v1 = v4;
    v2 = v5;
    if ((char)a3 == 1 && !(char)v1.is_dir(v2))
    {
        std::fs::read_dir(&v3, v1, v2);
        if ((char)v4 == 2)
        {
            a0[1] = v3;
            a0[0] = 0x8000000000000000;
            return (unsigned long long)::0x49f440::core::ptr::drop_in_place<std::path::PathBuf>(&v0);
        }
        v6 = v3;
        v7 = v4;
        ::0x49f430::core::ptr::drop_in_place<std::fs::ReadDir>(&v6);
    }
    a0[2] = v2;
    a0[0] = v0;
    a0[1] = v1;
    return v1;
}
