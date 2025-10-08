long long starship::context::Context::read_file_from_pwd(void* a0, unsigned long long a1[25], unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0xc0]
    char *v1;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0xb0]
    int v3;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0xa0]
    char v5;  // [bp-0x98]
    char v6;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x88]
    unsigned long long v8;  // [bp-0x80]
    char *v9;  // [bp-0x78]
    char v10;  // [bp-0x70], Other Possible Types: unsigned long long
    void* v11;  // [bp-0x68]
    char v12;  // [bp-0x60]
    unsigned long long v13;  // [bp-0x50]
    unsigned long long v14;  // [bp-0x48]
    char *v15;  // [bp-0x40]
    unsigned long long v16;  // [bp-0x38]

    v13 = a2;
    v14 = a3;
    v6.try_begin_scan(a1);
    if (v7)
    {
        memcpy(&v5, &v12, 16);
        *((int128_t *)&v3) = *((int128_t *)&v10);
        v6 = a2;
        v8 = a3;
        v0 = v7;
        v1 = &v6;
        v2 = 1;
        if ((char)v0.is_match())
        {
            v6.join(a1[23], a1[24], a2, a3);
            starship::utils::read_file(&v0, &v6);
            if (v0 != 0x8000000000000000)
            {
                *((unsigned long long *)&a0[16]) = 1;
                *((int128_t *)a0) = *((int128_t *)&v0);
                return a0;
            }
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v0);
            return a0;
        }
        else if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) > 3)
        {
            v15 = &v13;
            v16 = <&T as core::fmt::Display>::fmt;
            v6 = &g_11f35d0;
            v8 = 2;
            v11 = 0;
            v9 = &v15;
            v10 = 1;
            v0 = "starship::contextFailed to find git repo: , (trust: ";
            v1 = 17;
            v2 = "starship::contextFailed to find git repo: , (trust: ";
            v3 = 17;
            v4 = log::__private_api::loc(&g_11f35f0);
            log::__private_api::log(&v6, 4, &v0);
        }
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    return a0;
}
