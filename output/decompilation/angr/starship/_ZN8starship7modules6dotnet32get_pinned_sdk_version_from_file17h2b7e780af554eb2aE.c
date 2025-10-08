void starship::modules::dotnet::get_pinned_sdk_version_from_file(unsigned long long *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0xa8]
    char v1;  // [bp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x98]
    char v3;  // [bp-0x90], Other Possible Types: unsigned long long
    char v4;  // [bp-0x88], Other Possible Types: unsigned long long
    char *v5;  // [bp-0x80]
    unsigned long long v6;  // [bp-0x78]
    void* v7;  // [bp-0x70]
    char *v8;  // [bp-0x60]
    unsigned long long v9;  // [bp-0x58]
    unsigned long long v10;  // [bp-0x50]
    unsigned long long v11;  // [bp-0x48]
    unsigned long long v12;  // [bp-0x40]
    unsigned long long v13;  // [bp-0x38]
    unsigned long long v14;  // [bp-0x30]
    unsigned long long v15;  // [bp-0x28]
    unsigned long long v16;  // [bp-0x20]

    starship::utils::read_file(&v3, a1, a2);
    if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
    {
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v3);
        *(a0) = 0x8000000000000000;
        return;
    }
    memcpy(&v1, &v4, 16);
    v0 = v3;
    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 4)
    {
        v10 = a1;
        v11 = a2;
        v8 = &v10;
        v9 = <std::path::Display as core::fmt::Display>::fmt;
        v3 = &g_11f44c0;
        v4 = 1;
        v7 = 0;
        v5 = &v8;
        v6 = 1;
        v12 = "starship::modules::dotnettfmError parsing project file  at position /home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/quick-xml-0.38.3/src/events/mod.rsChecking if global.json exists at: Checking if .NET SDK version is pinned in: ";
        v13 = 25;
        v14 = "starship::modules::dotnettfmError parsing project file  at position /home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/quick-xml-0.38.3/src/events/mod.rsChecking if global.json exists at: Checking if .NET SDK version is pinned in: ";
        v15 = 25;
        v16 = log::__private_api::loc(&g_11f44d0);
        log::__private_api::log(&v3, 4, &v12);
    }
    starship::modules::dotnet::get_pinned_sdk_version(a0, v1, v2);
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    return;
}
