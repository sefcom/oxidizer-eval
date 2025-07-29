long long uu_ls::Config::from(struct_2 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x54f]
    char v1;  // [bp-0x54e]
    char v2;  // [bp-0x54d]
    unsigned int v3;  // [bp-0x54c]
    unsigned int v4;  // [bp-0x54c]
    char v5;  // [bp-0x547]
    char v6;  // [bp-0x546]
    char v7;  // [bp-0x545]
    unsigned int v8;  // [sp-0x544]
    unsigned int v9;  // [bp-0x544]
    char v10;  // [bp-0x53e]
    char v11;  // [bp-0x53d]
    char v12;  // [bp-0x53c]
    char v13;  // [bp-0x53b]
    char v14;  // [bp-0x53a]
    char v15;  // [bp-0x539]
    unsigned long long v16[3];  // [bp-0x538], Other Possible Types: unsigned int
    char v17;  // [bp-0x52c], Other Possible Types: unsigned int
    char v18;  // [bp-0x52c]
    unsigned long long v19;  // [bp-0x528]
    char v20;  // [bp-0x520], Other Possible Types: unsigned int
    char v21;  // [bp-0x520]
    unsigned int v22;  // [bp-0x51c]
    unsigned int v23;  // [bp-0x518]
    unsigned short v24;  // [bp-0x512]
    struct_0 *v25;  // [bp-0x510]
    unsigned long long v26;  // [bp-0x508]
    unsigned long long v27;  // [bp-0x500]
    unsigned long long v29;  // [bp-0x4f8]
    int v30;  // [bp-0x4f8]
    int v31;  // [bp-0x4f8]
    int v32;  // [bp-0x4f8], Other Possible Types: char
    unsigned long long v33;  // [bp-0x4f0]
    unsigned long long v34;  // [bp-0x4e8]
    unsigned long long v35;  // [bp-0x4e0]
    int v36;  // [bp-0x4d8]
    char *v37;  // [bp-0x4c8], Other Possible Types: unsigned long long
    int v38;  // [bp-0x4c8], Other Possible Types: char
    int v39;  // [bp-0x4c8]
    unsigned long long v40;  // [bp-0x4c8]
    char *v41;  // [bp-0x4c0], Other Possible Types: int, char, unsigned short, unsigned long
    int v42;  // [bp-0x4be]
    void* v43;  // [bp-0x4b8], Other Possible Types: unsigned long long, unsigned long
    int v44;  // [bp-0x4b0], Other Possible Types: void*, unsigned long long, unsigned long
    int v45;  // [bp-0x4ae]
    int v46;  // [bp-0x4a8], Other Possible Types: unsigned long long, unsigned long
    void* v47;  // [bp-0x4a0], Other Possible Types: int, unsigned long long, unsigned long
    void* v48;  // [bp-0x498], Other Possible Types: unsigned long long, unsigned long
    int v49;  // [bp-0x490], Other Possible Types: unsigned long
    unsigned long v50;  // [bp-0x488]
    void* v51;  // [bp-0x480], Other Possible Types: unsigned long
    int v52;  // [bp-0x478], Other Possible Types: unsigned long, unsigned long long
    unsigned long v53;  // [bp-0x470]
    int v54;  // [bp-0x468], Other Possible Types: unsigned long
    unsigned long v55;  // [bp-0x460]
    int v56;  // [bp-0x458], Other Possible Types: unsigned long
    unsigned long v57;  // [bp-0x450]
    unsigned long v58;  // [bp-0x448], Other Possible Types: unsigned long long
    void* v59;  // [bp-0x440], Other Possible Types: unsigned long
    int v60;  // [bp-0x438], Other Possible Types: unsigned long
    void* v61;  // [bp-0x430]
    int v62;  // [bp-0x428], Other Possible Types: unsigned long long
    int v63;  // [bp-0x418]
    int v64;  // [bp-0x410]
    unsigned long long v65;  // [bp-0x408]
    unsigned long long v66;  // [bp-0x400]
    char *v67;  // [bp-0x3f8]
    int v68;  // [bp-0x3f8]
    unsigned long long v69;  // [bp-0x3f0]
    unsigned long long v70;  // [bp-0x3e8]
    int v71;  // [sp-0x3d8]
    unsigned long long v73;  // [bp-0x3d0]
    unsigned long long v74;  // [bp-0x3c8]
    void* v75;  // [bp-0x3b8], Other Possible Types: char *
    int v76;  // [bp-0x3b8]
    unsigned long long v77;  // [bp-0x3b0]
    int v78;  // [bp-0x3b0]
    void* v79;  // [bp-0x3a8]
    char v80;  // [bp-0x3a0]
    unsigned int v81;  // [bp-0x398], Other Possible Types: unsigned long
    unsigned int v82;  // [bp-0x398]
    char v83;  // [bp-0x390], Other Possible Types: unsigned long
    char v84;  // [bp-0x390]
    unsigned int v85;  // [bp-0x388], Other Possible Types: unsigned long
    unsigned int v86;  // [bp-0x388]
    unsigned int v87;  // [bp-0x380]
    unsigned int v88;  // [bp-0x37c]
    void* v89;  // [bp-0x378]
    unsigned long long v90;  // [bp-0x370]
    void* v91;  // [bp-0x368]
    int v92;  // [bp-0x360], Other Possible Types: char
    unsigned long long v93;  // [bp-0x350]
    int v94;  // [bp-0x348], Other Possible Types: char
    unsigned long long v95;  // [bp-0x338]
    int v96;  // [bp-0x330], Other Possible Types: char
    unsigned long long v97;  // [bp-0x320]
    int v98;  // [bp-0x318]
    unsigned short v99;  // [bp-0x310]
    int v100;  // [bp-0x30e]
    int v101;  // [bp-0x308]
    unsigned short v102;  // [bp-0x300]
    int v103;  // [bp-0x2fe]
    int v104;  // [bp-0x2f8]
    unsigned long long v105;  // [bp-0x2f0]
    int v106;  // [bp-0x2e8]
    char v107;  // [bp-0x2d8]
    unsigned long long v108;  // [bp-0x278]
    unsigned long long v109;  // [bp-0x278]
    unsigned long long v110;  // [bp-0x270]
    char *v111;  // [bp-0x268], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v112;  // [bp-0x260]
    int v113;  // [bp-0x260]
    void* v114;  // [bp-0x258]
    unsigned long long v115;  // [bp-0x250]
    char v116;  // [bp-0x1d8], Other Possible Types: unsigned long long
    int v117;  // [bp-0x1d8]
    unsigned long long v118;  // [bp-0x1c8]
    int v119;  // [bp-0x1b8]
    int v120;  // [bp-0x1a8]
    int v121;  // [bp-0x198]
    unsigned long long v122;  // [bp-0x188]
    unsigned long v123;  // [bp-0x180]
    unsigned long v124;  // [bp-0x178]
    unsigned long v125;  // [bp-0x170]
    unsigned long v126;  // [bp-0x168]
    unsigned long v127;  // [bp-0x160]
    unsigned long v128;  // [bp-0x158]
    unsigned long v129;  // [bp-0x150]
    unsigned long v130;  // [bp-0x148]
    unsigned long v131;  // [bp-0x140]
    unsigned long v132;  // [bp-0x138]
    unsigned long v133;  // [bp-0x130]
    unsigned long v134;  // [bp-0x128]
    unsigned long v135;  // [bp-0x120]
    unsigned long v136;  // [bp-0x118]
    unsigned long v137;  // [bp-0x110]
    unsigned long v138;  // [bp-0x108]
    unsigned long v139;  // [bp-0x100]
    unsigned long v140;  // [bp-0xf8]
    unsigned long v141;  // [bp-0xf0]
    unsigned long v142;  // [bp-0xe8]
    unsigned long v143;  // [bp-0xe0]
    unsigned long v144;  // [bp-0xd8]
    unsigned long v145;  // [bp-0xd0]
    unsigned long v146;  // [bp-0xc8]
    char v147;  // [bp-0xc0]
    char v148;  // [bp-0xa8]
    char v149;  // [bp-0x98]
    char v150;  // [bp-0x88]
    unsigned long long v151;  // [bp-0x78]
    char v152;  // [bp-0x68]
    char v153;  // [bp-0x58]
    char v154;  // [bp-0x48]
    unsigned long long v155;  // [bp-0x38]
    unsigned long long v157;  // r15
    char v158;  // bpl
    void* v159;  // rdx
    char v160;  // bpl
    unsigned long long v162;  // rbp
    unsigned long long v163[3];  // rax
    char v164;  // r12b
    unsigned int v165;  // r12d
    unsigned long long v166[3];  // rax
    unsigned long v167;  // rbp
    unsigned int v168;  // ebx
    char v169;  // r13b
    unsigned int v170;  // eax
    unsigned long long v171[3];  // r14
    unsigned int v174;  // eax
    char v175;  // bl
    unsigned int v176;  // eax
    unsigned long long v177;  // rcx
    unsigned long long v178;  // rax
    unsigned long long v180;  // rax
    unsigned short v181;  // dx
    char v182;  // al
    unsigned int v183;  // ebp
    unsigned long long v184;  // rax
    unsigned long long v185;  // rax
    unsigned int v186;  // eax
    int v187;  // xmm0
    int v188;  // xmm1
    int v189;  // xmm2
    struct_1 *v190;  // r15
    unsigned long long v191;  // rdx
    int v192;  // xmm1
    int v193;  // xmm0
    int v194;  // xmm1
    int v195;  // xmm2
    struct_1 *v196;  // r13
    int v197;  // xmm1
    unsigned long long v198;  // rax
    void* v199;  // rdx
    unsigned int v200;  // ebp
    unsigned long long v201;  // rax
    void* v202;  // rdx
    unsigned long long v203;  // rax
    void* v204;  // rdx
    unsigned long long v205;  // rbx
    char v206;  // cl
    void* v207;  // rdx
    unsigned int v208;  // r13d
    unsigned long long v209;  // r15
    char v210;  // bpl
    unsigned long long v211;  // rbx
    unsigned long long v212[3];  // rax
    char v213;  // dil
    unsigned long long v214;  // rsi
    char v215;  // al
    char v216;  // al
    char v217;  // al
    char v218;  // r15b
    int v219;  // xmm0
    unsigned long long v220;  // [bp-0x538]

    v157 = a1;
    v15 = a1.get_flag(_ZN5uu_ls7options7CONTEXT17hb8f008b5b8aaa941E, g_6a0ee0);
    uu_ls::extract_format(&(char)v37, a1);
    v158 = v38;
    v7 = uu_ls::extract_files(a1);
    v0 = 1;
    if (v158 != 1)
    {
        if (!*((long long *)&v41) || !uu_ls::Config::from::{{closure}}(a1, *((long long *)&v41), v43))
            v159 = 0;
        v109 = v159;
        *((int128_t *)&v98) = *((int128_t *)&_ZN5uu_ls7options6format13LONG_NO_OWNER17he953e6f73aa3471eE);
        *((int128_t *)&v101) = *((int128_t *)&_ZN5uu_ls7options6format13LONG_NO_GROUP17h3a95b096fda62ebbE);
        *((int128_t *)&v104) = *((int128_t *)&_ZN5uu_ls7options6format20LONG_NUMERIC_UID_GID17h4b2cb569f0d33d1fE);
        *((uint128_t *)&v106) = _ZN5uu_ls7options9FULL_TIME17h4d4ee22532e1f1b3E;
        *((char **)&v39) = &(char)v98;
        v41 = &v107;
        v43 = a1;
        v44 = 0;
        v48 = 0;
        v0 = 1;
        if (!(unsigned long long)v39.iter_try_fold(&v109).eq())
        {
            (char)v98.indices_of(a1, _ZN5uu_ls7options6format8ONE_LINE17hbf96991fc6132402E, g_6a1418);
            (char)v43 = v158;
            if ((long long)v98)
            {
                v43 = (long long)v101;
                *((int128_t *)&v39) = (int128_t)v98;
                (char)v43 = v158;
                if ((char)a1.value_source(_ZN5uu_ls7options6format8ONE_LINE17hbf96991fc6132402E, g_6a1418) == 2)
                    v160 = (!(unsigned long long)v39.try_fold(&v109).eq() ? v158 : 2);
            }
LABEL_523864:
            v0 = v43;
            goto LABEL_523864;
        }
    }
    v14 = uu_ls::extract_sort(a1);
    v13 = uu_ls::extract_time(a1);
    v1 = uu_ls::extract_color(a1);
    v12 = uu_ls::extract_hyperlink(a1);
    (char)v37.try_get_one(a1, _ZN5uu_ls7options4size10BLOCK_SIZE17hfa4990b97781cfdaE, g_6a17a8);
    v171 = _ZN5uu_ls7options4size10BLOCK_SIZE17hfa4990b97781cfdaE.unwrap(g_6a17a8, &(char)v37);
    if (v171)
    {
        v16[0] = v171;
        v162 = a1;
        (char)v37.try_get_one(a1, _ZN5uu_ls7options4size10BLOCK_SIZE17hfa4990b97781cfdaE, g_6a17a8);
        v163 = _ZN5uu_ls7options4size10BLOCK_SIZE17hfa4990b97781cfdaE.unwrap(g_6a17a8, &(char)v37);
        if (!v163)
            core::option::unwrap_failed(&g_69f1d8); /* do not return */
        v164 = 1;
        v165 = (unsigned int)&(char)v37 & 0xffffff00 | 1;
        if (!(char)v163[1].equal(v163[2], "sihuman-readable: warning: patternBLOCKSIZEBLOCK_SIZELS_BLOCK_SIZEPOSIXLY_CORRECT*~.*~ls-invalid-hide-patternls-invalid-ignore-patternTABSIZE(uutils coreutils) 0.1.0ls-help-print-helpls-help-set-display-formatls-help-display-files-columnsls-help-display-de", 2))
            v165 = v162.get_flag(_ZN5uu_ls7options4size2SI17ha4ea4aded374f1feE, g_6a17c8);
        (char)v37.try_get_one(v162, _ZN5uu_ls7options4size10BLOCK_SIZE17hfa4990b97781cfdaE, g_6a17a8);
        v166 = _ZN5uu_ls7options4size10BLOCK_SIZE17hfa4990b97781cfdaE.unwrap(g_6a17a8, &(char)v37);
        v171 = v16;
        if (!v166)
            core::option::unwrap_failed(&g_69f1f0); /* do not return */
        if ((char)v166[1].equal(v166[2], "human-readable: warning: patternBLOCKSIZEBLOCK_SIZELS_BLOCK_SIZEPOSIXLY_CORRECT*~.*~ls-invalid-hide-patternls-invalid-ignore-patternTABSIZE(uutils coreutils) 0.1.0ls-help-print-helpls-help-set-display-formatls-help-display-files-columnsls-help-display-deta", 14))
        {
            v157 = v162;
            v167 = (unsigned int)v162.get_flag(_ZN5uu_ls7options4size9KIBIBYTES17h65ec465af366b2c1E, g_6a17d8);
            v168 = v165 + 1;
            v169 = 1;
        }
        else
        {
            v157 = v162;
LABEL_5239f4:
            v170 = v157.get_flag(_ZN5uu_ls7options4size14HUMAN_READABLE17hf7e3cdcbdf437c31E, g_6a17b8);
            v167 = (unsigned int)v157.get_flag(_ZN5uu_ls7options4size9KIBIBYTES17h65ec465af366b2c1E, g_6a17d8);
            if (!v164)
                v168 = v170;
            else
                v168 = 2;
        }
        v16 = (int)std::env::var_os(&v92, "BLOCKSIZEBLOCK_SIZELS_BLOCK_SIZEPOSIXLY_CORRECT*~.*~ls-invalid-hide-patternls-invalid-ignore-patternTABSIZE(uutils coreutils) 0.1.0ls-help-print-helpls-help-set-display-formatls-help-display-files-columnsls-help-display-detailed-infols-help-list-entries-ro", 9) & 0xffffff00 | 1;
        v3 = (int)std::env::var_os(&v94, "BLOCK_SIZELS_BLOCK_SIZEPOSIXLY_CORRECT*~.*~ls-invalid-hide-patternls-invalid-ignore-patternTABSIZE(uutils coreutils) 0.1.0ls-help-print-helpls-help-set-display-formatls-help-display-files-columnsls-help-display-detailed-infols-help-list-entries-rowsls-help", 10) & 0xffffff00 | 1;
        v16 = v3 & 0xffffff00 | 1;
        v8 = (int)std::env::var_os(&v96, "LS_BLOCK_SIZEPOSIXLY_CORRECT*~.*~ls-invalid-hide-patternls-invalid-ignore-patternTABSIZE(uutils coreutils) 0.1.0ls-help-print-helpls-help-set-display-formatls-help-display-files-columnsls-help-display-detailed-infols-help-list-entries-rowsls-help-assume-ta", 13) & 0xffffff00 | 1;
        v3 = v8 & 0xffffff00 | 1;
        v16 = v3 & 0xffffff00 | 1;
        v174 = std::env::var_os(&v147, "POSIXLY_CORRECT*~.*~ls-invalid-hide-patternls-invalid-ignore-patternTABSIZE(uutils coreutils) 0.1.0ls-help-print-helpls-help-set-display-formatls-help-display-files-columnsls-help-display-detailed-infols-help-list-entries-rowsls-help-assume-tab-stopsls-hel", 15);
        v88 = v168;
        if (v171)
        {
            v8 = v174 & 0xffffff00 | 1;
            v3 = v8 & 0xffffff00 | 1;
            v16 = v3 & 0xffffff00 | 1;
            (char)v37.to_owned(v171[1], v171[2]);
            goto LABEL_523af1;
        }
        if (*((long long *)&v96) != 0x8000000000000000)
        {
            v74 = v97;
            v71 = v96;
            v176 = (unsigned int)v74 & 0xffffff00 | 1;
            v4 = v176;
            v9 = 0;
            goto LABEL_523be9;
        }
        if (*((long long *)&v94) != 0x8000000000000000)
        {
            v74 = v95;
            v71 = v94;
            v176 = (unsigned int)v74 & 0xffffff00 | 1;
            v9 = v176;
            v4 = 0;
LABEL_523be9:
            v16 = v176 & 0xffffff00 | 1;
            if (!(!v169 && !v164 && v74))
                goto LABEL_523d99;
            v32.to_string_lossy(v73, v74);
            uucore::features::parser::parse_size::parse_size_u64(&(char)v98, v33, v34);
            if ((int)v98 == 4)
            {
                v177 = *((long long *)&v99);
                if (v175)
                {
                    if ((char)v167)
                        v177 = 0x400;
                    v27 = v177;
                    v26 = 1;
                    goto LABEL_523d3e;
                }
                else
                {
                    v178 = (!(v167 & 255) ? v177 : 0x400);
                    v26 = v177;
                    if (v171)
                        v178 = v177;
                    v27 = v178;
                    goto LABEL_523d3e;
                }
            }
            else if (v171)
            {
                v109.clone(v171);
                v44 = v111;
                *((int128_t *)&v41) = *((int128_t *)&v109);
                v37 = 9223372036854775811;
                *((double *)&v25->field_8) = v37.new();
                v25->field_10 = &g_69f228;
                v25->field_0 = 0x8000000000000000;
                core::ptr::drop_in_place<core::result::Result<u64,uucore::features::parser::parse_size::ParseSizeError>>(&(char)v98);
                ::0x51cbe0::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v32);
                goto LABEL_523f7f;
            }
            else
            {
                v27 = 0x400;
                *((int *)&v26) = (!v175 ? 0x400 : 1);
LABEL_523d3e:
                core::ptr::drop_in_place<core::result::Result<u64,uucore::features::parser::parse_size::ParseSizeError>>(&(char)v98);
                ::0x51cbe0::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v32);
                goto LABEL_523de1;
            }
        }
        if (*((long long *)&v92) == 0x8000000000000000)
        {
            v8 = 1;
            v3 = 1;
            v16 = 1;
            (char)v37.to_owned(1, 0);
LABEL_523af1:
            v74 = v43;
            *((int128_t *)&v71) = (int128_t)v39;
            v9 = (unsigned int)v74 & 0xffffff00 | 1;
            v4 = v9 & 0xffffffffffffff00 | 1;
            v16 = v4 & 0xffffff00 | 1;
        }
        else
        {
            v74 = v93;
            v71 = v92;
            v9 = (unsigned int)v74 & 0xffffff00 | 1;
            v16 = 0;
            v4 = v9 & 0xffffff00 | 1;
            v175 = 1;
        }
LABEL_523d99:
        if (*((long long *)&v147) == 0x8000000000000000)
            *((int *)&v27) = (v164 ? 1000 : 0x400);
        else
            v27 = (unsigned int)v167 * 0x200 + 0x200;
        v26 = 1;
LABEL_523de1:
        v11 = v157.get_flag(_ZN5uu_ls7options6AUTHOR17hdb3f9851501cb645E, g_6a0dd0);
        if ((char)v157.get_flag(_ZN5uu_ls7options8NO_GROUP17he81df3f3aad4f33bE, g_6a0de0))
        {
            v22 = 0;
        }
        else
        {
            v22 = v157.get_flag(*((long long *)&_ZN5uu_ls7options6format13LONG_NO_GROUP17h3a95b096fda62ebbE), g_6a1488);
            v22 = v22 & 0xffffff00 | (char)v22 ^ 1;
        }
        v6 = v157.get_flag(*((long long *)&_ZN5uu_ls7options6format13LONG_NO_OWNER17he953e6f73aa3471eE), g_6a1478);
        v10 = v157.get_flag(*((long long *)&_ZN5uu_ls7options6format20LONG_NUMERIC_UID_GID17h4b2cb569f0d33d1fE), g_6a1498);
        (char)v37.try_get_one(v157, _ZN5uu_ls7options5WIDTH17had527c6eee006432E, g_6a0dc0);
        uu_ls::parse_width(&(char)v98, _ZN5uu_ls7options5WIDTH17had527c6eee006432E.unwrap(g_6a0dc0, &(char)v37));
        v180 = (long long)v98;
        v181 = v99;
        if (v180 != 9223372036854775814)
        {
            v47 = v105;
            v219 = (int128_t)v100;
            *((int128_t *)&v45) = (int128_t)v103;
            v42 = v219;
            v37 = v180;
            v41 = v181;
            v185 = v37.new();
            goto LABEL_523f5e;
        }
        v24 = v181;
        if (!(char)v157.get_flag(_ZN5uu_ls7options18HIDE_CONTROL_CHARS17h712ca5c95353b27dE, g_6a0da0))
        {
            v182 = 1;
            if (!(char)v157.get_flag(_ZN5uu_ls7options18SHOW_CONTROL_CHARS17h5c061234211aeb2aE, g_6a0db0))
            {
                v40 = std::io::stdio::stdout();
                v182 = std::sys::pal::unix::io::is_terminal() ^ 1;
            }
        }
        v183 = v182;
        v20 = uu_ls::extract_quoting_style(v157, v183);
        v5 = uu_ls::extract_indicator_style(v157);
        v2 = v157.get_flag(_ZN5uu_ls7options5DIRED17hc1e0b45eb87eb0feE, g_6a0f10);
        if (v0 == 1 || v2)
        {
            uu_ls::parse_time_style(&(char)v98, v157);
            v184 = (long long)v98;
            memcpy(&v109, &v99, 16);
            v111 = *((long long *)&v102);
            if (v184 == 9223372036854775814)
            {
                v17 = v183;
                memcpy(&v116, &v109, 16);
                v118 = v111;
                goto LABEL_5240f9;
            }
            else
            {
                *((int128_t *)&v46) = (int128_t)v104;
                *((int128_t *)&v41) = *((int128_t *)&v109);
                v44 = v111;
                v37 = v184;
                v185 = v37.new();
LABEL_523f5e:
                v25->field_8 = v185;
                v25->field_10 = &g_69f228;
                v25->field_0 = 0x8000000000000000;
                goto LABEL_523f7f;
            }
        }
        else
        {
            v17 = v183;
            v116 = 9223372036854775810;
LABEL_5240f9:
            v89 = 0;
            v90 = 8;
            v91 = 0;
            v19 = v157;
            if ((char)v157.get_flag(_ZN5uu_ls7options14IGNORE_BACKUPS17hb0fc1e80db4f33b3E, g_6a0e20))
            {
                (char)v37.new("*~.*~ls-invalid-hide-patternls-invalid-ignore-patternTABSIZE(uutils coreutils) 0.1.0ls-help-print-helpls-help-set-display-formatls-help-display-files-columnsls-help-display-detailed-infols-help-list-entries-rowsls-help-assume-tab-stopsls-help-list-entries-", 2);
                (char)v98.unwrap(&(char)v37, &g_69f290);
                v89.push(&(char)v98, &g_69f2a8);
                (char)v37.new(".*~ls-invalid-hide-patternls-invalid-ignore-patternTABSIZE(uutils coreutils) 0.1.0ls-help-print-helpls-help-set-display-formatls-help-display-files-columnsls-help-display-detailed-infols-help-list-entries-rowsls-help-assume-tab-stopsls-help-list-entries-co", 3);
                (char)v98.unwrap(&(char)v37, &g_69f2c0);
                v89.push(&(char)v98, &g_69f2d8);
            }
            (char)v37.try_get_many(v19, _ZN5uu_ls7options6IGNORE17h5df4a9a8bc0a3456E, g_6a0ed0);
            (char)v98.unwrap(_ZN5uu_ls7options6IGNORE17h5df4a9a8bc0a3456E, g_6a0ed0, &(char)v37);
            v6 ^= 1;
            v186 = v20;
            v23 = v186 >> 8;
            v87 = v186 >> 16;
            v187 = (int128_t)v98;
            v188 = (int128_t)v101;
            v189 = (int128_t)v104;
            v49 = v106;
            v47 = v189;
            v44 = v188;
            v41 = v187;
            v52 = v119;
            v54 = v120;
            v56 = v121;
            v58 = v122;
            v60 = v119;
            v62 = v120;
            v63 = v121;
            v65 = v122;
            v37 = 1;
            v51 = 0;
            v59 = 0;
            while (true)
            {
                v190 = v37.next();
                if (!v190)
                    break;
                uucore::features::parser::parse_glob::from_str(&(char)v98, *((long long *)&v190->field_8), *((long long *)&v190[1].padding_0[7]));
                if ((long long)v98 != 0x8000000000000000)
                {
                    v151 = (long long)v106;
                    memcpy(&v150, &v104, 16);
                    memcpy(&v149, &v101, 16);
                    memcpy(&v148, &v98, 16);
                    v89.push(&v148, &g_69f308);
                }
                else
                {
                    v29 = uucore::util_name();
                    v33 = v191;
                    v75 = &v29;
                    v77 = <&T as core::fmt::Display>::fmt;
                    v108 = &g_69f1b8;
                    v110 = 2;
                    v114 = 0;
                    v111 = &v75;
                    v112 = 1;
                    std::io::stdio::_eprint(&v108);
                    v29.to_vec("patternBLOCKSIZEBLOCK_SIZELS_BLOCK_SIZEPOSIXLY_CORRECT*~.*~ls-invalid-hide-patternls-invalid-ignore-patternTABSIZE(uutils coreutils) 0.1.0ls-help-print-helpls-help-set-display-formatls-help-display-files-columnsls-help-display-detailed-infols-help-list-ent", 7);
                    v70 = v34;
                    *((int128_t *)&v68) = *((int128_t *)&v29);
                    v75 = 0;
                    *((int128_t *)&v78) = *((int128_t *)&v190->field_8);
                    v80 = 1;
                    v29.spec_to_string(&v75);
                    v111 = v70;
                    memcpy(&v108, &v67, 16);
                    v115 = v34;
                    *((int128_t *)&v113) = *((int128_t *)&v29);
                    v192 = (int128_t)(&v113)[8];
                    *((int128_t *)&v30) = *((int128_t *)&v108);
                    v34 = v111;
                    v35 = v112;
                    v36 = v192;
                    v108.from_iter(&v29);
                    uucore::mods::locale::get_message_with_args(&v29, "ls-invalid-ignore-patternTABSIZE(uutils coreutils) 0.1.0ls-help-print-helpls-help-set-display-formatls-help-display-files-columnsls-help-display-detailed-infols-help-list-entries-rowsls-help-assume-tab-stopsls-help-list-entries-commasls-help-list-entries-n", 25, &v108);
                    v67 = &v29;
                    v69 = <alloc::string::String as core::fmt::Display>::fmt;
                    v109 = &g_69f160;
                    v110 = 2;
                    v114 = 0;
                    v111 = &v67;
                    v112 = 1;
                    std::io::stdio::_eprint(&v109);
                    ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v29);
                }
            }
            if (v7 == 2)
            {
                v37.try_get_many(v19, _ZN5uu_ls7options4HIDE17hd4f6fa7727c5c78dE, g_6a0ec0);
                (char)v98.unwrap(_ZN5uu_ls7options4HIDE17hd4f6fa7727c5c78dE, g_6a0ec0, &v37);
                v193 = (int128_t)v98;
                v194 = (int128_t)v101;
                v195 = (int128_t)v104;
                v49 = v106;
                v47 = v195;
                v44 = v194;
                v41 = v193;
                v52 = v119;
                v54 = v120;
                v56 = v121;
                v58 = v122;
                v60 = v119;
                v62 = v120;
                v63 = v121;
                v65 = v122;
                v37 = 1;
                v51 = 0;
                v59 = 0;
                while (true)
                {
                    v196 = v37.next();
                    if (!v196)
                        break;
                    uucore::features::parser::parse_glob::from_str(&(char)v98, *((long long *)&v196->field_8), *((long long *)&v196[1].padding_0[7]));
                    if ((long long)v98 != 0x8000000000000000)
                    {
                        v155 = (long long)v106;
                        memcpy(&v154, &v104, 16);
                        memcpy(&v153, &v101, 16);
                        memcpy(&v152, &v98, 16);
                        v89.push(&v152, &g_69f2f0);
                    }
                    else
                    {
                        v29 = uucore::util_name();
                        v33 = v191;
                        v75 = &v29;
                        v77 = <&T as core::fmt::Display>::fmt;
                        v108 = &g_69f1b8;
                        v110 = 2;
                        v114 = 0;
                        v111 = &v75;
                        v112 = 1;
                        std::io::stdio::_eprint(&v108);
                        v29.to_vec("patternBLOCKSIZEBLOCK_SIZELS_BLOCK_SIZEPOSIXLY_CORRECT*~.*~ls-invalid-hide-patternls-invalid-ignore-patternTABSIZE(uutils coreutils) 0.1.0ls-help-print-helpls-help-set-display-formatls-help-display-files-columnsls-help-display-detailed-infols-help-list-ent", 7);
                        v70 = v34;
                        *((int128_t *)&v68) = *((int128_t *)&v29);
                        v75 = 0;
                        *((int128_t *)&v78) = *((int128_t *)&v196->field_8);
                        v80 = 1;
                        v29.spec_to_string(&v75);
                        v111 = v70;
                        memcpy(&v108, &v67, 16);
                        v115 = v34;
                        *((int128_t *)&v113) = *((int128_t *)&v29);
                        v197 = (int128_t)(&v113)[8];
                        *((int128_t *)&v31) = *((int128_t *)&v108);
                        v34 = v111;
                        v35 = v112;
                        v36 = v197;
                        v108.from_iter(&v29);
                        uucore::mods::locale::get_message_with_args(&v29, "ls-invalid-hide-patternls-invalid-ignore-patternTABSIZE(uutils coreutils) 0.1.0ls-help-print-helpls-help-set-display-formatls-help-display-files-columnsls-help-display-detailed-infols-help-list-entries-rowsls-help-assume-tab-stopsls-help-list-entries-comma", 23, &v108);
                        v67 = &v29;
                        v69 = <alloc::string::String as core::fmt::Display>::fmt;
                        v109 = &g_69f160;
                        v110 = 2;
                        v114 = 0;
                        v111 = &v67;
                        v112 = 1;
                        std::io::stdio::_eprint(&v109);
                        ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v29);
                    }
                }
            }
            v85 = _ZN5uu_ls7options6format6ACROSS17hf452c3664493c363E;
            v83 = g_6a1448;
            v81 = _ZN5uu_ls7options6format7COLUMNS17hee2189b8176009b4E;
            v146 = g_6a1438;
            v145 = _ZN5uu_ls7options6format6COMMAS17h2c5349b856a55a83E;
            v144 = g_6a1468;
            v143 = _ZN5uu_ls7options6format4LONG17h80050e8eaca426e4E;
            v142 = g_6a1428;
            v141 = *((long long *)&_ZN5uu_ls7options6format13LONG_NO_GROUP17h3a95b096fda62ebbE);
            v140 = g_6a1488;
            v139 = *((long long *)&_ZN5uu_ls7options6format13LONG_NO_OWNER17he953e6f73aa3471eE);
            v138 = g_6a1478;
            v137 = g_6a1498;
            v136 = _ZN5uu_ls7options5COLOR17hec93557feaaa5819E;
            v135 = g_6a0e70;
            v134 = _ZN5uu_ls7options18HIDE_CONTROL_CHARS17h712ca5c95353b27dE;
            v133 = g_6a0da0;
            v132 = _ZN5uu_ls7options18SHOW_CONTROL_CHARS17h5c061234211aeb2aE;
            v131 = g_6a0db0;
            v130 = _ZN5uu_ls7options13QUOTING_STYLE17h884a2ae66fea2b2bE;
            v129 = g_6a0d90;
            v128 = _ZN5uu_ls7options7quoting1C17h952e5bdbbba18c31E;
            v127 = g_6a1808;
            v126 = _ZN5uu_ls7options7quoting6ESCAPE17h0e0d83b6fced9a18E;
            v125 = g_6a17e8;
            v124 = _ZN5uu_ls7options7quoting7LITERAL17h5ab5c78cae3915a1E;
            v123 = g_6a17f8;
            v198 = ::0x525780::uu_ls::Config::from::{{closure}}(v19, _ZN5uu_ls7options4ZERO17hdd282bbaeb2496daE, g_6a0f00);
            v41 = v85;
            v43 = v83;
            v44 = v81;
            v46 = v146;
            v47 = v145;
            v48 = v144;
            v49 = v143;
            v50 = v142;
            v51 = v141;
            v52 = v140;
            v53 = v139;
            v54 = v138;
            v55 = *((long long *)&_ZN5uu_ls7options6format20LONG_NUMERIC_UID_GID17h4b2cb569f0d33d1fE);
            v56 = v137;
            v57 = _ZN5uu_ls7options6format8ONE_LINE17hbf96991fc6132402E;
            v58 = g_6a1418;
            v59 = _ZN5uu_ls7options6FORMAT17h655b9559784aa64bE;
            v60 = g_6a0df0;
            v61 = 0;
            v62 = 9;
            v37 = v19;
            if (!v37.reduce())
                v199 = 0;
            v200 = (v198 > v199 ? 2 - (v0 == 1) : v0);
            v201 = ::0x525780::uu_ls::Config::from::{{closure}}(v19, _ZN5uu_ls7options4ZERO17hdd282bbaeb2496daE, g_6a0f00);
            v41 = v136;
            v43 = v135;
            v44 = 0;
            v46 = 1;
            v37 = v19;
            if (!v37.reduce())
                v202 = 0;
            v203 = ::0x525780::uu_ls::Config::from::{{closure}}(v19, _ZN5uu_ls7options4ZERO17hdd282bbaeb2496daE, g_6a0f00);
            v41 = v134;
            v43 = v133;
            v44 = v132;
            v46 = v131;
            v47 = 0;
            v48 = 2;
            v37 = v19;
            if (!v37.reduce())
                v204 = 0;
            v17 = (v203 > v204 ? 1 : v17);
            v205 = ::0x525780::uu_ls::Config::from::{{closure}}(v19, _ZN5uu_ls7options4ZERO17hdd282bbaeb2496daE, g_6a0f00);
            v41 = v130;
            v43 = v129;
            v44 = v128;
            v46 = v127;
            v47 = v126;
            v48 = v125;
            v49 = v124;
            v50 = v123;
            v51 = 0;
            v52 = 4;
            *((unsigned long long *)&v38) = v19;
            v206 = v1 & v201 <= v202;
            if (!(unsigned long long)v38.reduce())
                v207 = 0;
            v208 = (v205 > v207 ? v18 : (char)v23);
            if (v206)
            {
                (unsigned long long)v38.from_env();
                if (v37 == 0x8000000000000000)
                    (char)v98.default();
                else
                    memcpy(&(char)v98, &(unsigned long long)v38, 160);
                memcpy(&v109, &(char)v98, 160);
                v209 = v19;
                if (!v2)
                    goto LABEL_525025;
                goto LABEL_524f03;
            }
            v109 = 0x8000000000000000;
            v209 = v19;
            if (v2)
            {
LABEL_524f03:
                v210 = 1;
                v200 = v200 & 0xffffff00 | 1;
                if (!(char)v209.get_flag(_ZN5uu_ls7options4ZERO17hdd282bbaeb2496daE, g_6a0f00))
                    goto LABEL_525038;
                v37 = 9223372036854775812;
                *((double *)&v25->field_8) = v37.new();
                v25->field_10 = &g_69f228;
                v25->field_0 = 0x8000000000000000;
                v109.drop_in_place<core::option::Option<lscolors::LsColors>>();
                v89.drop_in_place<alloc::vec::Vec<glob::Pattern>>();
                core::ptr::drop_in_place<uu_ls::TimeStyle>(&v117);
LABEL_523f7f:
                ::0x51cb00::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&(char)v71);
                core::ptr::drop_in_place<std::env::VarError>(&v147);
                if (*((long long *)&v96) != 0x8000000000000000 && (char)v9)
                    ::0x51cb00::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v96);
                if (*((long long *)&v94) != 0x8000000000000000 && (char)v4)
                    ::0x51cb00::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v94);
            }
            else
            {
LABEL_525025:
                if ((char)uu_ls::dired::is_dired_arg_present())
                    v200 = 1;
LABEL_525038:
                v0 = 3;
                if (!(char)v209.get_flag(_ZN5uu_ls7options11dereference3ALL17ha70e1c381fb28868E, g_6a14d8))
                {
                    v0 = 2;
                    if (!(char)v209.get_flag(_ZN5uu_ls7options11dereference4ARGS17h9d26c3f38601d617E, g_6a14e8))
                    {
                        v0 = 1;
                        if (!(char)v209.get_flag(_ZN5uu_ls7options11dereference8DIR_ARGS17hf0d4e2f145469283E, g_6a14f8))
                            v0 = ~((char)v209.get_flag(_ZN5uu_ls7options9DIRECTORY17h9bbe2397eed7d917E, g_6a0e30)) & v5 != 3 & v210 != 1;
                    }
                }
                if (v206)
                {
                    v211 = 0;
                }
                else
                {
                    (unsigned long long)v38.try_get_one(v209, _ZN5uu_ls7options6format8TAB_SIZE17h05ab82244ec84ed5E, g_6a1458);
                    v212 = _ZN5uu_ls7options6format8TAB_SIZE17h05ab82244ec84ed5E.unwrap(g_6a1458, &(unsigned long long)v38);
                    if (v212)
                        v213 = uu_ls::Config::from::{{closure}}(v212[1], v212[2]);
                    else
                        v213 = 0;
                    v211 = v191;
                    if (!v213.or_else(v214))
                        v211 = 8;
                }
                v215 = v209.get_flag(_ZN5uu_ls7options9RECURSIVE17h3b9b53fcd4ffad26E, g_6a0e60);
                v17 = v209.get_flag(_ZN5uu_ls7options7REVERSE17h403d2474a90df2aaE, g_6a0e50);
                v1 = v215;
                v79 = 0;
                *((int128_t *)&v76) = *((int128_t *)&v89);
                v20 = v209.get_flag(_ZN5uu_ls7options9DIRECTORY17h9bbe2397eed7d917E, g_6a0e30);
                v85 = v200;
                v23 = v208;
                memcpy(&(char)v98, &v109, 160);
                v83 = v209.get_flag(_ZN5uu_ls7options5INODE17hd8284e39ec11506dE, g_6a0e40);
                v216 = v209.get_flag(_ZN5uu_ls7options4size15ALLOCATION_SIZE17hf3481e3caa2399c5E, g_6a1798);
                v81 = (v205 <= v207 ? v21 : 3);
                v34 = v118;
                v32 = v117;
                v217 = v209.get_flag(_ZN5uu_ls7options23GROUP_DIRECTORIES_FIRST17hff5b5f6aeec3785dE, g_6a0ef0);
                v218 = ((char)v209.get_flag(_ZN5uu_ls7options4ZERO17hdd282bbaeb2496daE, g_6a0f00) ? 0 : 10);
                v43 = 0;
                *((int128_t *)&v38) = *((int128_t *)&v75);
                memcpy(&(char)v44, &(char)v98, 160);
                *((int128_t *)&v64) = (int128_t)v32;
                v66 = v34;
                memcpy(v25, &(unsigned long long)v38, 208);
                v25->field_d0 = v26;
                v25->field_d8 = v27;
                a0->field_e0 = v211;
                v25->field_e8 = v11;
                v25->field_e9 = v22;
                v25->field_ea = v6;
                v25->field_eb = v10;
                v25->field_ec = v24;
                v25->field_ee = v1;
                v25->field_ef = v18;
                v25->field_f0 = v21;
                v25->field_f1 = v84;
                v25->field_f2 = v216;
                v25->field_f3 = v15;
                v25->field_f4 = 0;
                v25->field_f5 = v217;
                v25->field_f6 = v2;
                v25->field_f7 = v12;
                v25->field_f8 = v7;
                v25->field_f9 = v88;
                v25->field_fa = v0;
                v25->field_fb = v13;
                v25->field_fc = v82;
                v25->field_fd = v23;
                v25->field_fe = v87;
                v25->field_ff = v5;
                v25->field_100 = v86;
                v25->field_101 = v14;
                v25->field_102 = v218;
                ::0x51cb00::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&(char)v71);
                core::ptr::drop_in_place<std::env::VarError>(&v147);
                if (*((long long *)&v96) != 0x8000000000000000 && (char)v9)
                    ::0x51cb00::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v96);
                if (*((long long *)&v94) != 0x8000000000000000 && (char)v4)
                    ::0x51cb00::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v94);
            }
        }
        if (!(*((long long *)&v92) != 0x8000000000000000 && (char)v220))
            return a0;
        ::0x51cb00::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v92);
        return a0;
    }
    a1.get_flag(_ZN5uu_ls7options4size2SI17ha4ea4aded374f1feE, g_6a17c8);
    goto LABEL_5239f4;
}
