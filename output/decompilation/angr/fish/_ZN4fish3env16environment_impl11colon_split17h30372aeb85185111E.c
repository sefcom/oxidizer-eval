long long fish::env::environment_impl::colon_split(struct_0 *a0, unsigned long long a1[3], unsigned long a2)
{
    void* v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    void* v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x40]
    unsigned long long v4;  // [bp-0x38]
    unsigned int v5;  // [bp-0x30]
    unsigned long long v7;  // r12
    unsigned long long v8;  // rdx

    v0 = 0;
    v1 = 8;
    v2 = 0;
    for (v7 = a2 * 24; v7; a1 += 1)
    {
        v3 = a1[1].index(a1[2]);
        v4 = v8;
        v5 = 58;
        v7 -= 24;
        v0.spec_extend(&v3);
    }
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v0);
    return 0;
}
