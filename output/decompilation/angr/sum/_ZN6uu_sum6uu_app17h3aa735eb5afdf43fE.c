long long uu_sum::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0x858]
    unsigned long long v1;  // [bp-0x850]
    unsigned long long v2;  // [bp-0x848]
    char v3;  // [bp-0x840]
    char v4;  // [bp-0x828]
    unsigned int v5;  // [bp-0x5b0]
    unsigned int v6;  // [bp-0x5ac]
    unsigned long v7;  // [bp-0x56c]
    unsigned int v8;  // [bp-0x564]
    char v9;  // [bp-0x560]
    unsigned int v10;  // [bp-0x2e8]
    unsigned int v11;  // [bp-0x2e4]
    char v12;  // [bp-0x2e0]
    unsigned long long v13;  // [bp-0x24]
    unsigned int v14;  // [bp-0x1c]
    unsigned long long v17;  // rdx

    v12.new(uucore::util_name(), v17);
    v4.version(&v12, "(uutils coreutils) 0.1.0sum-usagesum-aboutsum-help-bsd-compatiblesum-help-sysv-compatible", 24);
    uucore::mods::locale::get_message(&v0, "sum-usagesum-aboutsum-help-bsd-compatiblesum-help-sysv-compatible", 9);
    uucore::format_usage(&v9, v1, v2);
    v12.override_usage(&v4, &v9);
    uucore::mods::locale::get_message(&v9, "sum-aboutsum-help-bsd-compatiblesum-help-sysv-compatible", 9);
    v4.about(&v12, &v9);
    memcpy(&v12, &v4, 700);
    v13 = 549755814016 | v7;
    v14 = v8;
    v4.new(_ZN6uu_sum7options4FILE17hc8a7493e909df870E, g_5724d8);
    v9.action(&v4, 1);
    memcpy(&v4, &v9, 632);
    v5 = v10 | 4;
    v6 = v11;
    v9.value_hint(&v4, 3);
    v4.arg(&v12, &v9);
    v12.new(_ZN6uu_sum7options14BSD_COMPATIBLE17he017f7b76b9cf1c7E, g_5724e8);
    v9.short(&v12, 114);
    uucore::mods::locale::get_message(&v3, "sum-help-bsd-compatiblesum-help-sysv-compatible", 23);
    v12.help(&v9, &v3);
    v9.action(&v12, 2);
    v12.arg(&v4, &v9);
    v4.new(_ZN6uu_sum7options19SYSTEM_V_COMPATIBLE17h48f2fd41c9bfb00eE, g_5724f8);
    v9.short(&v4, 115);
    v4.long(&v9, _ZN6uu_sum7options19SYSTEM_V_COMPATIBLE17h48f2fd41c9bfb00eE, g_5724f8);
    uucore::mods::locale::get_message(&v3, "sum-help-sysv-compatible", 24);
    v9.help(&v4, &v3);
    v4.action(&v9, 2);
    a0.arg(&v12, &v4);
    ::0x49ebe0::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
