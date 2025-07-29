long long binary::install::main()
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
    char v9;  // [bp-0x20]
    unsigned long long v11;  // rax

    if (::0x1bcf200::core::sync::atomic::atomic_load() >= 3)
    {
        v5 = &g_1ce6ab8;
        v6 = 1;
        v7 = 8;
        v8 = 0;
        v0 = "binary::install";
        v1 = 15;
        v2 = "binary::install";
        v3 = 15;
        v4 = log::__private_api::loc(&g_1ce6ad8);
        log::__private_api::log(&v5, 3, &v0);
    }
    binary::install::copy_self();
    binary::install::drop_library(&v9);
    binary::install::add_preload_hook(&v9);
    v11 = ::0x1bcf200::core::sync::atomic::atomic_load();
    if (v11 < 3)
        return v11;
    v5 = &g_1ce6ac8;
    v6 = 1;
    v7 = 8;
    v8 = 0;
    v0 = "binary::install";
    v1 = 15;
    v2 = "binary::install";
    v3 = 15;
    v4 = log::__private_api::loc(&g_1ce6af0);
    return (unsigned long long)log::__private_api::log(&v5, 3, &v0);
}
