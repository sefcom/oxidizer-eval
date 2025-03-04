long long uu_cp::copy_link::h3110b816ad64228e(unsigned long long a0[2], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long v0;  // [sp-0x50]
    unsigned long long v1;  // [sp-0x48]
    unsigned long long v2;  // [sp-0x40]
    char v3;  // [bp-0x38]
    char v4;  // [bp-0x30]
    char v5;  // [bp-0x28]
    unsigned long long v9;  // rax

    std::fs::read_link::hdecc6681ebe33782(&v3, a1, a2);
    if (v0 == 0x8000000000000000)
    {
        a0[0] = 2;
        a0[1] = v1;
        return a0;
    }
    v0 = *((long long *)&v3);
    v1 = *((long long *)&v4);
    v2 = *((long long *)&v5);
    if (!(char)std::path::Path::is_symlink::h6ab8b58756c51c6b(a3, a4) && !(char)std::path::Path::is_file::h82f08f46fb8d8099(a3, a4) || (v9 = std::fs::remove_file::h38159f05e7b4dc34(a3, a4), !v9))
    {
        uu_cp::symlink_file::h73880cbbf32f0256(a0, v1, v2, a3, a4, a5);
    }
    else
    {
        a0[0] = 2;
        a0[1] = v9;
    }
    ::0x4fc400::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v0);
    return a0;
}
