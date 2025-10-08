void fish::topic_monitor::BinarySemaphore::die(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    uint128_t v3;  // [bp-0x18]

    fish::wutil::perror(a1, a2);
    v0 = &g_14e3fd8;
    v1 = 1;
    v2 = 8;
    v3 = 0;
    core::panicking::panic_fmt(&v0, &g_14e3fe8); /* do not return */
}
