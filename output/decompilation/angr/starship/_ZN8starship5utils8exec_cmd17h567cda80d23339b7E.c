int starship::utils::exec_cmd(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0xb8]
    unsigned long long v1;  // [bp-0xa8]
    unsigned long long v2;  // [bp-0xa0]
    char *v3;  // [bp-0x98]
    unsigned long long v4;  // [bp-0x90]
    char *v5;  // [bp-0x88]
    unsigned long long v6;  // [bp-0x80]
    unsigned long long v7;  // [bp-0x78]
    unsigned long long v8;  // [bp-0x70]
    unsigned long long v9;  // [bp-0x68]
    unsigned long long v10;  // [bp-0x60]
    unsigned long long v11;  // [bp-0x58]
    unsigned long long v12;  // [bp-0x50]
    unsigned long long v13;  // [bp-0x48]
    char *v14;  // [bp-0x40]
    unsigned long long v15;  // [bp-0x38]
    void* v16;  // [bp-0x30]
    unsigned long long v18;  // 4096
    unsigned long long v19;  // 4096

    v0 = a1;
    v1 = a3;
    v2 = 1;
    v18 = a3;
    v19 = a1;
    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
    {
        v3 = &v0;
        v4 = <&T as core::fmt::Debug>::fmt;
        v5 = &v1;
        v6 = <&T as core::fmt::Debug>::fmt;
        v12 = &g_11f7390;
        v13 = 2;
        v16 = 0;
        v14 = &v3;
        v15 = 2;
        v7 = "starship::utilsCreating Command for binary Using Unable to find  in PATH, ";
        v8 = 15;
        v9 = "starship::utilsCreating Command for binary Using Unable to find  in PATH, ";
        v10 = 15;
        v11 = log::__private_api::loc(&g_11f73b0);
        log::__private_api::log(&v12, 5, &v7);
        v18 = v1;
        v19 = v0;
    }
    return starship::utils::internal_exec_cmd(a0, v19, a2, v18, 1);
}
