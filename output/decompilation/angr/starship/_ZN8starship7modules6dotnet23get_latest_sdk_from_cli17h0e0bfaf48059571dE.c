long long starship::modules::dotnet::get_latest_sdk_from_cli(void* a0, void* a1)
{
    void* v0;  // [bp-0x110], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x108]
    int v2;  // [bp-0x100], Other Possible Types: void*, unsigned long long
    int v3;  // [bp-0xf8]
    char v4;  // [bp-0xf0]
    char v5;  // [bp-0xe0]
    unsigned short v6;  // [bp-0xd0]
    unsigned long long v7;  // [bp-0xc8]
    unsigned long long v8;  // [bp-0xc0]
    unsigned long long v9;  // [bp-0xb8]
    unsigned long long v10;  // [bp-0xb0]
    unsigned long long v11;  // [bp-0xa8]
    unsigned long long v12[2];  // [bp-0x98]
    unsigned long long v13;  // [bp-0x90]
    int v14;  // [bp-0x88]
    char v15;  // [bp-0x78]
    unsigned long long v16[2];  // [bp-0x60]
    int v17;  // [bp-0x50]
    char v18;  // [bp-0x40]
    unsigned long long v20;  // r14
    unsigned long long v21;  // rdx
    unsigned long long v22;  // r14
    unsigned long v23;  // rdx
    unsigned long long v24;  // rax
    char *v25;  // rdi

    v16.exec_cmd(a1, "dotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatr", 6, &g_11f44f8, 1);
    if ((char)(((0 ^ v16[0]) & (0 ^ -(v16[0]))) >> 63))
    {
        core::ptr::drop_in_place<core::option::Option<(alloc::string::String,alloc::string::String)>>(&v16);
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) <= 3)
            return starship::modules::dotnet::get_version_from_cli(a0, a1);
        v0 = &g_11f44e8;
        v1 = 1;
        v2 = 8;
        *((uint128_t *)&v3) = 0;
        v7 = "starship::modules::dotnettfmError parsing project file  at position /home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/quick-xml-0.38.3/src/events/mod.rsChecking if global.json exists at: Checking if .NET SDK version is pinned in: ";
        v8 = 25;
        v9 = "starship::modules::dotnettfmError parsing project file  at position /home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/quick-xml-0.38.3/src/events/mod.rsChecking if global.json exists at: Checking if .NET SDK version is pinned in: ";
        v10 = 25;
        v11 = log::__private_api::loc(&g_11f4520);
        log::__private_api::log(&v0, 4, &v7);
        return starship::modules::dotnet::get_version_from_cli(a0, a1);
    }
    else
    {
        memcpy(&v15, &v18, 16);
        v14 = v17;
        *(&v12) = v16;
        v20 = (long long)v14;
        (char)v7.into_searcher(10, v13, v20);
        memcpy(&v5, &(char)v11, 16);
        memcpy(&v4, &v9, 16);
        *((int128_t *)&v2) = *((int128_t *)&v7);
        v0 = 0;
        v1 = v20;
        v6 = 0;
        v22 = v0.try_rfold(a1, v21).or_else(v21);
        if (v22 && ((char)core::str::<impl str>::find(v22, v21, 91).or_else(v21) & 1))
        {
            v23 = v21 - 1;
            if (v23 > 1)
            {
                v24 = v23.get(v22, v21);
                if (!v24)
                    core::str::slice_error_fail(v22, v21, 0, v23, &g_11f4508); /* do not return */
                v0 = v21 + 1.with_capacity_in(1, 1, &g_11ed440);
                v1 = v21;
                v2 = 0;
                v0.spec_extend(v24, v21 + v24);
                *((unsigned long long *)&a0[16]) = 0;
                *((int128_t *)a0) = *((int128_t *)&v0);
                v25 = &(char)v12;
            }
            else
            {
                starship::modules::dotnet::get_latest_sdk_from_cli::parse_failed(a0);
                v25 = &(char)v12;
            }
        }
        else
        {
            *((unsigned long long *)a0) = 0x8000000000000000;
            v25 = &v16;
        }
        return (unsigned long long)core::ptr::drop_in_place<starship::utils::CommandOutput>(v25);
    }
}
