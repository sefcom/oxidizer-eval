void starship::modules::conda::module(void* a0, unsigned long a1)
{
    int v0;  // [bp-0x238], Other Possible Types: void*
    unsigned long long v1;  // [bp-0x230]
    unsigned long long v2;  // [bp-0x228]
    int v3;  // [bp-0x218], Other Possible Types: char
    unsigned long long v4;  // [bp-0x208]
    int v5;  // [bp-0x1f8], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long long v6;  // [bp-0x1f0]
    int v7;  // [bp-0x1e8], Other Possible Types: char *, unsigned long long
    unsigned long long v8;  // [bp-0x1e0]
    void* v9;  // [bp-0x1d8], Other Possible Types: char
    int v10;  // [bp-0x1c8]
    unsigned long long v11;  // [bp-0x1b8]
    char v12;  // [bp-0x1a8]
    char v13;  // [bp-0x1a0]
    unsigned long long v14;  // [bp-0x190]
    char v15;  // [bp-0x188]
    unsigned long long v16;  // [bp-0x178]
    char v17;  // [bp-0x168], Other Possible Types: unsigned long, unsigned long long
    char v18;  // [bp-0x160], Other Possible Types: unsigned long long
    char v19;  // [bp-0x158], Other Possible Types: unsigned long long
    unsigned long long v20;  // [bp-0x150]
    char v21;  // [bp-0x148], Other Possible Types: unsigned long long
    int v22;  // [bp-0x138]
    unsigned long long v23;  // [bp-0x128]
    char v24;  // [bp-0x120], Other Possible Types: unsigned long long
    unsigned long long v25;  // [bp-0x118]
    unsigned long v26;  // [bp-0x110]
    unsigned long long v27;  // [bp-0x108]
    unsigned long long v28;  // [bp-0x100]
    char v29;  // [bp-0xf8]
    char v30;  // [bp-0xe8]
    unsigned long long v31;  // [bp-0xd8]
    char v32;  // [bp-0xd0]
    char *v33;  // [bp-0xc8]
    unsigned long long v34;  // [bp-0xc0]
    char v35;  // [bp-0xb8]
    int v36;  // [bp-0xb8]
    int v37;  // [bp-0xa8], Other Possible Types: char
    int v38;  // [bp-0x98]
    int v39;  // [bp-0x88]
    int v40;  // [bp-0x78]
    char v41;  // [bp-0x68]
    unsigned long long v42;  // [bp-0x60]
    char v43;  // [bp-0x58]
    char *v44;  // [bp-0x48]
    char *v45;  // [bp-0x40]
    unsigned long v46;  // [bp-0x38]
    unsigned long long v48;  // r12
    unsigned long long v49;  // r15
    unsigned long v50;  // rdx
    unsigned long long v51;  // r13
    unsigned long v52;  // rdi
    int v53;  // xmm0

    v35.get_env("CONDA_DEFAULT_ENVError in module `conda`:\nsrc/modules/conda.rs", 17);
    if ((char)(((0 ^ *((long long *)&v35)) & (0 ^ -(*((long long *)&v35)))) >> 63))
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v48 = 1;
        v49 = 0;
    }
    else
    {
        v0 = v36;
        v49 = *((long long *)&v37);
        v2 = *((long long *)&v37);
    }
    core::str::<impl str>::trim_matches(v48, v49);
    if (v50)
    {
        v35.new_module(a1, "condamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in confi", 5);
        v24.try_load(v42);
        if (v32 && (char)v48.equal(v49, "baseuser", 4))
        {
            v51 = v25;
        }
        else
        {
            v51 = v25;
            if ((char)v52.detect_env_vars(v25, v26))
            {
                starship::modules::utils::directory::truncate(&(char)v5, v48, v49, v31);
                if (v5 == 0x8000000000000000)
                {
                    v4 = v2;
                    memcpy(&v3, &v0, 16);
                }
                else
                {
                    v4 = v7;
                    memcpy(&v3, &v5, 16);
                    core::ptr::drop_in_place<alloc::string::String>(&v0);
                }
                v17.new(v27, v28);
                memcpy(&v43, &v29, 16);
                v44 = &v30;
                v45 = &v3;
                v46 = a1;
                if (v17 == 0x8000000000000000)
                {
                    v14 = v20;
                    memcpy(&v13, &v18, 16);
                }
                else
                {
                    v11 = v23;
                    v53 = *((int128_t *)&v17);
                    v10 = v22;
                    memcpy(&v9, &v21, 16);
                    *((int128_t *)&v7) = *((int128_t *)&v19);
                    v5 = v53;
                    starship::modules::conda::module::{{closure}}(&v12, &v43, &(char)v5);
                    if (*((int *)&v12) != 1)
                    {
                        v35.set_segments(&v13);
                        *((int128_t *)&a0[80]) = *((int128_t *)&v41);
                        a0[64] = v40;
                        a0[48] = v39;
                        a0[32] = v38;
                        a0[16] = v37;
                        *(a0) = v36;
                        core::ptr::drop_in_place<alloc::string::String>(&v3);
                        core::ptr::drop_in_place<rayon::vec::IntoIter<(&alloc::string::String,&mut core::option::Option<core::result::Result<alloc::borrow::Cow<str>,starship::formatter::string_formatter::StringFormatterError>>)>>(v24, v25);
                        return;
                    }
                }
                v16 = v14;
                memcpy(&v15, &v13, 16);
                if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                {
                    v33 = &v15;
                    v34 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                    v5 = &g_11f3e10;
                    v6 = 1;
                    v9 = 0;
                    v7 = &v33;
                    v8 = 1;
                    v17 = "starship::modules::condaenvironmentError in module `container`: \nsrc/modules/container.rs";
                    v18 = 24;
                    v19 = "starship::modules::condaenvironmentError in module `container`: \nsrc/modules/container.rs";
                    v20 = 24;
                    v21 = log::__private_api::loc(&g_11f3e20);
                    log::__private_api::log(&v5, 2, &v17);
                }
                *((unsigned long long *)a0) = 0x8000000000000000;
                core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v15);
                core::ptr::drop_in_place<alloc::string::String>(&v3);
                core::ptr::drop_in_place<rayon::vec::IntoIter<(&alloc::string::String,&mut core::option::Option<core::result::Result<alloc::borrow::Cow<str>,starship::formatter::string_formatter::StringFormatterError>>)>>(v24, v25);
                core::ptr::drop_in_place<starship::module::Module>(&v35);
                return;
            }
        }
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<rayon::vec::IntoIter<(&alloc::string::String,&mut core::option::Option<core::result::Result<alloc::borrow::Cow<str>,starship::formatter::string_formatter::StringFormatterError>>)>>(v24, v51);
        core::ptr::drop_in_place<starship::module::Module>(&v35);
    }
    else
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    return;
}
