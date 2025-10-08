void starship::modules::git_state::module(void* a0, unsigned long a1)
{
    int v0;  // [bp-0x268], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [bp-0x260]
    int v2;  // [bp-0x258], Other Possible Types: char *, char
    unsigned long long v3;  // [bp-0x250]
    int v4;  // [bp-0x248], Other Possible Types: void*
    int v5;  // [bp-0x238]
    unsigned long long v6;  // [bp-0x228]
    char v7;  // [bp-0x218]
    int v8;  // [bp-0x210], Other Possible Types: char
    unsigned long long v9;  // [bp-0x200]
    int v10;  // [bp-0x1f8]
    unsigned long long v11;  // [bp-0x1e8]
    char v12;  // [bp-0x1e0], Other Possible Types: unsigned long, unsigned long long
    char v13;  // [bp-0x1d8], Other Possible Types: unsigned long long
    char v14;  // [bp-0x1d0], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0x1c8]
    char v16;  // [bp-0x1c0], Other Possible Types: unsigned long long
    int v17;  // [bp-0x1b0]
    unsigned long long v18;  // [bp-0x1a0]
    char *v19;  // [bp-0x198]
    unsigned long long v20;  // [bp-0x190]
    int v21;  // [bp-0x188]
    int v22;  // [bp-0x178]
    int v23;  // [bp-0x168]
    int v24;  // [bp-0x158]
    char v25;  // [bp-0x140]
    char *v26;  // [bp-0x130]
    char *v27;  // [bp-0x128]
    char *v28;  // [bp-0x120]
    unsigned long v29;  // [bp-0x118]
    int v30;  // [bp-0x110], Other Possible Types: char
    int v31;  // [bp-0x100]
    int v32;  // [bp-0xf0]
    int v33;  // [bp-0xe0]
    int v34;  // [bp-0xd0]
    char v35;  // [bp-0xc0]
    unsigned long long v36;  // [bp-0xb8]
    char v37;  // [bp-0xb0]
    char v38;  // [bp-0x40]
    unsigned long long v39;  // [bp-0x30]
    char v40;  // [bp-0x28]
    unsigned long long v42;  // rdx
    int v43;  // xmm0
    int v44;  // xmm0

    v30.new_module(a1, "git_stategit_metricsgit_statushg_branchpijul_channeldocker_contextpackagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopensta", 9);
    v37.try_load(v36);
    if (((!v42 | (char)a1.get_repo()) & 1))
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        starship::modules::git_state::get_state_description(&(char)v0, v42);
        if (v0 == 9223372036854775809)
        {
            *((unsigned long long *)a0) = 0x8000000000000000;
        }
        else
        {
            v43 = *((int128_t *)&v0);
            v24 = v5;
            v23 = v4;
            *((int128_t *)&v22) = *((int128_t *)&v2);
            v21 = v43;
            v12.new(v39, *((long long *)&v40));
            memcpy(&v25, &v24, 16);
            v26 = &v21;
            v27 = &(char)v22;
            v28 = &v38;
            v29 = a1;
            if (v12 == 0x8000000000000000)
            {
                v9 = v15;
                memcpy(&v8, &v13, 16);
            }
            else
            {
                v6 = v18;
                v44 = *((int128_t *)&v12);
                v5 = v17;
                memcpy(&v4, &v16, 16);
                *((int128_t *)&v2) = *((int128_t *)&v14);
                v0 = v44;
                starship::modules::git_state::module::{{closure}}(&v7, &v25, &(char)v0);
                if (*((int *)&v7) != 1)
                {
                    v30.set_segments(&(char)v8);
                    *((int128_t *)&a0[80]) = *((int128_t *)&v35);
                    a0[64] = v34;
                    a0[48] = v33;
                    a0[32] = v32;
                    a0[16] = v31;
                    *(a0) = v30;
                    core::ptr::drop_in_place<starship::modules::git_state::StateDescription>(&v21);
                    return;
                }
            }
            v11 = v9;
            v10 = v8;
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
            {
                v19 = &v10;
                v20 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                v0 = &g_11f4900;
                v1 = 1;
                v4 = 0;
                v2 = &v19;
                v3 = 1;
                v12 = "starship::modules::git_statestateprogress_totalrebase-merge/msgnumrebase-applyrebase-apply/nextrebase-apply/lastThis is a bare repository, git_status is not applicableError in module `git_status`:\nsrc/modules/git_status.rs";
                v13 = 28;
                v14 = "starship::modules::git_statestateprogress_totalrebase-merge/msgnumrebase-applyrebase-apply/nextrebase-apply/lastThis is a bare repository, git_status is not applicableError in module `git_status`:\nsrc/modules/git_status.rs";
                v15 = 28;
                v16 = log::__private_api::loc(&g_11f4910);
                log::__private_api::log(&v0, 2, &v12);
            }
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v10);
            core::ptr::drop_in_place<starship::modules::git_state::StateDescription>(&v21);
        }
    }
    core::ptr::drop_in_place<starship::module::Module>(&v30);
    return;
}
