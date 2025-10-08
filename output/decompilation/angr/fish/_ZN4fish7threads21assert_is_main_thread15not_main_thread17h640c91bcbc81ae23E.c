void fish::threads::assert_is_main_thread::not_main_thread()
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    uint128_t v3;  // [bp-0x18]

    v0 = &g_14e2e38;
    v1 = 1;
    v2 = 8;
    v3 = 0;
    core::panicking::panic_fmt(&v0, &g_14e2e48); /* do not return */
}
