void starship::modules::git_branch::module(void* a0, unsigned long a1)
{
    char v0;  // [bp-0x6cc]
    unsigned short v1;  // [bp-0x6cb]
    char v2;  // [bp-0x6c9]
    int v3;  // [bp-0x6c8], Other Possible Types: void*
    unsigned long long v4;  // [bp-0x6c0]
    char *v5;  // [bp-0x6b8], Other Possible Types: unsigned long
    int v6;  // [bp-0x6a8], Other Possible Types: void*
    unsigned long long v7;  // [bp-0x6a0]
    char *v8;  // [bp-0x698]
    unsigned long v9;  // [bp-0x680]
    char v10;  // [bp-0x678], Other Possible Types: unsigned long long
    unsigned long long *v11;  // [bp-0x670]
    unsigned long long v12;  // [bp-0x668]
    char *v13;  // [bp-0x660]
    unsigned long long v14;  // [bp-0x658]
    char *v15;  // [bp-0x650]
    unsigned long long v16;  // [bp-0x648]
    unsigned long long v17;  // [bp-0x640]
    char v18;  // [bp-0x638]
    unsigned long long v19;  // [bp-0x630]
    char v20;  // [bp-0x628]
    unsigned long long v21;  // [bp-0x620]
    int v22;  // [bp-0x618]
    int v23;  // [bp-0x608]
    unsigned long long v24;  // [bp-0x5f8]
    char *v25;  // [bp-0x5e8]
    int v26;  // [bp-0x5e0], Other Possible Types: unsigned long long
    int v27;  // [bp-0x5e0]
    int v28;  // [bp-0x5e0]
    char v29;  // [bp-0x5d0], Other Possible Types: unsigned long long
    char v30;  // [bp-0x5c0]
    char v31;  // [bp-0x5b0]
    int v32;  // [bp-0x5a0]
    char *v33;  // [bp-0x590]
    unsigned long long v34;  // [bp-0x588]
    char v35;  // [bp-0x580], Other Possible Types: unsigned long long
    void* v36;  // [bp-0x578]
    unsigned long v37;  // [bp-0x570]
    unsigned long long v38;  // [bp-0x568]
    unsigned long long v39;  // [bp-0x560]
    char v40;  // [bp-0x558]
    char v41;  // [bp-0x548]
    unsigned long long v42;  // [bp-0x538]
    unsigned long long v43;  // [bp-0x530]
    unsigned long long v44;  // [bp-0x528]
    unsigned long long v45;  // [bp-0x528]
    char v46;  // [bp-0x520]
    char v47;  // [bp-0x51f]
    char v48;  // [bp-0x518]
    char *v49;  // [bp-0x508]
    char *v50;  // [bp-0x500]
    char *v51;  // [bp-0x4f8]
    char *v52;  // [bp-0x4f0]
    char *v53;  // [bp-0x4e8]
    unsigned long v54;  // [bp-0x4e0]
    int v55;  // [bp-0x4d8], Other Possible Types: char
    int v56;  // [bp-0x4c8]
    int v57;  // [bp-0x4b8]
    int v58;  // [bp-0x4a8]
    int v59;  // [bp-0x498]
    char v60;  // [bp-0x488]
    unsigned long long v61;  // [bp-0x480]
    int v62;  // [bp-0x478], Other Possible Types: void*, unsigned long long
    void* v63;  // [bp-0x478]
    unsigned long long v64;  // [bp-0x470]
    int v65;  // [bp-0x468], Other Possible Types: void*, char *
    unsigned long long v66;  // [bp-0x460]
    int v67;  // [bp-0x458], Other Possible Types: void*
    int v68;  // [bp-0x448], Other Possible Types: void*
    unsigned long long v69;  // [bp-0x440], Other Possible Types: unsigned long
    void* v70;  // [bp-0x438], Other Possible Types: unsigned long long
    char v71;  // [bp-0x430]
    unsigned short v72;  // [bp-0x42f]
    char v73;  // [bp-0x42d]
    unsigned int v74;  // [sp-0x42c]
    char v75;  // [sp-0x428]
    void* v76;  // [sp-0x420]
    void* v77;  // [sp-0x410]
    void* v78;  // [sp-0x400]
    unsigned long long v79;  // [sp-0x3f0], Other Possible Types: unsigned long
    unsigned long long v80;  // [sp-0x3e8], Other Possible Types: unsigned long
    void* v81;  // [sp-0x3e0]
    char v82;  // [sp-0x3d8]
    unsigned short v83;  // [sp-0x3d7]
    char v84;  // [sp-0x3d5]
    unsigned int v85;  // [sp-0x3d4]
    char v86;  // [sp-0x3d0]
    void* v87;  // [sp-0x3c8], Other Possible Types: unsigned long
    unsigned long long v88;  // [sp-0x3c0], Other Possible Types: unsigned long
    unsigned long long v90;  // r13
    char v91;  // al
    unsigned long v92;  // rcx
    unsigned long long v93[113];  // rdx
    unsigned long long v94;  // rcx
    void* v95;  // rax
    unsigned long v98;  // rcx
    unsigned long v101;  // rcx
    unsigned long long v104;  // rbp
    unsigned long long v105;  // rax
    unsigned long long *v106;  // rdx
    char *v107;  // r15
    unsigned long long v108;  // rax
    unsigned long long v109;  // rdx
    unsigned long long v110;  // rax
    unsigned long long v111;  // rdx
    char v112;  // al
    int v113;  // xmm0
    int v114;  // xmm1
    int v115;  // xmm2

    v55.new_module(a1, "git_branchgit_commitgit_stategit_metricsgit_statushg_branchpijul_channeldocker_contextpackagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_u", 10);
    v35.try_load(v61);
    v9 = starship::modules::git_branch::get_first_grapheme(v42, v43);
    v45 = v44;
    if (v45 <= 0)
    {
        v90 = 18446744073709551615;
        v45 = 18446744073709551615;
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
        {
            v25 = &v44;
            v26 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
            v62 = &g_11f4690;
            v64 = 1;
            v67 = 0;
            v65 = &v25;
            v66 = 1;
            v13 = "starship::modules::git_branchremote_branchremote_nameError in module `git_commit`:\nsrc/modules/git_commit.rs";
            v14 = 29;
            v15 = "starship::modules::git_branchremote_branchremote_nameError in module `git_commit`:\nsrc/modules/git_commit.rs";
            v16 = 29;
            v17 = log::__private_api::loc(&g_11f47d0);
            log::__private_api::log(&v62, 2, &v13);
            v45 = v90;
        }
    }
    v91 = a1.get_repo();
    v94 = v92 & 0xffffffffffffff00 | !v93 | v91;
    if (((!v93 | v91) & 1))
    {
LABEL_b96818:
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        v26 = v27;
        if (v46)
        {
            v62.open(v93);
            v13.head(&v62);
            if (v13 == 9223372036854775810)
            {
                core::ptr::drop_in_place<core::result::Result<gix::types::Head,gix::reference::errors::find::existing::Error>>(&v13);
                *((unsigned long long *)a0) = 0x8000000000000000;
                core::ptr::drop_in_place<gix::types::Repository>(&v62);
            }
            else
            {
                v32 = v22;
                memcpy(&v31, &v20, 16);
                memcpy(&v30, &v18, 16);
                memcpy(&v29, &v16, 16);
                memcpy(&v26, &v14, 16);
                v25 = v13;
                core::ptr::drop_in_place<gix::types::Head>(&v25);
                if (v13 == 9223372036854775809)
                {
                    core::ptr::drop_in_place<gix::types::Repository>(&v62);
                    goto LABEL_b96818;
                }
                else
                {
                    core::ptr::drop_in_place<gix::types::Repository>(&v62);
                    v26 = v28;
                    goto LABEL_b96934;
                }
            }
        }
        else
        {
LABEL_b96934:
            if (v93[101] == 0x8000000000000000)
            {
                v95 = 0;
            }
            else
            {
                v95 = v93[102];
                v94 = v93[103];
            }
            if (!v95)
                v94 = 4;
            if (!v95)
                v95 = "HEADchar";
            v73 = v2;
            v72 = v1;
            v83 = v1;
            v84 = v2;
            v87 = v95;
            v88 = v94;
            v62 = 0;
            v65 = 0;
            v67 = 0;
            v68 = 0;
            v69 = v94;
            v70 = 0;
            v71 = 2;
            v74 = 268566529;
            v75 = 16;
            v76 = 0;
            v77 = 0;
            v78 = 0;
            v79 = v94;
            v80 = v94;
            v81 = 0;
            v82 = 2;
            v85 = 268566529;
            v86 = 16;
            v10.collect(&v62);
            v63 = v36;
            v64 = v37 * 16 + v36;
            if (v63.any(v95, v94))
            {
                *((unsigned long long *)a0) = 0x8000000000000000;
            }
            else
            {
                v6 = 0;
                v7 = 8;
                v8 = 0;
                v3 = 0;
                v4 = 8;
                v5 = 0;
                if (!((char)(((0 ^ v93[107]) & (0 ^ -(v93[107]))) >> 63)))
                {
                    if (v93[107] == 9223372036854775809)
                        goto LABEL_b96d9b;
                    v98 = v93[109];
                    v73 = v2;
                    v72 = v1;
                    v83 = v1;
                    v84 = v2;
                    v87 = v93[108];
                    v88 = v98;
                    v63 = 0;
                    v65 = 0;
                    v67 = 0;
                    v68 = 0;
                    v69 = v98;
                    v70 = 0;
                    v71 = 2;
                    v74 = 268566529;
                    v75 = 16;
                    v76 = 0;
                    v77 = 0;
                    v78 = 0;
                    v79 = v98;
                    v80 = v98;
                    v81 = 0;
                    v82 = 2;
                    v85 = 268566529;
                    v86 = 16;
                    v13.collect(&v63);
                    core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&toml::value::Value)>>(0, 8);
                    v8 = v15;
                    *((int128_t *)&v6) = *((int128_t *)&v13);
                }
                if (v93[110] != 0x8000000000000000)
                {
                    v101 = v93[112];
                    v73 = v2;
                    v72 = v1;
                    v83 = v1;
                    v84 = v2;
                    v87 = v93[111];
                    v88 = v101;
                    v63 = 0;
                    v65 = 0;
                    v67 = 0;
                    v68 = 0;
                    v69 = v101;
                    v70 = 0;
                    v71 = 2;
                    v74 = 268566529;
                    v75 = 16;
                    v76 = 0;
                    v77 = 0;
                    v78 = 0;
                    v79 = v101;
                    v80 = v101;
                    v81 = 0;
                    v82 = 2;
                    v85 = 268566529;
                    v86 = 16;
                    v13.collect(&v63);
                    core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&toml::value::Value)>>(0, 8);
                    v5 = v15;
                    *((int128_t *)&v3) = *((int128_t *)&v13);
                }
LABEL_b96d9b:
                v104 = v12;
                v105 = v45.min(v104);
                if (v105 < v104)
                {
                    v106 = v105 * 16;
                    *((unsigned long *)(v11 + v106)) = v9;
                    *((unsigned long long *[113])(v11 + v106 + 8)) = v93;
                    v12 = v105 + 1;
                    v104 = v12;
                }
                v107 = v8;
                v108 = v45.min(v107);
                if (v108 < v107)
                {
                    v109 = v108 * 16;
                    *((unsigned long *)(8 + v109)) = v9;
                    *((unsigned long long *[113])(8 + v109 + 8)) = v93;
                    v8 = v108 + 1;
                    v107 = v8;
                }
                v110 = v45.min(v5);
                if (v110 < v5)
                {
                    v111 = v110 * 16;
                    *((unsigned long *)(8 + v111)) = v9;
                    *((unsigned long long *[113])(8 + v111 + 8)) = v93;
                    v5 = v110 + 1;
                }
                v112 = 1;
                if (!v47 && !(char)v11.eq(v104, 8, v107))
                    v112 = v107;
                v0 = v112;
                v13.new(v38, v39);
                memcpy(&v48, &v40, 16);
                v49 = &v41;
                v50 = &v10;
                v51 = &v0;
                v52 = &v6;
                v53 = &v3;
                v54 = a1;
                if (v13 == 0x8000000000000000)
                {
                    v29 = v16;
                    memcpy(&v26, &v14, 16);
                }
                else
                {
                    v70 = v21;
                    v113 = *((int128_t *)&v13);
                    v114 = *((int128_t *)&v15);
                    v115 = *((int128_t *)&v17);
                    *((int128_t *)&v68) = *((int128_t *)&v19);
                    v67 = v115;
                    v65 = v114;
                    v62 = v113;
                    starship::modules::git_branch::module::{{closure}}(&v25, &v48, &(unsigned long long)v62);
                    if (!((char)v25 & 1))
                    {
                        v55.set_segments(&v26);
                        *((int128_t *)&a0[80]) = *((int128_t *)&v60);
                        a0[64] = v59;
                        a0[48] = v58;
                        a0[32] = v57;
                        a0[16] = v56;
                        *(a0) = v55;
                        core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&toml::value::Value)>>(0, 8);
                        core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&toml::value::Value)>>(0, 8);
                        core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&toml::value::Value)>>(v10, v11);
                        core::ptr::drop_in_place<rayon::vec::IntoIter<(&alloc::string::String,&mut core::option::Option<core::result::Result<alloc::borrow::Cow<str>,starship::formatter::string_formatter::StringFormatterError>>)>>(v35, v36);
                        return;
                    }
                }
                v24 = v29;
                v23 = v26;
                if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                {
                    v33 = &v23;
                    v34 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                    v62 = &g_11f47c0;
                    v64 = 1;
                    v67 = 0;
                    v65 = &v33;
                    v66 = 1;
                    v13 = "starship::modules::git_branchremote_branchremote_nameError in module `git_commit`:\nsrc/modules/git_commit.rs";
                    v14 = 29;
                    v15 = "starship::modules::git_branchremote_branchremote_nameError in module `git_commit`:\nsrc/modules/git_commit.rs";
                    v16 = 29;
                    v17 = log::__private_api::loc(&g_11f47e8);
                    log::__private_api::log(&v62, 2, &v13);
                }
                *((unsigned long long *)a0) = 0x8000000000000000;
                core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v23);
                core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&toml::value::Value)>>(0, 8);
                core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&toml::value::Value)>>(0, 8);
            }
            core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&toml::value::Value)>>(v10, v11);
        }
    }
    core::ptr::drop_in_place<rayon::vec::IntoIter<(&alloc::string::String,&mut core::option::Option<core::result::Result<alloc::borrow::Cow<str>,starship::formatter::string_formatter::StringFormatterError>>)>>(v35, v36);
    core::ptr::drop_in_place<starship::module::Module>(&v55);
    return;
}
