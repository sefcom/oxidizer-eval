long long uu_date::set_system_datetime(unsigned int a0[3])
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned int v3;  // eax

    v3 = a0[0].num_days_from_ce();
    v0 = (v3 - 719163) * 86400 + a0[1];
    v1 = a0[2];
    if (!clock_settime(0, &v0, v1, a0[1]))
        return 0;
    return *(__errno_location()) * 0x100000000 | 2.map_err_context();
}
