long long uu_mv::rename_file_fallback(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    unsigned long long v5;  // [bp-0x38]
    unsigned long long v6;  // [bp-0x30]
    unsigned long long v7;  // [bp-0x28]
    unsigned long long v9;  // rax
    unsigned long v10;  // rdx
    unsigned long long v11;  // rax

    v0 = a0;
    v1 = a1;
    v2 = a2;
    v3 = a3;
    if ((char)a2.is_symlink(a3))
    {
        v9 = std::fs::remove_file(a2, a3);
        v4 = a2;
        v5 = a3;
        v6 = a0;
        v7 = a1;
        if (v9)
            return uu_mv::rename_file_fallback::{{closure}}(&v4, v9);
    }
    if (((char)std::fs::copy(a0, a1, a2, a3) & 1))
        return v10;
    v11 = uucore::features::fsxattr::copy_xattrs(&v0, &v2);
    if (v11)
        return v11;
    return std::fs::remove_file(a0, a1);
}
