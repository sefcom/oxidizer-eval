long long starship::modules::git_commit::module(void* a0, unsigned long a1)
{
    char v0;  // [bp-0x668]
    int v1;  // [bp-0x660], Other Possible Types: char
    unsigned long long v2;  // [bp-0x650]
    int v3;  // [bp-0x648]
    unsigned long long v4;  // [bp-0x638]
    char *v5;  // [bp-0x630]
    unsigned long long v6;  // [bp-0x628]
    char v7;  // [bp-0x620], Other Possible Types: unsigned long long
    char v8;  // [bp-0x618], Other Possible Types: unsigned long long
    char *v9;  // [bp-0x610]
    char v10;  // [bp-0x608], Other Possible Types: unsigned long long
    void* v11;  // [bp-0x600]
    int v12;  // [bp-0x5f8]
    int v13;  // [bp-0x5e8]
    int v14;  // [bp-0x5d8]
    unsigned long long v15;  // [bp-0x5c8]
    unsigned long long v16;  // [bp-0x5c0]
    unsigned long long v17;  // [bp-0x5b8]
    unsigned long long v18;  // [bp-0x5b0]
    unsigned long long v19;  // [bp-0x5a8]
    int v20;  // [bp-0x5a0], Other Possible Types: char
    int v21;  // [bp-0x590]
    int v22;  // [bp-0x580]
    int v23;  // [bp-0x570]
    int v24;  // [bp-0x560]
    char v25;  // [bp-0x550]
    unsigned long long v26;  // [bp-0x548]
    unsigned long long v27;  // [bp-0x540]
    char v28;  // [bp-0x538]
    char v29;  // [bp-0x528]
    int v30;  // [bp-0x518]
    int v31;  // [bp-0x508]
    int v32;  // [bp-0x4f8]
    char v33;  // [bp-0x4e8], Other Possible Types: unsigned long long
    char v34;  // [bp-0x4e0]
    char v35;  // [bp-0x4a8]
    char v36;  // [bp-0x4a0], Other Possible Types: unsigned long
    char v37;  // [bp-0x498]
    char v38;  // [bp-0x488]
    char v39;  // [bp-0x458]
    unsigned long long v41;  // rdx

    v20.new_module(a1, "git_commitgit_stategit_metricsgit_statushg_branchpijul_channeldocker_contextpackagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcl", 10);
    v33.try_load(v26);
    if (((!v41 | (char)a1.get_repo()) & 1))
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        v39.open(v41);
        v7.head(&v39);
        if (v7 == 9223372036854775810)
        {
            core::ptr::drop_in_place<core::result::Result<gix::types::Head,gix::reference::errors::find::existing::Error>>(&v7);
            *((unsigned long long *)a0) = 0x8000000000000000;
        }
        else
        {
            v32 = v14;
            v31 = v13;
            v30 = v12;
            memcpy(&v29, &v10, 16);
            memcpy(&v28, &v8, 16);
            v27 = v7;
            if (v7 != 9223372036854775809 && v35)
            {
                *((unsigned long long *)a0) = 0x8000000000000000;
            }
            else
            {
                v36.new(v33, *((long long *)&v34));
                if (v36 == 0x8000000000000000)
                {
                    v2 = *((long long *)&v38);
                    memcpy(&v1, &v37, 16);
                }
                else
                {
                    starship::modules::git_commit::module::{{closure}}(&v0, &v33, a1, &v36);
                    if (*((int *)&v0) != 1)
                    {
                        v20.set_segments(&v1);
                        *((int128_t *)&a0[80]) = *((int128_t *)&v25);
                        a0[64] = v24;
                        a0[48] = v23;
                        a0[32] = v22;
                        a0[16] = v21;
                        *(a0) = v20;
                        core::ptr::drop_in_place<gix::types::Head>(&v27);
                        return core::ptr::drop_in_place<gix::types::Repository>(&v39);
                    }
                }
                v4 = v2;
                v3 = v1;
                if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                {
                    v5 = &v3;
                    v6 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                    v7 = &g_11f4800;
                    v8 = 1;
                    v11 = 0;
                    v9 = &v5;
                    v10 = 1;
                    v15 = "starship::modules::git_committagError in module `git_metrics`:\n";
                    v16 = 29;
                    v17 = "starship::modules::git_committagError in module `git_metrics`:\n";
                    v18 = 29;
                    v19 = log::__private_api::loc(&g_11f4810);
                    log::__private_api::log(&v7, 2, &v15);
                }
                *((unsigned long long *)a0) = 0x8000000000000000;
                core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v3);
            }
            core::ptr::drop_in_place<gix::types::Head>(&v27);
        }
        core::ptr::drop_in_place<gix::types::Repository>(&v39);
    }
    return (unsigned long long)core::ptr::drop_in_place<starship::module::Module>(&v20);
}
