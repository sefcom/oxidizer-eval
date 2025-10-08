void starship::modules::dotnet::module(void* a0, unsigned long a1)
{
    char v0;  // [bp-0x269]
    unsigned long long v1;  // [bp-0x268]
    char v2;  // [bp-0x260]
    char v3;  // [bp-0x250]
    int v4;  // [bp-0x248], Other Possible Types: char
    unsigned long long v5;  // [bp-0x238]
    char v6;  // [bp-0x230], Other Possible Types: unsigned long long
    char v7;  // [bp-0x228], Other Possible Types: unsigned long long
    char *v8;  // [bp-0x220]
    unsigned long long v9;  // [bp-0x218]
    void* v10;  // [bp-0x210]
    int v11;  // [bp-0x1f8]
    unsigned long long v12;  // [bp-0x1e8]
    unsigned long long v13;  // [bp-0x1e0]
    int v14;  // [bp-0x1d8], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0x1d0]
    int v16;  // [bp-0x1c8], Other Possible Types: unsigned long long
    unsigned long long v17;  // [bp-0x1c0]
    int v18;  // [bp-0x1b8]
    char *v19;  // [bp-0x1a8]
    unsigned long long v20;  // [bp-0x1a0]
    char v21;  // [bp-0x198]
    char *v22;  // [bp-0x188]
    char *v23;  // [bp-0x180]
    char *v24;  // [bp-0x178]
    unsigned long v25;  // [bp-0x170]
    char *v26;  // [bp-0x168]
    char *v27;  // [bp-0x160]
    int v28;  // [bp-0x158], Other Possible Types: char
    int v29;  // [bp-0x148]
    int v30;  // [bp-0x138]
    int v31;  // [bp-0x128]
    int v32;  // [bp-0x118]
    char v33;  // [bp-0x108]
    unsigned long long v34;  // [bp-0x100]
    char v35;  // [bp-0xf8]
    char v36;  // [bp-0xf0]
    char v37;  // [bp-0xd8]
    int v38;  // [bp-0xc0]
    unsigned long long v39;  // [bp-0xb0]
    unsigned long long v40;  // [bp-0xa8]
    char v41;  // [bp-0xa0]
    char v42;  // [bp-0x90]
    char v43;  // [bp-0x80]
    char v44;  // [bp-0x70]
    char v45;  // [bp-0x68], Other Possible Types: unsigned long
    char v46;  // [bp-0x60]
    char v47;  // [bp-0x50]
    int v49;  // xmm0

    v28.new_module(a1, "dotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatr", 6);
    v35.try_load(v34);
    v6.try_begin_scan(a1);
    if (v6)
    {
        v49 = *((int128_t *)&v36);
        v13 = v6;
        *((int128_t *)&v14) = *((int128_t *)&v37);
        v16 = v38;
        v18 = v49;
        if (!(char)v13.is_match())
            goto LABEL_b908db;
        starship::modules::dotnet::get_local_dotnet_files(&v6, a1);
        if ((char)(((0 ^ v6) & (0 ^ -(v6))) >> 63))
        {
            core::ptr::drop_in_place<core::result::Result<alloc::vec::Vec<starship::modules::dotnet::DotNetFile>,&std::io::error::Error>>(&v6);
            *((unsigned long long *)a0) = 0x8000000000000000;
        }
        else
        {
            memcpy(&v2, &v7, 16);
            v1 = v6;
            v0 = v44;
            v45.new(v39, v40);
            memcpy(&v21, &v41, 16);
            v22 = &v42;
            v23 = &v43;
            v24 = &v0;
            v25 = a1;
            v26 = &v1;
            v27 = &v28;
            if (v45 == 0x8000000000000000)
            {
                v5 = *((long long *)&v47);
                memcpy(&v4, &v46, 16);
            }
            else
            {
                starship::modules::dotnet::module::{{closure}}(&v3, &v21, &v45);
                if (*((int *)&v3) != 1)
                {
                    v28.set_segments(&v4);
                    *((int128_t *)&a0[80]) = *((int128_t *)&v33);
                    a0[64] = v32;
                    a0[48] = v31;
                    a0[32] = v30;
                    a0[16] = v29;
                    *(a0) = v28;
                    core::ptr::drop_in_place<alloc::vec::Vec<starship::modules::dotnet::DotNetFile>>(&v1);
                    core::ptr::drop_in_place<starship::configs::v::VConfig>(&v35);
                    return;
                }
            }
            v12 = v5;
            v11 = v4;
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
            {
                v19 = &v11;
                v20 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                v6 = &g_11f4410;
                v7 = 1;
                v10 = 0;
                v8 = &v19;
                v9 = 1;
                v13 = "starship::modules::dotnettfmError parsing project file  at position /home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/quick-xml-0.38.3/src/events/mod.rsChecking if global.json exists at: Checking if .NET SDK version is pinned in: ";
                v14 = 25;
                v15 = "starship::modules::dotnettfmError parsing project file  at position /home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/quick-xml-0.38.3/src/events/mod.rsChecking if global.json exists at: Checking if .NET SDK version is pinned in: ";
                v16 = 25;
                v17 = log::__private_api::loc(&g_11f4420);
                log::__private_api::log(&v6, 2, &v13);
            }
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v11);
            core::ptr::drop_in_place<alloc::vec::Vec<starship::modules::dotnet::DotNetFile>>(&v1);
        }
    }
    else
    {
LABEL_b908db:
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    core::ptr::drop_in_place<starship::configs::v::VConfig>(&v35);
    core::ptr::drop_in_place<starship::module::Module>(&v28);
    return;
}
