void starship::modules::ocaml::module(void* a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x290]
    int v1;  // [bp-0x288], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x280]
    int v3;  // [bp-0x278], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x270]
    int v5;  // [bp-0x268]
    int v6;  // [bp-0x260]
    unsigned long long v7;  // [bp-0x250]
    char v8;  // [bp-0x248]
    int v9;  // [bp-0x240], Other Possible Types: char
    unsigned long long v10;  // [bp-0x230]
    int v11;  // [bp-0x228]
    unsigned long long v12;  // [bp-0x218]
    int v13;  // [bp-0x208], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x200]
    int v15;  // [bp-0x1f8], Other Possible Types: char *
    unsigned long long v16;  // [bp-0x1f0]
    void* v17;  // [bp-0x1e8], Other Possible Types: char
    int v18;  // [bp-0x1d8]
    unsigned long long v19;  // [bp-0x1c8]
    char *v20;  // [bp-0x1c0]
    unsigned long long v21;  // [bp-0x1b8]
    unsigned long v22;  // [bp-0x1b0]
    unsigned int v23;  // [bp-0x190]
    int v24;  // [bp-0x188], Other Possible Types: char
    int v25;  // [bp-0x178]
    int v26;  // [bp-0x168]
    int v27;  // [bp-0x158]
    int v28;  // [bp-0x148]
    char v29;  // [bp-0x138]
    unsigned long long v30;  // [bp-0x130]
    char v31;  // [bp-0x128]
    int v32;  // [bp-0x118]
    int v33;  // [bp-0x108]
    int v34;  // [bp-0xf8]
    char *v35;  // [bp-0xe8]
    char *v36;  // [bp-0xe0]
    unsigned long v37;  // [bp-0xd8]
    char *v38;  // [bp-0xd0]
    char v39;  // [bp-0xc8]
    char v40;  // [bp-0xc0]
    char v41;  // [bp-0xa8]
    int v42;  // [bp-0x90]
    unsigned long long v43;  // [bp-0x80]
    unsigned long long v44;  // [bp-0x78]
    char v45;  // [bp-0x70]
    int v46;  // [bp-0x60]
    int v47;  // [bp-0x50]
    int v48;  // [bp-0x40]
    char v49;  // [bp-0x30]
    int v51;  // xmm0
    int v52;  // xmm0

    v24.new_module(a1, "ocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config f", 5);
    v39.try_load(v30);
    (char)v13.try_begin_scan(a1);
    if (v13)
    {
        v51 = *((int128_t *)&v40);
        v0 = v13;
        *((int128_t *)&v1) = *((int128_t *)&v41);
        v3 = v42;
        v5 = v51;
        if (!(char)v0.is_match())
            goto LABEL_bac302;
        v23 = 0;
        v22 = a1;
        v0.new(v43, v44);
        memcpy(&v31, &v45, 16);
        v32 = v46;
        v33 = v47;
        v34 = v48;
        v35 = &v49;
        v36 = &v22;
        v37 = a1;
        v38 = &v24;
        if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        {
            v10 = v3;
            memcpy(&v9, &(char)v1, 16);
        }
        else
        {
            v19 = v7;
            v52 = *((int128_t *)&v0);
            v18 = v6;
            memcpy(&v17, &v3, 16);
            *((int128_t *)&v15) = (int128_t)(&v1)[8];
            v13 = v52;
            starship::modules::ocaml::module::{{closure}}(&v8, &v31, &(char)v13);
            if (*((int *)&v8) != 1)
            {
                v24.set_segments(&v9);
                *((int128_t *)&a0[80]) = *((int128_t *)&v29);
                a0[64] = v28;
                a0[48] = v27;
                a0[32] = v26;
                a0[16] = v25;
                *(a0) = v24;
                core::ptr::drop_in_place<std::sync::lazy_lock::LazyLock<core::option::Option<(starship::modules::ocaml::SwitchType,alloc::string::String)>,starship::modules::ocaml::module::{{closure}}>>(&v22);
                core::ptr::drop_in_place<starship::configs::ocaml::OCamlConfig>(&v39);
                return;
            }
        }
        v12 = v10;
        v11 = v9;
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
        {
            v20 = &v11;
            v21 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
            v13 = &g_11f5650;
            v14 = 1;
            v17 = 0;
            v15 = &v20;
            v16 = 1;
            v0 = "starship::modules::ocamlswitch_name-vnum";
            v1 = 24;
            v2 = "starship::modules::ocamlswitch_name-vnum";
            v3 = 24;
            v4 = log::__private_api::loc(&g_11f5660);
            log::__private_api::log(&v13, 2, &v0);
        }
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v11);
        core::ptr::drop_in_place<std::sync::lazy_lock::LazyLock<core::option::Option<(starship::modules::ocaml::SwitchType,alloc::string::String)>,starship::modules::ocaml::module::{{closure}}>>(&v22);
    }
    else
    {
LABEL_bac302:
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    core::ptr::drop_in_place<starship::configs::ocaml::OCamlConfig>(&v39);
    core::ptr::drop_in_place<starship::module::Module>(&v24);
    return;
}
