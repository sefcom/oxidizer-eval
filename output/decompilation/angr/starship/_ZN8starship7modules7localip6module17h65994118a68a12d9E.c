void starship::modules::localip::module(void* a0, unsigned long a1)
{
    char *v0;  // [bp-0x1d8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x1d0]
    char v2;  // [bp-0x1c8], Other Possible Types: unsigned long
    unsigned long long v3;  // [bp-0x1c0]
    unsigned long long v4;  // [bp-0x1b8]
    unsigned long long v5;  // [bp-0x1b0]
    char v6;  // [bp-0x1a8], Other Possible Types: unsigned long
    unsigned int v7;  // [bp-0x1a4]
    unsigned long long v8;  // [bp-0x1a0]
    char *v9;  // [bp-0x198], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x190]
    void* v11;  // [bp-0x188]
    int v12;  // [bp-0x178], Other Possible Types: char
    unsigned long long v13;  // [bp-0x168]
    int v14;  // [bp-0x158], Other Possible Types: char *
    unsigned long long v15;  // [bp-0x150]
    unsigned long long v16;  // [bp-0x148]
    unsigned long long v17;  // [bp-0x140]
    unsigned long long v18;  // [bp-0x138]
    unsigned long long v19;  // [bp-0x130]
    unsigned long long v20;  // [bp-0x128]
    unsigned long long v21;  // [bp-0x120]
    char v22;  // [bp-0x118]
    char *v23;  // [bp-0x100]
    char *v24;  // [bp-0xf8]
    unsigned long v25;  // [bp-0xf0]
    char v26;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v27;  // [bp-0xe0]
    char v28;  // [bp-0xd8]
    char v29;  // [bp-0xc8]
    char v30;  // [bp-0xc7]
    int v31;  // [bp-0xc0], Other Possible Types: char
    int v32;  // [bp-0xb0]
    int v33;  // [bp-0xa0]
    int v34;  // [bp-0x90]
    int v35;  // [bp-0x80]
    char v36;  // [bp-0x70]
    unsigned long long v37;  // [bp-0x68]
    char v38;  // [bp-0x60], Other Possible Types: unsigned long
    char v39;  // [bp-0x58]
    char v40;  // [bp-0x48]

    v31.new_module(a1, "localipshlvlsingularitykubernetesdirectoryfossil_branchfossil_metricsgit_branchgit_commitgit_stategit_metricsgit_statushg_branchpijul_channeldocker_contextpackagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorla", 7);
    v26.try_load(v37);
    if (v30)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<starship::module::Module>(&v31);
        return;
    }
    v22.get_env("SSH_CONNECTIONError in module `hostname`:\nsrc/modules/hostname.rs", 14);
    if (v29 == 1 && *((long long *)&v22) == 0x8000000000000000)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        starship::modules::localip::get_local_ipv4(&v2);
        if (v2 == 0x8000000000000000)
        {
            v0 = v3;
            std::io::error::repr_bitpacked::decode_repr(&(char)v6, v3);
            if (!v6 && v7 == 101)
            {
                (char)v6.to_vec("NetworkUnreachableunable to determine local ipv4 address: Error in module `localip`:\nsrc/modules/localip.rs", 18);
                v13 = v9;
                memcpy(&v12, &v6, 16);
                core::ptr::drop_in_place<std::io::error::Error>(&v0);
LABEL_ba767e:
                v38.new(v26, v27);
                v23 = &v28;
                v24 = &v12;
                v25 = a1;
                if (v38 == 0x8000000000000000)
                {
                    v5 = *((long long *)&v40);
                    memcpy(&v3, &v39, 16);
                }
                else
                {
                    starship::modules::localip::module::{{closure}}(&v2, &v23, &v38);
                    if (!(v2 & 1))
                    {
                        v31.set_segments(&v3);
                        *((int128_t *)&a0[80]) = *((int128_t *)&v36);
                        a0[64] = v35;
                        a0[48] = v34;
                        a0[32] = v33;
                        a0[16] = v32;
                        *(a0) = v31;
                        core::ptr::drop_in_place<alloc::string::String>(&v12);
                        core::ptr::drop_in_place<regex::error::Error>(&v22);
                        return;
                    }
                }
                v16 = v5;
                *((int128_t *)&v14) = *((int128_t *)&v3);
                if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                {
                    v0 = &(char)v14;
                    v1 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                    v6 = &g_11f52f8;
                    v8 = 1;
                    v11 = 0;
                    v9 = &v0;
                    v10 = 1;
                    v17 = "starship::modules::localiplocalipv4Error in module `lua`:\nsrc/modules/lua.rs";
                    v18 = 26;
                    v19 = "starship::modules::localiplocalipv4Error in module `lua`:\nsrc/modules/lua.rs";
                    v20 = 26;
                    v21 = log::__private_api::loc(&g_11f5320);
                    log::__private_api::log(&(char)v6, 2, &v17);
                }
                *((unsigned long long *)a0) = 0x8000000000000000;
                core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&(char)v14);
                core::ptr::drop_in_place<alloc::string::String>(&v12);
            }
            else
            {
                if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                {
                    v14 = &v0;
                    v15 = <std::io::error::Error as core::fmt::Display>::fmt;
                    v6 = &g_11f52e8;
                    v8 = 1;
                    v11 = 0;
                    v9 = &v14;
                    v10 = 1;
                    v17 = "starship::modules::localiplocalipv4Error in module `lua`:\nsrc/modules/lua.rs";
                    v18 = 26;
                    v19 = "starship::modules::localiplocalipv4Error in module `lua`:\nsrc/modules/lua.rs";
                    v20 = 26;
                    v21 = log::__private_api::loc(&g_11f5308);
                    log::__private_api::log(&(char)v6, 2, &v17);
                }
                *((unsigned long long *)a0) = 0x8000000000000000;
                core::ptr::drop_in_place<std::io::error::Error>(&v0);
            }
        }
        else
        {
            v13 = v4;
            memcpy(&v12, &v2, 16);
            goto LABEL_ba767e;
        }
    }
    core::ptr::drop_in_place<regex::error::Error>(&v22);
    core::ptr::drop_in_place<starship::module::Module>(&v31);
    return;
}
