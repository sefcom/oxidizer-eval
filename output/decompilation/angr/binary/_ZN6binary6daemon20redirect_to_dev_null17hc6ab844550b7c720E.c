void binary::daemon::redirect_to_dev_null()
{
    unsigned long long v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x70]
    unsigned long long v2;  // [bp-0x68]
    unsigned long long v3;  // [bp-0x60]
    unsigned long long v4;  // [bp-0x58]
    unsigned long long v5;  // [bp-0x50]
    unsigned long long v6;  // [bp-0x48]
    unsigned long long v7;  // [bp-0x40]
    uint128_t v8;  // [bp-0x38]
    char *v10;  // rax
    unsigned int v11;  // eax
    unsigned int v12;  // ebp
    unsigned long long v13;  // rdx

    if (::0x1bd2860::core::sync::atomic::atomic_load() >= 3)
    {
        v5 = &g_1ce7270;
        v6 = 1;
        v7 = 8;
        v8 = 0;
        v0 = "binary::daemon";
        v1 = 14;
        v2 = "binary::daemon";
        v3 = 14;
        v4 = log::__private_api::loc(&g_1ce72a0);
        log::__private_api::log(&v5, 3, &v0);
    }
    v5.spec_new_impl("/dev/null", 9);
    v10 = v5.unwrap(&g_1ce72b8);
    v11 = open(v10, 2, 0);
    if (v11 >= 0)
    {
        v12 = v11;
        dup2(v11, 0);
        dup2(v12, 1);
        dup2(v12, 2);
        close(v12);
        if (::0x1bd2860::core::sync::atomic::atomic_load() > 2)
        {
            v5 = &g_1ce7280;
            v6 = 1;
            v7 = 8;
            v8 = 0;
            v0 = "binary::daemon";
            v1 = 14;
            v2 = "binary::daemon";
            v3 = 14;
            v4 = log::__private_api::loc(&g_1ce72e8);
            log::__private_api::log(&v5, 3, &v0);
        }
    }
    else if (::0x1bd2860::core::sync::atomic::atomic_load())
    {
        v5 = &g_1ce7290;
        v6 = 1;
        v7 = 8;
        v8 = 0;
        v0 = "binary::daemon";
        v1 = 14;
        v2 = "binary::daemon";
        v3 = 14;
        v4 = log::__private_api::loc(&g_1ce72d0);
        log::__private_api::log(&v5, 1, &v0);
    }
    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v10, v13);
    return;
}
