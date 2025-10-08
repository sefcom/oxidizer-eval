void starship::modules::azure::module(void* a0, unsigned long a1)
{
    unsigned long v0;  // [bp-0x270], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x268]
    unsigned long long v2;  // [bp-0x260]
    unsigned long long v3;  // [bp-0x258]
    unsigned long long v4;  // [bp-0x250]
    int v5;  // [bp-0x240]
    unsigned long long v6;  // [bp-0x230]
    int v7;  // [bp-0x228], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x220]
    int v9;  // [bp-0x218], Other Possible Types: char *, unsigned long long
    int v10;  // [bp-0x210], Other Possible Types: unsigned long long
    void* v11;  // [bp-0x208], Other Possible Types: char
    int v12;  // [bp-0x1f8]
    unsigned long long v13;  // [bp-0x1e8]
    char v14;  // [bp-0x1d8]
    int v15;  // [bp-0x1d0], Other Possible Types: char
    unsigned long long v16;  // [bp-0x1c0]
    int v17;  // [bp-0x1b8]
    unsigned long long v18;  // [bp-0x1a8]
    char *v19;  // [bp-0x198]
    unsigned long long v20;  // [bp-0x190]
    unsigned long long v21;  // [bp-0x188]
    int v22;  // [bp-0x180]
    int v23;  // [bp-0x170]
    int v24;  // [bp-0x160]
    char v25;  // [bp-0x150], Other Possible Types: unsigned long long
    int v26;  // [bp-0x148]
    int v27;  // [bp-0x138]
    int v28;  // [bp-0x128]
    char v29;  // [bp-0x118]
    char *v30;  // [bp-0x108]
    char *v31;  // [bp-0x100]
    char *v32;  // [bp-0xf8]
    char *v33;  // [bp-0xf0]
    unsigned long v34;  // [bp-0xe8]
    int v35;  // [bp-0xe0], Other Possible Types: char
    int v36;  // [bp-0xd0]
    int v37;  // [bp-0xc0]
    int v38;  // [bp-0xb0]
    int v39;  // [bp-0xa0]
    char v40;  // [bp-0x90]
    unsigned long long v41;  // [bp-0x88]
    char v42;  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned long long v43;  // [bp-0x78]
    char v44;  // [bp-0x70]
    char v45;  // [bp-0x60]
    char v46;  // [bp-0x50]
    char v47;  // [bp-0x20]
    int v49;  // xmm0

    v35.new_module(a1, "azuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 5);
    v42.try_load(v41);
    if (v47)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        starship::modules::azure::get_azure_profile_info(&v25, a1);
        if ((char)(((0 ^ v25) & (0 ^ -(v25))) >> 63))
        {
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 3)
            {
                v7 = &g_11f3bc0;
                v8 = 1;
                v9 = 8;
                *((uint128_t *)&v10) = 0;
                v0 = "starship::modules::azuresubscriptionazureProfile.jsonFailed to parse azure profile.";
                v1 = 24;
                v2 = "starship::modules::azuresubscriptionazureProfile.jsonFailed to parse azure profile.";
                v3 = 24;
                v4 = log::__private_api::loc(&g_11f3bf8);
                log::__private_api::log(&v7, 3, &v0);
            }
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<core::ops::control_flow::ControlFlow<starship::modules::azure::Subscription>>(&v25);
        }
        else
        {
            v24 = v28;
            v23 = v27;
            v22 = v26;
            v21 = v25;
            (char)v0.new(v42, v43);
            memcpy(&v29, &v44, 16);
            v30 = &v45;
            v31 = &v46;
            v32 = &v21;
            v33 = &v23;
            v34 = a1;
            if (v0 == 0x8000000000000000)
            {
                v16 = v3;
                memcpy(&v15, &(char)v1, 16);
            }
            else
            {
                v13 = v6;
                v49 = *((int128_t *)&v0);
                v12 = v5;
                memcpy(&v11, &v4, 16);
                *((int128_t *)&v9) = *((int128_t *)&v2);
                v7 = v49;
                starship::modules::azure::module::{{closure}}(&v14, &v29, &(char)v7);
                if (*((int *)&v14) != 1)
                {
                    v35.set_segments(&v15);
                    *((int128_t *)&a0[80]) = *((int128_t *)&v40);
                    a0[64] = v39;
                    a0[48] = v38;
                    a0[32] = v37;
                    a0[16] = v36;
                    *(a0) = v35;
                    core::ptr::drop_in_place<starship::modules::azure::Subscription>(&v21);
                    core::ptr::drop_in_place<starship::configs::azure::AzureConfig>(&v42);
                    return;
                }
            }
            v18 = v16;
            v17 = v15;
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
            {
                v19 = &v17;
                v20 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                v7 = &g_11f3bd0;
                v8 = 1;
                v11 = 0;
                v9 = &v19;
                v10 = 1;
                v0 = "starship::modules::azuresubscriptionazureProfile.jsonFailed to parse azure profile.";
                v1 = 24;
                v2 = "starship::modules::azuresubscriptionazureProfile.jsonFailed to parse azure profile.";
                v3 = 24;
                v4 = log::__private_api::loc(&g_11f3be0);
                log::__private_api::log(&v7, 2, &v0);
            }
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v17);
            core::ptr::drop_in_place<starship::modules::azure::Subscription>(&v21);
        }
    }
    core::ptr::drop_in_place<starship::configs::azure::AzureConfig>(&v42);
    core::ptr::drop_in_place<starship::module::Module>(&v35);
    return;
}
