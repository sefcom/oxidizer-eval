long long starship::modules::meson::module(void* a0, unsigned long a1)
{
    int v0;  // [bp-0x238]
    unsigned long long v1;  // [bp-0x230]
    unsigned long long v2;  // [bp-0x228]
    int v3;  // [bp-0x218]
    unsigned long long v4;  // [bp-0x210]
    unsigned long long v5;  // [bp-0x208]
    char v6;  // [bp-0x1f8]
    int v7;  // [bp-0x1f0], Other Possible Types: char
    unsigned long long v8;  // [bp-0x1e0]
    int v9;  // [bp-0x1d8]
    unsigned long long v10;  // [bp-0x1c8]
    char v11;  // [bp-0x1c0], Other Possible Types: unsigned long, unsigned long long
    char v12;  // [bp-0x1b8], Other Possible Types: unsigned long long
    char v13;  // [bp-0x1b0], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x1a8]
    char v15;  // [bp-0x1a0], Other Possible Types: unsigned long long
    int v16;  // [bp-0x190]
    unsigned long long v17;  // [bp-0x180]
    int v18;  // [bp-0x178], Other Possible Types: char
    int v19;  // [bp-0x168], Other Possible Types: char
    int v20;  // [bp-0x158]
    int v21;  // [bp-0x148]
    int v22;  // [bp-0x138]
    char v23;  // [bp-0x128]
    unsigned long long v24;  // [bp-0x120]
    char *v25;  // [bp-0x118]
    unsigned long long v26;  // [bp-0x110]
    int v27;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned long long v28;  // [bp-0x100]
    int v29;  // [bp-0xf8], Other Possible Types: char *
    unsigned long long v30;  // [bp-0xf0]
    void* v31;  // [bp-0xe8], Other Possible Types: char
    int v32;  // [bp-0xd8]
    unsigned long long v33;  // [bp-0xc8]
    char v34;  // [bp-0xb8]
    char v35;  // [bp-0xa0]
    char *v36;  // [bp-0x90]
    char *v37;  // [bp-0x88]
    unsigned long v38;  // [bp-0x80]
    char v39;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v40;  // [bp-0x70]
    unsigned long long v41;  // [bp-0x68]
    unsigned long long v42;  // [bp-0x60]
    char v43;  // [bp-0x58]
    char v44;  // [bp-0x48]
    char v45;  // [bp-0x38]
    unsigned long v47;  // rdx
    int v48;  // xmm0

    v18.get_env("MESON_DEVENVMESON_PROJECT_NAMEError in module `meson`:\nsrc/modules/meson.rs", 12);
    if ((char)(((0 ^ *((long long *)&v18)) & (0 ^ -(*((long long *)&v18)))) >> 63))
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0;
    }
    v2 = *((long long *)&v19);
    v0 = v18;
    v18.get_env("MESON_PROJECT_NAMEError in module `meson`:\nsrc/modules/meson.rs", 18);
    if (*((long long *)&v18) == 0x8000000000000000)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        v5 = *((long long *)&v19);
        v3 = v18;
        if ((char)v1.equal(v2, "12falseDOCKER_CONFIGunix://Error in module `docker_context`:\n", 1))
        {
            core::str::<impl str>::trim_matches(v4, v5);
            if (!v47)
                goto LABEL_ba8d8a;
            v18.new_module(a1, "mesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config fil", 5);
            v39.try_load(v24);
            starship::modules::utils::truncate::truncate_text(&v34, v4, v5, *((int *)&v45), v39, v40);
            v11.new(v41, v42);
            memcpy(&v35, &v43, 16);
            v36 = &v44;
            v37 = &v34;
            v38 = a1;
            if (v11 == 0x8000000000000000)
            {
                v8 = v14;
                memcpy(&v7, &v12, 16);
LABEL_ba8e04:
                v10 = v8;
                v9 = v7;
                if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                {
                    v25 = &v9;
                    v26 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                    v27 = &g_11f5408;
                    v28 = 1;
                    v31 = 0;
                    v29 = &v25;
                    v30 = 1;
                    v11 = "starship::modules::mesonsrc/modules/mise.rs";
                    v12 = 24;
                    v13 = "starship::modules::mesonsrc/modules/mise.rs";
                    v14 = 24;
                    v15 = log::__private_api::loc(&g_11f5418);
                    log::__private_api::log(&v27, 2, &v11);
                }
                *((unsigned long long *)a0) = 0x8000000000000000;
                core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v9);
                core::ptr::drop_in_place<alloc::string::String>(&v34);
                core::ptr::drop_in_place<starship::module::Module>(&v18);
            }
            else
            {
                v33 = v17;
                v48 = *((int128_t *)&v11);
                v32 = v16;
                memcpy(&v31, &v15, 16);
                *((int128_t *)&v29) = *((int128_t *)&v13);
                v27 = v48;
                starship::modules::meson::module::{{closure}}(&v6, &v35, &(char)v27);
                if (*((int *)&v6) == 1)
                    goto LABEL_ba8e04;
                v18.set_segments(&(char)v7);
                *((int128_t *)&a0[80]) = *((int128_t *)&v23);
                a0[64] = v22;
                a0[48] = v21;
                a0[32] = v20;
                a0[16] = v19;
                *(a0) = v18;
                core::ptr::drop_in_place<alloc::string::String>(&v34);
            }
        }
        else
        {
LABEL_ba8d8a:
            *((unsigned long long *)a0) = 0x8000000000000000;
        }
        core::ptr::drop_in_place<alloc::string::String>(&(char)v3);
    }
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&(char)v0);
}
