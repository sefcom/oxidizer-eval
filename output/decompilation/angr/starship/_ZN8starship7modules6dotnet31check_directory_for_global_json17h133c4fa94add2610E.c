void starship::modules::dotnet::check_directory_for_global_json(unsigned long long *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x138]
    unsigned long long v1;  // [bp-0x130]
    unsigned long long v2;  // [bp-0x128]
    char *v3;  // [bp-0x120]
    char *v4;  // [bp-0x118]
    unsigned long long v5;  // [bp-0x110]
    unsigned long long v6;  // [bp-0x108]
    unsigned long long v7;  // [bp-0x100]
    unsigned long long v8;  // [bp-0xf8]
    unsigned long long v9;  // [bp-0xf0]
    unsigned long long v10;  // [bp-0xe8]
    unsigned long long v11;  // [bp-0xe0]
    unsigned long long v12;  // [bp-0xd8]
    unsigned long long v13;  // [bp-0xd0]
    unsigned long long v14;  // [bp-0xc8]
    char *v15;  // [bp-0xc0]
    unsigned long long v16;  // [bp-0xb8]
    void* v17;  // [bp-0xb0]

    v0.join(a1, a2, "global.jsonproject.jsonDirectory.Build.propsDirectory.Build.targetsPackages.props", 11);
    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) > 3)
    {
        v6 = v1;
        v7 = v2;
        v3 = &v6;
        v4 = &v3;
        v5 = <&T as core::fmt::Display>::fmt;
        v13 = &g_11f4498;
        v14 = 1;
        v17 = 0;
        v15 = &v4;
        v16 = 1;
        v8 = "starship::modules::dotnettfmError parsing project file  at position /home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/quick-xml-0.38.3/src/events/mod.rsChecking if global.json exists at: Checking if .NET SDK version is pinned in: ";
        v9 = 25;
        v10 = "starship::modules::dotnettfmError parsing project file  at position /home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/quick-xml-0.38.3/src/events/mod.rsChecking if global.json exists at: Checking if .NET SDK version is pinned in: ";
        v11 = 25;
        v12 = log::__private_api::loc(&g_11f44a8);
        log::__private_api::log(&v13, 4, &v8);
    }
    std::fs::metadata(&v13, v6, v7);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v13);
    if ((unsigned int)v13 == 2)
        *(a0) = 0x8000000000000000;
    else
        starship::modules::dotnet::get_pinned_sdk_version_from_file(a0, v6, v7);
    core::ptr::drop_in_place<std::path::PathBuf>(&v0);
    return;
}
