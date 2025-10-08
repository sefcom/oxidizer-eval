long long firecracker::main()
{
    char v0;  // [bp-0x119]
    unsigned long long v1;  // [bp-0x118]
    int v2;  // [bp-0x118]
    unsigned long long v3;  // [bp-0x110]
    int v4;  // [bp-0x108], Other Possible Types: char *, unsigned long long
    int v5;  // [bp-0x100], Other Possible Types: unsigned long long
    int v6;  // [bp-0xf8], Other Possible Types: void*
    char v7;  // [bp-0xe8]
    unsigned long long v8;  // [bp-0xd8]
    char *v9;  // [bp-0xd0]
    unsigned long long v10;  // [bp-0xc8]
    char *v11;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0xb8]
    unsigned long long v13;  // [bp-0xb0]
    unsigned long long v14;  // [bp-0xa8]
    unsigned long long v15;  // [bp-0xa0]
    int v16;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long long v17;  // [bp-0x90]
    int v18;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v19;  // [bp-0x80]
    int v20;  // [bp-0x78], Other Possible Types: unsigned long long
    int v21;  // [bp-0x68]
    unsigned long long v22;  // [bp-0x58]
    int v23;  // [bp-0x50], Other Possible Types: char
    int v24;  // [bp-0x40]
    int v25;  // [bp-0x30]
    int v26;  // [bp-0x20]
    char v27;  // [bp-0x10]
    int v29;  // xmm0

    firecracker::main_exec(&v23);
    if (*((int *)&v23) != 11)
    {
        v22 = *((long long *)&v27);
        v21 = v26;
        v20 = v25;
        v18 = v24;
        v16 = v23;
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0))
        {
            v9 = &(char)v16;
            v10 = firecracker::_::<impl core::fmt::Display for firecracker::MainError>::fmt;
            v1 = &g_430b60;
            v3 = 1;
            v6 = 0;
            v4 = &v9;
            v5 = 1;
            v11 = "firecracker";
            v12 = 11;
            v13 = "firecracker";
            v14 = 11;
            v15 = log::__private_api::loc(&g_7a3e68);
            log::__private_api::log_impl(&v1, 1, &v11);
        }
        v11 = &(char)v16;
        v12 = <firecracker::MainError as core::fmt::Debug>::fmt;
        *((unsigned long long **)&v2) = &g_7a3e28;
        v3 = 2;
        v6 = 0;
        v4 = &v11;
        v5 = 1;
        std::io::stdio::_eprint(&(unsigned long long)v2);
        v8 = v22;
        v29 = (int128_t)v16;
        memcpy(&v7, &v21, 16);
        v6 = v20;
        *((int128_t *)&v4) = (int128_t)v18;
        v2 = v29;
        v0 = (unsigned long long)v2.from();
        if (!(unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0))
            return v0;
        v9 = &v0;
        v10 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
        v1 = &g_7a3e48;
        v3 = 1;
        v6 = 0;
        v4 = &v9;
        v5 = 1;
        v11 = "firecracker";
        v12 = 11;
        v13 = "firecracker";
        v14 = 11;
        v15 = log::__private_api::loc(&g_7a3e80);
        log::__private_api::log_impl(&v1, 1, &v11);
        return v0;
    }
    else if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0) > 2)
    {
        v1 = &g_7a3e58;
        v3 = 1;
        v4 = 8;
        *((uint128_t *)&v5) = 0;
        v16 = "firecracker";
        v17 = 11;
        v18 = "firecracker";
        v19 = 11;
        v20 = log::__private_api::loc(&g_7a3e98);
        log::__private_api::log_impl(&v1, 3, &v16);
        return 0;
    }
    else
    {
        return 0;
    }
}
