long long starship::formatter::version::VersionFormatter::format_module_version(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6)
{
    unsigned long long v0;  // [bp-0x100]
    unsigned long long v1;  // [bp-0xf8]
    char *v2;  // [bp-0xf0]
    unsigned long long v3;  // [bp-0xe8]
    void* v4;  // [bp-0xe0]
    char *v5;  // [bp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0xc8]
    unsigned long long v7;  // [bp-0xc0]
    unsigned long long v8;  // [bp-0xb8]
    unsigned long long v9;  // [bp-0xb0]
    int v10;  // [bp-0xa8]
    unsigned long long v11;  // [bp-0x98]
    unsigned long long v12;  // [bp-0x88]
    unsigned long long v13;  // [bp-0x80]
    unsigned long long v14;  // [bp-0x78]
    unsigned long long v15;  // [bp-0x70]
    char v16;  // [bp-0x68]
    int v17;  // [bp-0x60]
    unsigned long v18;  // [bp-0x50], Other Possible Types: unsigned long long
    char *v19;  // [bp-0x48]
    unsigned long long v20;  // [bp-0x40]
    char *v21;  // [bp-0x38]
    unsigned long long v22;  // [bp-0x30]
    int v23;  // [bp-0x28], Other Possible Types: char
    char v24;  // [bp-0x18]
    unsigned long long v25;  // rdx

    v12 = a1;
    v13 = a2;
    v14 = a3;
    v15 = a4;
    v16.format_version(a3, a4, a5, a6);
    if (*((int *)&v16) != 1)
    {
        a0->field_10 = v18;
        *((void*)&a0->field_0) = v17;
        return a0;
    }
    v11 = v18;
    v10 = v17;
    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
    {
        v19 = &v12;
        v20 = <&T as core::fmt::Display>::fmt;
        v21 = &v10;
        v22 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
        v0 = &g_11f37d0;
        v1 = 2;
        v4 = 0;
        v2 = &v19;
        v3 = 2;
        v5 = "starship::formatter::versioncan\'t convert to str\'\'Shell name: eval -- \"$( init bash --print-full-init)\" init fish --print-full-init | psub)Invoke-Expression (&  init powershell --print-full-init | Out-String)eval $( init ion --print-full-init)eval ( init e";
        v6 = 28;
        v7 = "starship::formatter::versioncan\'t convert to str\'\'Shell name: eval -- \"$( init bash --print-full-init)\" init fish --print-full-init | psub)Invoke-Expression (&  init powershell --print-full-init | Out-String)eval $( init ion --print-full-init)eval ( init e";
        v8 = 28;
        v9 = log::__private_api::loc(&g_11f3800);
        log::__private_api::log(&v0, 2, &v5);
    }
    v5 = &v14;
    v6 = <&T as core::fmt::Display>::fmt;
    v0 = &g_11f37f0;
    v1 = 1;
    v4 = 0;
    v2 = &v5;
    v3 = 1;
    v23.map_or_else(0, v25, &v0);
    a0->field_10 = *((long long *)&v24);
    *((void*)&a0->field_0) = v23;
    core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v10);
    return a0;
}
