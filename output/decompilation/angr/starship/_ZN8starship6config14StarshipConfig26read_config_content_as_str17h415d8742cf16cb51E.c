long long starship::config::StarshipConfig::read_config_content_as_str(void* a0, unsigned long long a1, unsigned long long a2)
{
    char *v0;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xd0]
    unsigned long long v2;  // [bp-0xc8]
    unsigned long long v3;  // [bp-0xc0]
    unsigned long long v4;  // [bp-0xb8]
    unsigned long long v5;  // [bp-0xb0]
    char *v6;  // [bp-0xa8]
    unsigned long long v7;  // [bp-0xa0]
    unsigned long long v8;  // [bp-0x98]
    unsigned long long v9;  // [bp-0x88]
    unsigned long long v10;  // [bp-0x80]
    char *v11;  // [bp-0x78], Other Possible Types: unsigned long long
    int v12;  // [bp-0x70], Other Possible Types: unsigned long long
    void* v13;  // [bp-0x68]
    char *v14;  // [bp-0x58]
    unsigned long long v15;  // [bp-0x50]
    char v16;  // [bp-0x48], Other Possible Types: unsigned long
    unsigned long long v17;  // [bp-0x40]
    unsigned long long v18;  // [bp-0x38]
    unsigned long long v19;  // [bp-0x30]
    unsigned long long v20;  // [bp-0x28]
    unsigned long long v22;  // r14

    v19 = a1;
    v20 = a2;
    if (a1)
    {
        starship::utils::read_file(&v16, &v19);
        if (v16 == 0x8000000000000000)
        {
            v0 = v17;
            v22 = (!(char)v17.kind()) * 3 + 1;
            if (v22 <= (unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0))
            {
                v14 = &v0;
                v6 = &v14;
                v7 = <&T as core::fmt::Display>::fmt;
                v9 = &g_11f25d0;
                v10 = 1;
                v13 = 0;
                v11 = &v6;
                v12 = 1;
                v1 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
                v2 = 16;
                v3 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
                v4 = 16;
                v5 = log::__private_api::loc(&g_11f25f8);
                log::__private_api::log(&v9, v22, &v1);
            }
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<std::io::error::Error>(&v0);
            return a0;
        }
        else
        {
            v8 = v18;
            memcpy(&(char)v6, &v16, 16);
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
            {
                v0 = &(char)v6;
                v14 = &v0;
                v15 = <&T as core::fmt::Display>::fmt;
                v9 = &g_11f25b0;
                v10 = 2;
                v13 = 0;
                v11 = &v14;
                v12 = 1;
                v1 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
                v2 = 16;
                v3 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
                v4 = 16;
                v5 = log::__private_api::loc(&g_11f25e0);
                log::__private_api::log(&v9, 5, &v1);
            }
            *((unsigned long long *)&a0[16]) = v8;
            *((int128_t *)a0) = *((int128_t *)&v6);
            return a0;
        }
    }
    else
    {
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) > 3)
        {
            v9 = &g_11f25a0;
            v10 = 1;
            v11 = 8;
            *((uint128_t *)&v12) = 0;
            v1 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
            v2 = 16;
            v3 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
            v4 = 16;
            v5 = log::__private_api::loc(&g_11f2610);
            log::__private_api::log(&v9, 4, &v1);
        }
        *((unsigned long long *)a0) = 0x8000000000000000;
        return a0;
    }
}
