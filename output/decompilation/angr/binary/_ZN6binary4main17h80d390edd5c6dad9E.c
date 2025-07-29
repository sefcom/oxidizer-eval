long long binary::main()
{
    unsigned long long v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x90]
    unsigned long long v2;  // [bp-0x88]
    unsigned long long v3;  // [bp-0x80]
    unsigned long long v4;  // [bp-0x78]
    unsigned long long v5;  // [bp-0x70]
    unsigned long long v6;  // [bp-0x68]
    unsigned long long v7;  // [bp-0x60]
    uint128_t v8;  // [bp-0x58]
    int v9;  // [bp-0x40], Other Possible Types: char
    unsigned long long v10;  // [bp-0x30]
    int v11;  // [bp-0x28]
    unsigned long long v12;  // [bp-0x20]
    unsigned long long v13;  // [bp-0x18]
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long v17;  // rdx
    char v18;  // al
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax

    colog::init();
    if (geteuid())
    {
        if (::0x1bd12b0::core::sync::atomic::atomic_load() > 1)
        {
            v5 = &g_1ce6f30;
            v6 = 1;
            v7 = 8;
            v8 = 0;
            v0 = "binary";
            v1 = 6;
            v2 = "binary";
            v3 = 6;
            v4 = log::__private_api::loc(&g_1ce6fe0);
            log::__private_api::log(&v5, 2, &v0);
        }
        binary::delete_self();
        return binary::daemon::main();
    }
    else
    {
        std::env::current_exe(&v9);
        if ((char)(((0 ^ *((long long *)&v9)) & (0 ^ -(*((long long *)&v9)))) >> 63))
        {
            core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v9);
            v15 = ::0x1bd12b0::core::sync::atomic::atomic_load();
            if (!v15)
                return v15;
            v5 = &g_1ce6f70;
            v6 = 1;
            v7 = 8;
            v8 = 0;
            v0 = "binary";
            v1 = 6;
            v2 = "binary";
            v3 = 6;
            v4 = log::__private_api::loc(&g_1ce6fc8);
            return (unsigned long long)log::__private_api::log(&v5, 1, &v0);
        }
        else
        {
            v11 = v9;
            v13 = v10;
            v16 = v12.file_name(v10);
            if (v16)
            {
                v18 = v16.equal(v17, "auto-colorbinary/src/main.rs", 10);
                v19 = ::0x1bd12b0::core::sync::atomic::atomic_load();
                if (v18)
                {
                    if (v19 > 2)
                    {
                        v5 = &g_1ce6f40;
                        v6 = 1;
                        v7 = 8;
                        v8 = 0;
                        v0 = "binary";
                        v1 = 6;
                        v2 = "binary";
                        v3 = 6;
                        v4 = log::__private_api::loc(&g_1ce6f98);
                        log::__private_api::log(&v5, 3, &v0);
                    }
                    binary::daemon::main();
                }
                else
                {
                    if (v19 > 2)
                    {
                        v5 = &g_1ce6f50;
                        v6 = 1;
                        v7 = 8;
                        v8 = 0;
                        v0 = "binary";
                        v1 = 6;
                        v2 = "binary";
                        v3 = 6;
                        v4 = log::__private_api::loc(&g_1ce6f80);
                        log::__private_api::log(&v5, 3, &v0);
                    }
                    binary::install::main();
                    binary::delete_self();
                }
            }
            else if (::0x1bd12b0::core::sync::atomic::atomic_load())
            {
                v5 = &g_1ce6f60;
                v6 = 1;
                v7 = 8;
                v8 = 0;
                v0 = "binary";
                v1 = 6;
                v2 = "binary";
                v3 = 6;
                v4 = log::__private_api::loc(&g_1ce6fb0);
                log::__private_api::log(&v5, 1, &v0);
            }
            v20 = ::0x1bd10b0::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v11);
            if (*((long long *)&v9) == 0x8000000000000000)
                return core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v9);
            return v20;
        }
    }
}
