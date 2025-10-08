long long bat::run(void* a0)
{
    char *v0;  // [bp-0x4a8], Other Possible Types: char, unsigned long long
    unsigned long long v1;  // [bp-0x4a0]
    unsigned long long v2;  // [bp-0x498]
    unsigned long long v3;  // [bp-0x488], Other Possible Types: char
    char v4;  // [bp-0x487]
    unsigned long long v5;  // [bp-0x480]
    char v6;  // [bp-0x480]
    char *v7;  // [bp-0x478]
    char v8;  // [bp-0x470], Other Possible Types: unsigned long long
    void* v9;  // [bp-0x468]
    char v10;  // [bp-0x460]
    char v11;  // [bp-0x457]
    char v12;  // [bp-0x450]
    int v13;  // [bp-0x448], Other Possible Types: unsigned long
    int v14;  // [bp-0x440]
    char v15;  // [bp-0x430], Other Possible Types: unsigned long long
    int v16;  // [bp-0x428]
    char v17;  // [bp-0x418]
    int v18;  // [bp-0x408]
    int v19;  // [bp-0x3f8]
    int v20;  // [bp-0x3e8]
    int v21;  // [bp-0x3d8]
    unsigned long long v22;  // [bp-0x3c8]
    char v23;  // [bp-0x3c0]
    unsigned long long v24;  // [bp-0x398]
    int v25;  // [bp-0x390]
    unsigned long long v26;  // [bp-0x380]
    char v27;  // [bp-0x378]
    unsigned long long v28;  // [bp-0x368]
    char v29;  // [bp-0x360]
    char v30;  // [bp-0x35f]
    char v31;  // [bp-0x35d]
    char *v32;  // [bp-0x358], Other Possible Types: char
    unsigned long long v33;  // [bp-0x350]
    int v34;  // [bp-0x348]
    int v35;  // [bp-0x338]
    int v36;  // [bp-0x328]
    int v37;  // [bp-0x318]
    int v38;  // [bp-0x308]
    int v39;  // [bp-0x2f8]
    char *v40;  // [bp-0x2e8], Other Possible Types: int, unsigned long long
    int v41;  // [bp-0x2e0], Other Possible Types: unsigned long
    int v42;  // [bp-0x2d9]
    int v43;  // [bp-0x2d8]
    unsigned long long v44;  // [bp-0x2d1]
    int v45;  // [bp-0x2d0]
    int v46;  // [bp-0x2c8], Other Possible Types: unsigned long long
    char v47;  // [bp-0x2c8]
    int v48;  // [bp-0x2c0]
    int v49;  // [bp-0x2b8]
    int v50;  // [bp-0x2b1]
    int v51;  // [bp-0x2b0]
    unsigned long v52;  // [bp-0x2a9]
    int v53;  // [bp-0x2a0], Other Possible Types: char
    char v54;  // [bp-0x290], Other Possible Types: unsigned long long
    int v55;  // [bp-0x288]
    char v56;  // [bp-0x278]
    int v57;  // [bp-0x268]
    int v58;  // [bp-0x258]
    int v59;  // [bp-0x248]
    int v60;  // [bp-0x238]
    char v61;  // [bp-0x228]
    int v62;  // [bp-0x218]
    int v63;  // [bp-0x208]
    unsigned long long v64;  // [bp-0x1f8]
    int v65;  // [bp-0x1f0]
    unsigned long long v66;  // [bp-0x1e0]
    char v67;  // [bp-0x1d8]
    unsigned long long v68;  // [bp-0x1c8]
    char v69;  // [bp-0x1c0]
    char v70;  // [bp-0x1bf]
    char v71;  // [bp-0x1be]
    char v72;  // [bp-0x1bd]
    int v73;  // [bp-0x1b8]
    unsigned int v74;  // [bp-0x1b0]
    unsigned long long v75;  // [bp-0x1a8]
    unsigned long long v76[3];  // [bp-0x1a0]
    unsigned long long v77;  // [bp-0x198]
    unsigned long v78;  // [bp-0x190]
    unsigned long long v79;  // [bp-0x188]
    unsigned long long v80;  // [bp-0x180]
    void* v81;  // [bp-0x178]
    unsigned long long v82;  // [bp-0x170]
    char v83;  // [bp-0x168], Other Possible Types: unsigned long long
    int v84;  // [bp-0x160]
    int v85;  // [bp-0x158]
    int v86;  // [bp-0x150]
    char v87;  // [bp-0x148]
    int v88;  // [bp-0x140]
    int v89;  // [bp-0x138]
    int v90;  // [bp-0x130]
    char v91;  // [sp-0x128]
    char v92;  // [sp-0x120]
    char v93;  // [bp-0x110]
    unsigned long v95;  // rax
    int v96;  // xmm0
    int v97;  // xmm1
    int v98;  // xmm2
    int v99;  // xmm3
    unsigned long long v100[6];  // rax
    unsigned long long v101;  // r13
    unsigned long long v102;  // r12
    unsigned long long v103[3];  // rax
    unsigned long long v104;  // r15
    unsigned long long v105;  // r14
    unsigned long long v106[3];  // rax
    unsigned long v107;  // r14
    unsigned long v108;  // r15
    unsigned long long v109[3];  // rbp
    unsigned long v110;  // rbp
    char v111;  // al
    unsigned long v112;  // rcx
    int v113;  // xmm0
    int v114;  // xmm1
    int v115;  // xmm2
    unsigned long v116;  // rax
    unsigned long v117;  // r12
    unsigned long long v118;  // r12
    int v119;  // xmm0
    int v120;  // xmm1
    int v121;  // xmm2
    char *v122;  // rdi
    int v123;  // xmm1
    int v124;  // xmm2
    int v125;  // xmm3
    unsigned long long v126;  // rbp
    int v127;  // xmm0
    int v128;  // xmm1
    int v129;  // xmm2
    int v130;  // xmm1
    int v131;  // xmm2
    int v132;  // xmm3
    char v133;  // al
    void* v134;  // rax
    void* v135;  // r12
    unsigned long long v138;  // rdx
    int v139;  // xmm0
    int v140;  // xmm2
    int v141;  // xmm3
    unsigned long v142;  // rcx
    int v143;  // xmm0
    int v144;  // xmm1
    int v145;  // xmm2
    unsigned long long v146;  // rax
    unsigned long long v147;  // rax
    int v148;  // xmm0
    int v149;  // xmm2
    int v150;  // xmm3
    int v151;  // xmm0
    int v152;  // xmm1
    int v153;  // xmm2
    unsigned long long v154;  // rcx

    v3.new();
    v95 = v3;
    if ((char)v95 != 13)
    {
        v52 = v13;
        v151 = *((int128_t *)&v4);
        v152 = *((int128_t *)&v7);
        v153 = *((int128_t *)&v9);
        memcpy(&(char)v48, &v11, 16);
        v46 = v153;
        v43 = v152;
        v40 = v151;
        v154 = (long long)v14;
        *((unsigned long *)&a0[64]) = v52;
        *((int128_t *)&a0[49]) = (int128_t)v48;
        a0[33] = v153;
        a0[17] = v152;
        a0[1] = v151;
        *((char *)a0) = v95;
        *((unsigned long long *)&a0[72]) = v154;
        return v95;
    }
    v96 = *((int128_t *)&v6);
    v97 = *((int128_t *)&v8);
    v98 = *((int128_t *)&v10);
    v99 = *((int128_t *)&v12);
    v50 = v99;
    v36 = v96;
    v37 = v97;
    v38 = v98;
    v39 = v99;
    v100 = once_cell::sync::OnceCell<T>::get_or_try_init();
    v101 = v100[4];
    v102 = v100[5];
    v103 = once_cell::sync::OnceCell<T>::get_or_try_init();
    v104 = v103[1];
    v105 = v103[2];
    if ((char)v36.get_flag("diagnosticdiagnosticsShow diagnostic information for bug reports.Show acknowledgements.Sets terminal title to filenames when using a pager.Modify the syntax-definition and theme cachebuildInitialize (or update) the syntax/theme cache.Initialize (or update)", 10))
    {
        bat::invoke_bugreport(&v36, v104, v105);
    }
    else
    {
        v3.try_get_one(&v36, "completionSHELLps1zshShow shell completion for a certain shell. [possible values: bash, fish, zsh, ps1]config-fileShow path to the configuration file.generate-config-fileGenerates a default configuration file.config-dirShow bat's configuration directory.ca", 10);
        v106 = "completionSHELLps1zshShow shell completion for a certain shell. [possible values: bash, fish, zsh, ps1]config-fileShow path to the configuration file.generate-config-fileGenerates a default configuration file.config-dirShow bat's configuration directory.ca".unwrap(10, &v3);
        if (v106)
        {
            v76[0] = v106;
            v107 = v106[1];
            v108 = v106[2];
            if ((char)v107.equal(v108, "bashHOME", 4))
            {
                v40 = &g_ac8a98;
                v41 = <&T as core::fmt::Display>::fmt;
                *((char **)&v3) = &g_ac8198;
                v5 = 2;
                v9 = 0;
                v7 = &v40;
                v8 = 1;
                std::io::stdio::_print(&v3);
            }
            else if ((char)v107.equal(v108, "fish", 4))
            {
                v40 = &g_ac8a88;
                v41 = <&T as core::fmt::Display>::fmt;
                *((char **)&v3) = &g_ac8198;
                v5 = 2;
                v9 = 0;
                v7 = &v40;
                v8 = 1;
                std::io::stdio::_print(&v3);
            }
            else if ((char)v107.equal(v108, "ps1zshShow shell completion for a certain shell. [possible values: bash, fish, zsh, ps1]config-fileShow path to the configuration file.generate-config-fileGenerates a default configuration file.config-dirShow bat's configuration directory.cache-dirShow bat", 3))
            {
                v40 = &g_ac8a78;
                v41 = <&T as core::fmt::Display>::fmt;
                *((char **)&v3) = &g_ac8198;
                v5 = 2;
                v9 = 0;
                v7 = &v40;
                v8 = 1;
                std::io::stdio::_print(&v3);
            }
            else if ((char)v107.equal(v108, "zshShow shell completion for a certain shell. [possible values: bash, fish, zsh, ps1]config-fileShow path to the configuration file.generate-config-fileGenerates a default configuration file.config-dirShow bat's configuration directory.cache-dirShow bat's ", 3))
            {
                v40 = &g_ac8a68;
                v41 = <&T as core::fmt::Display>::fmt;
                *((char **)&v3) = &g_ac8198;
                v5 = 2;
                v9 = 0;
                v7 = &v40;
                v8 = 1;
                std::io::stdio::_print(&v3);
            }
            else
            {
                v40 = &v76;
                v41 = <&T as core::fmt::Display>::fmt;
                v3 = &g_ac8a30;
                v5 = 2;
                v9 = 0;
                v7 = &v40;
                v8 = 1;
                core::panicking::panic_fmt(&v3, &g_ac8a50); /* do not return */
            }
        }
        else
        {
            v109 = (long long)v39;
            if (v109 && (char)v109[1].equal(v109[2], "cachesrc/bin/bat/app.rs", 5))
            {
                v110 = v109 + 1;
                if (v110.args_present())
                {
                    bat::run_cache_subcommand(&v3, v110, v101, v102, v104, v105);
                    v111 = v3;
                    if (v111 != 13)
                    {
                        v112 = a0 + 1;
                        *((int128_t *)(v112 + 63)) = (int128_t)v13;
                        v113 = *((int128_t *)&v4);
                        v114 = *((int128_t *)&(&v6)[9]);
                        v115 = *((int128_t *)&(&v8)[9]);
                        *((int128_t *)(v112 + 48)) = *((int128_t *)&(&v10)[9]);
                        *((void*)(v112 + 32)) = v115;
                        *((void*)(v112 + 16)) = v114;
                        *((void*)v112) = v113;
                        *((char *)a0) = v111;
                        return (unsigned long long)core::ptr::drop_in_place<bat::app::App>(&v36);
                    }
                }
                else
                {
                    v116 = 8.alloc_impl(160);
                    if (!v116)
                        alloc::alloc::handle_alloc_error(8, 160); /* do not return */
                    v117 = v116;
                    v3.ordinary_file();
                    ::libc.so.0::memcpy(v117, &v3, 160);
                    v77 = 1;
                    v78 = v117;
                    v79 = 1;
                    v3.config(&v36, v117);
                    v118 = v3;
                    memcpy(&v83, &v6, 16);
                    *((int128_t *)&v85) = *((int128_t *)&v8);
                    memcpy(&v87, &v10, 16);
                    *((int128_t *)&v89) = *((int128_t *)&v12);
                    memcpy(&v91, &v13, 16);
                    if (v118 != 2)
                    {
                        ::libc.so.0::memcpy(&v54, &v15, 216);
                        v123 = (int128_t)v85;
                        v124 = *((int128_t *)&v87);
                        v125 = (int128_t)v89;
                        *((int128_t *)&v41) = *((int128_t *)&v83);
                        v45 = v123;
                        v48 = v124;
                        v51 = v125;
                        memcpy(&v53, &v91, 16);
                        v40 = v118;
                        bat::run_controller(a0, &v77, &v40, v104, v105);
                        core::ptr::drop_in_place<bat::config::Config>(&v40);
                        return (unsigned long long)core::ptr::drop_in_place<bat::app::App>(&v36);
                    }
                    *((int128_t *)&a0[64]) = *((int128_t *)&v91);
                    v119 = *((int128_t *)&v83);
                    v120 = (int128_t)v85;
                    v121 = *((int128_t *)&v87);
                    *((int128_t *)&a0[48]) = (int128_t)v89;
                    a0[32] = v121;
                    a0[16] = v120;
                    *(a0) = v119;
                    v122 = &v77;
                    core::ptr::drop_in_place<alloc::vec::Vec<bat::input::Input>>(&v77);
                    return (unsigned long long)core::ptr::drop_in_place<bat::app::App>(&v36);
                }
            }
            else
            {
                v3.inputs(&v36);
                v111 = v3;
                if (v111 != 13)
                {
                    v148 = *((int128_t *)&v4);
                    v149 = *((int128_t *)&(&v8)[8]);
                    v150 = *((int128_t *)&(&v10)[8]);
                    *((int128_t *)&v42) = *((int128_t *)&(&v4)[15]);
                    v40 = v148;
                    *((int128_t *)&a0[64]) = (int128_t)v13;
                    a0[48] = v150;
                    a0[32] = v149;
                    *((int128_t *)&a0[16]) = (int128_t)(&v40)[15];
                    *((int128_t *)&a0[1]) = (int128_t)v40;
                    *((char *)a0) = v111;
                    return (unsigned long long)core::ptr::drop_in_place<bat::app::App>(&v36);
                }
                v44 = v8;
                *((int128_t *)&v73) = *((int128_t *)&v6);
                v75 = v8;
                v3.config(&v36, v74);
                v126 = v3;
                memcpy(&(char)v40, &v6, 16);
                *((int128_t *)&v43) = *((int128_t *)&v8);
                memcpy(&v47, &v10, 16);
                *((int128_t *)&v49) = *((int128_t *)&v12);
                memcpy(&(char)v50, &v13, 16);
                if (v126 == 2)
                {
                    *((int128_t *)&a0[64]) = (int128_t)v51;
                    v127 = *((int128_t *)&v40);
                    v128 = (int128_t)v43;
                    v129 = *((int128_t *)&v47);
                    *((int128_t *)&a0[48]) = (int128_t)v49;
                    a0[32] = v129;
                    a0[16] = v128;
                    *(a0) = v127;
                    core::ptr::drop_in_place<alloc::vec::Vec<bat::input::Input>>(v122);
                    return (unsigned long long)core::ptr::drop_in_place<bat::app::App>(&v36);
                }
                ::libc.so.0::memcpy(&v93, &v15, 216);
                v130 = (int128_t)v43;
                v131 = *((int128_t *)&v47);
                v132 = (int128_t)v49;
                *((int128_t *)&v84) = *((int128_t *)&v40);
                v86 = v130;
                v88 = v131;
                v90 = v132;
                memcpy(&v92, &v50, 16);
                v83 = v126;
                if ((char)v36.get_flag("list-languagesDisplay a list of supported languages for syntax highlighting.unbufferedThis option exists for POSIX-compliance reasons ('u' is for 'unbuffered'). The output is always unbuffered - this option is simply ignored.no-configDo not use the configu", 14))
                {
                    bat::get_languages(&v3, &v83, v104, v105);
                    v133 = v3;
                    if (v133 == 13)
                    {
                        memcpy(&v0, &v6, 16);
                        v2 = v8;
                        v134 = 8.alloc_impl(160);
                        if (!v134)
                            alloc::alloc::handle_alloc_error(8, 160); /* do not return */
                        v135 = v134;
                        v3.from_reader(v1.new(v2), &g_ac8aa8);
                        ::libc.so.0::memcpy(v135, &v3, 160);
                        v80 = 1;
                        v81 = v135;
                        v82 = 1;
                        v32.new((unsigned long long)11.components(), v138);
                        v3.default();
                        v64 = v24;
                        v65 = v25;
                        v66 = v26;
                        memcpy(&v61, &v32, 16);
                        v62 = v34;
                        v63 = v35;
                        v70 = v30;
                        v71 = 1;
                        v58 = v19;
                        v59 = v20;
                        v60 = v21;
                        v46 = *((long long *)&(&v8)[8]);
                        memcpy(&(char)v43, &v6, 16);
                        *((int128_t *)&v48) = *((int128_t *)&v10);
                        memcpy(&(char)v49, &v12, 16);
                        v53 = v14;
                        v54 = v15;
                        memcpy(&v67, &v27, 16);
                        v55 = v16;
                        memcpy(&v56, &v17, 16);
                        v57 = v18;
                        v68 = v28;
                        v69 = v29;
                        *((int128_t *)&v40) = *((int128_t *)&v3);
                        v72 = v31;
                        core::ptr::drop_in_place<bat::style::StyleComponents>(v22, *((long long *)&v23));
                        bat::run_controller(a0, &v80, &(char)v40, v104, v105);
                        core::ptr::drop_in_place<bat::config::Config>(&(char)v40);
                        core::ptr::drop_in_place<alloc::string::String>(&v0);
                        goto LABEL_7b065e;
                    }
                    else
                    {
                        v139 = *((int128_t *)((char *)&v3 + 1));
                        v140 = *((int128_t *)&(&v8)[8]);
                        v141 = *((int128_t *)&(&v10)[8]);
                        *((int128_t *)&v42) = *((int128_t *)&(&v6)[8]);
                        v40 = v139;
                        *((int128_t *)&a0[64]) = (int128_t)v13;
                        a0[48] = v141;
                        a0[32] = v140;
                        *((int128_t *)&a0[16]) = (int128_t)(&v40)[15];
                        *((int128_t *)&a0[1]) = (int128_t)v40;
                        goto LABEL_7b0581;
                    }
                }
                if ((char)v36.get_flag("list-themesignored-suffixmap-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be ", 11))
                {
                    bat::list_themes(&v3, &v83, v101, v102, v104, v105);
                    goto LABEL_7b0452;
                }
                if ((char)v36.get_flag("config-fileShow path to the configuration file.generate-config-fileGenerates a default configuration file.config-dirShow bat's configuration directory.cache-dirShow bat's cache directory.diagnosticdiagnosticsShow diagnostic information for bug reports.Show", 11))
                {
                    bat::config::config_file(&(char)v40);
                    v32.from_utf8_lossy((&v40)[1], (long long)v43);
                    v0 = &v32;
                    v1 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
                    *((char **)&v3) = &g_ac8198;
                    v5 = 2;
                    v9 = 0;
                    v7 = &v0;
                    v8 = 1;
                    std::io::stdio::_print(&v3);
                    core::ptr::drop_in_place<regex::error::Error>(&v32);
                    core::ptr::drop_in_place<std::path::PathBuf>(&(char)v40);
                }
                else if ((char)v36.get_flag("generate-config-fileGenerates a default configuration file.config-dirShow bat's configuration directory.cache-dirShow bat's cache directory.diagnosticdiagnosticsShow diagnostic information for bug reports.Show acknowledgements.Sets terminal title to filena", 20))
                {
                    bat::config::generate_config_file(&v3);
LABEL_7b0452:
                    v133 = v3;
                    if (v133 != 13)
                    {
                        v142 = a0 + 1;
                        *((int128_t *)(v142 + 63)) = (int128_t)v13;
                        v143 = *((int128_t *)((char *)&v3 + 1));
                        v144 = *((int128_t *)&(&v6)[9]);
                        v145 = *((int128_t *)&(&v8)[9]);
                        *((int128_t *)(v142 + 48)) = *((int128_t *)&(&v10)[9]);
                        *((void*)(v142 + 32)) = v145;
                        *((void*)(v142 + 16)) = v144;
                        *((void*)v142) = v143;
LABEL_7b0581:
                        *((char *)a0) = v133;
                        goto LABEL_7b0583;
                    }
                }
                else
                {
                    if ((char)v36.get_flag("config-dirShow bat's configuration directory.cache-dirShow bat's cache directory.diagnosticdiagnosticsShow diagnostic information for bug reports.Show acknowledgements.Sets terminal title to filenames when using a pager.Modify the syntax-definition and the", 10))
                    {
                        v0 = std::io::stdio::stdout();
                        (char)v40.from_utf8_lossy(v101, v102);
                        v32 = &(char)v40;
                        v33 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
                        *((char **)&v3) = &g_ac8198;
                        v5 = 2;
                        v9 = 0;
                        v7 = &v32;
                        v8 = 1;
                        v146 = v0.write_fmt(&v3);
                        goto LABEL_7b07ef;
                    }
                    if ((char)v36.get_flag("cache-dirShow bat's cache directory.diagnosticdiagnosticsShow diagnostic information for bug reports.Show acknowledgements.Sets terminal title to filenames when using a pager.Modify the syntax-definition and theme cachebuildInitialize (or update) the synta", 9))
                    {
                        v0 = std::io::stdio::stdout();
                        (char)v40.from_utf8_lossy(v104, v105);
                        v32 = &(char)v40;
                        v33 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
                        *((char **)&v3) = &g_ac8198;
                        v5 = 2;
                        v9 = 0;
                        v7 = &v32;
                        v8 = 1;
                        v146 = v0.write_fmt(&v3);
LABEL_7b07ef:
                        if (v146)
                        {
                            *((char *)a0) = 0;
                            *((unsigned long long *)&a0[8]) = v146;
                            core::ptr::drop_in_place<regex::error::Error>(&(char)v40);
                            goto LABEL_7b0583;
                        }
                        else
                        {
                            core::ptr::drop_in_place<regex::error::Error>(&(char)v40);
                        }
                    }
                    else
                    {
                        if (!(char)v36.get_flag("acknowledgements", 16))
                        {
                            bat::run_controller(a0, &(char)v73, &v83, v104, v105);
LABEL_7b0661:
                            core::ptr::drop_in_place<bat::config::Config>(&v83);
                            if (false)
                                return (unsigned long long)core::ptr::drop_in_place<bat::app::App>(&v36);
                            core::ptr::drop_in_place<alloc::vec::Vec<bat::input::Input>>(&(char)v73);
                            return (unsigned long long)core::ptr::drop_in_place<bat::app::App>(&v36);
                        }
                        v0 = std::io::stdio::stdout();
                        bat::assets::get_acknowledgements(&(char)v40);
                        v32 = &(char)v40;
                        v33 = <alloc::string::String as core::fmt::Display>::fmt;
                        *((char **)&v3) = &g_ac8198;
                        v5 = 2;
                        v9 = 0;
                        v7 = &v32;
                        v8 = 1;
                        v147 = v0.write_fmt(&v3);
                        if (v147)
                        {
                            *((char *)a0) = 0;
                            *((unsigned long long *)&a0[8]) = v147;
                            core::ptr::drop_in_place<alloc::string::String>(&(char)v40);
LABEL_7b0583:
                            core::ptr::drop_in_place<bat::config::Config>(&v83);
                            v122 = &(char)v73;
                            core::ptr::drop_in_place<alloc::vec::Vec<bat::input::Input>>(v122);
                            return (unsigned long long)core::ptr::drop_in_place<bat::app::App>(&v36);
                        }
                        core::ptr::drop_in_place<alloc::string::String>(&(char)v40);
                    }
                }
                *((unsigned short *)a0) = 269;
LABEL_7b065e:
                goto LABEL_7b0661;
            }
        }
    }
    *((unsigned short *)a0) = 269;
    return (unsigned long long)core::ptr::drop_in_place<bat::app::App>(&v36);
}
