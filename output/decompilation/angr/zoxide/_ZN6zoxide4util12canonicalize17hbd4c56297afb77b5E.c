long long zoxide::util::canonicalize(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x38]
    char v1;  // [bp-0x30]

    v0 = a1;
    dunce::canonicalize(&v1, &v0);
    a0.with_context(&v1, a1);
    return a0;
}
