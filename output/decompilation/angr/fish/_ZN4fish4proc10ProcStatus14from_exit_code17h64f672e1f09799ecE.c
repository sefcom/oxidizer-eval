long long fish::proc::ProcStatus::from_exit_code(unsigned int a0)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    uint128_t v3;  // [bp-0x18]

    if (a0 < 0)
    {
        v0 = &g_14df1b0;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14df1c0); /* do not return */
    }
    else if (a0 < 0x100)
    {
        return 1;
    }
    else
    {
        core::panicking::panic("assertion failed: ret < 256Process is not signal exitedProcess is not normal exitedProcess is not exited", 27, &g_14df1d8); /* do not return */
    }
}
