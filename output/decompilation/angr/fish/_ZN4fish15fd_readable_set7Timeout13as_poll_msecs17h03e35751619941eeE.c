long long fish::fd_readable_set::Timeout::as_poll_msecs(unsigned long a0, unsigned int a1)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    uint128_t v3;  // [bp-0x18]

    if (a1 == 0x3b9aca00)
    {
        return 4294967295;
    }
    else if ((char)_ccall(2, 16, a0 / 18446744073709552 + (((a1 * 1125899907 >> 50) + (unsigned long long)(a0 * 1000) <= a1 * 1125899907 >> 50 ? 1 : 0) & 1), (unsigned long long)(char)((a1 * 1125899907 >> 50) + a0 * 1000 < 2147483647), (unsigned long long)(char)((a1 * 1125899907 >> 50) + a0 * 1000 < 2147483647)))
    {
        return (a1 * 1125899907 >> 50) + a0 * 1000;
    }
    else
    {
        v0 = &g_14d8b90;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14d8ba0); /* do not return */
    }
}
