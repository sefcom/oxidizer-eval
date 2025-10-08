long long starship::modules::battery::module(void* a0, unsigned long long a1[76])
{
    char v0;  // [bp-0x2dd]
    int v1;  // [bp-0x2d8], Other Possible Types: char *
    unsigned long long v2;  // [bp-0x2d0]
    unsigned long long v3;  // [bp-0x2c8]
    int v4;  // [bp-0x2b8]
    char v5;  // [bp-0x2b0]
    unsigned long long v6;  // [bp-0x2a8]
    unsigned long long v7;  // [bp-0x2a0]
    char *v8;  // [bp-0x298], Other Possible Types: unsigned long long
    char v9;  // [bp-0x298]
    unsigned long long v10;  // [bp-0x298]
    int v11;  // [bp-0x290], Other Possible Types: unsigned long long
    char *v12;  // [bp-0x288], Other Possible Types: unsigned long
    int v13;  // [bp-0x280], Other Possible Types: unsigned long long
    void* v14;  // [bp-0x278]
    int v15;  // [bp-0x270]
    int v16;  // [bp-0x260]
    int v17;  // [bp-0x250]
    unsigned long long v18;  // [bp-0x240]
    unsigned long long v19;  // [bp-0x238]
    unsigned long long v20;  // [bp-0x230]
    unsigned long long v21;  // [bp-0x228]
    unsigned long long v22;  // [bp-0x220]
    unsigned long long v23;  // [bp-0x218]
    char *v24;  // [bp-0x1f0]
    unsigned long long v25;  // [bp-0x1e8]
    int v26;  // [bp-0x1e0], Other Possible Types: char
    int v27;  // [bp-0x1d0]
    int v28;  // [bp-0x1c0]
    int v29;  // [bp-0x1b0]
    int v30;  // [bp-0x1a0]
    char v31;  // [bp-0x190]
    unsigned long long v32;  // [bp-0x188]
    char v33;  // [bp-0x180], Other Possible Types: unsigned long long
    char v34;  // [bp-0x178]
    char v35;  // [bp-0x170]
    unsigned long long v36;  // [bp-0x168]
    int v37;  // [bp-0x160]
    int v38;  // [bp-0x150]
    unsigned long long v39;  // [bp-0x140]
    char v40;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v41;  // [bp-0x130]
    unsigned long v42;  // [bp-0x128]
    int v43;  // [bp-0x120]
    int v44;  // [bp-0x110]
    int v45;  // [bp-0x100]
    int v46;  // [bp-0xf0]
    int v47;  // [bp-0xe0]
    unsigned long long v48;  // [bp-0xd0]
    char v49;  // [bp-0xc8]
    char v50;  // [bp-0xb8]
    char v51;  // [bp-0xa8]
    int v52;  // [bp-0x98]
    int v53;  // [bp-0x88]
    unsigned long long v54;  // [bp-0x78]
    char v55;  // [bp-0x70]
    char v57;  // al
    unsigned long long v58;  // rax
    unsigned long long v59;  // r12
    char *v60;  // rdi

    v57 = starship::modules::battery::get_battery_status(a1[74], a1[75]);
    if (v57 == 5)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v0 = v57;
    v26.new_module(a1, "batterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 7);
    v40.try_load(v32);
    v10 = v41;
    v11 = v42 * 56 + v10;
    v12 = &vvar_104{reg 224};
    v58 = v10.reduce();
    if (v58)
    {
        v59 = v58;
        v33.new(v48, *((long long *)&v49));
        if ((char)(((0 ^ v33) & (0 ^ -(v33))) >> 63))
        {
            v6 = v36;
            *((int128_t *)&v4) = *((int128_t *)&v34);
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
            {
                v1 = &(char)v4;
                v2 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                v8 = &g_11f6570;
                v11 = 1;
                v14 = 0;
                v12 = &v1;
                v13 = 1;
                v19 = "starship::modules::batterypercentageBattery found: Unable to access battery information:\nError in module `typst`:\nsrc/modules/typst.rs";
                v20 = 26;
                v21 = "starship::modules::batterypercentageBattery found: Unable to access battery information:\nError in module `typst`:\nsrc/modules/typst.rs";
                v22 = 26;
                v23 = log::__private_api::loc(&g_11f6598);
                log::__private_api::log(&v8, 2, &v19);
            }
            *((unsigned long long *)a0) = 0x8000000000000000;
            v60 = &(char)v4;
        }
        else
        {
            v54 = v39;
            v53 = v38;
            v52 = v37;
            memcpy(&v51, &v35, 16);
            memcpy(&v50, &v33, 16);
            v8 = &v0;
            v11 = v43;
            v13 = v44;
            v15 = v45;
            v16 = v46;
            v17 = v47;
            v18 = v59;
            (char)v19.map_meta(&v50, &v8);
            v8.map_style(&(char)v19, v59);
            v55.map(&v8, &vvar_104{reg 224});
            v9 = 2;
            (char)v4.parse(&v55, &v9, a1);
            if ((int)v4 != 1)
            {
                v26.set_segments(&v5);
                *((int128_t *)&a0[80]) = *((int128_t *)&v31);
                a0[64] = v30;
                a0[48] = v29;
                a0[32] = v28;
                a0[16] = v27;
                *(a0) = v26;
                return (unsigned long long)core::ptr::drop_in_place<starship::configs::battery::BatteryConfig>(v40, v10);
            }
            v3 = v7;
            *((int128_t *)&v1) = *((int128_t *)&v5);
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
            {
                v24 = &(char)v1;
                v25 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                v8 = &g_11f6560;
                v11 = 1;
                v14 = 0;
                v12 = &v24;
                v13 = 1;
                v19 = "starship::modules::batterypercentageBattery found: Unable to access battery information:\nError in module `typst`:\nsrc/modules/typst.rs";
                v20 = 26;
                v21 = "starship::modules::batterypercentageBattery found: Unable to access battery information:\nError in module `typst`:\nsrc/modules/typst.rs";
                v22 = 26;
                v23 = log::__private_api::loc(&g_11f6580);
                log::__private_api::log(&v8, 2, &v19);
            }
            *((unsigned long long *)a0) = 0x8000000000000000;
            v60 = &(char)v1;
        }
        core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(v60);
    }
    else
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    core::ptr::drop_in_place<starship::configs::battery::BatteryConfig>(v40, v10);
    return (unsigned long long)core::ptr::drop_in_place<starship::module::Module>(&v26);
}
