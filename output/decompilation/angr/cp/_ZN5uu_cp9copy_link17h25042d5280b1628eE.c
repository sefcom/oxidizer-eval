long long uu_cp::copy_link(unsigned long long a0[2], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    unsigned long long v4;  // rax

    std::fs::read_link(&v0, a1, a2);
    if (v0 == 0x8000000000000000)
    {
        a0[0] = 9223372036854775809;
        a0[1] = v1;
        return v0;
    }
    v0 = v0;
    if ((char)a3.is_symlink(a4) || (char)a3.is_file(a4))
    {
        v4 = std::fs::remove_file(a3, a4);
        if (!v4)
            goto LABEL_4a54f0;
        a0[0] = 9223372036854775809;
        a0[1] = v4;
    }
    else
    {
LABEL_4a54f0:
        uu_cp::symlink_file(a0, v1, v2, a3, a4, a5);
    }
    return (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>(&v0);
}
