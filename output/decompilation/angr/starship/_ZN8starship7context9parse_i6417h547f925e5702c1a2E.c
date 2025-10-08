double starship::context::parse_i64(long long a0, long long a1, long long a2)
{
    char v0;  // [bp-0x18]
    unsigned long v2;  // xmm0lq
    int v3;  // xmm0

    starship::context::parse_trim(&v0, a1, a2);
    if (v0 != 2)
    {
        v3 = *((int128_t *)&v0);
        *(a0) = v3;
        return (unsigned long long)v3;
    }
    *((char *)a0) = 0;
    *((unsigned long long *)&a0[8]) = 0;
    return v2;
}
