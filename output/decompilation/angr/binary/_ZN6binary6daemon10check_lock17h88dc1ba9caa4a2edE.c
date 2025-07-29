long long binary::daemon::check_lock()
{
    unsigned long long v0;  // [bp-0xa8]
    unsigned long long v1;  // [bp-0xa0]
    unsigned long long v2;  // [bp-0xa0]
    unsigned long long v3;  // [bp-0x98]
    unsigned long long v4;  // [bp-0x98]
    unsigned long long v5;  // [bp-0x90]
    unsigned long long v6;  // [bp-0x88]
    unsigned long long v7;  // [bp-0x80]
    unsigned long long v8;  // [bp-0x78]
    char *v9;  // [bp-0x70], Other Possible Types: unsigned long long
    int v10;  // [bp-0x68], Other Possible Types: unsigned long long
    void* v11;  // [bp-0x60]
    unsigned int v12;  // [bp-0x4c]
    char *v13;  // [bp-0x48]
    unsigned long long v14;  // [bp-0x40]
    char v15;  // [bp-0x38]
    unsigned int v17;  // eax
    unsigned int v18;  // ebp
    unsigned long long v19;  // rax

    if (::0x1bd2860::core::sync::atomic::atomic_load() >= 3)
    {
        v7 = &g_1ce7378;
        v8 = 1;
        v9 = 8;
        *((uint128_t *)&v10) = 0;
        v0 = "binary::daemon";
        v2 = 14;
        v4 = "binary::daemon";
        v5 = 14;
        v6 = log::__private_api::loc(&g_1ce73d8);
        log::__private_api::log(&v7, 3, &v0);
    }
    v12 = geteuid();
    v13 = &v12;
    v14 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
    v7 = &g_1ce7398;
    v8 = 1;
    v11 = 0;
    v9 = &v13;
    v10 = 1;
    v15.map_or_else(&v7);
    v0.spec_new_impl(&v15);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        v17 = open(v2, 66, 384);
        if (v17 >= 0)
        {
            v18 = flock(v17, 6);
            v19 = ::0x1bd2860::core::sync::atomic::atomic_load();
            if (v18)
            {
                if (v19 > 1)
                {
                    v7 = &g_1ce73c8;
                    v8 = 1;
                    v9 = 8;
                    *((uint128_t *)&v10) = 0;
                    v0 = "binary::daemon";
                    v1 = 14;
                    v3 = "binary::daemon";
                    v5 = 14;
                    v6 = log::__private_api::loc(&g_1ce7408);
                    log::__private_api::log(&v7, 2, &v0);
                }
            }
            else
            {
                if (v19 > 2)
                {
                    v7 = &g_1ce73b8;
                    v8 = 1;
                    v9 = 8;
                    *((uint128_t *)&v10) = 0;
                    v0 = "binary::daemon";
                    v1 = 14;
                    v3 = "binary::daemon";
                    v5 = 14;
                    v6 = log::__private_api::loc(&g_1ce73f0);
                    log::__private_api::log(&v7, 3, &v0);
                }
            }
            core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v2, v4);
            return v18 & 0xffffff00 | !v18;
        }
        else
        {
            if (::0x1bd2860::core::sync::atomic::atomic_load())
            {
                v7 = &g_1ce73a8;
                v8 = 1;
                v9 = 8;
                *((uint128_t *)&v10) = 0;
                v0 = "binary::daemon";
                v1 = 14;
                v3 = "binary::daemon";
                v5 = 14;
                v6 = log::__private_api::loc(&g_1ce7420);
                log::__private_api::log(&v7, 1, &v0);
            }
            core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v2, v4);
            return 0;
        }
    }
    else
    {
        core::ptr::drop_in_place<core::result::Result<alloc::ffi::c_str::CString,alloc::ffi::c_str::NulError>>(&v0);
        if (!::0x1bd2860::core::sync::atomic::atomic_load())
            return 0;
        v7 = &g_1ce7388;
        v8 = 1;
        v9 = 8;
        *((uint128_t *)&v10) = 0;
        v0 = "binary::daemon";
        v1 = 14;
        v3 = "binary::daemon";
        v5 = 14;
        v6 = log::__private_api::loc(&g_1ce7438);
        log::__private_api::log(&v7, 1, &v0);
        return 0;
    }
}
