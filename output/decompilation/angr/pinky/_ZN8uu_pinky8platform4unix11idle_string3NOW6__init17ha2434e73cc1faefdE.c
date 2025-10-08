double uu_pinky::platform::unix::idle_string::NOW::__init(long long a0)
{
    char v0;  // [bp-0x18]
    char v1;  // [bp-0xd]
    unsigned long v3;  // xmm0lq
    int v4;  // xmm0

    v0.now_local();
    if (v1 != 1)
    {
        v4 = *((int128_t *)&v0);
        *((void*)a0) = v4;
        return (unsigned long long)v4;
    }
    a0.now_utc();
    return v3;
}
