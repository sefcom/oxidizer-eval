void fish::signal::signal_reset_handlers()
{
    void* v0;  // [bp-0x168], Other Possible Types: sigaction
    uint128_t v1;  // [bp-0x158]
    uint128_t v2;  // [bp-0x148]
    uint128_t v3;  // [bp-0x138]
    uint128_t v4;  // [bp-0x128]
    uint128_t v5;  // [bp-0x118]
    uint128_t v6;  // [bp-0x108]
    uint128_t v7;  // [bp-0xf8]
    int v8;  // [bp-0xe8]
    unsigned int v9;  // [bp-0xe0]
    void* v10;  // [bp-0xd8]
    sigaction v11;  // [bp-0xc8]
    unsigned long long v13;  // r15

    *((uint128_t *)&v8) = 0;
    v7 = 0;
    v6 = 0;
    v5 = 0;
    v4 = 0;
    v3 = 0;
    v2 = 0;
    v1 = 0;
    *((uint128_t *)&v0) = 0;
    v10 = 0;
    sigemptyset(&(char)v0);
    v9 = 0;
    v0 = 0;
    v13 = 40;
    do
    {
        if (*((int *)&(&g_14e21e0)[v13]) == 1)
        {
            sigaction(1, NULL, &v11);
            if (*((long long *)&v11) == 1)
                continue;
        }
        sigaction(*((int *)&(&g_14e21e0)[v13]), &v0, NULL);
        v13 += 48;
    } while (v13 != 1624);
    return;
}
