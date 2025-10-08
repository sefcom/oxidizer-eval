long long fish::proc::ProcStatus::signal_code(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    uint128_t v3;  // [bp-0x20]
    unsigned long long v4;  // [bp-0x8]
    unsigned long long v6;  // rbx

    v4 = v6;
    if (!(char)a0.signal_exited())
    {
        v0 = &g_14df1f0;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14df200); /* do not return */
    }
    return (a0->field_0 ? a0->field_4 & 127 : 0);
}
