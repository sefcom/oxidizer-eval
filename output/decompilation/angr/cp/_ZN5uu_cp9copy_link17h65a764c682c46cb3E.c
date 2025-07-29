long long uu_cp::copy_link(unsigned long long a0[2], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    char v3;  // [bp-0x40], Other Possible Types: unsigned long long
    unsigned long v4;  // [bp-0x38]
    char v5;  // [bp-0x30]
    unsigned long long v7;  // rax

    std::fs::read_link(&v3, a1, a2);
    if (v3 == 0x8000000000000000)
    {
        a0[0] = 9223372036854775809;
        a0[1] = v4;
        return a0;
    }
    v0 = v3;
    v1 = v4;
    v2 = *((long long *)&v5);
    if ((char)a3.is_symlink(a4) || (char)a3.is_file(a4))
    {
        v7 = std::fs::remove_file(a3, a4);
        if (!v7)
            goto LABEL_4e25f5;
        a0[0] = 9223372036854775809;
        a0[1] = v7;
    }
    else
    {
LABEL_4e25f5:
        uu_cp::symlink_file(a0, v1, v2, a3, a4, a5);
    }
    ::0x4d38d0::core::ptr::drop_in_place<std::path::PathBuf>(&v0);
    return a0;
}
