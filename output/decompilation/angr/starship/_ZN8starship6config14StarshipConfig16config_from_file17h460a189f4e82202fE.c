long long starship::config::StarshipConfig::config_from_file(void* a0, unsigned long long a1, unsigned long long a2)
{
    char *v0;  // [bp-0x150]
    unsigned long long v1;  // [bp-0x148]
    unsigned long long v2;  // [bp-0x140]
    unsigned long long v3;  // [bp-0x138]
    unsigned long long v4;  // [bp-0x130]
    unsigned long long v5;  // [bp-0x128]
    unsigned long long v6;  // [bp-0x120]
    int v7;  // [bp-0x118], Other Possible Types: char
    int v8;  // [bp-0x108], Other Possible Types: char
    int v9;  // [bp-0xf8], Other Possible Types: char
    int v10;  // [bp-0xe8], Other Possible Types: char
    int v11;  // [bp-0xd8], Other Possible Types: char
    unsigned long long v12;  // [bp-0xc8]
    char *v13;  // [bp-0xc0]
    unsigned long long v14;  // [bp-0xb8]
    unsigned long long v15;  // [bp-0xb0]
    char *v16;  // [bp-0xa8]
    unsigned long long v17;  // [bp-0xa0]
    void* v18;  // [bp-0x98]
    char v19;  // [bp-0x88]
    unsigned long long v20;  // [bp-0x80]
    unsigned long long v21;  // [bp-0x78]
    char v22;  // [bp-0x70]
    char v23;  // [bp-0x68]
    char v24;  // [bp-0x60]
    char v25;  // [bp-0x58]
    char v26;  // [bp-0x50]
    char v27;  // [bp-0x48]
    char v28;  // [bp-0x40]
    char v29;  // [bp-0x38]
    char v30;  // [bp-0x30]
    char v31;  // [bp-0x28]
    char v32;  // [bp-0x20]

    v7.read_config_content_as_str(a1, a2);
    if ((char)(((0 ^ *((long long *)&v7)) & (0 ^ -(*((long long *)&v7)))) >> 63))
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0;
    }
    v21 = *((long long *)&v8);
    memcpy(&v19, &v7, 16);
    toml::de::from_str(&v22, v20, *((long long *)&v8));
    if (*((int *)&v22) == 2)
    {
        memcpy(&v11, &v31, 16);
        memcpy(&v10, &v29, 16);
        memcpy(&v9, &v27, 16);
        memcpy(&v8, &v25, 16);
        memcpy(&v7, &v23, 16);
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 4)
        {
            v13 = &v7;
            v0 = &v13;
            v1 = <&T as core::fmt::Debug>::fmt;
            v14 = &g_11f2550;
            v15 = 1;
            v18 = 0;
            v16 = &v0;
            v17 = 1;
            v2 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
            v3 = 16;
            v4 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
            v5 = 16;
            v6 = log::__private_api::loc(&g_11f2570);
            log::__private_api::log(&v14, 4, &v2);
        }
        a0[64] = v11;
        a0[48] = v10;
        a0[32] = v9;
        a0[16] = v8;
        *(a0) = v7;
    }
    else
    {
        v12 = *((long long *)&v32);
        memcpy(&v11, &v30, 16);
        memcpy(&v10, &v28, 16);
        memcpy(&v9, &v26, 16);
        memcpy(&v8, &v24, 16);
        memcpy(&v7, &v22, 16);
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0))
        {
            v0 = &v7;
            v1 = <toml::de::error::Error as core::fmt::Display>::fmt;
            v14 = &g_11f2560;
            v15 = 1;
            v18 = 0;
            v16 = &v0;
            v17 = 1;
            v2 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
            v3 = 16;
            v4 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
            v5 = 16;
            v6 = log::__private_api::loc(&g_11f2588);
            log::__private_api::log(&v14, 1, &v2);
        }
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<toml::de::error::Error>(&v7);
    }
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v19);
}
