long long meilitool::upgrade::v1_12::store_stats_of(unsigned long long a0, unsigned int a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    char v2;  // [bp-0x20]

    v0 = a4;
    v1 = a5;
    v2.put(a0, a1, a3, a2, a6);
    return v2.with_context(&v0, a2);
}
