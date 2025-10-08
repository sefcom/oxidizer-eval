long long starship::config::get_palette(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    unsigned long long v3;  // [bp-0x70]
    unsigned long long v4;  // [bp-0x68]
    char *v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    unsigned long long v8;  // [bp-0x48]
    char *v9;  // [bp-0x40], Other Possible Types: unsigned long long
    int v10;  // [bp-0x38], Other Possible Types: unsigned long long
    void* v11;  // [bp-0x30]
    unsigned long long v12;  // [bp-0x20]
    unsigned long long v13;  // [bp-0x18]
    unsigned long long v15;  // r14
    unsigned long long v16;  // rax
    void* v17;  // rbx
    char *v18;  // rdi
    char *v19;  // rdx
    unsigned long long v20;  // rsi

    if (a1)
    {
        v12 = a1;
        v13 = a2;
        v15 = a0.get_inner(a1, a2);
        v16 = (unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0);
        if (!v15)
        {
            v17 = 0;
            if (!v15)
                goto LABEL_b63c15;
LABEL_b63af1:
            if (v16 <= 4)
                return v17;
            v5 = &v12;
            v6 = <&T as core::fmt::Display>::fmt;
            v7 = &g_11f2930;
            v8 = 1;
            v11 = 0;
            v9 = &v5;
            v10 = 1;
            v0 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
            v1 = 16;
            v2 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
            v3 = 16;
            v4 = log::__private_api::loc(&g_11f2960);
            v18 = &v7;
            v19 = &v0;
            v20 = 5;
        }
        else
        {
            v17 = v15 + 24;
            if (v15)
                goto LABEL_b63af1;
LABEL_b63c15:
            if (v16 <= 1)
                return v17;
            v5 = &v12;
            v6 = <&T as core::fmt::Display>::fmt;
            v7 = &g_11f2940;
            v8 = 1;
            v11 = 0;
            v9 = &v5;
            v10 = 1;
            v0 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
            v1 = 16;
            v2 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
            v3 = 16;
            v4 = log::__private_api::loc(&g_11f2978);
            v18 = &v7;
            v19 = &v0;
            v20 = 2;
        }
        log::__private_api::log(v18, v20, v19);
        return v17;
    }
    else if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) > 4)
    {
        v7 = &g_11f2950;
        v8 = 1;
        v9 = 8;
        *((uint128_t *)&v10) = 0;
        v0 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
        v1 = 16;
        v2 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
        v3 = 16;
        v4 = log::__private_api::loc(&g_11f2990);
        log::__private_api::log(&v7, 5, &v0);
        return 0;
    }
    else
    {
        return 0;
    }
}
