long long backdoorautomater::sanitizer::sanitize_choice(char a0, char a1)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    uint128_t v3;  // [bp-0x18]

    if (a0 > 4)
    {
        v0 = &g_62a560;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_62a5a0); /* do not return */
    }
    else if (!a0)
    {
        v0 = &g_62a560;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_62a570); /* do not return */
    }
    else if (a0 != 4)
    {
        return a0;
    }
    else if (a1 - 3 >= 2)
    {
        return a0;
    }
    else
    {
        v0 = &g_62a560;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_62a588); /* do not return */
    }
}
