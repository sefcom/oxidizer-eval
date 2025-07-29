long long uu_mv::rename_symlink_fallback(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    unsigned long long v7;  // rcx
    unsigned long long v8;  // rax

    std::fs::read_link(&v0, a0, a1);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        return v1;
    v3 = v0;
    v4 = v1;
    v5 = v2;
    v8 = std::os::unix::fs::symlink(&v3, a2, v7);
    if (!v8)
        return std::fs::remove_file(a0, a1);
    return v8;
}
