long long uu_uptime::default_uptime()
{
    unsigned long long v1;  // rsi
    unsigned long long v2;  // rax

    uu_uptime::print_time();
    v2 = uu_uptime::print_uptime(0, v1);
    if (!v2)
    {
        uu_uptime::print_nusers(0, v1);
        uu_uptime::print_loadavg();
        return 0;
    }
    return v2;
}
