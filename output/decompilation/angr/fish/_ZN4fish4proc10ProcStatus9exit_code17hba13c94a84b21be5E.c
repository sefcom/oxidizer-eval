long long fish::proc::ProcStatus::exit_code(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    uint128_t v3;  // [bp-0x20]
    unsigned long v5;  // rax

    v5 = a0->field_4;
    if ((((char)v5 & 127) & a0->field_0))
    {
        v0 = &g_14df218;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14df240); /* do not return */
    }
    0.unwrap(&g_14df228);
    return ((a0->field_0 & 1) ? (unsigned int)v5 >> 8 : 0);
}
