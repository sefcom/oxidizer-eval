long long starship::modules::memory_usage::module(void* a0, unsigned long a1)
{
    int v0;  // [bp-0x268], Other Possible Types: unsigned long long
    char *v1;  // [bp-0x268]
    unsigned long long v2;  // [bp-0x260]
    unsigned long v3;  // [bp-0x260]
    int v4;  // [bp-0x258], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x250]
    unsigned long long v6;  // [sp-0x248]
    unsigned long long v7;  // [bp-0x238]
    unsigned long long v8;  // [bp-0x230]
    int v9;  // [bp-0x228], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x220]
    int v11;  // [bp-0x218], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x210]
    unsigned long long v13;  // [bp-0x208]
    char *v14;  // [bp-0x200], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0x1f8]
    unsigned long long v16;  // [bp-0x1f0]
    unsigned long long v17;  // [bp-0x1f0]
    unsigned long long v18;  // [bp-0x1e8]
    unsigned long long v19;  // [bp-0x1e8]
    char *v20;  // [bp-0x1e0], Other Possible Types: unsigned long long
    char *v21;  // [bp-0x1e0]
    unsigned long long v22;  // [bp-0x1d8]
    unsigned long long v23;  // [bp-0x1d8]
    void* v24;  // [sp-0x1d0], Other Possible Types: unsigned long long
    void* v25;  // [bp-0x1d0]
    int v26;  // [bp-0x1c0]
    unsigned long long v27;  // [bp-0x1b0]
    int v28;  // [bp-0x1a8], Other Possible Types: char *
    unsigned long v29;  // [bp-0x1a0]
    unsigned long long v30;  // [bp-0x198]
    int v31;  // [bp-0x188]
    unsigned long long v32;  // [bp-0x180]
    int v33;  // [bp-0x178]
    unsigned long long v34;  // [bp-0x170]
    unsigned long long v35;  // [bp-0x168]
    unsigned long v36;  // [bp-0x160]
    int v37;  // [bp-0x158], Other Possible Types: char, unsigned long long
    unsigned long long v38;  // [bp-0x150]
    int v39;  // [bp-0x148], Other Possible Types: char *
    char v40;  // [bp-0x140], Other Possible Types: unsigned long long
    int v41;  // [bp-0x138], Other Possible Types: void*
    unsigned long long v42;  // [bp-0x130]
    int v43;  // [bp-0x128], Other Possible Types: char
    char v44;  // [bp-0x118], Other Possible Types: unsigned long long
    char v45;  // [bp-0x108]
    char *v46;  // [bp-0xf8]
    int v47;  // [bp-0xf0]
    char *v48;  // [bp-0xe0]
    char *v49;  // [bp-0xd8]
    char *v50;  // [bp-0xd0]
    char *v51;  // [bp-0xc8]
    unsigned long v52;  // [bp-0xc0]
    int v53;  // [bp-0xb8], Other Possible Types: char
    int v54;  // [bp-0xa8]
    int v55;  // [bp-0x98]
    int v56;  // [bp-0x88]
    int v57;  // [bp-0x78]
    char v58;  // [bp-0x68]
    unsigned long long v59;  // [bp-0x60]
    char v60;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long long v61;  // [bp-0x50]
    char v62;  // [bp-0x48]
    int v63;  // [bp-0x38]
    unsigned long v64;  // [bp-0x28]
    char v65;  // [bp-0x20]
    int v67;  // xmm0
    int v68;  // xmm0
    unsigned long v69;  // xmm0lq
    int v70;  // xmm0
    int v71;  // xmm1
    int v72;  // xmm0
    unsigned long v73;  // rcx
    unsigned long long v74;  // cc_ndep
    int v75;  // xmm0
    int v76;  // xmm1

    v53.new_module(a1, "memory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be", 12);
    v60.try_load(v59);
    if (v65)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        (char)v37.memory_and_swap();
        if (*((int *)&v37) == 1)
        {
            v7 = v38;
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 4)
            {
                v1 = &v7;
                v3 = <std::io::error::Error as core::fmt::Display>::fmt;
                v16 = &g_11f5370;
                v18 = 1;
                v25 = 0;
                v21 = &v1;
                v23 = 1;
                v8 = "starship::modules::memory_usageramram_pct%";
                v9 = 31;
                v10 = "starship::modules::memory_usageramram_pct%";
                v11 = 31;
                v12 = log::__private_api::loc(&g_11f53a0);
                log::__private_api::log(&v16, 4, &v8);
            }
            v8.memory();
            if ((int)v8 == 1)
            {
                v14 = v9;
                if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                {
                    v28 = &v14;
                    v29 = <std::io::error::Error as core::fmt::Display>::fmt;
                    v17 = &g_11f5380;
                    v19 = 1;
                    v24 = 0;
                    v20 = &v28;
                    v22 = 1;
                    v0 = "starship::modules::memory_usageramram_pct%";
                    v2 = 31;
                    v4 = "starship::modules::memory_usageramram_pct%";
                    v5 = 31;
                    v6 = log::__private_api::loc(&g_11f53d0);
                    log::__private_api::log(&v17, 2, &v0);
                }
                *((unsigned long long *)a0) = 0x8000000000000000;
                core::ptr::drop_in_place<std::io::error::Error>(&v14);
                core::ptr::drop_in_place<std::io::error::Error>(&v7);
            }
            else
            {
                v35 = v13;
                v67 = *((int128_t *)&v9);
                *((int128_t *)&v33) = *((int128_t *)&v11);
                v31 = v67;
                core::ptr::drop_in_place<std::io::error::Error>(&v7);
                v6 = v35;
                v68 = (int128_t)v31;
                v69 = (unsigned long long)v68;
                *((int128_t *)&v4) = (int128_t)v33;
                v0 = v68;
                v8 = 0;
LABEL_ba8606:
                starship::modules::memory_usage::pct(v1, v3);
                v36 = v69;
                round();
                if (((CmpF(v69, 4890909195324358655) & 69 | (char)((CmpF(v69, 4890909195324358655) & 69) >> 6)) & 1) == 1)
                    v73 = v69;
                else
                    v73 = 9223372036854775807;
                if (((char)_ccall(11, 0, (unsigned long long)(CmpF(v69, v69) & 69), 0, v74) ? v73 : 0) < v64)
                {
                    *((unsigned long long *)a0) = 0x8000000000000000;
                }
                else
                {
                    v16.new(v60, v61);
                    v46 = &v62;
                    v47 = v63;
                    v48 = &v1;
                    v49 = &v3;
                    v50 = &v36;
                    v51 = &v8;
                    v52 = a1;
                    if ((char)(((0 ^ v16) & (0 ^ -(v16))) >> 63))
                    {
                        v34 = v23;
                        memcpy(&v32, &v18, 16);
                    }
                    else
                    {
                        v44 = v27;
                        v75 = *((int128_t *)&v16);
                        v76 = *((int128_t *)&v21);
                        v43 = v26;
                        *((int128_t *)&v41) = *((int128_t *)&v25);
                        v39 = v76;
                        v37 = v75;
                        starship::modules::memory_usage::module::{{closure}}(&(char)v31, &v46, &(char)v37);
                        if (!((char)v31 & 1))
                        {
                            v53.set_segments(&v32);
                            *((int128_t *)&a0[80]) = *((int128_t *)&v58);
                            a0[64] = v57;
                            a0[48] = v56;
                            a0[32] = v55;
                            a0[16] = v54;
                            *(a0) = v53;
                            core::ptr::drop_in_place<core::option::Option<systemstat::data::Swap>>(&v8);
                            return core::ptr::drop_in_place<systemstat::data::Swap>(&v1);
                        }
                    }
                    v30 = v34;
                    *((int128_t *)&v28) = *((int128_t *)&v32);
                    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                    {
                        v14 = &(char)v28;
                        v15 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                        v37 = &g_11f5390;
                        v38 = 1;
                        v41 = 0;
                        v39 = &v14;
                        v40 = 1;
                        v17 = "starship::modules::memory_usageramram_pct%";
                        v19 = 31;
                        v20 = "starship::modules::memory_usageramram_pct%";
                        v22 = 31;
                        v24 = log::__private_api::loc(&g_11f53b8);
                        log::__private_api::log(&v37, 2, &v17);
                    }
                    *((unsigned long long *)a0) = 0x8000000000000000;
                    core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&(char)v28);
                }
                core::ptr::drop_in_place<core::option::Option<systemstat::data::Swap>>(&v8);
                core::ptr::drop_in_place<systemstat::data::Swap>(&v1);
            }
        }
        else if (*((long long *)&v43))
        {
            v6 = v42;
            v70 = *((int128_t *)&v38);
            *((int128_t *)&v4) = *((int128_t *)&v40);
            v0 = v70;
            v8 = 1;
            v69 = (unsigned long long)v43;
            v71 = *((int128_t *)&v44);
            v9 = v43;
            v11 = v71;
            v13 = *((long long *)&v45);
            goto LABEL_ba8606;
        }
        else
        {
            v6 = v42;
            v72 = *((int128_t *)&v38);
            v69 = (unsigned long long)v72;
            *((int128_t *)&v4) = *((int128_t *)&v40);
            v0 = v72;
            v8 = 0;
            core::ptr::drop_in_place<systemstat::data::Swap>(&v43);
        }
    }
    return (unsigned long long)core::ptr::drop_in_place<starship::module::Module>(&v53);
}
