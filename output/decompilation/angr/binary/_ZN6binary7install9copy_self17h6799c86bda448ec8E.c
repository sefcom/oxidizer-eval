long long binary::install::copy_self()
{
    unsigned long long v0;  // [bp-0xb8]
    unsigned long long v1;  // [sp-0xb0]
    char *v2;  // [sp-0xa8], Other Possible Types: unsigned long long
    void* v3;  // [bp-0x98]
    unsigned long long v4;  // [sp-0x88]
    unsigned long long v5;  // [sp-0x80]
    unsigned long long v6;  // [sp-0x78]
    unsigned long long v7;  // [sp-0x70]
    unsigned long long v8;  // [bp-0x68]
    char *v9;  // [bp-0x60]
    unsigned long long v10;  // [sp-0x58]
    unsigned long long v11;  // [bp-0x50]
    int v12;  // [bp-0x50]
    int v13;  // [bp-0x50]
    int v14;  // [bp-0x50]
    unsigned long long v15;  // [bp-0x48]
    char v16;  // [bp-0x40]
    int v17;  // [bp-0x38]
    int v18;  // [bp-0x28]
    unsigned long long v19;  // [bp-0x20]
    unsigned long long v20;  // [bp-0x18]
    unsigned long long v22;  // rdx
    int v23;  // [bp-0xa0], Other Possible Types: unsigned long long

    if (::0x1bcf200::core::sync::atomic::atomic_load() >= 3)
    {
        v0 = &g_1ce6c30;
        v1 = 1;
        v2 = 8;
        *((uint128_t *)&v23) = 0;
        v4 = "binary::install";
        v5 = 15;
        v6 = "binary::install";
        v7 = 15;
        v8 = log::__private_api::loc(&g_1ce6c90);
        log::__private_api::log(&v0, 3, &v4);
    }
    v0.to_vec("/var/log/cross/", 15);
    v20 = v2;
    *((int128_t *)&v18) = *((int128_t *)&v0);
    v0 = std::fs::create_dir_all(&(char)v18);
    if (v0)
    {
        ::0x1bce5e0::core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v0);
        if (::0x1bcf200::core::sync::atomic::atomic_load())
        {
            v0 = &g_1ce6c40;
            v1 = 1;
            v2 = 8;
            *((uint128_t *)&v23) = 0;
            v4 = "binary::install";
            v5 = 15;
            v6 = "binary::install";
            v7 = 15;
            v8 = log::__private_api::loc(&g_1ce6d20);
            log::__private_api::log(&v0, 1, &v4);
        }
    }
    else
    {
        ::0x1bce5e0::core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v0);
        v0 = std::fs::set_permissions(&(char)v18, 511);
        if (v0)
        {
            ::0x1bce5e0::core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v0);
            if (::0x1bcf200::core::sync::atomic::atomic_load())
            {
                v0 = &g_1ce6c50;
                v1 = 1;
                v2 = 8;
                *((uint128_t *)&v23) = 0;
                v4 = "binary::install";
                v5 = 15;
                v6 = "binary::install";
                v7 = 15;
                v8 = log::__private_api::loc(&g_1ce6d08);
                log::__private_api::log(&v0, 1, &v4);
            }
        }
        else
        {
            ::0x1bce5e0::core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v0);
            v16.join(v19, v20, "auto-color", 10);
            std::env::current_exe(&v0);
            v4.unwrap(&v0);
            *((long long *)&v13) = std::fs::copy(&v4, &v16);
            v15 = v22;
            if (v11)
            {
                core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&(unsigned long long)v13);
                if (::0x1bcf200::core::sync::atomic::atomic_load())
                {
                    v12 = v17;
                    v9 = &(unsigned long long)v13;
                    v10 = <std::path::Display as core::fmt::Display>::fmt;
                    v0 = &g_1ce6c60;
                    v1 = 1;
                    v3 = 0;
                    v2 = &v9;
                    v23 = 1;
                    v4 = "binary::install";
                    v5 = 15;
                    v6 = "binary::install";
                    v7 = 15;
                    v8 = log::__private_api::loc(&g_1ce6cf0);
                    log::__private_api::log(&v0, 1, &v4);
                    goto LABEL_1bd02fb;
                }
            }
            else
            {
                core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&(unsigned long long)v13);
                v0 = std::fs::set_permissions(&v16, 511);
                if (v0)
                {
                    ::0x1bce5e0::core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v0);
                    if (::0x1bcf200::core::sync::atomic::atomic_load())
                    {
                        v13 = v17;
                        v9 = &(unsigned long long)v13;
                        v10 = <std::path::Display as core::fmt::Display>::fmt;
                        v0 = &g_1ce6c70;
                        v1 = 1;
                        v3 = 0;
                        v2 = &v9;
                        v23 = 1;
                        v4 = "binary::install";
                        v5 = 15;
                        v6 = "binary::install";
                        v7 = 15;
                        v8 = log::__private_api::loc(&g_1ce6cd8);
                        log::__private_api::log(&v0, 1, &v4);
                    }
LABEL_1bd02fb:
                    ::0x1bce4a0::core::ptr::drop_in_place<std::path::PathBuf>(&v16);
                }
                else
                {
                    ::0x1bce5e0::core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v0);
                    if (::0x1bcf200::core::sync::atomic::atomic_load() >= 3)
                    {
                        v14 = v17;
                        v9 = &(unsigned long long)v13;
                        v10 = <std::path::Display as core::fmt::Display>::fmt;
                        v0 = &g_1ce6c80;
                        v1 = 1;
                        v3 = 0;
                        v2 = &v9;
                        v23 = 1;
                        v4 = "binary::install";
                        v5 = 15;
                        v6 = "binary::install";
                        v7 = 15;
                        v8 = log::__private_api::loc(&g_1ce6cc0);
                        log::__private_api::log(&v0, 3, &v4);
                    }
                    ::0x1bce4a0::core::ptr::drop_in_place<std::path::PathBuf>(&v16);
                }
            }
        }
    }
    return ::0x1bce4a0::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v18);
}
