void starship::modules::fossil_branch::module(void* a0, struct_0 *a1)
{
    char *v0;  // [bp-0x208], Other Possible Types: unsigned long long
    int v1;  // [bp-0x200], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x1f8]
    unsigned long long v3;  // [bp-0x1f0]
    char v4;  // [bp-0x1e0], Other Possible Types: unsigned long long
    char v5;  // [bp-0x1d8], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x1d8]
    int v7;  // [bp-0x1d8]
    unsigned long long v8;  // [bp-0x1d0]
    unsigned long long v9;  // [bp-0x1c8]
    int v10;  // [bp-0x1c8]
    unsigned long long v11;  // [bp-0x1c0]
    void* v12;  // [bp-0x1b8]
    int v13;  // [bp-0x1b0]
    unsigned long long v14;  // [bp-0x1a0]
    unsigned long long v15;  // [bp-0x198]
    int v16;  // [bp-0x198]
    unsigned long long v17;  // [bp-0x190]
    int v18;  // [bp-0x188], Other Possible Types: char *
    unsigned long long v19;  // [bp-0x180]
    int v20;  // [bp-0x178], Other Possible Types: void*, unsigned long long
    void* v21;  // [bp-0x170]
    int v22;  // [bp-0x168]
    unsigned long long v23;  // [bp-0x158]
    int v25;  // [bp-0x148]
    unsigned long long v26;  // [bp-0x140]
    unsigned long long v27;  // [bp-0x138]
    char *v28;  // [bp-0x130]
    unsigned long long v29;  // [bp-0x128]
    char v30;  // [bp-0x120]
    char v31;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned long long v32;  // [bp-0x100]
    char v33;  // [bp-0xf8]
    char v34;  // [bp-0xe8]
    unsigned long long v35;  // [bp-0xd8]
    unsigned long long v36;  // [bp-0xd0]
    unsigned long long v37;  // [bp-0xc8]
    unsigned long long v38;  // [bp-0xc8]
    char v39;  // [bp-0xc0]
    char v40;  // [bp-0xb8]
    char *v41;  // [bp-0xa8]
    char *v42;  // [bp-0xa0]
    struct_0 *v43;  // [bp-0x98]
    int v44;  // [bp-0x90], Other Possible Types: char
    int v45;  // [bp-0x80]
    int v46;  // [bp-0x70]
    int v47;  // [bp-0x60]
    int v48;  // [bp-0x50]
    char v49;  // [bp-0x40]
    char v50;  // [bp-0x38]
    unsigned long long v52;  // r15
    int v53;  // xmm0
    unsigned long long v55;  // rdx
    int v56;  // xmm0
    int v57;  // xmm1

    v44.new_module(a1, "fossil_branchfossil_metricsgit_branchgit_commitgit_stategit_metricsgit_statushg_branchpijul_channeldocker_contextpackagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_s", 13);
    v31.try_load(*((long long *)&v50));
    if (v39)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        *((char **)&v25) = ".fslckoutsrc/modules/fossil_branch.rs";
        v26 = 9;
        *((int128_t *)&v16) = *((int128_t *)&(&a1->padding_0)[1]);
        v18 = &(unsigned long long)v25;
        v19 = 1;
        v20 = 8;
        v21 = 0;
        v4.scan(&(char)v15);
        if (!((char)(((0 ^ v4) & (0 ^ -(v4))) >> 63)))
        {
            *((int128_t *)&v1) = *((int128_t *)&v5);
            v0 = v4;
            core::ptr::drop_in_place<std::path::PathBuf>(&v0);
            v38 = v37;
            if (v38 <= 0)
            {
                v52 = 18446744073709551615;
                v38 = 18446744073709551615;
                if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                {
                    v0 = &v37;
                    v1 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
                    v15 = &g_11f4690;
                    v17 = 1;
                    v20 = 0;
                    v18 = &v0;
                    v19 = 1;
                    v4 = "starship::modules::fossil_branchMessage received on the socket: RelativeUrlWithCannotBeABaseBase";
                    v6 = 32;
                    v8 = "starship::modules::fossil_branchMessage received on the socket: RelativeUrlWithCannotBeABaseBase";
                    v9 = 32;
                    v11 = log::__private_api::loc(&g_11f46b0);
                    log::__private_api::log(&v15, 2, &v4);
                    v38 = v52;
                }
            }
            (char)v15.exec_cmd(a1, "fossilError in module `fossil_metrics`:\n-i--numstatsrc/modules/fossil_metrics.rs", 6, &g_11f46c8, 2);
            if (v15 == 0x8000000000000000)
                goto LABEL_b94aa8;
            v12 = 0;
            v53 = *((int128_t *)&v17);
            *((int128_t *)&v10) = *((int128_t *)&v19);
            v7 = v53;
            v4 = v15;
            v0 = v4;
            v1 = v6;
            v2 = v8;
            core::ptr::drop_in_place<alloc::string::String>(&v9);
            starship::modules::utils::truncate::truncate_text(&v30, core::str::<impl str>::trim_matches(v1, v2), v55, v38, v35, v36);
            core::ptr::drop_in_place<alloc::string::String>(&v0);
            v4.new(v31, v32);
            memcpy(&v40, &v33, 16);
            v41 = &v34;
            v42 = &v30;
            v43 = a1;
            if (v4 == 0x8000000000000000)
            {
                v3 = v9;
                memcpy(&v1, &(char)v7, 16);
            }
            else
            {
                v23 = v14;
                v56 = *((int128_t *)&v4);
                v57 = (int128_t)(&v7)[8];
                v22 = v13;
                *((int128_t *)&v20) = (int128_t)(&v10)[8];
                v18 = v57;
                v16 = v56;
                starship::modules::fossil_branch::module::{{closure}}(&v0, &v40, &(char)v15);
                if (!((char)v0 & 1))
                {
                    v44.set_segments(&v1);
                    *((int128_t *)&a0[80]) = *((int128_t *)&v49);
                    a0[64] = v48;
                    a0[48] = v47;
                    a0[32] = v46;
                    a0[16] = v45;
                    *(a0) = v44;
                    core::ptr::drop_in_place<alloc::string::String>(&v30);
                    return;
                }
            }
            v27 = v3;
            *((int128_t *)&v25) = *((int128_t *)&v1);
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
            {
                v28 = &(unsigned long long)v25;
                v29 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                v15 = &g_11f46a0;
                v17 = 1;
                v20 = 0;
                v18 = &v28;
                v19 = 1;
                v4 = "starship::modules::fossil_branchMessage received on the socket: RelativeUrlWithCannotBeABaseBase";
                v5 = 32;
                v8 = "starship::modules::fossil_branchMessage received on the socket: RelativeUrlWithCannotBeABaseBase";
                v9 = 32;
                v11 = log::__private_api::loc(&g_11f46e8);
                log::__private_api::log(&v15, 2, &v4);
            }
            *((long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&(unsigned long long)v25);
            core::ptr::drop_in_place<alloc::string::String>(&v30);
        }
        else
        {
LABEL_b94aa8:
            *((long long *)a0) = 0x8000000000000000;
        }
    }
    core::ptr::drop_in_place<starship::module::Module>(&v44);
    return;
}
