long long fish::fallback::wcscasecmp_fuzzy(unsigned long long a0, unsigned long a1, unsigned long long a2, unsigned long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0xa8]
    unsigned long long v1;  // [bp-0xa0]
    unsigned long long v2;  // [bp-0x98]
    char v3;  // [bp-0x90]
    char v4;  // [bp-0x58]

    v0 = a0;
    v1 = a0 + a1 * 4;
    v2 = a4;
    v4.new(&v0);
    v0 = a2;
    v1 = a2 + a3 * 4;
    v2 = a4;
    v3.new(&v0);
    return v4.cmp_by(&v3);
}
