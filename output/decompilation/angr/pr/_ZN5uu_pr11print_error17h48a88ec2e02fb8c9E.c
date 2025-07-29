long long uu_pr::print_error(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x48]
    char *v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    unsigned long long v3;  // [bp-0x30]
    unsigned long long v4;  // [bp-0x28]
    char *v5;  // [bp-0x20]
    unsigned long long v6;  // [bp-0x18]
    void* v7;  // [bp-0x10]
    unsigned long long v9;  // rax

    v0 = a1;
    v9 = a0.get_flag("no-file-warningsidsunaryoperatorArgumentConflictCapacityOverflowrange end index ", 16);
    if ((char)v9)
        return v9;
    v1 = &v0;
    v2 = <&T as core::fmt::Display>::fmt;
    v3 = &g_755b68;
    v4 = 2;
    v7 = 0;
    v5 = &v1;
    v6 = 1;
    return std::io::stdio::_eprint(&v3);
}
