long long uu_numfmt::format::parse_implicit_precision(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    char v3;  // [bp-0x20]
    unsigned long long v4;  // [bp-0x10]
    char v5;  // [bp-0x8]

    core::str::<impl str>::split_once(&v3, a0, a1);
    if (!*((long long *)&v3))
        return 0;
    v0 = v4;
    v1 = *((long long *)&v5) + v4;
    v2 = 0;
    return v0.fold();
}
