long long starship::config::ModuleConfig::load(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0xc8]
    unsigned long long v1;  // [bp-0xc0]
    char *v2;  // [bp-0xb8]
    unsigned long long v3;  // [bp-0xb0]
    unsigned long long v4;  // [bp-0xa8]
    unsigned long long v5;  // [bp-0xa0]
    unsigned long long v6;  // [bp-0x98]
    unsigned long long v7;  // [bp-0x90]
    unsigned long long v8;  // [bp-0x88]
    char v9;  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x78]
    int v11;  // [bp-0x70]
    int v12;  // [bp-0x60]
    char v13;  // [bp-0x50], Other Possible Types: unsigned long
    unsigned long long v14;  // [bp-0x48]
    unsigned long long v15;  // [bp-0x40]
    char *v16;  // [bp-0x38]
    unsigned long long v17;  // [bp-0x30]
    void* v18;  // [bp-0x28]
    int v20;  // xmm0

    v9.from_config(a1);
    if (v13 != 2)
    {
        a0->field_30 = v13;
        v20 = *((int128_t *)&v9);
        *((void*)&a0->field_20) = v12;
        *((void*)&a0->field_10) = v11;
        *((void*)&a0->field_0) = v20;
        return v13;
    }
    v0 = v9;
    v1 = v10;
    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
    {
        v2 = &v0;
        v3 = <&str as serde_core::de::Expected>::fmt;
        v14 = &g_11f2510;
        v15 = 1;
        v18 = 0;
        v16 = &v2;
        v17 = 1;
        v4 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
        v5 = 16;
        v6 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
        v7 = 16;
        v8 = log::__private_api::loc(&g_11f2520);
        log::__private_api::log(&v14, 2, &v4);
    }
    a0.default();
    return (unsigned long long)core::ptr::drop_in_place<serde_core::de::value::Error>(v0, v1);
}
