long long starship::modules::dotnet::get_latest_sdk_from_cli::parse_failed(unsigned long long *a0)
{
    unsigned long long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    unsigned long long v5;  // [bp-0x38]
    unsigned long long v6;  // [bp-0x30]
    unsigned long long v7;  // [bp-0x28]
    uint128_t v8;  // [bp-0x20]

    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
    {
        v5 = &g_11f4538;
        v6 = 1;
        v7 = 8;
        v8 = 0;
        v0 = "starship::modules::dotnettfmError parsing project file  at position /home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/quick-xml-0.38.3/src/events/mod.rsChecking if global.json exists at: Checking if .NET SDK version is pinned in: ";
        v1 = 25;
        v2 = "starship::modules::dotnettfmError parsing project file  at position /home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/quick-xml-0.38.3/src/events/mod.rsChecking if global.json exists at: Checking if .NET SDK version is pinned in: ";
        v3 = 25;
        v4 = log::__private_api::loc(&g_11f4548);
        log::__private_api::log(&v5, 2, &v0);
    }
    *(a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
