long long binary::daemon::main()
{
    unsigned long long v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    unsigned long long v3;  // [bp-0x70]
    unsigned long long v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    uint128_t v8;  // [bp-0x48]
    char *v10;  // rax
    unsigned int v11;  // eax
    unsigned long long v12;  // rdx
    unsigned long long v13;  // rax

    if (::0x1bd2860::core::sync::atomic::atomic_load() >= 3)
    {
        v5 = &g_1ce7118;
        v6 = 1;
        v7 = 8;
        v8 = 0;
        v0 = "binary::daemon";
        v1 = 14;
        v2 = "binary::daemon";
        v3 = 14;
        v4 = log::__private_api::loc(&g_1ce7168);
        log::__private_api::log(&v5, 3, &v0);
    }
    if ((char)binary::daemon::check_lock())
    {
        binary::daemon::fork_to_bg();
        binary::daemon::redirect_to_dev_null();
        binary::daemon::close_all_fds();
        umask(0);
        v5.spec_new_impl("/", 1);
        v10 = v5.unwrap(&g_1ce7198);
        v11 = chdir(v10);
        core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v10, v12);
        if (v11 && ::0x1bd2860::core::sync::atomic::atomic_load())
        {
            v5 = &g_1ce7128;
            v6 = 1;
            v7 = 8;
            v8 = 0;
            v0 = "binary::daemon";
            v1 = 14;
            v2 = "binary::daemon";
            v3 = 14;
            v4 = log::__private_api::loc(&g_1ce71b0);
            log::__private_api::log(&v5, 1, &v0);
        }
        if (::0x1bd2860::core::sync::atomic::atomic_load() > 2)
        {
            v5 = &g_1ce7138;
            v6 = 1;
            v7 = 8;
            v8 = 0;
            v0 = "binary::daemon";
            v1 = 14;
            v2 = "binary::daemon";
            v3 = 14;
            v4 = log::__private_api::loc(&g_1ce71c8);
            log::__private_api::log(&v5, 3, &v0);
        }
        while (true)
        {
            if (::0x1bd2860::core::sync::atomic::atomic_load() >= 3)
            {
                v5 = &g_1ce7148;
                v6 = 1;
                v7 = 8;
                v8 = 0;
                v0 = "binary::daemon";
                v1 = 14;
                v2 = "binary::daemon";
                v3 = 14;
                v4 = log::__private_api::loc(&g_1ce71e0);
                log::__private_api::log(&v5, 3, &v0);
            }
            std::thread::sleep(60, 0);
        }
    }
    else
    {
        v13 = ::0x1bd2860::core::sync::atomic::atomic_load();
        if (!v13)
            return v13;
        v5 = &g_1ce7158;
        v6 = 1;
        v7 = 8;
        v8 = 0;
        v0 = "binary::daemon";
        v1 = 14;
        v2 = "binary::daemon";
        v3 = 14;
        v4 = log::__private_api::loc(&g_1ce7180);
        return (unsigned long long)log::__private_api::log(&v5, 1, &v0);
    }
}
