long long fish::proc::ProcStatus::status_value(unsigned int a0[2])
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    uint128_t v3;  // [bp-0x20]

    if ((char)a0.signal_exited())
        return (int)a0.signal_code() | 128;
    if (a0[0] != 1 || !((char)a0[1] & 127))
        return (unsigned int)a0.exit_code();
    v0 = &g_14df258;
    v1 = 1;
    v2 = 8;
    v3 = 0;
    core::panicking::panic_fmt(&v0, &g_14df268); /* do not return */
    return (unsigned int)a0.exit_code();
}
