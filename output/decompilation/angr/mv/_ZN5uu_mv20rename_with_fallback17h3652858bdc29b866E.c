long long uu_mv::rename_with_fallback(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    char *v5;  // [bp-0x28]
    unsigned long long v7;  // rax

    v0 = a4;
    v7 = std::fs::rename(a0, a1, a2, a3);
    v1 = a0;
    v2 = a1;
    v3 = a2;
    v4 = a3;
    v5 = &v0;
    return (!v7 ? 0 : uu_mv::rename_with_fallback::{{closure}}(&v1, v7));
}
