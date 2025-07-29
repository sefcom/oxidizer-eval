long long binary::daemon::close_all_fds()
{
    unsigned long long v0;  // [bp-0x70]
    unsigned long long v1;  // [bp-0x68]
    unsigned long long v2;  // [bp-0x60]
    unsigned long long v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x50]
    unsigned long long v5;  // [bp-0x48]
    unsigned long long v6;  // [bp-0x40]
    unsigned long long v7;  // [bp-0x38]
    uint128_t v8;  // [bp-0x30]
    unsigned long long v10;  // rax
    unsigned int v11;  // ebx
    unsigned int v12;  // edi
    unsigned int v13;  // ebp
    unsigned long long v14;  // rax
    char *v15;  // rdi
    char *v16;  // rdx
    unsigned long long v17;  // rsi
    unsigned long long v18;  // rax

    if (::0x1bd2860::core::sync::atomic::atomic_load() >= 3)
    {
        v5 = &g_1ce7300;
        v6 = 1;
        v7 = 8;
        v8 = 0;
        v0 = "binary::daemon";
        v1 = 14;
        v2 = "binary::daemon";
        v3 = 14;
        v4 = log::__private_api::loc(&g_1ce7330);
        log::__private_api::log(&v5, 3, &v0);
    }
    v10 = sysconf(4);
    if (v10 > 0)
    {
        v11 = v10;
        if (v11 >= 4)
        {
            v12 = 3;
            do
            {
                v13 = v12 + 1;
                close(v12);
                v12 = v13;
            } while (v11 != v12);
        }
        v14 = ::0x1bd2860::core::sync::atomic::atomic_load();
        if (v14 < 3)
            return v14;
        v5 = &g_1ce7310;
        v6 = 1;
        v7 = 8;
        v8 = 0;
        v0 = "binary::daemon";
        v1 = 14;
        v2 = "binary::daemon";
        v3 = 14;
        v4 = log::__private_api::loc(&g_1ce7360);
        v15 = &v5;
        v16 = &v0;
        v17 = 3;
    }
    else
    {
        v18 = ::0x1bd2860::core::sync::atomic::atomic_load();
        if (!v18)
            return v18;
        v5 = &g_1ce7320;
        v6 = 1;
        v7 = 8;
        v8 = 0;
        v0 = "binary::daemon";
        v1 = 14;
        v2 = "binary::daemon";
        v3 = 14;
        v4 = log::__private_api::loc(&g_1ce7348);
        v15 = &v5;
        v16 = &v0;
        v17 = 1;
    }
    return (unsigned long long)log::__private_api::log(v15, v17, v16);
}
