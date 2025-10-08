void starship::modules::openstack::module(void* a0, unsigned long a1)
{
    char v0;  // [bp-0x208]
    unsigned long long v1;  // [bp-0x1f8]
    char v2;  // [bp-0x1e8]
    unsigned long long v3;  // [bp-0x1d8]
    int v4;  // [bp-0x1c8], Other Possible Types: char, unsigned long long
    unsigned long long v5;  // [bp-0x1c0]
    int v6;  // [bp-0x1b8], Other Possible Types: char *, unsigned long long
    char v7;  // [bp-0x1b0], Other Possible Types: unsigned long long
    int v8;  // [bp-0x1a8], Other Possible Types: void*
    unsigned long long v9;  // [bp-0x1a0]
    int v10;  // [bp-0x198]
    unsigned long long v11;  // [bp-0x188]
    char v12;  // [bp-0x178]
    int v13;  // [bp-0x170], Other Possible Types: char
    unsigned long long v14;  // [bp-0x160]
    int v15;  // [bp-0x158]
    unsigned long long v16;  // [bp-0x148]
    char v17;  // [bp-0x138], Other Possible Types: unsigned long, unsigned long long
    char v18;  // [bp-0x130], Other Possible Types: unsigned long long
    char v19;  // [bp-0x128], Other Possible Types: unsigned long long
    unsigned long long v20;  // [bp-0x120]
    char v21;  // [bp-0x118], Other Possible Types: unsigned long long
    int v22;  // [bp-0x108]
    unsigned long long v23;  // [bp-0xf8]
    char *v24;  // [bp-0xf0]
    unsigned long long v25;  // [bp-0xe8]
    char v26;  // [bp-0xe0]
    char *v27;  // [bp-0xd0]
    char *v28;  // [bp-0xc8]
    char *v29;  // [bp-0xc0]
    unsigned long v30;  // [bp-0xb8]
    int v31;  // [bp-0xb0], Other Possible Types: char
    int v32;  // [bp-0xa0]
    int v33;  // [bp-0x90]
    int v34;  // [bp-0x80]
    int v35;  // [bp-0x70]
    char v36;  // [bp-0x60]
    unsigned long long v37;  // [bp-0x58]
    char v38;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v39;  // [bp-0x48]
    char v40;  // [bp-0x40]
    char v41;  // [bp-0x30]
    int v43;  // xmm0
    int v44;  // xmm1

    v31.new_module(a1, "openstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 9);
    v38.try_load(v37);
    starship::modules::openstack::get_osp_cloud_and_project(&v4, a1);
    v1 = v6;
    memcpy(&v0, &v4, 16);
    v3 = v9;
    memcpy(&v2, &v7, 16);
    if ((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63))
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        v17.new(v38, v39);
        memcpy(&v26, &v40, 16);
        v27 = &v41;
        v28 = &v0;
        v29 = &v2;
        v30 = a1;
        if (v17 == 0x8000000000000000)
        {
            v14 = v20;
            memcpy(&v13, &v18, 16);
        }
        else
        {
            v11 = v23;
            v43 = *((int128_t *)&v17);
            v44 = *((int128_t *)&v19);
            v10 = v22;
            *((int128_t *)&v8) = *((int128_t *)&v21);
            v6 = v44;
            v4 = v43;
            starship::modules::openstack::module::{{closure}}(&v12, &v26, &v4);
            if (*((int *)&v12) != 1)
            {
                v31.set_segments(&(char)v13);
                *((int128_t *)&a0[80]) = *((int128_t *)&v36);
                a0[64] = v35;
                a0[48] = v34;
                a0[32] = v33;
                a0[16] = v32;
                *(a0) = v31;
                core::ptr::drop_in_place<regex::error::Error>(&v2);
                core::ptr::drop_in_place<regex::error::Error>(&v0);
                return;
            }
        }
        v16 = v14;
        v15 = v13;
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0))
        {
            v24 = &v15;
            v25 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
            v4 = &g_11f5788;
            v5 = 1;
            v8 = 0;
            v6 = &v24;
            v7 = 1;
            v17 = "starship::modules::openstackcloudError in module `os`:\nsrc/modules/os.rs";
            v18 = 28;
            v19 = "starship::modules::openstackcloudError in module `os`:\nsrc/modules/os.rs";
            v20 = 28;
            v21 = log::__private_api::loc(&g_11f5798);
            log::__private_api::log(&v4, 1, &v17);
        }
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v15);
    }
    core::ptr::drop_in_place<regex::error::Error>(&v2);
    core::ptr::drop_in_place<regex::error::Error>(&v0);
    core::ptr::drop_in_place<starship::module::Module>(&v31);
    return;
}
