void starship::modules::hg_branch::module(void* a0, struct_0 *a1)
{
    unsigned long long v0[6];  // [bp-0x258]
    unsigned long long v1[6];  // [bp-0x258]
    unsigned long long v2[6];  // [bp-0x258]
    unsigned long long v3;  // [bp-0x250]
    int v4;  // [bp-0x248], Other Possible Types: char *, unsigned long long
    void* v5;  // [bp-0x240], Other Possible Types: unsigned long long
    int v6;  // [bp-0x238], Other Possible Types: void*, unsigned long long
    unsigned long long v7;  // [bp-0x230]
    int v8;  // [bp-0x228]
    unsigned long long v9;  // [bp-0x218]
    int v10;  // [bp-0x208], Other Possible Types: char
    unsigned long long v11;  // [bp-0x200]
    unsigned long long v12;  // [bp-0x1f8]
    void* v13;  // [bp-0x1f0]
    unsigned long long v14;  // [bp-0x1e8]
    void* v15;  // [bp-0x1e0]
    unsigned long long v16;  // [bp-0x1d8]
    unsigned long long v17;  // [bp-0x1d0]
    unsigned long long v18;  // [bp-0x1c8]
    unsigned long long v19;  // [bp-0x1c0]
    unsigned long long v20;  // [bp-0x1b8]
    int v21;  // [bp-0x1a8]
    unsigned long long v22;  // [bp-0x198]
    char *v23;  // [bp-0x190]
    unsigned long long v24;  // [bp-0x188]
    unsigned long long v25;  // [bp-0x178]
    unsigned long long v26;  // [bp-0x170]
    int v27;  // [bp-0x168]
    unsigned long long v28;  // [bp-0x160]
    char v29;  // [bp-0x158]
    unsigned long long v30;  // [bp-0x148]
    char *v31;  // [bp-0x138]
    unsigned long long v32;  // [bp-0x130]
    char v33;  // [bp-0x128]
    char v34;  // [bp-0x110]
    char v35;  // [bp-0x100]
    unsigned long long v36;  // [bp-0xf0]
    unsigned long long v37;  // [bp-0xe8]
    unsigned long long v38;  // [bp-0xe0]
    unsigned long long v39;  // [bp-0xd8]
    unsigned long long v40;  // [bp-0xd0]
    unsigned long long v41;  // [bp-0xd0]
    char v42;  // [bp-0xc8]
    char v43;  // [bp-0xc0]
    char *v44;  // [bp-0xb0]
    char *v45;  // [bp-0xa8]
    char *v46;  // [bp-0xa0]
    struct_0 *v47;  // [bp-0x98]
    int v48;  // [bp-0x90], Other Possible Types: char
    int v49;  // [bp-0x80]
    int v50;  // [bp-0x70]
    int v51;  // [bp-0x60]
    int v52;  // [bp-0x50]
    char v53;  // [bp-0x40]
    char v54;  // [bp-0x38]
    unsigned long long v56;  // r15
    unsigned long long v57;  // r13
    int v58;  // xmm0
    int v59;  // xmm1

    v48.new_module(a1, "hg_branchpijul_channeldocker_contextpackagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durati", 9);
    v34.try_load(*((long long *)&v54));
    if (v42)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        v41 = v40;
        if (v41 <= 0)
        {
            v56 = 18446744073709551615;
            v41 = 18446744073709551615;
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
            {
                v23 = &v40;
                v24 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
                *(v2) = &g_11f4690;
                v3 = 1;
                v6 = 0;
                v4 = &v23;
                v5 = 1;
                v16 = "starship::modules::hg_branch.hgtopicbookmarks.currentError in module `hg_state`:\nsrc/modules/hg_state.rs";
                v17 = 28;
                v18 = "starship::modules::hg_branch.hgtopicbookmarks.currentError in module `hg_state`:\nsrc/modules/hg_state.rs";
                v19 = 28;
                v20 = log::__private_api::loc(&g_11f4f20);
                log::__private_api::log(&v2, 2, &v16);
                v41 = v56;
            }
        }
        *((int128_t *)&v0) = *((int128_t *)&(&a1->padding_0)[1]);
        v4 = 8;
        v5 = 0;
        v6 = &g_11f4f38;
        v7 = 1;
        v16.scan(&(unsigned long long)v0);
        if ((char)(((0 ^ v16) & (0 ^ -(v16))) >> 63))
        {
            *((unsigned long long *)a0) = 0x8000000000000000;
        }
        else
        {
            *((int128_t *)&v27) = *((int128_t *)&v17);
            v26 = v16;
            v57 = (long long)v27;
            starship::modules::hg_branch::get_hg_current_bookmark(&(unsigned long long)v0, v57, v28);
            if (v2 == 0x8000000000000000)
            {
                starship::modules::hg_branch::module::{{closure}}(&v10, v57, v28, v3);
            }
            else
            {
                v12 = v4;
                *((int128_t *)&v10) = *((int128_t *)&v0[0]);
            }
            starship::modules::utils::truncate::truncate_text(&v33, v11, v12, v41, v38, v39);
            starship::modules::hg_branch::get_hg_topic_name(&(unsigned long long)v0, v57, v28);
            if (v2 == 0x8000000000000000)
            {
                core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&(unsigned long long)v0);
                v13 = 0;
                v14 = 1;
                v15 = 0;
            }
            else
            {
                starship::modules::utils::truncate::truncate_text(&(char)v13, v3, v4, v41, v38, v39);
                core::ptr::drop_in_place<alloc::string::String>(&(unsigned long long)v0);
            }
            v16.new(v36, v37);
            memcpy(&v43, &v34, 16);
            v44 = &v35;
            v45 = &v33;
            v46 = &v13;
            v47 = a1;
            if (v16 == 0x8000000000000000)
            {
                v25 = v19;
                memcpy(&v24, &v17, 16);
            }
            else
            {
                v9 = v22;
                v58 = *((int128_t *)&v16);
                v59 = *((int128_t *)&v18);
                v8 = v21;
                *((int128_t *)&v6) = *((int128_t *)&v20);
                v4 = v59;
                *((void*)v1) = v58;
                starship::modules::hg_branch::module::{{closure}}(&v23, &v43, &(unsigned long long)v0);
                if (!((char)v23 & 1))
                {
                    v48.set_segments(&v24);
                    *((int128_t *)&a0[80]) = *((int128_t *)&v53);
                    a0[64] = v52;
                    a0[48] = v51;
                    a0[32] = v50;
                    a0[16] = v49;
                    *(a0) = v48;
                    core::ptr::drop_in_place<alloc::string::String>(&v13);
                    core::ptr::drop_in_place<alloc::string::String>(&v33);
                    core::ptr::drop_in_place<alloc::string::String>(&v10);
                    core::ptr::drop_in_place<std::path::PathBuf>(&v26);
                    return;
                }
            }
            v30 = v25;
            memcpy(&v29, &v24, 16);
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
            {
                v31 = &v29;
                v32 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                *(v0) = &g_11f4f10;
                v3 = 1;
                v6 = 0;
                v4 = &v31;
                v5 = 1;
                v16 = "starship::modules::hg_branch.hgtopicbookmarks.currentError in module `hg_state`:\nsrc/modules/hg_state.rs";
                v17 = 28;
                v18 = "starship::modules::hg_branch.hgtopicbookmarks.currentError in module `hg_state`:\nsrc/modules/hg_state.rs";
                v19 = 28;
                v20 = log::__private_api::loc(&g_11f4f48);
                log::__private_api::log(&v0, 2, &v16);
            }
            *((long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v29);
            core::ptr::drop_in_place<alloc::string::String>(&v13);
            core::ptr::drop_in_place<alloc::string::String>(&v33);
            core::ptr::drop_in_place<alloc::string::String>(&v10);
            core::ptr::drop_in_place<std::path::PathBuf>(&v26);
        }
    }
    core::ptr::drop_in_place<starship::module::Module>(&v48);
    return;
}
