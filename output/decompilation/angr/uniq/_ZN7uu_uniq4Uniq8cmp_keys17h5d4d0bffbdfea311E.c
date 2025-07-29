long long uu_uniq::Uniq::cmp_keys(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]

    v0 = a0;
    v1 = a3;
    v2 = a4;
    return a0.cmp_key(a1, a2, &v0);
}
