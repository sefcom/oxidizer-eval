long long bat::app::App::config(void* a0, struct_0 *a1, unsigned long a2)
{
    struct_5 *v0;  // [bp-0x440]
    char v1;  // [bp-0x438]
    char v2;  // [bp-0x434]
    char v3;  // [bp-0x433]
    char v4;  // [bp-0x432]
    char v5;  // [bp-0x431]
    unsigned int v6;  // [bp-0x430]
    unsigned int v7;  // [bp-0x42c]
    unsigned long v8;  // [bp-0x428], Other Possible Types: unsigned int
    unsigned int v9;  // [bp-0x428]
    unsigned long long v10;  // [bp-0x420], Other Possible Types: unsigned int
    int v11;  // [bp-0x418], Other Possible Types: char, unsigned long
    void* v12;  // [bp-0x418]
    unsigned long v13;  // [bp-0x410]
    unsigned long long v14;  // [bp-0x410]
    int v15;  // [bp-0x410], Other Possible Types: char
    int v16;  // [bp-0x408], Other Possible Types: char *
    int v17;  // [bp-0x400], Other Possible Types: char
    int v18;  // [bp-0x3f8]
    int v19;  // [bp-0x3f7]
    unsigned long long v20;  // [bp-0x3f0]
    char v21;  // [bp-0x3f0]
    int v22;  // [bp-0x3e8]
    int v23;  // [bp-0x3e7]
    unsigned short v24;  // [bp-0x3d8]
    char v26;  // [bp-0x3d0]
    char v27;  // [bp-0x3c7]
    void* v28;  // [bp-0x3c0]
    char v29;  // [bp-0x3b8]
    void* v30;  // [bp-0x3b0]
    unsigned long long v31;  // [bp-0x3a8]
    uint128_t v32;  // [bp-0x3a0]
    unsigned int v33;  // [bp-0x384]
    unsigned long v34;  // [bp-0x380]
    unsigned long long v35;  // [bp-0x378]
    unsigned long v36;  // [bp-0x368]
    unsigned long long v37;  // [bp-0x360]
    int v38;  // [bp-0x358], Other Possible Types: char
    int v39;  // [bp-0x358]
    int v40;  // [bp-0x348]
    int v41;  // [bp-0x348]
    int v42;  // [bp-0x338], Other Possible Types: char
    unsigned long long v43;  // [bp-0x329]
    int v44;  // [bp-0x328], Other Possible Types: unsigned long long
    unsigned long v45;  // [bp-0x328]
    unsigned int v46;  // [bp-0x310]
    unsigned int v47;  // [bp-0x30d]
    int v48;  // [bp-0x308], Other Possible Types: unsigned int
    unsigned int v49;  // [bp-0x305]
    int v50;  // [bp-0x2f8], Other Possible Types: char
    struct_6 *v51;  // [bp-0x2f0]
    int v52;  // [bp-0x2e8]
    int v53;  // [bp-0x2e8]
    unsigned long long v54;  // [bp-0x2d8]
    int v55;  // [bp-0x2c8]
    unsigned long long v56;  // [bp-0x2c0]
    int v57;  // [bp-0x2b8]
    int v58;  // [bp-0x2a8]
    int v59;  // [bp-0x298]
    unsigned long v60;  // [bp-0x298]
    int v61;  // [bp-0x290]
    int v62;  // [bp-0x288]
    int v63;  // [bp-0x280]
    unsigned long long v64;  // [bp-0x278]
    unsigned long long v65;  // [bp-0x270]
    void* v66;  // [bp-0x268]
    int v67;  // [bp-0x260], Other Possible Types: char
    unsigned long v68;  // [bp-0x250]
    unsigned long v70;  // [bp-0x248]
    int v71;  // [bp-0x240]
    int v72;  // [bp-0x238]
    int v73;  // [bp-0x238]
    char v74;  // [bp-0x228], Other Possible Types: unsigned long long
    unsigned long long v75;  // [bp-0x220]
    int v76;  // [bp-0x218]
    char v77;  // [bp-0x208]
    int v78;  // [bp-0x1f8], Other Possible Types: char
    int v79;  // [bp-0x1e8]
    int v80;  // [bp-0x1d8], Other Possible Types: char
    unsigned long v81;  // [bp-0x1c8]
    unsigned long long v82;  // [bp-0x1b8]
    int v83;  // [bp-0x1b0], Other Possible Types: char
    int v84;  // [bp-0x1a0]
    char v85;  // [bp-0x190]
    unsigned long long v86;  // [bp-0x180]
    int v87;  // [bp-0x178]
    int v88;  // [bp-0x168]
    int v89;  // [bp-0x158], Other Possible Types: char
    unsigned long long v90;  // [bp-0x148]
    unsigned long long v91;  // [bp-0x140]
    char v92;  // [bp-0x138]
    char v93;  // [bp-0x118]
    unsigned long long v94;  // [bp-0x108]
    char v95;  // [bp-0xf8]
    unsigned long long v96;  // [bp-0xe8]
    unsigned long long v97;  // [bp-0xe0]
    char v98;  // [bp-0xd8]
    unsigned long long v99;  // [bp-0xc8]
    char v100;  // [bp-0xc0]
    char v101;  // [bp-0xb0]
    char v102;  // [bp-0x70]
    unsigned long v104;  // rax
    unsigned long v105;  // rcx
    int v106;  // xmm1
    int v107;  // xmm2
    unsigned long v108;  // rbp
    unsigned long v109;  // rdx
    void* v110;  // r13
    void* v111;  // r12
    unsigned long long v112[3];  // rax
    unsigned long long v113;  // rbx
    unsigned long long v114;  // r14
    unsigned long long v115;  // rax
    unsigned long long v116;  // rax
    struct_0 *v117;  // rdi
    struct_0 *v118;  // rbx
    int v119;  // xmm2
    unsigned long long v120[3];  // rax
    int v121;  // xmm0
    unsigned long long v122[3];  // rax
    unsigned long long v123;  // r15
    struct_6 *v124;  // r15
    unsigned long v125;  // rdx
    unsigned long v126;  // rcx
    char v127;  // al
    int v128;  // xmm0
    int v129;  // xmm1
    int v130;  // xmm2
    int v131;  // xmm0
    int v132;  // xmm1
    int v133;  // xmm2
    unsigned long long v134[3];  // rax
    void* v135;  // rbp
    struct_4 *v136;  // rax
    void* v137;  // rdi
    unsigned long long v138;  // rsi
    struct_1 *v139;  // r12
    unsigned long long v140[3];  // rax
    unsigned long long v141[3];  // rax
    unsigned long v142;  // r14, Other Possible Types: unsigned long long
    char v143;  // r13b
    unsigned long long v144[3];  // rax
    unsigned long long v145;  // rbx
    unsigned long long v147;  // rax
    unsigned long long v148[3];  // rax
    unsigned long long v149;  // rbx
    unsigned long long v151;  // rax
    unsigned long v152;  // r15
    unsigned long long v153[3];  // rax
    unsigned long long v154[3];  // rax
    unsigned long long v155;  // rax
    unsigned long v156;  // rax
    char v157;  // bl
    char v158;  // al
    unsigned long v159;  // r13
    unsigned long long v160[3];  // rax
    unsigned long long v161;  // rbx
    unsigned long long v162;  // r14
    unsigned long long v163[3];  // rax
    unsigned long long v164;  // rax
    unsigned long long v165;  // rdx
    unsigned long v166;  // rax
    unsigned int v167;  // edx
    unsigned long v168;  // rcx
    struct_3 *v169;  // rax
    unsigned long long v170[3];  // rax
    char v171;  // bl
    unsigned long long v172;  // rdx
    unsigned long v173;  // rax
    unsigned int v174;  // edx
    int v175;  // xmm0
    unsigned long v176;  // rax
    int v177;  // xmm0
    struct_0 *v178;  // r14
    char v179;  // al
    char v180;  // al
    unsigned long long v181;  // rax
    unsigned long long *v182;  // rax
    unsigned long long v183;  // rcx
    int v184;  // xmm2
    int v185;  // xmm1
    int v186;  // xmm2
    int v187;  // [bp-0x417]
    unsigned int v188;  // [bp-0x414]

    (char)v11.style_components(a1);
    v104 = v11;
    if ((char)v104 != 13)
    {
        v43 = (long long)v22;
        memcpy(&(char)v42, &(char)v18, 16);
        memcpy(&v40, &v16, 16);
        memcpy(&v38, &v11, 16);
        *((long long *)&a0[80]) = *((long long *)&v26);
        *((int128_t *)&a0[64]) = (int128_t)v23;
        *((unsigned long long *)&a0[56]) = v43;
        *((int128_t *)&a0[41]) = (int128_t)v42;
        a0[25] = v40;
        a0[9] = v38;
        *((char *)&a0[8]) = v104;
        *((unsigned long long *)a0) = 2;
        return v104;
    }
    v8 = v105;
    v106 = *((int128_t *)&v17);
    v107 = *((int128_t *)&v21);
    *((int128_t *)&v55) = *((int128_t *)&v15);
    v57 = v106;
    v58 = v107;
    v108 = (unsigned int)a1.get_count("plainpagingno-paginglist-themesignored-suffixmap-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-", 5);
    (char)v11.indices_of(a1, "plainpagingno-paginglist-themesignored-suffixmap-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-", 5);
    if (*((long long *)&v11))
    {
        v94 = *((long long *)&(&v15)[8]);
        memcpy(&v93, &v11, 16);
        v110 = (((char)v93.reduce() & 1) ? v109 : 0);
    }
    else
    {
        v110 = 0;
    }
    (char)v11.indices_of(a1, "pagingno-paginglist-themesignored-suffixmap-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonpr", 6);
    if (*((long long *)&v11))
    {
        v96 = *((long long *)&(&v15)[8]);
        memcpy(&v95, &v11, 16);
        v111 = (((char)v95.reduce() & 1) ? v109 : 0);
    }
    else
    {
        v111 = 0;
    }
    (char)v11.try_get_one(a1, "pagingno-paginglist-themesignored-suffixmap-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonpr", 6);
    v112 = "pagingno-paginglist-themesignored-suffixmap-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonpr".unwrap(6, &(char)v11);
    if (v112)
    {
        v113 = v112[1];
        v114 = v112[2];
        if ((char)v113.equal(v114, "alwaysneverinternal error: entered unreachable code: other values for --paging are not allowed", 6))
        {
            v10 = v105 & 0xffffffffffffff00 | (v110 <= v111 ^ 1) & 2 <= (v108 & 255);
            v7 = (unsigned int)v10 * 2;
        }
        else
        {
            v115 = v113.equal(v114, "neverinternal error: entered unreachable code: other values for --paging are not allowed", 5);
            if ((char)v115)
            {
                v7 = (unsigned int)v115 & 0xffffff00 | 2;
                v10 = v7 & 0xffffffffffffff00 | 1;
            }
            else
            {
                v112 = v113.equal(v114, "auto.inf", 4);
                if (!(char)v112)
                {
                    v11 = &g_ac8300;
                    v14 = 1;
                    v16 = &v1;
                    *((uint128_t *)&v17) = 0;
                    core::panicking::panic_fmt(&(char)v11, &g_ac8360); /* do not return */
                }
                goto LABEL_7a668b;
            }
        }
    }
    else
    {
LABEL_7a668b:
        v7 = (unsigned int)v112 & 0xffffff00 | 2;
        v10 = v7 & 0xffffffffffffff00 | 1;
        if ((v108 & 255) <= 1 && !(char)a1.get_flag("no-paginglist-themesignored-suffixmap-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintabl", 9))
        {
            v11 = a2;
            v13 = v8 * 160 + a2;
            v116 = (char)v11.any();
            v117 = a1;
            if ((char)v116)
            {
                v116 = v117.get_flag("list-themesignored-suffixmap-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be ", 11);
                v117 = a1;
                if ((v116 & 255))
                    goto LABEL_7a6705;
                if (a1->field_38 == 1)
                {
                    std::io::stdio::stdin();
                    v10 = std::sys::io::is_terminal::isatty::is_terminal();
                    v7 = (unsigned int)v10 & 0xffffff00 | (char)v10 + 1;
                }
            }
            else
            {
LABEL_7a6705:
                v7 = (unsigned int)v116 & 0xffffff00 | 2 - v117->field_38;
                v10 = v117->field_38 ^ 1;
            }
        }
    }
    v83.new();
    v118 = a1;
    if (((char)std::thread::available_parallelism() & 1))
    {
        *((char *)&a0[8]) = 0;
        *((unsigned long *)&a0[16]) = v109;
        *((unsigned long long *)a0) = 2;
    }
    else
    {
        if (v109 >= 2)
            v83.start_offload_build_all();
        (char)v11.try_get_many(a1, "ignored-suffixmap-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file na", 14);
        v38.unwrap("ignored-suffixmap-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file na", 14, &(char)v11);
        if (*((long long *)&v38))
        {
            v119 = *((int128_t *)&v42);
            v22 = v44;
            v18 = v119;
            v16 = v40;
            v11 = v38;
            while (true)
            {
                v120 = (char)v11.next();
                if (!v120)
                    break;
                v83.insert_ignored_suffix(v120[1], v120[2]);
            }
            v118 = a1;
        }
        (char)v11.try_get_many(v118, "map-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input t", 10);
        (char)v70.unwrap("map-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input t", 10, &(char)v11);
        if (v70)
        {
            v121 = *((int128_t *)&v70);
            v44 = v76;
            *((int128_t *)&v42) = *((int128_t *)&v74);
            v41 = v73;
            v38 = v121;
        }
        else
        {
LABEL_7a697a:
            (char)v11.try_get_one(v118, "terminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-n", 14);
            v134 = "terminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-n".unwrap(14, &(char)v11);
            if (v134)
            {
                v8 = v109;
                v135 = bat::app::App::config::{{closure}}(v134[1], v134[2]);
            }
            else
            {
                v135 = 0;
            }
            v5 = bat::app::is_truecolor_terminal();
            (char)v11.try_get_one(v118, "languageshow-allnotation", 8);
            v136 = "languageshow-allnotation".unwrap(8, &(char)v11);
            if (v136)
            {
                v137 = v136->field_8;
                v138 = v136->field_10;
            }
            else
            {
                v137 = 0;
            }
            v82 = v137.or_else(v138, v118);
            v4 = v118.get_flag("show-allnotation", 8);
            (char)v11.try_get_one(v118, "nonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyl", 21);
            v140 = "nonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyl".unwrap(21, &(char)v11);
            if (v140)
            {
                v3 = v140[1].equal(v140[2], "unicodecaretinternal error: entered unreachable code: other values for --nonprintable-notation are not allowed", 7);
                if (v3 || (char)v140[1].equal(v140[2], "caretinternal error: entered unreachable code: other values for --nonprintable-notation are not allowed", 5))
                {
                    (char)v11.try_get_one(a1, "binarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 6);
                    v141 = "binarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present".unwrap(6, &(char)v11);
                    if (v141)
                    {
                        v142 = v141[2];
                        v2 = v141[1].equal(v142, "as-textno-printinginternal error: entered unreachable code: other values for --binary are not allowed", 7);
                        if (v2 || (char)v141[1].equal(v142, "no-printinginternal error: entered unreachable code: other values for --binary are not allowed", 11))
                        {
                            v143 = v0->field_38;
                            if (!v143 && v135 != 1)
                            {
                                v6 = 0;
                            }
                            else
                            {
                                v6 = (unsigned int)v105 & 0xffffff00 | 1;
                                if (!(char)v0.get_flag("chop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 15))
                                {
                                    (char)v11.try_get_one(v0, "wrapRustdumb", 4);
                                    v144 = "wrapRustdumb".unwrap(4, &(char)v11);
                                    if (v144)
                                    {
                                        v145 = v144[1];
                                        v142 = v144[2];
                                        v6 = (unsigned int)v105 & 0xffffff00 | 2;
                                        if (!(char)v145.equal(v142, "characterinternal error: entered unreachable code: other values for --wrap are not allowedinternal error: entered unreachable code: other values for --color are not allowedinternal error: entered unreachable code: other values for --strip-ansi are not allowed", 9))
                                        {
                                            v6 = (unsigned int)v105 & 0xffffff00 | 1;
                                            if (!(char)v145.equal(v142, "neverinternal error: entered unreachable code: other values for --paging are not allowed", 5))
                                            {
                                                if (!(char)v145.equal(v142, "auto.inf", 4))
                                                {
                                                    v11 = &g_ac8330;
                                                    v139 = &(char)v11;
                                                    v139->field_8 = 1;
                                                    v139->field_10 = &v1;
                                                    *((uint128_t *)&(&v139->field_10)[1]) = 0;
                                                    core::panicking::panic_fmt(v139, &g_ac8378); /* do not return */
                                                }
                                                goto LABEL_7a6c2a;
                                            }
                                        }
                                    }
                                    else
                                    {
LABEL_7a6c2a:
                                        v147 = (char)v55.plain();
                                        v6 = (unsigned int)v147 & 0xffffff00 | ((char)v147 ^ 1) * 2;
                                    }
                                }
                            }
                            v33 = (unsigned int)v105 & 0xffffff00 | 1;
                            if (!(char)a1.get_flag("force-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 18))
                            {
                                (char)v11.try_get_one(a1, "colordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 5);
                                v139 = &(char)v11;
                                v148 = "colordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present".unwrap(5, &(char)v11);
                                if (!v148)
                                {
                                    v11 = &g_ac8340;
                                    v139->field_8 = 1;
                                    v139->field_10 = &v1;
                                    *((uint128_t *)&(&v139->field_10)[1]) = 0;
                                    core::panicking::panic_fmt(v139, &g_ac8390); /* do not return */
                                }
                                v149 = v148[1];
                                v142 = v148[2];
                                if (!(char)v149.equal(v142, "alwaysneverinternal error: entered unreachable code: other values for --paging are not allowed", 6))
                                {
                                    if ((char)v149.equal(v142, "neverinternal error: entered unreachable code: other values for --paging are not allowed", 5))
                                    {
                                        v33 = 0;
                                    }
                                    else if ((char)v149.equal(v142, "auto.inf", 4))
                                    {
                                        v33 = (!(char)bat::app::env_no_color() ? v143 : 0);
                                    }
                                    else
                                    {
                                        v11 = &g_ac8340;
                                        v139->field_8 = 1;
                                        v139->field_10 = &v1;
                                        *((uint128_t *)&(&v139->field_10)[1]) = 0;
                                        core::panicking::panic_fmt(v139, &g_ac8390); /* do not return */
                                    }
                                }
                            }
                            v27 = 2;
                            v11 = 0;
                            v28 = 0;
                            v29 = 0;
                            v30 = 0;
                            v31 = 1;
                            v32 = 0;
                            v77.with_inner(&(char)v11);
                            v151 = console::unix_term::terminal_size(&v77);
                            v152 = (((char)v151 & 1) ? v151 >> 32 : 80);
                            if (((char)v135 & 1))
                                v152 = v8;
                            if (!v143)
                            {
                                (char)v11.try_get_one(a1, "colordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 5);
                                v153 = "colordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present".unwrap(5, &(char)v11);
                                if (v153 && (char)v153[1].equal(v153[2], "alwaysneverinternal error: entered unreachable code: other values for --paging are not allowed", 6))
                                    goto LABEL_7a6f3d;
                                (char)v11.try_get_one(a1, "decorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 11);
                                v154 = "decorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present".unwrap(11, &(char)v11);
                                if (v154 && (char)v154[1].equal(v154[2], "alwaysneverinternal error: entered unreachable code: other values for --paging are not allowed", 6))
                                    goto LABEL_7a6f3d;
                                v8 = a1.get_flag("force-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 18);
                                v8 = v9 & 0xffffff00 | (char)v9 ^ 1;
                            }
                            else
                            {
LABEL_7a6f3d:
                                v8 = 0;
                            }
                            (char)v11.try_get_one(a1, "tabsgridQuitbyten", 4);
                            v155 = "tabsgridQuitbyten".unwrap(4, &(char)v11);
                            v39 = v38;
                            if (v155)
                            {
                                (char)v11.clone(v155);
                                v156 = v11;
                                memcpy(&v38, &v13, 16);
                                if (v156 == 0x8000000000000000)
                                    goto LABEL_7a6fd1;
                                v15 = v39;
                                v11 = v156;
                                v157 = bat::app::App::config::{{closure}}(&(char)v11);
                                v142 = v109;
                            }
                            else
                            {
LABEL_7a6fd1:
                                v157 = 0;
                            }
                            v158 = (char)v55.plain();
                            v159 = (v158 & (char)v10 ^ 1) * 4;
                            if ((v157 & 1))
                                v159 = v142;
                            (char)v11.try_get_one(a1, "strip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 10);
                            v160 = "strip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present".unwrap(10, &(char)v11);
                            if (!v160)
                            {
                                v11 = &g_ac8350;
                                v14 = 1;
                                v16 = &v1;
                                *((uint128_t *)&v17) = 0;
                                core::panicking::panic_fmt(&(char)v11, &g_ac83a8); /* do not return */
                            }
                            v161 = v160[1];
                            v162 = v160[2];
                            if ((char)v161.equal(v162, "neverinternal error: entered unreachable code: other values for --paging are not allowed", 5))
                            {
                                v10 = 0;
                            }
                            else
                            {
                                v10 = (unsigned int)v105 & 0xffffff00 | 1;
                                if (!(char)v161.equal(v162, "alwaysneverinternal error: entered unreachable code: other values for --paging are not allowed", 6))
                                {
                                    v10 = (unsigned int)v105 & 0xffffff00 | 2;
                                    if (!(char)v161.equal(v162, "auto.inf", 4))
                                    {
                                        v11 = &g_ac8350;
                                        v14 = 1;
                                        v16 = &v1;
                                        *((uint128_t *)&v17) = 0;
                                        core::panicking::panic_fmt(&(char)v11, &g_ac83a8); /* do not return */
                                    }
                                }
                            }
                            (char)v11.theme_options(a1);
                            bat::theme::theme(&v92, &(char)v11);
                            v67.spec_to_string(&v92);
                            (char)v11.try_contains_id(a1, "diff", 4);
                            if (v11.unwrap_or_default(v13) && (char)a1.get_flag("diff", 4))
                            {
                                (char)v11.try_get_one(a1, "diff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 12);
                                v163 = "diff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present".unwrap(12, &(char)v11);
                                if (v163)
                                {
                                    ::0x7912b0::core::num::<impl usize>::from_ascii_radix(&(char)v11, v163[1], v163[2]);
                                    v164 = 2;
                                    if (!(char)v11)
                                        v164 = v13;
                                }
                                else
                                {
                                    v164 = 2;
                                }
                                v34 = v164;
                                v35 = 0x8000000000000000;
                                goto LABEL_7a7469;
                            }
                            (char)v11.try_get_many(a1, "line-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 10);
                            v101.unwrap("line-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 10, &(char)v11);
                            v165 = 0x8000000000000000;
                            if (*((long long *)&v101))
                            {
                                (char)v11.collect(&v101);
                                v166 = (char)v11;
                                v48 = (int)v187;
                                v49 = v188;
                                *((int128_t *)&v50) = (int128_t)(&v15)[8];
                                memcpy(&v39, &(char)v18, 16);
                                memcpy(&v40, &v21, 16);
                                memcpy(&(char)v42, &v24, 16);
                                v165 = 0x8000000000000000;
                                if ((unsigned int)v166 == 14)
                                    goto LABEL_7a727f;
                                if ((unsigned int)v166 == 13)
                                {
                                    memcpy(&v78, &(char)v50, 16);
                                    v165 = v13;
                                    goto LABEL_7a727f;
                                }
                                else
                                {
                                    v167 = v48;
                                    *((unsigned int *)&a0[12]) = v49;
                                    *((unsigned int *)&a0[9]) = v167;
                                    memcpy(&v78, &(char)v50, 16);
                                    *((int128_t *)&a0[72]) = (int128_t)v42;
                                    a0[56] = v40;
                                    a0[40] = v39;
                                    v87 = v78;
                                    a0[24] = v78;
                                    *((char *)&a0[8]) = v166;
                                    *((unsigned long *)&a0[16]) = v13;
                                    *((unsigned long long *)a0) = 2;
                                    core::ptr::drop_in_place<alloc::string::String>(&v67);
                                    core::ptr::drop_in_place<bat::syntax_mapping::SyntaxMapping>(&v83);
                                    core::ptr::drop_in_place<bat::style::StyleComponents>((long long)v55, v56);
                                }
                            }
                            else
                            {
LABEL_7a727f:
                                v87 = v78;
                                if (v165 != 0x8000000000000000)
                                {
                                    v97 = v165;
                                    memcpy(&v98, &v87, 16);
                                    (char)v11.from(&v97);
                                    v168 = v11;
                                    *((int128_t *)&v59) = (int128_t)v15;
                                    *((int128_t *)&v62) = (int128_t)(&v16)[8];
                                    v64 = v20;
                                    if (v168 == 0x8000000000000000)
                                        goto LABEL_7a72f4;
                                    v75 = v64;
                                    memcpy(&(char)v73, &(char)v62, 16);
                                    *((int128_t *)&v71) = *((int128_t *)&v60);
                                }
                                else
                                {
LABEL_7a72f4:
                                    (char)v70.default();
                                    v168 = v70;
                                }
                                v35 = v168;
                                v34 = (&v70)[1];
                                memcpy(&v89, &v73, 16);
                                v90 = v74;
                                v91 = v75;
LABEL_7a7469:
                                v36 = (long long)v55;
                                v37 = v56;
                                memcpy(&v78, &v57, 16);
                                v79 = v58;
                                v44 = v86;
                                memcpy(&(char)v42, &v85, 16);
                                v40 = v84;
                                v38 = v83;
                                (char)v11.try_get_one(a1, "pageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 5);
                                v169 = "pageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present".unwrap(5, &(char)v11);
                                if (v169)
                                {
                                    v66 = v169->field_8;
                                    v81 = v169->field_10;
                                }
                                else
                                {
                                    v66 = 0;
                                }
                                (char)v11.try_get_one(a1, "italic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 11);
                                v170 = "italic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present".unwrap(11, &(char)v11);
                                v171 = (!v170 ? 0 : (char)v170[1].equal(v170[2], "alwaysneverinternal error: entered unreachable code: other values for --paging are not allowed", 6));
                                (char)v11.try_get_many(a1, "highlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 14);
                                v102.unwrap("highlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 14, &(char)v11);
                                v172 = 0x8000000000000000;
                                if (*((long long *)&v102))
                                {
                                    (char)v11.collect(&v102);
                                    v173 = (char)v11;
                                    v46 = (int)v187;
                                    v47 = v188;
                                    *((int128_t *)&v48) = (int128_t)(&v15)[8];
                                    memcpy(&(char)v70, &(char)v18, 16);
                                    memcpy(&v73, &v21, 16);
                                    memcpy(&v74, &v24, 16);
                                    v172 = 0x8000000000000000;
                                    if ((unsigned int)v173 == 14)
                                        goto LABEL_7a766d;
                                    if ((unsigned int)v173 == 13)
                                    {
                                        memcpy(&v80, &(char)v48, 16);
                                        v172 = v13;
                                        goto LABEL_7a766d;
                                    }
                                    else
                                    {
                                        v174 = v46;
                                        *((unsigned int *)&a0[12]) = v47;
                                        *((unsigned int *)&a0[9]) = v174;
                                        memcpy(&v80, &(char)v48, 16);
                                        v175 = *((int128_t *)&v70);
                                        *((int128_t *)&a0[72]) = *((int128_t *)&v74);
                                        a0[56] = v72;
                                        a0[40] = v175;
                                        v88 = v80;
                                        a0[24] = v80;
                                        *((char *)&a0[8]) = v173;
                                        *((unsigned long *)&a0[16]) = v13;
                                        *((unsigned long long *)a0) = 2;
                                        core::ptr::drop_in_place<bat::syntax_mapping::SyntaxMapping>(&v38);
                                        core::ptr::drop_in_place<bat::style::StyleComponents>(v36, v37);
                                        core::ptr::drop_in_place<bat::config::VisibleLines>(v35, v34);
                                        core::ptr::drop_in_place<alloc::string::String>(&v67);
                                    }
                                }
                                else
                                {
LABEL_7a766d:
                                    v88 = v80;
                                    if (v172 != 0x8000000000000000)
                                    {
                                        v99 = v172;
                                        memcpy(&v100, &v88, 16);
                                        (char)v11.from(&v99);
                                        v176 = v11;
                                        memcpy(&(char)v50, &(char)v13, 16);
                                        memcpy(&v53, &v16, 16);
                                        v54 = v20;
                                        if (v176 == 0x8000000000000000)
                                            goto LABEL_7a76e2;
                                        v65 = v54;
                                        v177 = (int128_t)v50;
                                        v63 = v52;
                                        v61 = v177;
                                        v60 = v176;
                                    }
                                    else
                                    {
LABEL_7a76e2:
                                        v60.default();
                                    }
                                    v178 = a1;
                                    v179 = v178.get_flag("no-custom-assets", 16);
                                    v180 = v178.get_flag("set-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 18);
                                    v181 = v178.get_flag("squeeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 13);
                                    if ((char)v181)
                                    {
                                        (char)v11.try_get_one(a1);
                                        v182 = (char)v11.unwrap();
                                        v183 = 1;
                                        v181 = (!v182 ? 1 : *(v182));
                                    }
                                    else
                                    {
                                        v183 = 0;
                                    }
                                    a0[224] = v79;
                                    a0[208] = v78;
                                    *((int128_t *)&a0[176]) = *((int128_t *)&v90);
                                    a0[160] = v89;
                                    *((unsigned long *)&a0[32]) = v68;
                                    a0[16] = v67;
                                    *((unsigned long *)&a0[88]) = v45;
                                    v184 = (int128_t)v42;
                                    a0[40] = v38;
                                    a0[56] = v40;
                                    a0[72] = v184;
                                    v185 = (int128_t)(&v61)[8];
                                    v186 = *((int128_t *)&v64);
                                    *((int128_t *)&a0[96]) = *((int128_t *)&v60);
                                    a0[112] = v185;
                                    a0[128] = v186;
                                    *((unsigned long long *)a0) = v183;
                                    *((unsigned long long *)&a0[8]) = v181;
                                    *((unsigned long long *)&a0[144]) = v35;
                                    *((unsigned long *)&a0[152]) = v34;
                                    *((unsigned long *)&a0[192]) = v36;
                                    *((unsigned long long *)&a0[200]) = v37;
                                    *((unsigned long long *)&a0[240]) = v82;
                                    *((unsigned long *)&a0[248]) = v109;
                                    *((unsigned long *)&a0[0x100]) = v152;
                                    *((unsigned long *)&a0[264]) = v159;
                                    *((void* *)&a0[272]) = v66;
                                    *((unsigned long *)&a0[280]) = v81;
                                    *((char *)&a0[288]) = v4;
                                    *((char *)&a0[289]) = v3;
                                    *((char *)&a0[290]) = v2;
                                    *((char *)&a0[291]) = v8;
                                    *((char *)&a0[292]) = v33;
                                    *((char *)&a0[293]) = v5;
                                    *((char *)&a0[294]) = v171;
                                    *((char *)&a0[295]) = v179 ^ 1;
                                    *((char *)&a0[296]) = v180;
                                    *((char *)&a0[297]) = v6;
                                    *((char *)&a0[298]) = v7;
                                    *((char *)&a0[299]) = v10;
                                }
                            }
                            core::ptr::drop_in_place<bat::theme::ThemeResult>(&v92);
                            return core::ptr::drop_in_place<console::term::Term>(&v77);
                        }
                    }
                    v11 = &g_ac8320;
                    v139 = &(char)v11;
                    v139->field_8 = 1;
                    v139->field_10 = &v1;
                    *((uint128_t *)&(&v139->field_10)[1]) = 0;
                    core::panicking::panic_fmt(v139, &g_ac83c0); /* do not return */
                }
            }
            v11 = &g_ac8310;
            v139 = &(char)v11;
            v139->field_8 = 1;
            v139->field_10 = &v1;
            *((uint128_t *)&(&v139->field_10)[1]) = 0;
            core::panicking::panic_fmt(v139, &g_ac83d8); /* do not return */
        }
        while (true)
        {
            v122 = v38.next_back();
            if (!v122)
            {
                v118 = a1;
                goto LABEL_7a697a;
            }
            v123 = v122[2];
            (char)v16.into_searcher(58, v122[1], v123);
            v12 = 0;
            v13 = v123;
            v24 = 1;
            v50.collect(&(char)v11);
            if ((long long)v53 != 2)
            {
                (char)v11.from("Invalid syntax mapping. The format of the -m/--map-syntax option is '<glob-pattern>:<syntax-name>'. For example: '*.cpp:C++'.unicodecaretinternal error: entered unreachable code: other values for --nonprintable-notation are not allowed", 125);
                *((int128_t *)&a0[72]) = *((int128_t *)&v24);
                v128 = *((int128_t *)&v12);
                v129 = (int128_t)v16;
                v130 = *((int128_t *)&(&v17)[8]);
                *((int128_t *)&a0[56]) = *((int128_t *)&(&v21)[8]);
                a0[40] = v130;
                a0[24] = v129;
                a0[8] = v128;
                *((unsigned long long *)a0) = 2;
                v124 = v51;
                goto LABEL_7a6d98;
            }
            v124 = v51;
            v125 = v124->field_0;
            v126 = v124->field_8;
            *((uint128_t *)&v61) = v124->field_10;
            v60 = 0;
            (char)v11.insert(&v83, v125, v126, &v60);
            if ((char)v12 != 13)
                break;
            core::ptr::drop_in_place<alloc::vec::Vec<&str>>(*((long long *)&v50), v124);
        }
        *((int128_t *)&a0[72]) = *((int128_t *)&v24);
        v131 = *((int128_t *)((char *)&v12 + 1));
        v132 = (int128_t)(&v16)[1];
        v133 = (int128_t)v19;
        *((int128_t *)&a0[57]) = (int128_t)(&v22)[1];
        a0[41] = v133;
        a0[25] = v132;
        a0[9] = v131;
        *((char *)&a0[8]) = v127;
        *((unsigned long long *)a0) = 2;
LABEL_7a6d98:
        core::ptr::drop_in_place<alloc::vec::Vec<&str>>(*((long long *)&v50), v124);
    }
    core::ptr::drop_in_place<bat::syntax_mapping::SyntaxMapping>(&v83);
    return (unsigned long long)core::ptr::drop_in_place<bat::style::StyleComponents>((long long)v55, v56);
}
