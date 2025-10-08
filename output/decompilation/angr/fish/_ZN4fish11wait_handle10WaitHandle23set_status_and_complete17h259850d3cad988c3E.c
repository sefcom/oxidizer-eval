void fish::wait_handle::WaitHandle::set_status_and_complete(unsigned int a0[10], unsigned int a1)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    uint128_t v3;  // [bp-0x18]

    if (a0[8])
    {
        v0 = &g_14e4590;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14e45a0); /* do not return */
    }
    a0[8] = 1;
    a0[9] = a1;
    return;
}
