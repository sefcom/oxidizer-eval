void starship::modules::nodejs::module(void* a0, unsigned long a1)
{
    int v0;  // [bp-0x2a8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x2a8]
    int v2;  // [bp-0x2a0], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x298]
    int v4;  // [bp-0x290], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x288]
    int v6;  // [bp-0x280]
    int v7;  // [bp-0x278]
    char v8;  // [bp-0x268]
    int v9;  // [bp-0x258], Other Possible Types: char, unsigned long long
    unsigned long long v10;  // [bp-0x250]
    int v11;  // [bp-0x248], Other Possible Types: char *, unsigned long long
    unsigned long long v12;  // [bp-0x240]
    int v13;  // [bp-0x238], Other Possible Types: void*
    char v14;  // [bp-0x230]
    int v15;  // [bp-0x228]
    unsigned long long v16;  // [bp-0x218]
    char v17;  // [bp-0x208]
    int v18;  // [bp-0x200], Other Possible Types: char
    unsigned long long v19;  // [bp-0x1f0]
    int v20;  // [bp-0x1e8]
    unsigned long long v21;  // [bp-0x1d8]
    unsigned long v22;  // [bp-0x1c8]
    unsigned int v23;  // [bp-0x1b0]
    unsigned long v24;  // [bp-0x1a8]
    unsigned int v25;  // [bp-0x190]
    char *v26;  // [bp-0x188]
    unsigned long long v27;  // [bp-0x180]
    int v28;  // [bp-0x178], Other Possible Types: char
    int v29;  // [bp-0x168]
    int v30;  // [bp-0x158]
    int v31;  // [bp-0x148]
    int v32;  // [bp-0x138]
    char v33;  // [bp-0x128]
    unsigned long long v34;  // [bp-0x120]
    char v35;  // [bp-0x118]
    int v36;  // [bp-0x108]
    char *v37;  // [bp-0xf8]
    char v38;  // [bp-0xf0]
    char *v39;  // [bp-0xe0]
    char *v40;  // [bp-0xd8]
    char *v41;  // [bp-0xd0]
    unsigned long v42;  // [bp-0xc8]
    char v43;  // [bp-0xc0]
    char v44;  // [bp-0xb8]
    char v45;  // [bp-0xa0]
    int v46;  // [bp-0x88]
    unsigned long long v47;  // [bp-0x78]
    unsigned long long v48;  // [bp-0x70]
    char v49;  // [bp-0x68]
    int v50;  // [bp-0x58]
    char v51;  // [bp-0x48]
    char v52;  // [bp-0x38]
    int v54;  // xmm0
    char v55;  // al
    int v56;  // xmm0
    int v57;  // xmm1

    v28.new_module(a1, "nodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in co", 6);
    v43.try_load(v34);
    v9.try_begin_scan(a1);
    if (v9)
    {
        v54 = *((int128_t *)&v44);
        *((unsigned long long *)&v0) = v9;
        *((int128_t *)&v2) = *((int128_t *)&v45);
        v4 = v46;
        v6 = v54;
        v55 = (unsigned long long)v0.is_match();
        v9.try_begin_scan(a1);
        if (v9)
        {
            v3 = v11;
            *((int128_t *)&v0) = *((int128_t *)&v9);
            *((int128_t *)&v6) = *((int128_t *)&v14);
            v4 = &g_11f55e0;
            v5 = 1;
            if (((char)(unsigned long long)v0.is_match() | v55 ^ 1) != 1)
            {
                v23 = 0;
                v22 = a1;
                v25 = 0;
                v24 = a1;
                (unsigned long long)v0.new(v47, v48);
                memcpy(&v35, &v49, 16);
                v36 = v50;
                v37 = &v51;
                memcpy(&v38, &v52, 16);
                v39 = &v22;
                v40 = &v24;
                v41 = &v28;
                v42 = a1;
                if ((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63))
                {
                    v19 = &g_11f55e0;
                    memcpy(&v18, &(char)v0, 16);
                }
                else
                {
                    v16 = *((long long *)&v8);
                    v56 = (int128_t)v0;
                    v57 = *((int128_t *)&v3);
                    v15 = v7;
                    *((int128_t *)&v13) = *((int128_t *)&v5);
                    v11 = v57;
                    v9 = v56;
                    starship::modules::nodejs::module::{{closure}}(&v17, &v35, &v9);
                    if (*((int *)&v17) != 1)
                    {
                        v28.set_segments(&(char)v18);
                        *((int128_t *)&a0[80]) = *((int128_t *)&v33);
                        a0[64] = v32;
                        a0[48] = v31;
                        a0[32] = v30;
                        a0[16] = v29;
                        *(a0) = v28;
                        core::ptr::drop_in_place<std::sync::lazy_lock::LazyLock<core::option::Option<alloc::string::String>,starship::modules::golang::module::{{closure}}>>(&v24);
                        core::ptr::drop_in_place<std::sync::lazy_lock::LazyLock<core::option::Option<alloc::string::String>,starship::modules::golang::module::{{closure}}>>(&v22);
                        core::ptr::drop_in_place<starship::configs::go::GoConfig>(&v43);
                        return;
                    }
                }
                v21 = v19;
                v20 = v18;
                if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                {
                    v26 = &v20;
                    v27 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                    v9 = &g_11f55d0;
                    v10 = 1;
                    v13 = 0;
                    v11 = &v26;
                    v12 = 1;
                    v0 = "starship::modules::nodejsengines_versionengines\\d+\\.\\d+\\.\\d+Error in module `ocaml`: \nsrc/modules/ocaml.rs";
                    v2 = 25;
                    v3 = "starship::modules::nodejsengines_versionengines\\d+\\.\\d+\\.\\d+Error in module `ocaml`: \nsrc/modules/ocaml.rs";
                    v4 = 25;
                    v5 = log::__private_api::loc(&g_11f55f0);
                    log::__private_api::log(&v9, 2, &v0);
                }
                *((unsigned long long *)a0) = 0x8000000000000000;
                core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v20);
                core::ptr::drop_in_place<std::sync::lazy_lock::LazyLock<core::option::Option<alloc::string::String>,starship::modules::golang::module::{{closure}}>>(&v24);
                core::ptr::drop_in_place<std::sync::lazy_lock::LazyLock<core::option::Option<alloc::string::String>,starship::modules::golang::module::{{closure}}>>(&v22);
                core::ptr::drop_in_place<starship::configs::go::GoConfig>(&v43);
                core::ptr::drop_in_place<starship::module::Module>(&v28);
                return;
            }
        }
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    core::ptr::drop_in_place<starship::configs::go::GoConfig>(&v43);
    core::ptr::drop_in_place<starship::module::Module>(&v28);
    return;
}
