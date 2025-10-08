void starship::modules::direnv::module(void* a0, unsigned long a1)
{
    char v0;  // [bp-0x318]
    unsigned long long v1;  // [bp-0x308]
    char v2;  // [bp-0x2f8], Other Possible Types: unsigned long
    char v3;  // [bp-0x2f0]
    char v4;  // [bp-0x2e8]
    unsigned long long v5;  // [bp-0x2e0]
    char *v6;  // [bp-0x2d8]
    unsigned long long v7;  // [bp-0x2d0]
    char v8;  // [bp-0x2c8], Other Possible Types: unsigned long long
    char v9;  // [bp-0x2c0], Other Possible Types: unsigned long long
    char *v10;  // [bp-0x2b8]
    char v11;  // [bp-0x2b0], Other Possible Types: unsigned long long
    void* v12;  // [bp-0x2a8]
    char v13;  // [bp-0x2a0]
    unsigned long long v14;  // [bp-0x290]
    unsigned long long v15;  // [bp-0x288]
    unsigned long long v16;  // [bp-0x280]
    unsigned long long v17;  // [bp-0x278]
    unsigned long long v18;  // [bp-0x270]
    int v19;  // [bp-0x268]
    int v20;  // [bp-0x258]
    unsigned long long v21;  // [bp-0x240]
    int v22;  // [bp-0x238]
    unsigned long long v23;  // [bp-0x230]
    int v24;  // [bp-0x228]
    int v25;  // [bp-0x218], Other Possible Types: unsigned long long
    char *v26;  // [bp-0x208]
    char *v27;  // [bp-0x200]
    char *v28;  // [bp-0x1f8]
    char *v29;  // [bp-0x1f0]
    char *v30;  // [bp-0x1e8]
    char *v31;  // [bp-0x1e0]
    int v32;  // [bp-0x1d8]
    char *v33;  // [bp-0x1c8]
    char *v34;  // [bp-0x1c0]
    char *v35;  // [bp-0x1b8]
    unsigned long v36;  // [bp-0x1b0]
    int v37;  // [bp-0x1a8], Other Possible Types: char
    int v38;  // [bp-0x198]
    int v39;  // [bp-0x188]
    int v40;  // [bp-0x178]
    int v41;  // [bp-0x168]
    char v42;  // [bp-0x158]
    unsigned long long v43;  // [bp-0x150]
    char v44;  // [bp-0x148]
    char v45;  // [bp-0x140]
    unsigned long long v46;  // [bp-0x128]
    char v47;  // [bp-0x120]
    char v48;  // [bp-0x110]
    int v49;  // [bp-0xf8]
    unsigned long long v50;  // [bp-0xe8]
    unsigned long long v51;  // [bp-0xe0]
    char v52;  // [bp-0xd8]
    char v53;  // [bp-0xc8]
    char v54;  // [bp-0xb8]
    char v55;  // [bp-0xa8]
    char v56;  // [bp-0x98]
    char v57;  // [bp-0x88]
    int v58;  // [bp-0x78]
    char v59;  // [bp-0x68]
    char v60;  // [bp-0x60], Other Possible Types: unsigned long
    char v61;  // [bp-0x58]
    char v62;  // [bp-0x48]
    char v64;  // al
    int v65;  // xmm0
    int v66;  // xmm0

    v37.new_module(a1, "direnvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 6);
    v44.try_load(v43);
    v64 = a0.detect_env_vars(v46, *((long long *)&v47));
    if (!v59)
    {
        if (!v64)
        {
            v8.try_begin_scan(a1);
            if (v8)
            {
                v65 = *((int128_t *)&v45);
                v21 = v8;
                *((int128_t *)&v22) = *((int128_t *)&v48);
                v24 = v49;
                v25 = v65;
                if ((char)v21.is_match())
                    goto LABEL_b8f30f;
            }
        }
        else
        {
LABEL_b8f30f:
            v8.exec_cmd(a1, "direnvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 6, &g_11f4398, 2);
            if ((char)(((0 ^ v8) & (0 ^ -(v8))) >> 63))
            {
                *((unsigned long long *)a0) = 0x8000000000000000;
                core::ptr::drop_in_place<starship::configs::direnv::DirenvConfig>(&v44);
                core::ptr::drop_in_place<starship::module::Module>(&v37);
                return;
            }
            v25 = *((long long *)&v13);
            memcpy(&v24, &v11, 16);
            *((int128_t *)&v22) = *((int128_t *)&v9);
            v21 = v8;
            v2.from_str((long long)v22, v23);
            if (v2 == 0x8000000000000000)
            {
                v1 = v5;
                memcpy(&v0, &v3, 16);
                if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                {
                    v6 = &v0;
                    v7 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
                    v8 = &g_525500;
                    v9 = 1;
                    v12 = 0;
                    v10 = &v6;
                    v11 = 1;
                    v14 = "starship::modules::direnvrc_pathunknown integer allow statusFound RC pathNo .envrc or .env loadedunknown direnv stateinvalid allow status12falseDOCKER_CONFIGunix://Error in module `docker_context`:\n";
                    v15 = 25;
                    v16 = "starship::modules::direnvrc_pathunknown integer allow statusFound RC pathNo .envrc or .env loadedunknown direnv stateinvalid allow status12falseDOCKER_CONFIGunix://Error in module `docker_context`:\n";
                    v17 = 25;
                    v18 = log::__private_api::loc(&g_11f43d0);
                    log::__private_api::log(&v8, 2, &v14);
                }
                *((unsigned long long *)a0) = 0x8000000000000000;
                core::ptr::drop_in_place<versions::Chunk>(&v0);
            }
            else
            {
                v66 = *((int128_t *)&v2);
                *((int128_t *)&v20) = *((int128_t *)&v4);
                v19 = v66;
                v60.new(v50, v51);
                v26 = &v52;
                v27 = &v53;
                v28 = &v54;
                v29 = &v55;
                v30 = &v56;
                v31 = &v57;
                v32 = v58;
                v33 = &v19;
                v34 = &(char)v20;
                v35 = &(char)v20;
                v36 = a1;
                if (v60 == 0x8000000000000000)
                {
                    v5 = *((long long *)&v62);
                    memcpy(&(char)v2, &v61, 16);
                }
                else
                {
                    starship::modules::direnv::module::{{closure}}(&v2, &v26, &v60);
                    if (!((char)v2 & 1))
                    {
                        v37.set_segments(&(char)v2);
                        *((int128_t *)&a0[80]) = *((int128_t *)&v42);
                        a0[64] = v41;
                        a0[48] = v40;
                        a0[32] = v39;
                        a0[16] = v38;
                        *(a0) = v37;
                        core::ptr::drop_in_place<(std::path::PathBuf,usize)>(&v19);
                        core::ptr::drop_in_place<starship::utils::CommandOutput>(&v21);
                        core::ptr::drop_in_place<starship::configs::direnv::DirenvConfig>(&v44);
                        return;
                    }
                }
                v1 = v5;
                memcpy(&v0, &v3, 16);
                if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                {
                    v6 = &v0;
                    v7 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                    v8 = &g_525500;
                    v9 = 1;
                    v12 = 0;
                    v10 = &v6;
                    v11 = 1;
                    v14 = "starship::modules::direnvrc_pathunknown integer allow statusFound RC pathNo .envrc or .env loadedunknown direnv stateinvalid allow status12falseDOCKER_CONFIGunix://Error in module `docker_context`:\n";
                    v15 = 25;
                    v16 = "starship::modules::direnvrc_pathunknown integer allow statusFound RC pathNo .envrc or .env loadedunknown direnv stateinvalid allow status12falseDOCKER_CONFIGunix://Error in module `docker_context`:\n";
                    v17 = 25;
                    v18 = log::__private_api::loc(&g_11f43b8);
                    log::__private_api::log(&v8, 2, &v14);
                }
                *((unsigned long long *)a0) = 0x8000000000000000;
                core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v0);
                core::ptr::drop_in_place<(std::path::PathBuf,usize)>(&v19);
            }
            core::ptr::drop_in_place<starship::utils::CommandOutput>(&v21);
            core::ptr::drop_in_place<starship::configs::direnv::DirenvConfig>(&v44);
            core::ptr::drop_in_place<starship::module::Module>(&v37);
            return;
        }
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    core::ptr::drop_in_place<starship::configs::direnv::DirenvConfig>(&v44);
    core::ptr::drop_in_place<starship::module::Module>(&v37);
    return;
}
