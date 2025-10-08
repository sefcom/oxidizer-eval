void starship::modules::gcloud::module(void* a0, unsigned long a1)
{
    int v0;  // [bp-0x3b8]
    unsigned long long v1;  // [bp-0x3b0]
    unsigned long long v2;  // [bp-0x3a8]
    int v3;  // [bp-0x398]
    unsigned long long v4;  // [bp-0x390]
    unsigned long long v5;  // [bp-0x388]
    int v6;  // [bp-0x378], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x370]
    char *v8;  // [bp-0x368], Other Possible Types: int, unsigned long long
    unsigned long long v9;  // [bp-0x360]
    void* v10;  // [bp-0x358], Other Possible Types: int
    unsigned long long v11;  // [bp-0x350]
    int v12;  // [bp-0x348]
    unsigned long long v13;  // [bp-0x338]
    char v14;  // [bp-0x328]
    int v15;  // [bp-0x320], Other Possible Types: char
    unsigned long long v16;  // [bp-0x310]
    int v17;  // [bp-0x308]
    unsigned long long v18;  // [bp-0x2f8]
    char v19;  // [bp-0x2e8], Other Possible Types: unsigned long, unsigned long long
    char v20;  // [bp-0x2e0], Other Possible Types: unsigned long long
    char v21;  // [bp-0x2d8], Other Possible Types: unsigned long long
    unsigned long long v22;  // [bp-0x2d0]
    char v23;  // [bp-0x2c8], Other Possible Types: unsigned long long
    int v24;  // [bp-0x2b8]
    unsigned long long v25;  // [bp-0x2a8]
    char *v26;  // [bp-0x2a0]
    unsigned long long v27;  // [bp-0x298]
    char *v28;  // [bp-0x290]
    unsigned int v29;  // [bp-0x270]
    char v30;  // [bp-0x268]
    char *v31;  // [bp-0x258]
    char *v32;  // [bp-0x250]
    char *v33;  // [bp-0x248]
    char *v34;  // [bp-0x240]
    char *v35;  // [bp-0x238]
    unsigned long v36;  // [bp-0x230]
    int v37;  // [bp-0x228], Other Possible Types: char
    int v38;  // [bp-0x218]
    int v39;  // [bp-0x208]
    int v40;  // [bp-0x1f8]
    int v41;  // [bp-0x1e8]
    char v42;  // [bp-0x1d8]
    unsigned long long v43;  // [bp-0x1d0]
    char v44;  // [bp-0x1c8]
    unsigned long long v45;  // [bp-0x1c0]
    unsigned long v46;  // [bp-0x1b8]
    unsigned long long v47;  // [bp-0x1b0]
    unsigned long long v48;  // [bp-0x1a8]
    char v49;  // [bp-0x1a0]
    char v50;  // [bp-0x190]
    char v51;  // [bp-0x180]
    char v52;  // [bp-0x150]
    int v53;  // [bp-0x118], Other Possible Types: char
    int v54;  // [bp-0x108]
    char v55;  // [bp-0xf8]
    int v57;  // xmm0
    int v58;  // xmm1

    v37.new_module(a1, "gcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' f", 6);
    v44.try_load(v43);
    if ((char)a0.detect_env_vars(v45, v46))
    {
        starship::modules::gcloud::get_current_config(&v53, a1);
        if ((char)(((0 ^ *((long long *)&v53)) & (0 ^ -(*((long long *)&v53)))) >> 63))
        {
            *((unsigned long long *)a0) = 0x8000000000000000;
        }
        else
        {
            *((int128_t *)&v10) = *((int128_t *)&v55);
            v8 = v54;
            v6 = v53;
            v5 = v8;
            v3 = v53;
            v2 = v11;
            *((int128_t *)&v0) = (int128_t)(&v8)[8];
            if ((char)v4.equal(v5, "NONEnullbitssdayHeadsecsFAILv121armibhkscoptkitslepcmongrunr-nan'= {", 4))
            {
                *((unsigned long long *)a0) = 0x8000000000000000;
            }
            else
            {
                v53.new(v4, v5, v1, v2);
                v29 = 0;
                v28 = &v53;
                v19.new(v47, v48);
                memcpy(&v30, &v49, 16);
                v31 = &v50;
                v32 = &v51;
                v33 = &v52;
                v34 = &v28;
                v35 = &v53;
                v36 = a1;
                if (v19 == 0x8000000000000000)
                {
                    v16 = v22;
                    memcpy(&v15, &v20, 16);
                }
                else
                {
                    v13 = v25;
                    v57 = *((int128_t *)&v19);
                    v58 = *((int128_t *)&v21);
                    v12 = v24;
                    *((int128_t *)&v10) = *((int128_t *)&v23);
                    v8 = v58;
                    v6 = v57;
                    starship::modules::gcloud::module::{{closure}}(&v14, &v30, &(char)v6);
                    if (*((int *)&v14) != 1)
                    {
                        v37.set_segments(&(char)v15);
                        *((int128_t *)&a0[80]) = *((int128_t *)&v42);
                        a0[64] = v41;
                        a0[48] = v40;
                        a0[32] = v39;
                        a0[16] = v38;
                        *(a0) = v37;
                        core::ptr::drop_in_place<std::sync::lazy_lock::LazyLock<core::option::Option<(&str,core::option::Option<&str>)>,starship::modules::gcloud::module::{{closure}}>>(v29);
                        core::ptr::drop_in_place<starship::modules::gcloud::GcloudContext>(&v53);
                        core::ptr::drop_in_place<std::path::PathBuf>(&(char)v0);
                        core::ptr::drop_in_place<alloc::string::String>(&(char)v3);
                        core::ptr::drop_in_place<starship::configs::gcloud::GcloudConfig>(&v44);
                        return;
                    }
                }
                v18 = v16;
                v17 = v15;
                if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0))
                {
                    v26 = &v17;
                    v27 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                    v6 = &g_11f4798;
                    v7 = 1;
                    v10 = 0;
                    v8 = &v26;
                    v9 = 1;
                    v19 = "starship::modules::gclouddomainCLOUDSDK_CORE_PROJECTactiveError in module `git_branch`: \nsrc/modules/git_branch.rs";
                    v20 = 25;
                    v21 = "starship::modules::gclouddomainCLOUDSDK_CORE_PROJECTactiveError in module `git_branch`: \nsrc/modules/git_branch.rs";
                    v22 = 25;
                    v23 = log::__private_api::loc(&g_11f47a8);
                    log::__private_api::log(&v6, 1, &v19);
                }
                *((unsigned long long *)a0) = 0x8000000000000000;
                core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v17);
                core::ptr::drop_in_place<std::sync::lazy_lock::LazyLock<core::option::Option<(&str,core::option::Option<&str>)>,starship::modules::gcloud::module::{{closure}}>>(v29);
                core::ptr::drop_in_place<starship::modules::gcloud::GcloudContext>(&v53);
            }
            core::ptr::drop_in_place<std::path::PathBuf>(&(char)v0);
            core::ptr::drop_in_place<alloc::string::String>(&(char)v3);
        }
    }
    else
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    core::ptr::drop_in_place<starship::configs::gcloud::GcloudConfig>(&v44);
    core::ptr::drop_in_place<starship::module::Module>(&v37);
    return;
}
