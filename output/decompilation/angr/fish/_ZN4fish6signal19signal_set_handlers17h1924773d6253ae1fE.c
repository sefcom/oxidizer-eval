int fish::signal::signal_set_handlers(char a0)
{
    int v0;  // [bp-0xb8], Other Possible Types: unsigned long long
    uint128_t v1;  // [bp-0xa8]
    uint128_t v2;  // [bp-0x98]
    uint128_t v3;  // [bp-0x88]
    uint128_t v4;  // [bp-0x78]
    uint128_t v5;  // [bp-0x68]
    uint128_t v6;  // [bp-0x58]
    uint128_t v7;  // [bp-0x48]
    int v8;  // [bp-0x38]
    unsigned int v9;  // [bp-0x30]
    void* v10;  // [bp-0x28]
    unsigned int v13;  // eax

    core::sync::atomic::atomic_store(&_ZN4fish6signal8MAIN_PID17h85b18cfc02663442E, fish::nix::getpid());
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
    v9 = 0;
    sigemptyset(&(char)v0);
    v0 = 1;
    fish::signal::sigaction(13, &v0);
    v0 = 1;
    fish::signal::sigaction(3, &v0);
    v0 = fish::signal::fish_signal_handler;
    v9 = 4;
    fish::signal::sigaction(2, &v0);
    v0 = fish::signal::fish_signal_handler;
    v9 = 268435460;
    v13 = fish::signal::sigaction(17, &v0);
    if (v13)
    {
        fish::wutil::perror("sigactionsrc/signal.rs", 9);
        fish::common::exit_without_destructors(1); /* do not return */
    }
    if (a0)
        v13 = fish::signal::set_interactive_handlers();
    return v13;
}
