long long binary::daemon::fork_to_bg()
{
    unsigned long long v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x40]
    unsigned long long v4;  // [bp-0x38]
    unsigned long long v5;  // [bp-0x30]
    unsigned long long v6;  // [bp-0x28]
    unsigned long long v7;  // [bp-0x20]
    uint128_t v8;  // [bp-0x18]
    unsigned long long v10;  // rax

    if (::0x1bd2860::core::sync::atomic::atomic_load() >= 3)
    {
        v5 = &g_1ce71f8;
        v6 = 1;
        v7 = 8;
        v8 = 0;
        v0 = "binary::daemon";
        v1 = 14;
        v2 = "binary::daemon";
        v3 = 14;
        v4 = log::__private_api::loc(&g_1ce7228);
        log::__private_api::log(&v5, 3, &v0);
    }
    if (fork() <= 0)
    {
        if (setsid() < 0)
        {
            if (::0x1bd2860::core::sync::atomic::atomic_load())
            {
                v5 = &g_1ce7208;
                v6 = 1;
                v7 = 8;
                v8 = 0;
                v0 = "binary::daemon";
                v1 = 14;
                v2 = "binary::daemon";
                v3 = 14;
                v4 = log::__private_api::loc(&g_1ce7258);
                log::__private_api::log(&v5, 1, &v0);
            }
            _exit(1); /* do not return */
        }
        else if (fork() <= 0)
        {
            v10 = ::0x1bd2860::core::sync::atomic::atomic_load();
            if (v10 <= 2)
                return v10;
            v5 = &g_1ce7218;
            v6 = 1;
            v7 = 8;
            v8 = 0;
            v0 = "binary::daemon";
            v1 = 14;
            v2 = "binary::daemon";
            v3 = 14;
            v4 = log::__private_api::loc(&g_1ce7240);
            return (unsigned long long)log::__private_api::log(&v5, 3, &v0);
        }
    }
    _exit(0); /* do not return */
}
