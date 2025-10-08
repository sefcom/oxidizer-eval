long long fish::env_dispatch::read_terminfo_database(unsigned long long a0)
{
    void* v0;  // [bp-0x190]
    unsigned long long v1;  // [bp-0x188]
    void* v2;  // [bp-0x180]
    unsigned long long v3;  // [bp-0x178]
    unsigned long long v4;  // [bp-0x170]
    unsigned long long v5;  // [bp-0x168]
    unsigned long long v6;  // [bp-0x158]
    unsigned long long v7;  // [bp-0x148]
    unsigned long long v8;  // [bp-0x140]
    char v9;  // [bp-0x138]
    unsigned long long v10;  // [bp-0x128]
    void* v11;  // [bp-0x120]
    unsigned long long v12;  // [bp-0x118]
    int v13;  // [bp-0x110]
    int v14;  // [bp-0x100]
    int v15;  // [bp-0xf0]
    char v16;  // [bp-0xe0]
    int v17;  // [bp-0xc8]
    int v18;  // [bp-0xb0]
    int v19;  // [bp-0x98]
    int v20;  // [bp-0x80]
    int v21;  // [bp-0x68]
    char v22;  // [bp-0x50]
    unsigned long long v24;  // rax
    unsigned long long v25;  // rax
    char *v26;  // r14
    unsigned long long v27;  // rdx
    unsigned long long v28;  // r12
    unsigned long long v29;  // r12
    unsigned long long v30;  // rax

    v24 = fish::terminal::use_terminfo();
    if (!(char)v24)
        return v24;
    v11 = 0;
    v12 = 3;
    *((uint128_t *)&v13) = g_14d6ed8;
    *((uint128_t *)&v14) = g_14d6ee8;
    *((uint128_t *)&v15) = g_14d6ef8;
    if (v11.next())
    {
        v26 = &v16;
        v4 = &g_15a9980;
        v3 = &g_15a9970;
        do
        {
            v29 = v28;
            v7 = v25;
            v8 = v29;
            v26.getf_unless_empty(a0, v25, v29, 16);
            if (*((long long *)&v16))
            {
                fish::env_dispatch::init_locale::{{closure}}(&v5, v26);
                if (v5 != 0x8000000000000000)
                {
                    v10 = v6;
                    memcpy(&v9, &v5, 16);
                    if ((char)core::sync::atomic::atomic_load(v4, 0))
                    {
                        v0 = 0;
                        v1 = 1;
                        v2 = 0;
                        v21.to_flog_str(v3);
                        v22.into_iter(&v21);
                        v0.spec_extend(&v22);
                        v0.push(58, &g_14d7098);
                        v0.push(32, &g_14d7098);
                        v17.to_vec("curses varis missing or emptyuser has an invalid locale configuredHave singlebyte locale, trying to fix.C.UTF-8en_US.UTF-8en_GB.UTF-8de_DE.UTF-8C.utf8UTF-8Fixed locale:Failed to fix locale.init_locale() setlocale():(null)Old LC_MESSAGES locale:New LC_MESSA", 10);
                        v22.into_iter(&v17);
                        v0.spec_extend(&v22);
                        v0.push(32, &g_14d7098);
                        v21.to_flog_str(&v7);
                        v22.into_iter(&v21);
                        v0.spec_extend(&v22);
                        v0.push(32, &g_14d7098);
                        v18.to_vec("=", 1);
                        v22.into_iter(&v18);
                        v0.spec_extend(&v22);
                        v0.push(32, &g_14d7098);
                        v21.to_flog_str(&v5);
                        v22.into_iter(&v21);
                        v0.spec_extend(&v22);
                        v0.push(10, &g_14d7098);
                        fish::flog::flog_impl(v1, 0);
                        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
                    }
                    fish::env::setenv_lock(v25, v29, &v5);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v5);
                    continue;
                }
            }
            else
            {
                v5 = 0x8000000000000000;
            }
            if ((char)core::sync::atomic::atomic_load(v4, 0))
            {
                v0 = 0;
                v1 = 1;
                v2 = 0;
                v21.to_flog_str(v3);
                v22.into_iter(&v21);
                v0.spec_extend(&v22);
                v0.push(58, &g_14d70b0);
                v0.push(32, &g_14d70b0);
                v19.to_vec("curses varis missing or emptyuser has an invalid locale configuredHave singlebyte locale, trying to fix.C.UTF-8en_US.UTF-8en_GB.UTF-8de_DE.UTF-8C.utf8UTF-8Fixed locale:Failed to fix locale.init_locale() setlocale():(null)Old LC_MESSAGES locale:New LC_MESSA", 10);
                v22.into_iter(&v19);
                v0.spec_extend(&v22);
                v0.push(32, &g_14d70b0);
                v21.to_flog_str(&v7);
                v22.into_iter(&v21);
                v0.spec_extend(&v22);
                v0.push(32, &g_14d70b0);
                v20.to_vec("is missing or emptyuser has an invalid locale configuredHave singlebyte locale, trying to fix.C.UTF-8en_US.UTF-8en_GB.UTF-8de_DE.UTF-8C.utf8UTF-8Fixed locale:Failed to fix locale.init_locale() setlocale():(null)Old LC_MESSAGES locale:New LC_MESSAGES locale", 19);
                v22.into_iter(&v20);
                v0.spec_extend(&v22);
                v0.push(10, &g_14d70b0);
                fish::flog::flog_impl(v1, 0);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
            }
            fish::env::unsetenv_lock(v25, v29);
            v25 = v11.next();
            v26 = &v16;
        } while (v25);
    }
    fish::terminal::setup();
    v11.lock();
    v30 = v11.unwrap(&g_14d7080);
    v30 + 8.clear();
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v30, (char)v27 & 1);
}
