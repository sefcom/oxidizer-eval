long long uu_install::mode::parse(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned int a4)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]

    v0 = a1;
    v1 = a1 + a2;
    if (!v0.try_fold().eq())
        return uucore::features::mode::parse_symbolic(a0, 0, a1, a2, a4, a3);
    return uucore::features::mode::parse_numeric(a0, 0, a1, a2, a3);
}
