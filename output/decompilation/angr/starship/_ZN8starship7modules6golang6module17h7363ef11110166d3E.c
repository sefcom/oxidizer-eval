void starship::modules::golang::module(void* a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x2a0]
    int v1;  // [bp-0x298], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x290]
    int v3;  // [bp-0x288], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x280]
    int v5;  // [bp-0x278]
    int v6;  // [bp-0x270]
    unsigned long long v7;  // [bp-0x260]
    char v8;  // [bp-0x258]
    int v9;  // [bp-0x250], Other Possible Types: char
    unsigned long long v10;  // [bp-0x240]
    int v11;  // [bp-0x238]
    unsigned long long v12;  // [bp-0x228]
    int v13;  // [bp-0x218], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x210]
    int v15;  // [bp-0x208], Other Possible Types: char *
    unsigned long long v16;  // [bp-0x200]
    void* v17;  // [bp-0x1f8], Other Possible Types: char
    int v18;  // [bp-0x1e8]
    unsigned long long v19;  // [bp-0x1d8]
    unsigned long v20;  // [bp-0x1c8]
    unsigned int v21;  // [bp-0x1b0]
    unsigned long v22;  // [bp-0x1a8]
    unsigned int v23;  // [bp-0x190]
    char *v24;  // [bp-0x188]
    unsigned long long v25;  // [bp-0x180]
    int v26;  // [bp-0x178], Other Possible Types: char
    int v27;  // [bp-0x168]
    int v28;  // [bp-0x158]
    int v29;  // [bp-0x148]
    int v30;  // [bp-0x138]
    char v31;  // [bp-0x128]
    unsigned long long v32;  // [bp-0x120]
    char v33;  // [bp-0x118]
    int v34;  // [bp-0x108]
    char *v35;  // [bp-0xf8]
    char v36;  // [bp-0xf0]
    char *v37;  // [bp-0xe0]
    char *v38;  // [bp-0xd8]
    char *v39;  // [bp-0xd0]
    unsigned long v40;  // [bp-0xc8]
    char v41;  // [bp-0xc0]
    char v42;  // [bp-0xb8]
    char v43;  // [bp-0xa0]
    int v44;  // [bp-0x88]
    unsigned long long v45;  // [bp-0x78]
    unsigned long long v46;  // [bp-0x70]
    char v47;  // [bp-0x68]
    int v48;  // [bp-0x58]
    char v49;  // [bp-0x48]
    char v50;  // [bp-0x38]
    int v52;  // xmm0
    int v53;  // xmm0

    v26.new_module(a1, "golanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module ", 6);
    v41.try_load(v32);
    (char)v13.try_begin_scan(a1);
    if (v13)
    {
        v52 = *((int128_t *)&v42);
        v0 = v13;
        *((int128_t *)&v1) = *((int128_t *)&v43);
        v3 = v44;
        v5 = v52;
        if (!(char)v0.is_match())
            goto LABEL_b9eba6;
        v21 = 0;
        v20 = a1;
        v23 = 0;
        v22 = a1;
        v0.new(v45, v46);
        memcpy(&v33, &v47, 16);
        v34 = v48;
        v35 = &v49;
        memcpy(&v36, &v50, 16);
        v37 = &v20;
        v38 = &v22;
        v39 = &v26;
        v40 = a1;
        if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        {
            v10 = v3;
            memcpy(&v9, &(char)v1, 16);
        }
        else
        {
            v19 = v7;
            v53 = *((int128_t *)&v0);
            v18 = v6;
            memcpy(&v17, &v3, 16);
            *((int128_t *)&v15) = (int128_t)(&v1)[8];
            v13 = v53;
            starship::modules::golang::module::{{closure}}(&v8, &v33, &(char)v13);
            if (*((int *)&v8) != 1)
            {
                v26.set_segments(&v9);
                *((int128_t *)&a0[80]) = *((int128_t *)&v31);
                a0[64] = v30;
                a0[48] = v29;
                a0[32] = v28;
                a0[16] = v27;
                *(a0) = v26;
                core::ptr::drop_in_place<std::sync::lazy_lock::LazyLock<core::option::Option<alloc::string::String>,starship::modules::golang::module::{{closure}}>>(&v22);
                core::ptr::drop_in_place<std::sync::lazy_lock::LazyLock<core::option::Option<alloc::string::String>,starship::modules::golang::module::{{closure}}>>(&v20);
                core::ptr::drop_in_place<starship::configs::go::GoConfig>(&v41);
                return;
            }
        }
        v12 = v10;
        v11 = v9;
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
        {
            v24 = &v11;
            v25 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
            v13 = &g_11f4d78;
            v14 = 1;
            v17 = 0;
            v15 = &v24;
            v16 = 1;
            v0 = "starship::modules::golangmod_versiongo version go(?:go\\s)(\\d+(\\.\\d+)+)Error in module `gradle`:\nsrc/modules/gradle.rs";
            v1 = 25;
            v2 = "starship::modules::golangmod_versiongo version go(?:go\\s)(\\d+(\\.\\d+)+)Error in module `gradle`:\nsrc/modules/gradle.rs";
            v3 = 25;
            v4 = log::__private_api::loc(&g_11f4d88);
            log::__private_api::log(&v13, 2, &v0);
        }
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v11);
        core::ptr::drop_in_place<std::sync::lazy_lock::LazyLock<core::option::Option<alloc::string::String>,starship::modules::golang::module::{{closure}}>>(&v22);
        core::ptr::drop_in_place<std::sync::lazy_lock::LazyLock<core::option::Option<alloc::string::String>,starship::modules::golang::module::{{closure}}>>(&v20);
    }
    else
    {
LABEL_b9eba6:
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    core::ptr::drop_in_place<starship::configs::go::GoConfig>(&v41);
    core::ptr::drop_in_place<starship::module::Module>(&v26);
    return;
}
