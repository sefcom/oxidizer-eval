double uu_wc::Input::as_borrowed(long long a0, long long a1)
{
    int v1;  // xmm0
    int v2;  // xmm0

    if (*((long long *)a1) != 9223372036854775809)
    {
        v2 = (int128_t)a1[8];
        *((unsigned long long *)a0) = 0x8000000000000000;
        a0[8] = v2;
        return (unsigned long long)v2;
    }
    *((long long *)&a0[16]) = (long long)a1[16];
    v1 = *((int128_t *)a1);
    *(a0) = v1;
    return (unsigned long long)v1;
}
