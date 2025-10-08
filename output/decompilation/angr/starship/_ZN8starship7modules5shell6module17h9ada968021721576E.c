double starship::modules::shell::module(long long a0, long long a1)
{
    unsigned long v0;  // [bp-0x300]
    char v1;  // [bp-0x2f8]
    int v2;  // [bp-0x2f0], Other Possible Types: char
    unsigned long long v3;  // [bp-0x2e0]
    int v4;  // [bp-0x2d8]
    unsigned long long v5;  // [bp-0x2c8]
    char v6;  // [bp-0x2c0], Other Possible Types: unsigned long long
    char v7;  // [bp-0x2b8], Other Possible Types: unsigned long long
    char v8;  // [bp-0x2b0], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x2a8]
    char v10;  // [bp-0x2a0], Other Possible Types: unsigned long long
    int v11;  // [bp-0x290]
    unsigned long long v12;  // [bp-0x280]
    char *v13;  // [bp-0x278]
    unsigned long long v14;  // [bp-0x270]
    int v15;  // [bp-0x268], Other Possible Types: unsigned long long
    unsigned long long v16;  // [bp-0x260]
    int v17;  // [bp-0x258], Other Possible Types: char *
    unsigned long long v18;  // [bp-0x250]
    void* v19;  // [bp-0x248], Other Possible Types: char
    int v20;  // [bp-0x238]
    unsigned long long v21;  // [bp-0x228]
    int v22;  // [bp-0x220], Other Possible Types: char
    int v23;  // [bp-0x210]
    int v24;  // [bp-0x200]
    int v25;  // [bp-0x1f0]
    int v26;  // [bp-0x1e0]
    char v27;  // [bp-0x1d0]
    unsigned long long v28;  // [bp-0x1c8]
    char *v29;  // [bp-0x1c0]
    char *v30;  // [bp-0x1b8]
    int v31;  // [bp-0x1b0]
    int v32;  // [bp-0x1a0]
    int v33;  // [bp-0x190]
    char *v34;  // [bp-0x180]
    int v35;  // [bp-0x178]
    int v36;  // [bp-0x168]
    int v37;  // [bp-0x158]
    int v38;  // [bp-0x148]
    int v39;  // [bp-0x138]
    int v40;  // [bp-0x128]
    int v41;  // [bp-0x118]
    char *v42;  // [bp-0x108]
    unsigned long v43;  // [bp-0x100]
    char v44;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v45;  // [bp-0xf0]
    char v46;  // [bp-0xe8]
    int v47;  // [bp-0xd8]
    int v48;  // [bp-0xc8]
    int v49;  // [bp-0xb8]
    int v50;  // [bp-0xa8]
    int v51;  // [bp-0x98]
    int v52;  // [bp-0x88]
    int v53;  // [bp-0x78]
    int v54;  // [bp-0x68]
    int v55;  // [bp-0x58]
    int v56;  // [bp-0x48]
    char v57;  // [bp-0x38]
    char v58;  // [bp-0x28]
    char v59;  // [bp-0x18]
    int v61;  // xmm0
    int v62;  // xmm0
    unsigned long v63;  // xmm0lq

    v22.new_module(a1, "shellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 5);
    v44.try_load(v28);
    if (v59)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        v0 = a1 + 1736;
        v6.new(v44, v45);
        v29 = &v0;
        v30 = &v46;
        v31 = v47;
        v32 = v48;
        v33 = v49;
        v34 = &v58;
        v35 = v50;
        v36 = v51;
        v37 = v52;
        v38 = v53;
        v39 = v54;
        v40 = v55;
        v41 = v56;
        v42 = &v57;
        v43 = a1;
        if ((char)(((0 ^ v6) & (0 ^ -(v6))) >> 63))
        {
            v3 = v9;
            memcpy(&v2, &v7, 16);
        }
        else
        {
            v21 = v12;
            v61 = *((int128_t *)&v6);
            v20 = v11;
            memcpy(&v19, &v10, 16);
            *((int128_t *)&v17) = *((int128_t *)&v8);
            v15 = v61;
            starship::modules::shell::module::{{closure}}(&v1, &v29, &(char)v15);
            if (*((int *)&v1) != 1)
            {
                v22.set_segments(&(char)v2);
                *((int128_t *)&a0[80]) = *((int128_t *)&v27);
                a0[64] = v26;
                a0[48] = v25;
                a0[32] = v24;
                a0[16] = v23;
                *(a0) = v22;
                return (unsigned long long)v22;
            }
        }
        v5 = v3;
        v62 = v2;
        v63 = (unsigned long long)v62;
        v4 = v62;
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
        {
            v13 = &v4;
            v14 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
            v15 = &g_11f6100;
            v16 = 1;
            v19 = 0;
            v17 = &v13;
            v18 = 1;
            v6 = "starship::modules::shellindicatorbash_indicatorfish_indicatorzsh_indicatorpowershell_indicatorpwsh_indicatorion_indicatortcsh_indicatorxonsh_indicatorcmd_indicatorunknown_indicatorError in module `shlvl`:\nsrc/modules/shlvl.rs";
            v7 = 24;
            v8 = "starship::modules::shellindicatorbash_indicatorfish_indicatorzsh_indicatorpowershell_indicatorpwsh_indicatorion_indicatortcsh_indicatorxonsh_indicatorcmd_indicatorunknown_indicatorError in module `shlvl`:\nsrc/modules/shlvl.rs";
            v9 = 24;
            v10 = log::__private_api::loc(&g_11f6110);
            log::__private_api::log(&v15, 2, &v6);
        }
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v4);
    }
    core::ptr::drop_in_place<starship::module::Module>(&v22);
    return v63;
}
