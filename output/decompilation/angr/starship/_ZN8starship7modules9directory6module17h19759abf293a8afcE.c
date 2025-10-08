void starship::modules::directory::module(unsigned long long *a0, unsigned long long a1[28])
{
    unsigned int v0;  // [bp-0x490]
    unsigned int v1;  // [bp-0x48c]
    int v2;  // [bp-0x488]
    void* v3;  // [sp-0x488], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x488]
    void* v5;  // [bp-0x480], Other Possible Types: unsigned long long
    int v6;  // [bp-0x478], Other Possible Types: char *
    int v7;  // [bp-0x478]
    unsigned long long v8;  // [bp-0x470]
    void* v9;  // [bp-0x468], Other Possible Types: int
    int v10;  // [bp-0x468], Other Possible Types: void*
    int v11;  // [bp-0x468]
    int v12;  // [bp-0x458], Other Possible Types: char
    unsigned short v13;  // [bp-0x448]
    char *v14;  // [bp-0x440]
    unsigned long long v15;  // [bp-0x438]
    void* v16;  // [bp-0x430]
    unsigned long long v17;  // [bp-0x428]
    unsigned long v18;  // [bp-0x420]
    int v19;  // [bp-0x418]
    void* v20;  // [bp-0x418]
    unsigned long long v21;  // [bp-0x410]
    int v22;  // [bp-0x408], Other Possible Types: void*
    unsigned long long v23;  // [bp-0x400]
    int v24;  // [bp-0x3f8], Other Possible Types: unsigned long long
    unsigned long long v25;  // [bp-0x3f0]
    int v26;  // [bp-0x3e8]
    void* v27;  // [bp-0x3d8], Other Possible Types: unsigned long long
    void* v28;  // [bp-0x3d0], Other Possible Types: char *
    unsigned long long v29;  // [bp-0x3c8]
    void* v30;  // [bp-0x3c0]
    unsigned long long v31;  // [bp-0x3b8]
    unsigned long long v32;  // [bp-0x3b0]
    int v33;  // [sp-0x3a8]
    unsigned long long v35;  // [bp-0x3a0]
    char *v36;  // [bp-0x398]
    int v37;  // [bp-0x388], Other Possible Types: void*
    unsigned long long v38;  // [bp-0x380]
    char *v39;  // [bp-0x378]
    int v40;  // [bp-0x368], Other Possible Types: char
    unsigned long long v41;  // [bp-0x360]
    void* v42;  // [bp-0x358], Other Possible Types: unsigned long long
    uint128_t v43[6];  // [bp-0x348]
    int v44;  // [bp-0x338]
    unsigned long long v45;  // [bp-0x330]
    char *v46;  // [bp-0x328]
    unsigned long v47;  // [bp-0x318]
    char *v48;  // [bp-0x310], Other Possible Types: char, unsigned long long
    unsigned long long v49[2];  // [bp-0x308], Other Possible Types: unsigned long long
    unsigned long v50;  // [bp-0x300]
    char v51;  // [bp-0x2f8]
    int v52;  // [bp-0x2f8]
    void* v53;  // [bp-0x2e8]
    int v54;  // [bp-0x2e0]
    unsigned long long v55;  // [bp-0x2d8]
    char *v56;  // [bp-0x2d0], Other Possible Types: void*
    int v57;  // [bp-0x2c8], Other Possible Types: char
    void* v58;  // [bp-0x2b8]
    char v59;  // [bp-0x2b0]
    unsigned long long v60;  // [bp-0x2a8]
    char *v61;  // [bp-0x2a0]
    void* v62;  // [bp-0x298]
    int v63;  // [bp-0x290]
    unsigned long long v64;  // [bp-0x288]
    unsigned long long v65;  // [bp-0x280]
    char v66;  // [bp-0x278], Other Possible Types: unsigned long long
    int v67;  // [bp-0x270]
    char v68;  // [bp-0x260]
    unsigned long long v69;  // [bp-0x260]
    int v70;  // [bp-0x258]
    unsigned long v71;  // [bp-0x248]
    char *v72;  // [bp-0x240]
    unsigned long long v73;  // [bp-0x238]
    unsigned long long v74;  // [bp-0x230]
    int v75;  // [bp-0x228], Other Possible Types: char
    int v76;  // [bp-0x218]
    int v77;  // [bp-0x208]
    int v78;  // [bp-0x1f8]
    int v79;  // [bp-0x1e8]
    char v80;  // [bp-0x1d8]
    unsigned long long v81;  // [bp-0x1d0]
    char *v82;  // [bp-0x1c8]
    int v83;  // [bp-0x1c0]
    int v84;  // [bp-0x1b0]
    unsigned long long v85;  // [bp-0x1a0]
    unsigned long long v86;  // [bp-0x198]
    unsigned long long v87;  // [bp-0x190]
    unsigned long long v88;  // [bp-0x188]
    char *v89;  // [bp-0x180]
    unsigned long v90;  // [bp-0x178]
    unsigned long long v91[28];  // [bp-0x170]
    char v92;  // [bp-0x168]
    unsigned long long v93;  // [bp-0x160]
    char v94;  // [bp-0x158]
    char v95;  // [bp-0x138]
    unsigned long long v96;  // [bp-0x100]
    unsigned long long v97;  // [bp-0xf8]
    int v98;  // [bp-0xf0]
    int v99;  // [bp-0xe0]
    unsigned long long v100;  // [bp-0xd0]
    unsigned long long v101;  // [bp-0xc8]
    unsigned long long v102;  // [bp-0xc0]
    unsigned long long v103;  // [bp-0xb8]
    unsigned long long v104;  // [bp-0xb0]
    unsigned long long v105;  // [bp-0xa8]
    unsigned long long v106;  // [bp-0xa0]
    unsigned long long v107;  // [bp-0x90]
    char v108;  // [bp-0x80]
    char v109;  // [bp-0x7f]
    char v110;  // [bp-0x7d]
    char v111;  // [bp-0x78], Other Possible Types: unsigned long
    char v112;  // [bp-0x70]
    char v113;  // [bp-0x60]
    unsigned long long v115[28];  // rcx
    unsigned long v116;  // rcx
    unsigned long long v117[107];  // rdx
    unsigned long long v119[107];  // rbx
    void* v120;  // rdi
    unsigned long long v121[3];  // rax
    unsigned long long v122;  // r13
    unsigned long long v123;  // r13
    unsigned long long v124;  // r13
    unsigned long long v125;  // r12
    unsigned long long v126[2];  // r14
    unsigned long long v128;  // r15
    unsigned long long v129;  // rbx
    unsigned long long v130;  // rax
    int v131;  // xmm0
    int v132;  // xmm1
    int v133;  // xmm2
    int v134;  // xmm3
    unsigned long long v135;  // rax
    unsigned long long v136;  // rcx
    unsigned long v137;  // rax
    unsigned long long v138;  // r13
    unsigned long long v139;  // r12
    unsigned long long v140;  // r14
    unsigned long long v141;  // rbp
    unsigned long long v142;  // rbx

    v75.new_module(a1, "directoryfossil_branchfossil_metricsgit_branchgit_commitgit_stategit_metricsgit_statushg_branchpijul_channeldocker_contextpackagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_s", 9);
    v92.try_load(v81);
    (char)v4.get_home();
    if ((char)(((0 ^ v4) & (0 ^ -(v4))) >> 63))
        core::option::expect_failed("Unable to determine HOME_DIR for userHome dir: Physical dir: Display dir: Error in module `directory`:\nsrc/modules/directory.rs", 37, &g_11f4250); /* do not return */
    v46 = v6;
    *((int128_t *)&v44) = *((int128_t *)&v4);
    v115 = a1;
    v47 = &v115[22];
    v116 = &v115[25];
    if (!v109)
        v116 = v47;
    v18 = v116;
    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 4)
    {
        v14 = &(char)v44;
        v28 = &v14;
        v29 = <&T as core::fmt::Debug>::fmt;
        v4 = &g_11f4210;
        v5 = 1;
        v10 = 0;
        v6 = &v28;
        v8 = 1;
        v20 = "starship::modules::directoryread_only_stylerepo_root_stylebefore_repo_root_stylerepo_rootread_onlyFailed to determine read only status of directory '': --jsonsrc/modules/direnv.rs";
        v21 = 28;
        v22 = "starship::modules::directoryread_only_stylerepo_root_stylebefore_repo_root_stylerepo_rootread_onlyFailed to determine read only status of directory '': --jsonsrc/modules/direnv.rs";
        v23 = 28;
        v24 = log::__private_api::loc(&g_11f4268);
        log::__private_api::log(&v4, 4, &v20);
    }
    v10 = v11;
    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 4)
    {
        v14 = &v47;
        v28 = &v14;
        v29 = <&T as core::fmt::Debug>::fmt;
        v4 = &g_11f4220;
        v5 = 1;
        v10 = 0;
        v6 = &v28;
        v8 = 1;
        v20 = "starship::modules::directoryread_only_stylerepo_root_stylebefore_repo_root_stylerepo_rootread_onlyFailed to determine read only status of directory '': --jsonsrc/modules/direnv.rs";
        v21 = 28;
        v22 = "starship::modules::directoryread_only_stylerepo_root_stylebefore_repo_root_stylerepo_rootread_onlyFailed to determine read only status of directory '': --jsonsrc/modules/direnv.rs";
        v23 = 28;
        v24 = log::__private_api::loc(&g_11f4280);
        log::__private_api::log(&v4, 4, &v20);
        v10 = v9;
    }
    v10 = v10;
    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 4)
    {
        v14 = &v18;
        v28 = &v14;
        v29 = <&T as core::fmt::Debug>::fmt;
        v4 = &g_11f4230;
        v5 = 1;
        v10 = 0;
        v6 = &v28;
        v8 = 1;
        v20 = "starship::modules::directoryread_only_stylerepo_root_stylebefore_repo_root_stylerepo_rootread_onlyFailed to determine read only status of directory '': --jsonsrc/modules/direnv.rs";
        v21 = 28;
        v22 = "starship::modules::directoryread_only_stylerepo_root_stylebefore_repo_root_stylerepo_rootread_onlyFailed to determine read only status of directory '': --jsonsrc/modules/direnv.rs";
        v23 = 28;
        v24 = log::__private_api::loc(&g_11f4298);
        log::__private_api::log(&v4, 4, &v20);
        v10 = v9;
    }
    if (v106 || v108)
    {
        v119 = (!((char)a1.get_repo() & 1) ? v117 : 0);
        if (!v108)
            goto LABEL_b8d406;
        if (v119)
        {
            v120 = (v119[104] != 0x8000000000000000 ? (unsigned long long [107])&v119[104] : 0);
            v119 = v117;
        }
        else
        {
            v119 = 0;
            v120 = 0;
        }
        v121 = v120.filter(v45, v46);
        if (!v121)
            goto LABEL_b8d406;
        starship::modules::directory::contract_repo_path(&v66, *((long long *)(v18 + 8)), *((long long *)(v18 + 16)), v121[1], v121[2]);
        v122 = v66;
    }
    else
    {
        v119 = 0;
LABEL_b8d406:
        v66 = 0x8000000000000000;
        v122 = 0x8000000000000000;
    }
    v71 = v18;
    v72 = &(char)v44;
    v73 = v102;
    v74 = v103;
    if (v122 == 0x8000000000000000)
    {
        starship::modules::directory::module::{{closure}}(&v68, &v71);
    }
    else
    {
        v70 = v67;
        v69 = v122;
    }
    starship::modules::directory::substitute_path(&v59, &v68, v93, *((long long *)&v94));
    v65 = v104;
    starship::modules::utils::directory::truncate(&(char)v4, v60, v61, v104);
    if (v4 == 0x8000000000000000)
    {
        core::ptr::drop_in_place<regex::error::Error>(&(char)v4);
        *((int128_t *)&v33) = *((int128_t *)&v59);
        v36 = v61;
        if (v122 == 0x8000000000000000)
        {
            v37 = 0;
            v38 = 1;
            v39 = 0;
            v1 = 0;
            if (v119)
                goto LABEL_b8d63f;
        }
        else
        {
            v1 = 0;
            v123 = v105;
            if (v105 <= 0 || *((long long *)&v95))
                goto LABEL_b8d606;
            starship::modules::directory::contract_path(&(char)v4, *((long long *)(v18 + 8)), *((long long *)(v18 + 16)), v45, v46, v102, v103);
            starship::modules::directory::to_fish_style(&(char)v37, v123, v5, v6, v35, v36);
            core::ptr::drop_in_place<versions::Chunk>(&(char)v4);
            if (v119)
            {
LABEL_b8d63f:
                if ((!v106 | v119[104] == 0x8000000000000000) != 1)
                {
                    starship::modules::directory::contract_repo_path(&(char)v4, *((long long *)(v18 + 8)), *((long long *)(v18 + 16)), v119[105], v119[106]);
                    if (v4 == 0x8000000000000000)
                    {
                        *(a0) = 0x8000000000000000;
                        core::ptr::drop_in_place<alloc::string::String>(&v37);
                        core::ptr::drop_in_place<alloc::string::String>(&(char)v33);
                        if ((char)v1)
                            goto LABEL_b8de34;
                        goto LABEL_b8de41;
                    }
                    *((int128_t *)&v63) = *((int128_t *)&v5);
                    v62 = v4;
                    v124 = (long long)v63;
                    v125 = v64;
                    v20.into_searcher(47, v124, v125);
                    memcpy(&v12, &v24, 16);
                    memcpy(&v10, &v22, 16);
                    *((int128_t *)&v7) = *((int128_t *)&v20);
                    v3 = 0;
                    v5 = v125;
                    v13 = 1;
                    v48.collect(&v3);
                    if (!v50)
                        core::panicking::panic_bounds_check(0, 0, &g_11f42b0); /* do not return */
                    v126 = v49;
                    v0 = (int)alloc::str::<impl str>::replacen(&v40, v124, v125, v126[0], v126[1]) & 0xffffff00 | 1;
                    v20.into_searcher(47, v41, v42);
                    memcpy(&v12, &v24, 16);
                    memcpy(&v10, &v22, 16);
                    *((int128_t *)&v6) = *((int128_t *)&v20);
                    v4 = 0;
                    v5 = v42;
                    v13 = 1;
                    if (v65 && v4.fold() - 1 >= v65)
                    {
                        v14 = 0;
                        v15 = 1;
                        v16 = 0;
                        v28 = 0;
                        v29 = 1;
                        v30 = 0;
                        v6 = v39;
                        *((int128_t *)&v2) = *((int128_t *)&v37);
                        v20.add(&v4, v35, v36);
                        memcpy(&v51, &v14, 16);
                        v53 = 0;
                        *((int128_t *)&v54) = *((int128_t *)&v28);
                        v56 = 0;
                        memcpy(&v57, &v20, 16);
                        v58 = v22;
                        core::ptr::drop_in_place<alloc::string::String>(&v40);
                    }
                    else
                    {
                        v128 = v126[0];
                        v129 = v126[1];
                        v130 = starship::modules::directory::before_root_dir(v35, v36, v124, v125);
                        v6 = v39;
                        *((int128_t *)&v2) = *((int128_t *)&v37);
                        v0 = 0;
                        v20.add(&v4, v130, v117);
                        v4.to_vec(v128, v129);
                        v56 = v6;
                        memcpy(&(char)v54, &v4, 16);
                        memcpy(&v57, &v40, 16);
                        v58 = v42;
                        memcpy(&v51, &v20, 16);
                        v53 = v22;
                    }
                    core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&toml::value::Value)>>(v48, v126);
                    core::ptr::drop_in_place<alloc::string::String>(&v62);
                    v9 = v9;
                    if (!v110)
                    {
LABEL_b8db60:
                        v27 = v58;
                        v131 = v52;
                        v132 = *((int128_t *)&v53);
                        v133 = *((int128_t *)&v55);
                        v134 = v57;
LABEL_b8db90:
                        v26 = v134;
                        v24 = v133;
                        v22 = v132;
                        v19 = v131;
                        if (v22)
                        {
                            v135 = 96;
                            v136 = 88;
                        }
                        else
                        {
                            v137 = (v25) * 16;
                            v136 = v137 + 72;
                            v135 = v137 + 80;
                        }
                        v138 = v96;
                        v139 = v97;
                        v111.new(*((long long *)&(&v92)[v136]), *((long long *)&(&v92)[v135]));
                        if (!v107)
                            v140 = v139;
                        if (!v107)
                            v107 = v138;
                        if (!v106)
                        {
                            v141 = v138;
                            if (v106)
                                goto LABEL_b8dc42;
LABEL_b8dc41:
                            v142 = v139;
                        }
                        else
                        {
                            v141 = v106;
                            if (!v106)
                                goto LABEL_b8dc41;
LABEL_b8dc42:
                        }
                        v82 = &v96;
                        v83 = v98;
                        v84 = v99;
                        v85 = v141;
                        v86 = v142;
                        v87 = v107;
                        v88 = v140;
                        v89 = &(unsigned long long)v19;
                        v90 = v47;
                        v91[0] = a1;
                        if (v111 == 0x8000000000000000)
                        {
                            v17 = *((long long *)&v113);
                            memcpy(&v15, &v112, 16);
                        }
                        else
                        {
                            starship::modules::directory::module::{{closure}}(&v14, &v82, &v111);
                            if (!((char)v14 & 1))
                            {
                                v75.set_segments(&v15);
                                v43[5] = *((int128_t *)&v80);
                                *((void*)&v43[4]) = v79;
                                *((void*)&v43[3]) = v78;
                                *((void*)&v43[2]) = v77;
                                *((void*)&v43[1]) = v76;
                                *((void*)&v43[0]) = v75;
                                core::ptr::drop_in_place<starship::bug_report::ShellInfo>(&(unsigned long long)v19);
                                core::ptr::drop_in_place<alloc::string::String>(&(char)v33);
                                if ((char)v1)
                                    core::ptr::drop_in_place<alloc::string::String>(&v59);
                                core::ptr::drop_in_place<std::path::PathBuf>(&(char)v44);
                                core::ptr::drop_in_place<starship::configs::directory::DirectoryConfig>(&v92);
                                return;
                            }
                        }
                        v42 = v17;
                        *((int128_t *)&v40) = *((int128_t *)&v15);
                        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                        {
                            v48 = &v40;
                            v49 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                            v3 = &g_11f4240;
                            v5 = 1;
                            v9 = 0;
                            v6 = &v48;
                            v8 = 1;
                            v28 = "starship::modules::directoryread_only_stylerepo_root_stylebefore_repo_root_stylerepo_rootread_onlyFailed to determine read only status of directory '': --jsonsrc/modules/direnv.rs";
                            v29 = 28;
                            v30 = "starship::modules::directoryread_only_stylerepo_root_stylebefore_repo_root_stylerepo_rootread_onlyFailed to determine read only status of directory '': --jsonsrc/modules/direnv.rs";
                            v31 = 28;
                            v32 = log::__private_api::loc(&g_11f42c8);
                            log::__private_api::log(&v3, 2, &v28);
                        }
                        *(a0) = 0x8000000000000000;
                        core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v40);
                        core::ptr::drop_in_place<starship::bug_report::ShellInfo>(&(unsigned long long)v19);
                        core::ptr::drop_in_place<alloc::string::String>(&(char)v33);
                        if ((char)v1)
                        {
LABEL_b8de34:
                            core::ptr::drop_in_place<alloc::string::String>(&v59);
                        }
LABEL_b8de41:
                        core::ptr::drop_in_place<std::path::PathBuf>(&(char)v44);
                        core::ptr::drop_in_place<starship::configs::directory::DirectoryConfig>(&v92);
                        core::ptr::drop_in_place<starship::module::Module>(&v75);
                        return;
                    }
LABEL_b8d747:
                    core::array::drain::drain_array_with(&v4, &v51);
                    v27 = *((long long *)&v13);
                    v131 = (int128_t)v2;
                    v132 = (int128_t)v6;
                    v133 = v9;
                    v134 = v12;
                    goto LABEL_b8db90;
                }
            }
        }
    }
    else
    {
        v36 = v6;
        *((int128_t *)&v33) = *((int128_t *)&v4);
        v1 = (unsigned int)v36 & 0xffffff00 | 1;
        v123 = v105;
LABEL_b8d606:
        (char)v4.to_vec(v100, v101);
        v39 = v6;
        *((int128_t *)&v37) = *((int128_t *)&v4);
        if (v119)
            goto LABEL_b8d63f;
    }
    v14 = 0;
    v15 = 1;
    v16 = 0;
    v28 = 0;
    v29 = 1;
    v30 = 0;
    v6 = v39;
    *((int128_t *)&v2) = *((int128_t *)&v37);
    v20.add(&(char)v4, v35, v36);
    memcpy(&v51, &v14, 16);
    v53 = 0;
    *((int128_t *)&v54) = *((int128_t *)&v28);
    v56 = 0;
    memcpy(&v57, &v20, 16);
    v58 = v22;
    v9 = v10;
    if (!v110)
        goto LABEL_b8db60;
    goto LABEL_b8d747;
}
