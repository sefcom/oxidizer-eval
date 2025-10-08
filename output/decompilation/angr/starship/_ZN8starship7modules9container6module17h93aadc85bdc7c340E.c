void starship::modules::container::module(void* a0, unsigned long a1)
{
    char v0;  // [bp-0x1d8]
    unsigned long long v1;  // [bp-0x1c8]
    int v2;  // [bp-0x1b8], Other Possible Types: char, unsigned long long
    unsigned long long v3;  // [bp-0x1b0]
    int v4;  // [bp-0x1a8], Other Possible Types: char *, unsigned long long
    unsigned long long v5;  // [bp-0x1a0]
    void* v6;  // [bp-0x198], Other Possible Types: char
    int v7;  // [bp-0x188]
    unsigned long long v8;  // [bp-0x178]
    char v9;  // [bp-0x168]
    int v10;  // [bp-0x160], Other Possible Types: char
    unsigned long long v11;  // [bp-0x150]
    int v12;  // [bp-0x148]
    unsigned long long v13;  // [bp-0x138]
    char v14;  // [bp-0x130], Other Possible Types: unsigned long, unsigned long long
    char v15;  // [bp-0x128], Other Possible Types: unsigned long long
    char v16;  // [bp-0x120], Other Possible Types: unsigned long long
    unsigned long long v17;  // [bp-0x118]
    char v18;  // [bp-0x110], Other Possible Types: unsigned long long
    int v19;  // [bp-0x100]
    unsigned long long v20;  // [bp-0xf0]
    char *v21;  // [bp-0xe8]
    unsigned long long v22;  // [bp-0xe0]
    char v23;  // [bp-0xd8]
    char *v24;  // [bp-0xc8]
    char *v25;  // [bp-0xc0]
    unsigned long v26;  // [bp-0xb8]
    int v27;  // [bp-0xb0], Other Possible Types: char
    int v28;  // [bp-0xa0]
    int v29;  // [bp-0x90]
    int v30;  // [bp-0x80]
    int v31;  // [bp-0x70]
    char v32;  // [bp-0x60]
    unsigned long long v33;  // [bp-0x58]
    char v34;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v35;  // [bp-0x48]
    char v36;  // [bp-0x40]
    char v37;  // [bp-0x30]
    char v38;  // [bp-0x20]
    int v40;  // xmm0

    v27.new_module(a1, "containernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 9);
    v34.try_load(v33);
    if (v38)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        starship::modules::container::module::container_name(&(char)v2);
        if ((char)(((0 ^ v2) & (0 ^ -(v2))) >> 63))
        {
            *((unsigned long long *)a0) = 0x8000000000000000;
        }
        else
        {
            v1 = v4;
            memcpy(&v0, &v2, 16);
            v14.new(v34, v35);
            memcpy(&v23, &v36, 16);
            v24 = &v37;
            v25 = &v0;
            v26 = a1;
            if (v14 == 0x8000000000000000)
            {
                v11 = v17;
                memcpy(&v10, &v15, 16);
            }
            else
            {
                v8 = v20;
                v40 = *((int128_t *)&v14);
                v7 = v19;
                memcpy(&v6, &v18, 16);
                *((int128_t *)&v4) = *((int128_t *)&v16);
                v2 = v40;
                starship::modules::container::module::{{closure}}(&v9, &v23, &(char)v2);
                if (*((int *)&v9) != 1)
                {
                    v27.set_segments(&(char)v10);
                    *((int128_t *)&a0[80]) = *((int128_t *)&v32);
                    a0[64] = v31;
                    a0[48] = v30;
                    a0[32] = v29;
                    a0[16] = v28;
                    *(a0) = v27;
                    core::ptr::drop_in_place<alloc::string::String>(&v0);
                    return;
                }
            }
            v13 = v11;
            v12 = v10;
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
            {
                v21 = &v12;
                v22 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                v2 = &g_11f3e38;
                v3 = 1;
                v6 = 0;
                v4 = &v21;
                v5 = 1;
                v14 = "starship::modules::containerOpenVZ/run/host/container-managerOCI/dev/incus/sockIncus/run/.containerenv/run/systemd/containerdockerSystemdDockerwsl/.dockerenvpodmanname=\"image=\"Error in module `crystal`:\nsrc/modules/crystal.rs";
                v15 = 28;
                v16 = "starship::modules::containerOpenVZ/run/host/container-managerOCI/dev/incus/sockIncus/run/.containerenv/run/systemd/containerdockerSystemdDockerwsl/.dockerenvpodmanname=\"image=\"Error in module `crystal`:\nsrc/modules/crystal.rs";
                v17 = 28;
                v18 = log::__private_api::loc(&g_11f3e48);
                log::__private_api::log(&v2, 2, &v14);
            }
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v12);
            core::ptr::drop_in_place<alloc::string::String>(&v0);
        }
    }
    core::ptr::drop_in_place<starship::module::Module>(&v27);
    return;
}
