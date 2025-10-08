long long uu_realpath::canonicalize_relative(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned long long a4)
{
    char v0;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x40]
    char v4;  // [bp-0x38]
    unsigned long long v6;  // rax

    uucore::features::fs::canonicalize(&v0, a1, a2, a3, a4);
    v6 = -(v0);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        a0[1] = v1;
        a0[0] = 0x8000000000000000;
        return -(v0);
    }
    if ((char)a3 == 1)
    {
        v6 = v1.is_dir(v2);
        if (!(char)v6)
        {
            std::fs::read_dir(&v0, v1, v2);
            if ((char)v1 == 2)
            {
                a0[1] = v0;
                a0[0] = 0x8000000000000000;
                return (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>(v0, v1);
            }
            v3 = v0;
            v4 = v1;
            v6 = core::ptr::drop_in_place<std::fs::ReadDir>(&v3);
        }
    }
    a0[0] = v0;
    a0[1] = v1;
    a0[2] = v2;
    return v6;
}
