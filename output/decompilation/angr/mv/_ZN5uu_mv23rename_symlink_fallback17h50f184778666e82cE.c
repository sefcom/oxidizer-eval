long long uu_mv::rename_symlink_fallback::h50f184778666e82c(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x48]
    char v2;  // [bp-0x40]
    unsigned long v3;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x30]
    unsigned long long v5;  // [sp-0x28]
    unsigned long long v8;  // rax
    unsigned long long v9;  // rcx

    std::fs::read_link::h2d828447d51f8a7f(&v0, a0, a1);
    v8 = *((long long *)&v1);
    if (v3 == 0x8000000000000000)
        return v8;
    v3 = *((long long *)&v0);
    v4 = v8;
    v5 = *((long long *)&v2);
    v8 = std::os::unix::fs::symlink::h7819e981045b41e0(&v3, a2, v9);
    if (!v8)
        return std::fs::remove_file::hac48d4e29d9c97ea(a0, a1);
    return v8;
}
