long long uu_uptime::uptime_with_file(unsigned long long a0)
{
    void* v0;  // [bp-0x118], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x110]
    unsigned long long v2;  // [bp-0x108]
    unsigned long long v3;  // [bp-0x100]
    void* v4;  // [bp-0xf8], Other Possible Types: char *, unsigned long long
    int v5;  // [bp-0xf0], Other Possible Types: unsigned long long
    int v6;  // [bp-0xf0]
    void* v7;  // [bp-0xe8]
    char *v8;  // [bp-0xd8]
    unsigned long long v9;  // [bp-0xd0]
    char v10;  // [bp-0xc8]
    char v11;  // [bp-0xc0]
    unsigned long long v14;  // rdx
    unsigned int v15;  // eax
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rax
    void* v18;  // rbx
    unsigned long long v19;  // rax
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rdx

    std::fs::metadata(&v10, a0);
    if (*((int *)&v10) == 2)
    {
        uucore::mods::error::set_exit_code(1);
        v0 = uucore::util_name();
        v1 = v14;
        v8 = &v0;
        v9 = <&T as core::fmt::Display>::fmt;
        v2 = &g_508258;
        v3 = 2;
        v7 = 0;
        v4 = &v8;
        v5 = 1;
        std::io::stdio::_eprint(&v2);
        v1 = *((long long *)&v11);
        v0 = 0;
        v8 = &v0;
        v9 = <uu_uptime::UptimeError as core::fmt::Display>::fmt;
        v2 = &g_508278;
        v3 = 2;
        v7 = 0;
        v4 = &v8;
        v5 = 1;
        std::io::stdio::_eprint(&v2);
        core::ptr::drop_in_place<uu_uptime::UptimeError>(v0, v1);
    }
    else
    {
        switch (v15)
        {
        case 4096:
            v0 = uucore::util_name();
            v1 = v22;
            v8 = &v0;
            v9 = <&T as core::fmt::Display>::fmt;
            v2 = &g_508258;
            v3 = 2;
            v7 = 0;
            v4 = &v8;
            v5 = 1;
            std::io::stdio::_eprint(&v2);
            v17 = &g_41a270;
            break;
        case 16384:
            v0 = uucore::util_name();
            v1 = v16;
            v8 = &v0;
            v9 = <&T as core::fmt::Display>::fmt;
            v2 = &g_508258;
            v3 = 2;
            v7 = 0;
            v4 = &v8;
            v5 = 1;
            std::io::stdio::_eprint(&v2);
            v17 = &g_41a2e0;
            break;
        default:
            uu_uptime::print_time();
            uu_uptime::process_utmpx(&(char)v2, a0);
            v18 = v4;
            if (v2 != 1)
            {
                v0 = uucore::util_name();
                v1 = v21;
                v8 = &v0;
                v9 = <&T as core::fmt::Display>::fmt;
                v2 = &g_508258;
                v3 = 2;
                v7 = 0;
                v4 = &v8;
                v5 = 1;
                std::io::stdio::_eprint(&v2);
                v2 = &g_5082a8;
                v3 = 1;
                v4 = 8;
                *((uint128_t *)&v6) = 0;
                std::io::stdio::_eprint(&v2);
                uucore::mods::error::set_exit_code(1);
                v2 = &g_508298;
                v3 = 1;
                v4 = 8;
                *((uint128_t *)&v5) = 0;
                std::io::stdio::_print(&v2);
                uu_uptime::print_nusers(1, v18);
                uu_uptime::print_loadavg();
                return 0;
            }
            v19 = uu_uptime::print_uptime(v2, v3);
            if (v19)
                return v19;
            uu_uptime::print_nusers(1, v18);
            uu_uptime::print_loadavg();
            return 0;
        }
        v0 = v17;
        v1 = <uu_uptime::UptimeError as core::fmt::Display>::fmt;
        v2 = &g_508278;
        v3 = 2;
        v7 = 0;
        v4 = &v0;
        v5 = 1;
        std::io::stdio::_eprint(&v2);
        uucore::mods::error::set_exit_code(1);
    }
    uu_uptime::print_time();
    v2 = &g_508298;
    v3 = 1;
    v4 = 8;
    *((uint128_t *)&v5) = 0;
    std::io::stdio::_print(&v2);
    uu_uptime::print_nusers(1, 0);
    uu_uptime::print_loadavg();
    return 0;
}
