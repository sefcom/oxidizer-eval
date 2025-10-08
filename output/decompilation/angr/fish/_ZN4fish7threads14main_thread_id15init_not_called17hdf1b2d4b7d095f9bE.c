void fish::threads::main_thread_id::init_not_called()
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    uint128_t v3;  // [bp-0x18]

    v0 = &g_14e2e10;
    v1 = 1;
    v2 = 8;
    v3 = 0;
    core::panicking::panic_fmt(&v0, &g_14e2e20); /* do not return */
}
