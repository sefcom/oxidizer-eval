long long starship::modules::guix_shell::module(void* a0, unsigned long a1)
{
    char v0;  // [bp-0x1b8]
    int v1;  // [bp-0x1b0], Other Possible Types: char
    unsigned long long v2;  // [bp-0x1a0]
    int v3;  // [bp-0x198]
    unsigned long long v4;  // [bp-0x188]
    int v5;  // [bp-0x178], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x170]
    int v7;  // [bp-0x168], Other Possible Types: char *
    unsigned long long v8;  // [bp-0x160]
    void* v9;  // [bp-0x158], Other Possible Types: char
    int v10;  // [bp-0x148]
    unsigned long long v11;  // [bp-0x138]
    char v12;  // [bp-0x128], Other Possible Types: unsigned long, unsigned long long
    char v13;  // [bp-0x120], Other Possible Types: unsigned long long
    char v14;  // [bp-0x118], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0x110]
    char v16;  // [bp-0x108], Other Possible Types: unsigned long long
    int v17;  // [bp-0xf8]
    unsigned long long v18;  // [bp-0xe8]
    char *v19;  // [bp-0xe0]
    unsigned long long v20;  // [bp-0xd8]
    char v21;  // [bp-0xd0]
    char *v22;  // [bp-0xc0]
    unsigned long v23;  // [bp-0xb8]
    int v24;  // [bp-0xb0], Other Possible Types: char
    int v25;  // [bp-0xa0]
    int v26;  // [bp-0x90]
    int v27;  // [bp-0x80]
    int v28;  // [bp-0x70]
    char v29;  // [bp-0x60]
    unsigned long long v30;  // [bp-0x58]
    char v31;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v32;  // [bp-0x48]
    char v33;  // [bp-0x40]
    char v34;  // [bp-0x30]
    int v36;  // xmm0
    unsigned long long v37;  // rax

    v24.new_module(a1, "guix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' ", 10);
    v31.try_load(v30);
    (char)v5.get_env("GUIX_ENVIRONMENTstruct ElmConfig", 16);
    core::ptr::drop_in_place<regex::error::Error>(&(char)v5);
    if ((char)(((0 ^ v5) & (0 ^ -(v5))) >> 63))
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        v12.new(v31, v32);
        memcpy(&v21, &v33, 16);
        v22 = &v34;
        v23 = a1;
        if (v12 == 0x8000000000000000)
        {
            v2 = v15;
            memcpy(&v1, &v13, 16);
        }
        else
        {
            v11 = v18;
            v36 = *((int128_t *)&v12);
            v10 = v17;
            memcpy(&v9, &v16, 16);
            *((int128_t *)&v7) = *((int128_t *)&v14);
            v5 = v36;
            starship::modules::guix_shell::module::{{closure}}(&v0, &v21, &(char)v5);
            if (*((int *)&v0) != 1)
            {
                v37 = v24.set_segments(&v1);
                *((int128_t *)&a0[80]) = *((int128_t *)&v29);
                a0[64] = v28;
                a0[48] = v27;
                a0[32] = v26;
                a0[16] = v25;
                *(a0) = v24;
                return v37;
            }
        }
        v4 = v2;
        v3 = v1;
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
        {
            v19 = &v3;
            v20 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
            v5 = &g_11f4e00;
            v6 = 1;
            v9 = 0;
            v7 = &v19;
            v8 = 1;
            v12 = "starship::modules::guix_shellError in module `haskell`:\nsrc/modules/haskell.rs";
            v13 = 29;
            v14 = "starship::modules::guix_shellError in module `haskell`:\nsrc/modules/haskell.rs";
            v15 = 29;
            v16 = log::__private_api::loc(&g_11f4e10);
            log::__private_api::log(&v5, 2, &v12);
        }
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v3);
    }
    return (unsigned long long)core::ptr::drop_in_place<starship::module::Module>(&v24);
}
