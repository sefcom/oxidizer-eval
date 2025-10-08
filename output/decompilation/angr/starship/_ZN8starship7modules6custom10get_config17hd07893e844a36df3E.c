long long starship::modules::custom::get_config(unsigned long long a0, unsigned long long a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    unsigned long long v2;  // [bp-0x90]
    unsigned long long v3;  // [bp-0x88]
    unsigned long long v4;  // [bp-0x80]
    unsigned long long v5;  // [bp-0x78]
    unsigned long long v6;  // [bp-0x70]
    char *v7;  // [bp-0x68]
    unsigned long long v8;  // [bp-0x60]
    char *v9;  // [bp-0x58]
    unsigned long long v10;  // [bp-0x50]
    unsigned long long v11;  // [bp-0x48]
    unsigned long long v12;  // [bp-0x40]
    unsigned long long v13;  // [bp-0x38]
    char *v14;  // [bp-0x30]
    unsigned long long v15;  // [bp-0x28]
    void* v16;  // [bp-0x20]
    unsigned long v18;  // rbx
    unsigned long long v19;  // rax
    unsigned long long v20;  // rbx
    unsigned long long v21;  // rax
    unsigned long long v22;  // rdi

    v5 = a0;
    v6 = a1;
    v18 = a2 + 488;
    v19 = v18.get_custom_module_config(a0, a1);
    if (v19)
        return v19;
    v20 = v18.get_custom_modules();
    v21 = (unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0);
    if (v20)
    {
        if (v21 <= 3)
            return 0;
        v11 = v20;
        v7 = &v5;
        v8 = <&T as core::fmt::Debug>::fmt;
        v9 = &v11;
        v10 = <starship::modules::custom::get_config::DebugCustomModules as core::fmt::Debug>::fmt;
        v12 = &g_11f3ee8;
        v13 = 2;
        v16 = 0;
        v14 = &v7;
        v15 = 2;
        v22 = &g_11f3f28;
    }
    else
    {
        if (v21 <= 3)
            return 0;
        v7 = &v5;
        v8 = <&T as core::fmt::Debug>::fmt;
        v12 = &g_11f3f08;
        v13 = 2;
        v16 = 0;
        v14 = &v7;
        v15 = 1;
        v22 = &g_11f3f40;
    }
    v0 = "starship::modules::customoutputtop level format contains custom module , but no configuration was provided. Configuration for the following modules were provided: , but no configuration was provided.";
    v1 = 25;
    v2 = "starship::modules::customoutputtop level format contains custom module , but no configuration was provided. Configuration for the following modules were provided: , but no configuration was provided.";
    v3 = 25;
    v4 = log::__private_api::loc(v22);
    log::__private_api::log(&v12, 4, &v0);
    return 0;
}
