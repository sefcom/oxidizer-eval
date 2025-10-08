long long uu_uptime::uptime_since()
{
    char v0;  // [bp-0xc0], Other Possible Types: unsigned long
    unsigned int v1;  // [bp-0xbc]
    unsigned long long v2;  // [bp-0xb8]
    char *v3;  // [bp-0xb0], Other Possible Types: unsigned long long
    void* v4;  // [bp-0xa8], Other Possible Types: unsigned long long
    void* v5;  // [bp-0xa0], Other Possible Types: char
    char *v6;  // [bp-0x90]
    unsigned long long v7;  // [bp-0x88]
    char v8;  // [bp-0x80], Other Possible Types: unsigned long long
    char v9;  // [bp-0x78]
    char v10;  // [bp-0x28]
    unsigned int v12;  // eax

    uu_uptime::process_utmpx(&v8, 0);
    uucore::features::uptime::get_uptime(&v8, v8, *((long long *)&v9));
    if (!v8)
    {
        v0.now();
        v12 = *((int *)&v0).num_days_from_ce();
        v8.timestamp_opt((v12 - 719163) * 86400 + v1 - *((long long *)&v9));
        v10.unwrap(&v8);
        v0 = "%Y-%m-%d %H:%M:%Ssrc/uu/uptime/src/uptime.rs,     couldn't get boot time: ";
        v2 = 17;
        v3 = 8;
        v4 = 0;
        v5 = 0;
        v8.format_with_items(&v10, &v0);
        v6 = &v8;
        v7 = <chrono::format::formatting::DelayedFormat<I> as core::fmt::Display>::fmt;
        v0 = &g_508278;
        v2 = 2;
        v5 = 0;
        v3 = &v6;
        v4 = 1;
        std::io::stdio::_print(&v0);
        core::ptr::drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>(&v8);
        return 0;
    }
    return v8;
}
