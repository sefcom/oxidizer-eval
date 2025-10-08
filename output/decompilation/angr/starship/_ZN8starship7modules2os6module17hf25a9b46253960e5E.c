void starship::modules::os::module(void* a0, unsigned long a1)
{
    char v0;  // [bp-0x258]
    int v1;  // [bp-0x250], Other Possible Types: char
    unsigned long long v2;  // [bp-0x240]
    int v3;  // [bp-0x238]
    unsigned long long v4;  // [bp-0x228]
    char v5;  // [bp-0x220], Other Possible Types: unsigned long long
    char v6;  // [bp-0x218], Other Possible Types: unsigned long long
    char v7;  // [bp-0x210], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x208]
    char v9;  // [bp-0x200], Other Possible Types: unsigned long long
    int v10;  // [bp-0x1f0]
    unsigned long long v11;  // [bp-0x1e0]
    char *v12;  // [bp-0x1d8]
    unsigned long long v13;  // [bp-0x1d0]
    int v14;  // [bp-0x1c8], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0x1c0]
    int v16;  // [bp-0x1b8], Other Possible Types: char *
    unsigned long long v17;  // [bp-0x1b0]
    void* v18;  // [bp-0x1a8], Other Possible Types: char
    int v19;  // [bp-0x198]
    unsigned long long v20;  // [bp-0x188]
    char *v21;  // [bp-0x178]
    char *v22;  // [bp-0x170]
    unsigned long v23;  // [bp-0x168]
    int v24;  // [bp-0x160], Other Possible Types: char
    int v25;  // [bp-0x150]
    int v26;  // [bp-0x140]
    int v27;  // [bp-0x130]
    int v28;  // [bp-0x120]
    char v29;  // [bp-0x110]
    unsigned long long v30;  // [bp-0x108]
    char v31;  // [bp-0x100]
    unsigned long long v32;  // [bp-0xb8]
    char v33;  // [bp-0xb0]
    char v34;  // [bp-0x98]
    char v35;  // [bp-0x90]
    int v37;  // xmm0

    v24.new_module(a1, "osshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 2);
    v31.try_load(v30);
    if (v34)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        os_info::get(&v35);
        v5.new(v32, *((long long *)&v33));
        v21 = &v31;
        v22 = &v35;
        v23 = a1;
        if ((char)(((0 ^ v5) & (0 ^ -(v5))) >> 63))
        {
            v2 = v8;
            memcpy(&v1, &v6, 16);
        }
        else
        {
            v20 = v11;
            v37 = *((int128_t *)&v5);
            v19 = v10;
            memcpy(&v18, &v9, 16);
            *((int128_t *)&v16) = *((int128_t *)&v7);
            v14 = v37;
            starship::modules::os::module::{{closure}}(&v0, &v21, &(char)v14);
            if (*((int *)&v0) != 1)
            {
                v24.set_segments(&(char)v1);
                *((int128_t *)&a0[80]) = *((int128_t *)&v29);
                a0[64] = v28;
                a0[48] = v27;
                a0[32] = v26;
                a0[16] = v25;
                *(a0) = v24;
                core::ptr::drop_in_place<os_info::info::Info>(&v35);
                core::ptr::drop_in_place<starship::configs::os::OSConfig>(&v31);
                return;
            }
        }
        v4 = v2;
        v3 = v1;
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
        {
            v12 = &v3;
            v13 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
            v14 = &g_11f57b0;
            v15 = 1;
            v18 = 0;
            v16 = &v12;
            v17 = 1;
            v5 = "starship::modules::oseditionError in module `package`:\nsrc/modules/package.rs";
            v6 = 21;
            v7 = "starship::modules::oseditionError in module `package`:\nsrc/modules/package.rs";
            v8 = 21;
            v9 = log::__private_api::loc(&g_11f57c0);
            log::__private_api::log(&v14, 2, &v5);
        }
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v3);
        core::ptr::drop_in_place<os_info::info::Info>(&v35);
    }
    core::ptr::drop_in_place<starship::configs::os::OSConfig>(&v31);
    core::ptr::drop_in_place<starship::module::Module>(&v24);
    return;
}
