long long starship::config::StarshipConfig::get_module_config(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0xa8]
    char *v1;  // [bp-0xa0]
    char *v2;  // [bp-0x98]
    unsigned long long v3;  // [bp-0x90]
    unsigned long long v4;  // [bp-0x88]
    unsigned long long v5;  // [bp-0x80]
    unsigned long long v6;  // [bp-0x78]
    char *v7;  // [bp-0x70]
    unsigned long long v8;  // [bp-0x68]
    void* v9;  // [bp-0x60]
    char *v10;  // [bp-0x50]
    unsigned long long v11;  // [bp-0x48]
    char *v12;  // [bp-0x40]
    unsigned long long v13;  // [bp-0x38]
    unsigned long long v14;  // [bp-0x30]
    unsigned long long v15;  // [bp-0x28]
    unsigned long long v16;  // [bp-0x20]
    unsigned long long v17;  // [bp-0x18]
    unsigned long long v18;  // [bp-0x10]

    v3 = a1;
    v4 = a2;
    v5 = a1;
    v6 = a2;
    v0 = a0.get_config(&v5, 1);
    if (!v0)
    {
        return 0;
    }
    else if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 4)
    {
        v1 = &v3;
        v2 = &v0;
        v10 = &v1;
        v11 = <&T as core::fmt::Display>::fmt;
        v12 = &v2;
        v13 = <&T as core::fmt::Debug>::fmt;
        v5 = &g_11f2628;
        v6 = 2;
        v9 = 0;
        v7 = &v10;
        v8 = 2;
        v14 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
        v15 = 16;
        v16 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
        v17 = 16;
        v18 = log::__private_api::loc(&g_11f2648);
        log::__private_api::log(&v5, 4, &v14);
        return v0;
    }
    else
    {
        return v0;
    }
}
