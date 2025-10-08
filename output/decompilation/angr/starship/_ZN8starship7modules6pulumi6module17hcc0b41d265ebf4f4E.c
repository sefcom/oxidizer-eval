void starship::modules::pulumi::module(void* a0, unsigned long long a1[28])
{
    unsigned long long v0;  // [bp-0x210]
    unsigned long long v1;  // [bp-0x208]
    unsigned long long v2;  // [bp-0x200]
    int v3;  // [bp-0x1f8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x1f0]
    int v5;  // [bp-0x1e8]
    int v6;  // [bp-0x1e0]
    unsigned long long v7;  // [bp-0x1d0]
    int v8;  // [bp-0x1c8], Other Possible Types: char, unsigned long long
    unsigned long long v9;  // [bp-0x1c0]
    int v10;  // [bp-0x1b8], Other Possible Types: char *, unsigned long long
    char v11;  // [bp-0x1b0], Other Possible Types: unsigned long long
    int v12;  // [bp-0x1a8], Other Possible Types: void*
    char v13;  // [bp-0x1a0]
    int v14;  // [bp-0x198]
    unsigned long long v15;  // [bp-0x188]
    char v16;  // [bp-0x178]
    unsigned long long v17;  // [bp-0x168]
    char v18;  // [bp-0x158]
    int v19;  // [bp-0x150], Other Possible Types: char
    unsigned long long v20;  // [bp-0x140]
    int v21;  // [bp-0x138]
    unsigned long long v22;  // [bp-0x128]
    char *v23;  // [bp-0x118]
    unsigned long long v24;  // [bp-0x110]
    int v25;  // [bp-0x108], Other Possible Types: char
    int v26;  // [bp-0xf8]
    int v27;  // [bp-0xe8]
    int v28;  // [bp-0xd8]
    int v29;  // [bp-0xc8]
    char v30;  // [bp-0xb8]
    unsigned long long v31;  // [bp-0xb0]
    char v32;  // [bp-0xa8]
    int v33;  // [bp-0x98]
    char *v34;  // [bp-0x88]
    unsigned long long v35[28];  // [bp-0x80]
    char *v36;  // [bp-0x78]
    char *v37;  // [bp-0x70]
    char v38;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v39;  // [bp-0x60]
    char v40;  // [bp-0x58]
    int v41;  // [bp-0x48]
    char v42;  // [bp-0x38]
    char v43;  // [bp-0x27]
    int v45;  // xmm0
    int v46;  // xmm0
    int v47;  // xmm1

    v25.new_module(a1, "pulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven", 6);
    v38.try_load(v31);
    v8.try_begin_scan(a1);
    if (v8)
    {
        v45 = *((int128_t *)&v11);
        *((int128_t *)&v5) = *((int128_t *)&v13);
        v3 = v45;
        v0 = v8;
        v1 = &g_11f5b70;
        v2 = 2;
        if (!(char)v0.is_match() && v43 != 1)
            goto LABEL_bb3528;
        starship::modules::pulumi::find_package_file(&v8, a1[26], a1[27]);
        if ((char)(((0 ^ v8) & (0 ^ -(v8))) >> 63))
        {
            *((unsigned long long *)a0) = 0x8000000000000000;
        }
        else
        {
            v17 = v10;
            memcpy(&v16, &v8, 16);
            v0.new(v38, v39);
            memcpy(&v32, &v40, 16);
            v33 = v41;
            v34 = &v42;
            v35[0] = a1;
            v36 = &v25;
            v37 = &v16;
            if (v0 == 0x8000000000000000)
            {
                v20 = v3;
                memcpy(&v19, &v1, 16);
            }
            else
            {
                v15 = v7;
                v46 = *((int128_t *)&v0);
                v47 = *((int128_t *)&v2);
                v14 = v6;
                *((int128_t *)&v12) = (int128_t)(&v3)[8];
                v10 = v47;
                v8 = v46;
                starship::modules::pulumi::module::{{closure}}(&v18, &v32, &v8);
                if (*((int *)&v18) != 1)
                {
                    v25.set_segments(&v19);
                    *((int128_t *)&a0[80]) = *((int128_t *)&v30);
                    a0[64] = v29;
                    a0[48] = v28;
                    a0[32] = v27;
                    a0[16] = v26;
                    *(a0) = v25;
                    core::ptr::drop_in_place<std::path::PathBuf>(&v16);
                    return;
                }
            }
            v22 = v20;
            v21 = v19;
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
            {
                v23 = &v21;
                v24 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                v8 = &g_11f5b60;
                v9 = 1;
                v12 = 0;
                v10 = &v23;
                v11 = 1;
                v0 = "starship::modules::pulumistackLooking for package file in Did not find a Pulumi package fileFound project name: Trying to read workspace_file: Read workspace_file: Parsed  into yaml-workspace.json";
                v1 = 25;
                v2 = "starship::modules::pulumistackLooking for package file in Did not find a Pulumi package fileFound project name: Trying to read workspace_file: Read workspace_file: Parsed  into yaml-workspace.json";
                v3 = 25;
                v4 = log::__private_api::loc(&g_11f5b90);
                log::__private_api::log(&v8, 2, &v0);
            }
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v21);
            core::ptr::drop_in_place<std::path::PathBuf>(&v16);
        }
    }
    else
    {
LABEL_bb3528:
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    core::ptr::drop_in_place<starship::module::Module>(&v25);
    return;
}
