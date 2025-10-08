int fish::signal::set_interactive_handlers()
{
    int v0;  // [bp-0x148], Other Possible Types: unsigned long long
    uint128_t v1;  // [bp-0x138]
    uint128_t v2;  // [bp-0x128]
    uint128_t v3;  // [bp-0x118]
    uint128_t v4;  // [bp-0x108]
    uint128_t v5;  // [bp-0xf8]
    uint128_t v6;  // [bp-0xe8]
    uint128_t v7;  // [bp-0xd8]
    int v8;  // [bp-0xc8]
    unsigned int v9;  // [bp-0xc0]
    void* v10;  // [bp-0xb8]
    uint128_t v11;  // [bp-0xa8]
    uint128_t v12;  // [bp-0x98]
    uint128_t v13;  // [bp-0x88]
    uint128_t v14;  // [bp-0x78]
    uint128_t v15;  // [bp-0x68]
    uint128_t v16;  // [bp-0x58]
    uint128_t v17;  // [bp-0x48]
    uint128_t v18;  // [bp-0x38]
    int v19;  // [bp-0x28]
    unsigned int v20;  // [bp-0x20]
    void* v21;  // [bp-0x18]

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
    *((uint128_t *)&v19) = 0;
    v18 = 0;
    v17 = 0;
    v16 = 0;
    v15 = 0;
    v14 = 0;
    v13 = 0;
    v12 = 0;
    v11 = 0;
    v21 = 0;
    v9 = 0;
    v20 = 0;
    sigemptyset(&(char)v0);
    v0 = 1;
    fish::signal::sigaction(20, &v0);
    fish::signal::sigaction(22, &v0);
    v0 = fish::signal::fish_signal_handler;
    v9 = 4;
    fish::signal::sigaction(21, &v0);
    v0 = fish::signal::fish_signal_handler;
    v9 = 4;
    fish::signal::sigaction(15, &v0);
    sigaction(1, NULL, &v11);
    if (!(long long)v11)
    {
        v0 = fish::signal::fish_signal_handler;
        v9 = 4;
        fish::signal::sigaction(1, &v0);
    }
    v0 = fish::signal::fish_signal_handler;
    v9 = 4;
    fish::signal::sigaction(14, &v0);
    v0 = fish::signal::fish_signal_handler;
    v9 = 4;
    return fish::signal::sigaction(28, &v0);
}
