long long starship::utils::read_file(struct_1 *a0, struct_0 *a1)
{
    unsigned long long v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x70]
    int v5;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x68]
    unsigned long long v7;  // [bp-0x60]
    char *v8;  // [bp-0x58], Other Possible Types: unsigned long, unsigned long long
    int v9;  // [bp-0x50], Other Possible Types: unsigned long long
    void* v10;  // [bp-0x48]
    struct_0 *v11;  // [bp-0x38]
    unsigned long long v12;  // [bp-0x30]
    unsigned long v13;  // [bp-0x28]
    char *v14;  // [bp-0x20]
    unsigned long long v15;  // [bp-0x18]

    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
    {
        v11 = a1;
        v12 = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
        v6 = &g_11f7280;
        v7 = 1;
        v10 = 0;
        v8 = &v11;
        v9 = 1;
        v0 = "starship::utilsCreating Command for binary Using Unable to find  in PATH, ";
        v1 = 15;
        v2 = "starship::utilsCreating Command for binary Using Unable to find  in PATH, ";
        v3 = 15;
        v4 = log::__private_api::loc(&g_11f72b0);
        log::__private_api::log(&v6, 5, &v0);
    }
    v8 = a1->field_10;
    *((uint128_t *)&v5) = a1->field_0;
    std::fs::read_to_string(&v11, &(unsigned long long)v5);
    if ((char)(((0 ^ v11) & (0 ^ -(v11))) >> 63))
    {
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 4)
        {
            v14 = &v11;
            v15 = <core::result::Result<T,E> as core::fmt::Debug>::fmt;
            v5 = &g_11f7290;
            v7 = 1;
            v10 = 0;
            v8 = &v14;
            v9 = 1;
            v0 = "starship::utilsCreating Command for binary Using Unable to find  in PATH, ";
            v1 = 15;
            v2 = "starship::utilsCreating Command for binary Using Unable to find  in PATH, ";
            v3 = 15;
            v4 = log::__private_api::loc(&g_11f72e0);
            log::__private_api::log(&v5, 4, &v0);
        }
    }
    else
    {
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
        {
            v5 = &g_11f72a0;
            v7 = 1;
            v8 = 8;
            *((uint128_t *)&v9) = 0;
            v0 = "starship::utilsCreating Command for binary Using Unable to find  in PATH, ";
            v1 = 15;
            v2 = "starship::utilsCreating Command for binary Using Unable to find  in PATH, ";
            v3 = 15;
            v4 = log::__private_api::loc(&g_11f72c8);
            log::__private_api::log(&v5, 5, &v0);
        }
    }
    a0->field_10 = v13;
    a0->field_0 = *((int128_t *)&v11);
    return v13;
}
