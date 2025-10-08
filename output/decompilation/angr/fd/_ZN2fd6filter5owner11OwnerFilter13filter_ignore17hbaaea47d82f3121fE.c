double fd::filter::owner::OwnerFilter::filter_ignore(long long a0, long long a1, long long a2, long long a3)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long v3;  // xmm0lq
    int v4;  // xmm0

    v0 = v2;
    if ((char)*((int *)a1).eq((int)a1[4], 2, a3) && (char)(int)a1[8].eq((int)a1[12], 2, a3))
    {
        *((unsigned int *)a0) = 3;
        return v3;
    }
    v4 = *((int128_t *)a1);
    *(a0) = v4;
    return (unsigned long long)v4;
}
