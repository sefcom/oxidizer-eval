double starship::context::parse_trim(long long a0, long long a1, long long a2)
{
    char v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long v3;  // rdx
    int v4;  // xmm0
    unsigned long v5;  // xmm0lq

    v2 = core::str::<impl str>::trim_matches(a1, a2);
    if (!v3)
    {
        *((char *)a0) = 2;
        return v5;
    }
    v0.from_str(v2, a2);
    v4 = *((int128_t *)&v0);
    *(a0) = v4;
    return (unsigned long long)v4;
}
