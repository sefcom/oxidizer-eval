double zoxide::db::dir::Dir::score(long long a0, long long a1)
{
    void* v1;  // rsi
    unsigned long v2;  // xmm0lq
    unsigned long v3;  // xmm0lq
    unsigned long v4;  // xmm0lq

    v1 = a1 - a0;
    if (a0 > a1)
        v1 = 0;
    if (v1 < 3600)
    {
        return (unsigned long long)(MulV(v2, 0x4010000000000000));
    }
    else if (v1 < 86400)
    {
        return (unsigned long long)(MulV(v3, 0x4000000000000000));
    }
    else
    {
        return (unsigned long long)(MulV(v4, g_418cd0[v1 < 604800]));
    }
}
