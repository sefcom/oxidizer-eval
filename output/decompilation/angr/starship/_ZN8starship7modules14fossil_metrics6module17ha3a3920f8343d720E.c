void starship::modules::fossil_metrics::module(void* a0, struct_0 *a1)
{
    int v0;  // [bp-0x228], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [bp-0x220]
    char *v2;  // [bp-0x218]
    unsigned long long v3;  // [bp-0x210]
    void* v4;  // [bp-0x208], Other Possible Types: unsigned long long
    void* v5;  // [bp-0x200]
    int v6;  // [bp-0x1f8], Other Possible Types: char, unsigned long long
    unsigned long long v7;  // [bp-0x1f0]
    int v8;  // [bp-0x1e8], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x1e0]
    char v10;  // [bp-0x1d8], Other Possible Types: unsigned long long
    int v11;  // [bp-0x1c8]
    unsigned long long v12;  // [bp-0x1b8]
    unsigned long long v13;  // [bp-0x1b0]
    int v14;  // [bp-0x1a8]
    unsigned long long v15;  // [bp-0x1a0]
    unsigned long long v16;  // [bp-0x198]
    char v17;  // [bp-0x188]
    unsigned long long v18;  // [bp-0x178]
    char *v19;  // [bp-0x168]
    unsigned long long v20;  // [bp-0x160]
    unsigned long long v21;  // [bp-0x158]
    unsigned long long v22;  // [bp-0x150]
    int v23;  // [bp-0x148]
    char v24;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v25;  // [bp-0x130]
    char v26;  // [bp-0x128]
    int v27;  // [bp-0x118]
    char v28;  // [bp-0x108]
    char v29;  // [bp-0x107]
    int v30;  // [bp-0x100], Other Possible Types: char
    int v31;  // [bp-0xf0]
    int v32;  // [bp-0xe0]
    int v33;  // [bp-0xd0]
    int v34;  // [bp-0xc0]
    char v35;  // [bp-0xb0]
    unsigned long long v36;  // [bp-0xa8]
    char *v37;  // [bp-0xa0]
    int v38;  // [bp-0x98]
    char *v39;  // [bp-0x88]
    int v40;  // [bp-0x80]
    struct_0 *v41;  // [bp-0x70]
    char v42;  // [bp-0x68], Other Possible Types: unsigned long
    char v43;  // [bp-0x60]
    char v44;  // [bp-0x50]
    int v46;  // xmm0

    v30.new_module(a1, "fossil_metricsgit_branchgit_commitgit_stategit_metricsgit_statushg_branchpijul_channeldocker_contextpackagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondameso", 14);
    v24.try_load(v36);
    if (v29)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        v21 = ".fslckoutsrc/modules/fossil_branch.rs";
        v22 = 9;
        *((int128_t *)&v0) = *((int128_t *)&(&a1->padding_0)[1]);
        v2 = &v21;
        v3 = 1;
        v4 = 8;
        v5 = 0;
        v6.scan(&(char)v0);
        if (!((char)(((0 ^ v6) & (0 ^ -(v6))) >> 63)))
        {
            v12 = v8;
            *((int128_t *)&v11) = *((int128_t *)&v6);
            core::ptr::drop_in_place<std::path::PathBuf>(&(char)v11);
            (char)v0.exec_cmd(a1, "fossilError in module `fossil_metrics`:\n-i--numstatsrc/modules/fossil_metrics.rs", 6, &g_11f4710, 3);
            if (v0 == 0x8000000000000000)
                goto LABEL_b94fb7;
            v46 = (int128_t)v0;
            memcpy(&v10, &v4, 16);
            *((int128_t *)&v8) = *((int128_t *)&v2);
            v6 = v46;
            v14 = v46;
            v16 = v8;
            core::ptr::drop_in_place<alloc::string::String>(&(char)v8);
            v21.parse(v15, v16, v28);
            v42.new(v24, v25);
            v37 = &v26;
            v38 = v27;
            v39 = &v21;
            v40 = v23;
            v41 = a1;
            if (v42 == 0x8000000000000000)
            {
                v13 = *((long long *)&v44);
                memcpy(&(char)v11, &v43, 16);
            }
            else
            {
                starship::modules::fossil_metrics::module::{{closure}}(&(char)v11, &v37, &v42);
                if ((int)v11 != 1)
                {
                    v30.set_segments(&(char)v11);
                    *((int128_t *)&a0[80]) = *((int128_t *)&v35);
                    a0[64] = v34;
                    a0[48] = v33;
                    a0[32] = v32;
                    a0[16] = v31;
                    *(a0) = v30;
                    core::ptr::drop_in_place<alloc::string::String>(&(char)v14);
                    return;
                }
            }
            v18 = v13;
            memcpy(&v17, &v11, 16);
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
            {
                v19 = &v17;
                v20 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                v0 = &g_11f4700;
                v1 = 1;
                v4 = 0;
                v2 = &v19;
                v3 = 1;
                v6 = "starship::modules::fossil_metricsadded_styledeleted_styleaddeddeleted^\\s*(\\d+)\\s+(\\d+) TOTAL over \\d+ changed files?$accountprojectcomputeconfig_";
                v7 = 33;
                v8 = "starship::modules::fossil_metricsadded_styledeleted_styleaddeddeleted^\\s*(\\d+)\\s+(\\d+) TOTAL over \\d+ changed files?$accountprojectcomputeconfig_";
                v9 = 33;
                v10 = log::__private_api::loc(&g_11f4740);
                log::__private_api::log(&v0, 2, &v6);
            }
            *((long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v17);
            core::ptr::drop_in_place<alloc::string::String>(&(char)v14);
        }
        else
        {
LABEL_b94fb7:
            *((long long *)a0) = 0x8000000000000000;
        }
    }
    core::ptr::drop_in_place<starship::module::Module>(&v30);
    return;
}
