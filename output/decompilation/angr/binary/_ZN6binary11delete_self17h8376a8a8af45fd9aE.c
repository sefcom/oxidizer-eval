long long binary::delete_self()
{
    unsigned long long v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    unsigned long long v2;  // [bp-0x90]
    unsigned long long v3;  // [bp-0x88]
    unsigned long long v4;  // [bp-0x80]
    unsigned long long v5;  // [bp-0x78]
    unsigned long long v6;  // [bp-0x78]
    unsigned long long v7;  // [bp-0x70]
    char *v8;  // [bp-0x68], Other Possible Types: unsigned long long
    int v9;  // [bp-0x60], Other Possible Types: unsigned long long
    void* v10;  // [bp-0x58]
    char v11;  // [bp-0x40]
    char v12;  // [bp-0x38]
    unsigned long long v13;  // [bp-0x30]
    char *v14;  // [bp-0x28]
    unsigned long long v15;  // [bp-0x20]
    char v16;  // [bp-0x18]
    unsigned long long v18;  // rax
    char *v19;  // rdi
    char *v20;  // rdx
    unsigned long long v21;  // rsi

    std::env::current_exe(&(char)v6);
    v11.unwrap(&(char)v6);
    if (::0x1bd12b0::core::sync::atomic::atomic_load() >= 3)
    {
        memcpy(&v16, &v12, 16);
        v14 = &v16;
        v15 = <std::path::Display as core::fmt::Display>::fmt;
        v6 = &g_1ce6ff8;
        v7 = 1;
        v10 = 0;
        v8 = &v14;
        v9 = 1;
        v0 = "binary";
        v1 = 6;
        v2 = "binary";
        v3 = 6;
        v4 = log::__private_api::loc(&g_1ce7040);
        log::__private_api::log(&v6, 3, &v0);
    }
    v8 = v13;
    memcpy(&(char)v6, &v11, 16);
    v0 = std::fs::remove_file(&(char)v6);
    ::0x1bd1180::core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v0);
    v18 = ::0x1bd12b0::core::sync::atomic::atomic_load();
    if (v0)
    {
        if (v18)
        {
            v5 = &g_1ce7008;
            v7 = 1;
            v8 = 8;
            *((uint128_t *)&v9) = 0;
            v0 = "binary";
            v1 = 6;
            v2 = "binary";
            v3 = 6;
            v4 = log::__private_api::loc(&g_1ce7070);
            v19 = &v5;
            v20 = &v0;
            v21 = 1;
        }
        else
        {
            return v18;
        }
    }
    else
    {
        if (v18 > 2)
        {
            v5 = &g_1ce7018;
            v7 = 1;
            v8 = 8;
            *((uint128_t *)&v9) = 0;
            v0 = "binary";
            v1 = 6;
            v2 = "binary";
            v3 = 6;
            v4 = log::__private_api::loc(&g_1ce7058);
            v19 = &v5;
            v20 = &v0;
            v21 = 3;
        }
        else
        {
            return v18;
        }
    }
    return (unsigned long long)log::__private_api::log(v19, v21, v20);
}
