long long just::parser::Parser::parse_ast(void* a0, struct_0 *a1)
{
    char v0;  // [bp-0x4d9]
    int v1;  // [bp-0x4d8]
    int v2;  // [bp-0x4d8]
    int v3;  // [bp-0x4d8]
    int v4;  // [bp-0x4d1]
    int v5;  // [bp-0x4c8]
    void* v6;  // [bp-0x4c8], Other Possible Types: int
    int v7;  // [bp-0x4c8]
    int v8;  // [bp-0x4c1]
    int v9;  // [bp-0x4b8]
    int v10;  // [bp-0x4b8]
    int v11;  // [bp-0x4b8]
    int v12;  // [bp-0x4b1]
    int v13;  // [bp-0x4a8]
    int v14;  // [bp-0x4a8]
    int v15;  // [bp-0x4a8]
    int v16;  // [bp-0x4a1]
    int v17;  // [bp-0x498]
    int v18;  // [bp-0x491]
    unsigned long long v19;  // [bp-0x489]
    int v20;  // [bp-0x478], Other Possible Types: char, unsigned long, unsigned long long
    int v21;  // [bp-0x477]
    unsigned long long v22;  // [bp-0x470]
    int v23;  // [bp-0x470]
    char v24;  // [bp-0x470]
    int v25;  // [bp-0x470]
    unsigned long long v26;  // [bp-0x470]
    int v27;  // [bp-0x470]
    unsigned long long v28;  // [bp-0x470]
    unsigned long v29;  // [bp-0x470]
    unsigned long long v30;  // [bp-0x470]
    int v31;  // [bp-0x46f]
    void* v32;  // [bp-0x468], Other Possible Types: char *, int, unsigned long long
    void* v33;  // [bp-0x460], Other Possible Types: int, unsigned long, unsigned long long
    char v34;  // [bp-0x460]
    int v35;  // [bp-0x45f]
    void* v36;  // [bp-0x458], Other Possible Types: int, unsigned long long
    int v37;  // [bp-0x450], Other Possible Types: unsigned long long
    char v38;  // [bp-0x450]
    int v39;  // [bp-0x44f]
    int v40;  // [bp-0x448]
    int v41;  // [bp-0x440], Other Possible Types: unsigned long long
    char v42;  // [bp-0x440]
    int v43;  // [bp-0x43f]
    int v44;  // [bp-0x438]
    int v45;  // [bp-0x437]
    unsigned int v46;  // [bp-0x434]
    char v47;  // [bp-0x430], Other Possible Types: unsigned long long
    int v48;  // [bp-0x42f]
    unsigned int v49;  // [bp-0x42c]
    int v50;  // [bp-0x428]
    unsigned long long v52;  // [bp-0x420]
    int v53;  // [bp-0x418]
    unsigned long long v54;  // [bp-0x410]
    int v55;  // [bp-0x408]
    unsigned long long v56;  // [bp-0x400]
    int v57;  // [bp-0x3f8]
    int v58;  // [bp-0x3e8]
    int v59;  // [bp-0x3e8]
    int v60;  // [bp-0x3e8]
    char v61;  // [bp-0x3e0]
    int v62;  // [bp-0x3d8]
    int v63;  // [bp-0x3b8]
    int v64;  // [bp-0x3b8]
    char v65;  // [bp-0x3b0]
    unsigned long long v66;  // [bp-0x3a8]
    unsigned int v67;  // [bp-0x378]
    unsigned int v68;  // [bp-0x375]
    void* v69;  // [bp-0x370]
    unsigned long long v70;  // [bp-0x368]
    void* v71;  // [bp-0x360]
    void* v72;  // [bp-0x358], Other Possible Types: int, unsigned long long
    int v73;  // [bp-0x358]
    void* v74;  // [bp-0x348], Other Possible Types: int, unsigned long long
    int v75;  // [bp-0x348]
    int v76;  // [bp-0x338]
    int v77;  // [bp-0x338]
    char *v78;  // [bp-0x328], Other Possible Types: int, char, unsigned long long
    int v79;  // [bp-0x327]
    int v80;  // [bp-0x320], Other Possible Types: unsigned long long
    unsigned long long v81;  // [bp-0x320]
    int v82;  // [bp-0x320]
    int v83;  // [bp-0x320]
    int v84;  // [bp-0x318], Other Possible Types: unsigned long
    int v85;  // [bp-0x318]
    int v86;  // [bp-0x310]
    int v87;  // [bp-0x308]
    int v88;  // [bp-0x308]
    int v89;  // [bp-0x300]
    int v90;  // [bp-0x2f8]
    int v91;  // [bp-0x2f8]
    int v92;  // [bp-0x2f0]
    unsigned long v93;  // [bp-0x2e8], Other Possible Types: unsigned long long
    int v94;  // [sp-0x2e8], Other Possible Types: unsigned long
    unsigned int v95;  // [bp-0x2e7]
    unsigned int v96;  // [bp-0x2e4]
    int v97;  // [bp-0x2e0]
    int v98;  // [bp-0x2d8]
    int v99;  // [bp-0x2d8]
    int v100;  // [bp-0x2d0]
    unsigned long long v101;  // [bp-0x2b8]
    int v102;  // [bp-0x2b0]
    int v103;  // [bp-0x2a0]
    int v104;  // [bp-0x290]
    int v105;  // [bp-0x280]
    int v106;  // [bp-0x270]
    int v107;  // [bp-0x260]
    int v108;  // [bp-0x228]
    int v109;  // [bp-0x218], Other Possible Types: void*, unsigned long long
    int v110;  // [bp-0x208]
    int v111;  // [bp-0x1f8]
    char v112;  // [bp-0x1e8]
    int v113;  // [sp-0x1e8]
    unsigned long long v114;  // [bp-0x1e0]
    int v115;  // [bp-0x1d8]
    unsigned long long v116;  // [bp-0x1d0]
    void* v117;  // [bp-0x1c8], Other Possible Types: int
    int v118;  // [bp-0x1c8]
    void* v119;  // [bp-0x1b8], Other Possible Types: unsigned long long
    int v120;  // [bp-0x1a8], Other Possible Types: unsigned long long
    int v121;  // [bp-0x1a8]
    unsigned long long v122;  // [bp-0x198]
    void* v123;  // [bp-0x190]
    unsigned long long v124;  // [bp-0x188]
    void* v125;  // [bp-0x180]
    unsigned long long v126;  // [bp-0x170]
    int v127;  // [bp-0x168], Other Possible Types: char
    int v128;  // [bp-0x158], Other Possible Types: char
    int v129;  // [bp-0x148], Other Possible Types: char
    int v130;  // [bp-0x138], Other Possible Types: char
    int v131;  // [bp-0x128], Other Possible Types: char
    int v132;  // [bp-0x118], Other Possible Types: char
    int v133;  // [bp-0x108], Other Possible Types: char
    int v134;  // [bp-0xf8], Other Possible Types: char
    unsigned long long v135;  // [bp-0xe8]
    int v136;  // [bp-0xd8]
    int v137;  // [bp-0xc8], Other Possible Types: char
    int v138;  // [bp-0xb8], Other Possible Types: char
    int v139;  // [bp-0xa8], Other Possible Types: char
    unsigned long long v140;  // [bp-0x98]
    char v141;  // [bp-0x90]
    unsigned long v142;  // [bp-0x80]
    char v143;  // [bp-0x78]
    char v144;  // [bp-0x68]
    char v145;  // [bp-0x58]
    char v146;  // [bp-0x48]
    unsigned long long v147;  // [bp-0x38]
    char v149;  // al
    unsigned int v150;  // r13d
    unsigned long long v151;  // rbp
    int v152;  // xmm0
    int v153;  // xmm1
    int v154;  // xmm2
    int v155;  // xmm3
    int v156;  // xmm4
    int v157;  // xmm5
    char v158;  // al
    uint256_t v159;  // ymm0
    int v160;  // xmm2
    int v161;  // xmm3
    char v162;  // cl
    int v163;  // ymm0, Other Possible Types: uint256_t
    char v164;  // al
    char v165;  // al
    unsigned long long v166;  // rdi
    unsigned long long v167;  // rax
    int v168;  // xmm0
    int v169;  // xmm1
    int v170;  // xmm2
    int v171;  // xmm3
    uint256_t v172;  // ymm0
    int v173;  // xmm0
    int v174;  // xmm0
    int v175;  // xmm1
    int v176;  // xmm2
    char v177;  // bpl
    uint256_t v178;  // ymm0
    int v179;  // xmm0
    int v180;  // xmm0
    int v181;  // xmm0
    int v182;  // xmm1
    int v183;  // xmm2
    int v184;  // xmm3
    int v185;  // xmm0
    uint256_t v186;  // ymm0
    int v187;  // xmm2
    int v188;  // xmm3
    int v189;  // xmm0
    unsigned long long v190;  // rax
    int v191;  // xmm0
    int v192;  // xmm1
    int v193;  // xmm2
    int v194;  // xmm3
    int v195;  // xmm0
    int v196;  // xmm0
    int v197;  // xmm1
    int v198;  // xmm0
    int v199;  // xmm0
    int v200;  // xmm1
    int v201;  // xmm2
    int v202;  // xmm0
    int v203;  // xmm2
    int v204;  // xmm3
    uint256_t v205;  // ymm0
    char v206;  // al
    unsigned long long v207[2];  // rax
    unsigned long long v208;  // rax
    int v209;  // xmm0
    int v210;  // xmm1
    int v211;  // xmm2
    int v212;  // xmm0
    int v213;  // xmm0
    char v214;  // al
    uint256_t v215;  // ymm0
    int v216;  // xmm0
    int v217;  // xmm1
    int v218;  // xmm1
    int v219;  // xmm0
    int v220;  // xmm0
    int v221;  // xmm1
    int v222;  // xmm2
    unsigned long long v223;  // rax
    int v224;  // xmm0
    int v225;  // xmm1
    int v226;  // xmm2
    int v227;  // xmm3
    int v228;  // xmm0
    int v229;  // xmm0
    int v230;  // xmm1
    int v231;  // xmm0
    int v232;  // xmm0
    int v233;  // xmm1
    int v234;  // xmm2
    unsigned long long v235;  // rax
    unsigned long long v236;  // rbp
    int v237;  // xmm0
    int v238;  // xmm1
    int v239;  // xmm2
    int v240;  // xmm3
    int v241;  // xmm0
    int v242;  // xmm0
    int v243;  // xmm0
    int v244;  // xmm1
    int v245;  // xmm2
    unsigned long long v246;  // rax
    unsigned long v247;  // rdx, Other Possible Types: unsigned long long
    unsigned long long v248;  // rbp
    int v249;  // xmm0
    int v250;  // xmm1
    int v251;  // xmm2
    int v252;  // xmm3
    int v253;  // xmm0
    int v254;  // xmm0
    int v255;  // xmm0
    int v256;  // xmm1
    int v257;  // xmm2
    int v267;  // xmm0
    int v268;  // xmm1
    int v269;  // xmm2
    int v270;  // xmm3
    int v271;  // xmm4
    unsigned int v273;  // ecx
    unsigned int v274;  // edx
    unsigned int v275;  // edx
    int v277;  // xmm0
    int v278;  // xmm1
    int v279;  // xmm2
    int v280;  // xmm0
    int v281;  // xmm1
    int v282;  // xmm2
    int v284;  // xmm0
    int v285;  // xmm1
    int v286;  // xmm2
    int v287;  // xmm0
    void* v288;  // rax
    unsigned long v289;  // rcx
    int v290;  // xmm0
    int v291;  // xmm1
    int v292;  // xmm2
    int v293;  // xmm3
    int v294;  // xmm4
    int v296;  // xmm0
    int v297;  // xmm1
    int v298;  // xmm2
    int v299;  // xmm0
    int v300;  // xmm1
    int v301;  // xmm2
    int v302;  // xmm3
    int v303;  // xmm4
    int v305;  // xmm0
    int v306;  // xmm1
    int v307;  // xmm2
    int v308;  // xmm0
    int v309;  // xmm1
    int v310;  // xmm2
    int v311;  // xmm0
    int v312;  // xmm1
    int v313;  // xmm2
    int v314;  // xmm0
    int v315;  // xmm1
    int v316;  // xmm2
    int v319;  // xmm0
    int v320;  // xmm1
    int v322;  // xmm0
    int v323;  // xmm1
    int v324;  // xmm2
    int v328;  // xmm0
    int v329;  // xmm1
    int v330;  // xmm2
    int v332;  // xmm0
    int v333;  // xmm1
    int v334;  // xmm0
    int v335;  // xmm1
    int v336;  // xmm2
    int v341;  // [bp-0x447]
    unsigned long long v342;  // [bp-0x3e8]
    int v343;  // [bp-0x3c8]
    unsigned long long v344;  // [bp-0x3b8]
    int v346;  // [bp-0x307]
    char v348;  // [bp-0x2e8]
    unsigned long long v349;  // [bp-0x228]
    unsigned long long v350;  // [bp-0x220]

    v69 = 0;
    v70 = 8;
    v71 = 0;
    v20.accept(a1, 11);
    v149 = v47;
    if (v149 != 37)
    {
        v94 = (long long)v44;
        v332 = (int128_t)v20;
        v333 = (int128_t)v32;
        memcpy(&(char)v90, &(char)v40, 16);
        *((int128_t *)&v87) = (int128_t)v36;
        v84 = v333;
        v78 = v332;
        *((unsigned int *)&a0[84]) = v49;
        *((int *)&a0[81]) = (int)v44;
        *((unsigned long *)&a0[72]) = v94;
        v334 = (int128_t)v78;
        v335 = (int128_t)v84;
        v336 = (int128_t)v87;
        *((int128_t *)&a0[56]) = (int128_t)v90;
        a0[40] = v336;
        a0[24] = v335;
        a0[8] = v334;
        *((char *)&a0[80]) = v149;
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<alloc::vec::Vec<just::item::Item>>(&v69);
        return core::ptr::drop_in_place<just::parser::Parser>(a1);
    }
    v150 = 0;
    while (true)
    {
        v20.parse_attributes(a1);
        if (*((int *)&v20) == 1)
        {
            v267 = (int128_t)(&v43)[15];
            v94 = v267;
            v268 = (int128_t)v27;
            v269 = (int128_t)(&v31)[15];
            v270 = (int128_t)(&v35)[15];
            v271 = (int128_t)(&v39)[15];
            v90 = v271;
            v87 = v270;
            v84 = v269;
            v78 = v268;
            a0[72] = v267;
            a0[56] = v271;
            a0[40] = v270;
            a0[24] = v269;
            a0[8] = v268;
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<alloc::vec::Vec<just::item::Item>>(&v69);
            return core::ptr::drop_in_place<just::parser::Parser>(a1);
        }
        v152 = *((int128_t *)&v52);
        v99 = v152;
        v153 = *((int128_t *)&v47);
        v94 = v153;
        v154 = (int128_t)v27;
        v155 = (int128_t)(&v32)[8];
        v156 = (int128_t)(&v36)[8];
        v157 = *((int128_t *)&v42);
        v90 = v157;
        v108 = v154;
        v109 = v155;
        v110 = v156;
        v111 = v157;
        v113 = v153;
        v115 = v152;
        v20.next(a1);
        v158 = v47;
        v159 = (v163 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v152) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v20);
        v160 = *((int128_t *)&(&v34)[8]);
        v161 = *((int128_t *)&(&v38)[8]);
        memcpy(&v78, &v20, 16);
        *((int128_t *)&v85) = *((int128_t *)&(&v24)[8]);
        v88 = v160;
        v91 = v161;
        v93 = (long long)(&v41)[8];
        if (v158 != 37)
        {
LABEL_67964a:
            v273 = (int)(&v44)[9];
            *((unsigned int *)&a0[84]) = v49;
            goto LABEL_67965c;
        }
        memcpy(&v143, &v78, 16);
        memcpy(&v144, &v85, 16);
        memcpy(&v145, &v88, 16);
        memcpy(&v146, &v91, 16);
        v147 = v93;
        v20.accept(a1, 16);
        v162 = v47;
        v163 = (v159 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v78)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v20);
        memcpy(&v127, &v20, 16);
        memcpy(&v128, &v24, 16);
        memcpy(&v129, &v34, 16);
        memcpy(&v130, &v40, 16);
        v164 = (char)(&v41)[8];
        v67 = (int)v45;
        v68 = v46;
        if (v162 != 37)
        {
            v274 = (int)(&v44)[9];
            *((unsigned int *)&a0[84]) = v49;
            *((unsigned int *)&a0[81]) = v274;
            a0[56] = v130;
            a0[40] = v129;
            a0[24] = v128;
            a0[8] = v127;
            v275 = v67;
            *((unsigned int *)&a0[76]) = v68;
            *((unsigned int *)&a0[73]) = v275;
            *((char *)&a0[72]) = v164;
            goto LABEL_6797fc;
        }
        if (v164 != 37)
        {
            v163 = v163 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v127;
            v90 = v130;
            v87 = v129;
            v84 = v128;
            v78 = v127;
            v348 = v164;
            v96 = v68;
            v95 = v67;
            v29 = core::str::<impl str>::trim_end_matches(v78.lexeme(), v247);
            v32 = v247;
            v20 = 9223372036854775810;
            v69.push(&v20, &g_830780);
            v20.expect_eol(a1);
            v158 = v47;
            if (v158 != 37)
                goto LABEL_679802;
            v151 = 0;
LABEL_67844f:
            if (v112 != 37)
                goto LABEL_67970e;
            goto LABEL_67845d;
        }
        v20.accepted(a1, 20);
        v165 = v20;
        v162 = v47;
        if (v47 != 37)
        {
LABEL_6797a5:
            *((long long *)&a0[72]) = (long long)(&v41)[8];
            v280 = (int128_t)v21;
            v281 = *((int128_t *)&(&v24)[9]);
            v282 = *((int128_t *)&(&v34)[9]);
            *((int128_t *)&a0[57]) = (int128_t)v341;
            a0[41] = v282;
            a0[25] = v281;
            a0[9] = v280;
            *((int *)&a0[81]) = (int)(&v44)[9];
            *((unsigned int *)&a0[84]) = v49;
            *((char *)&a0[8]) = v165;
LABEL_6797fc:
            *((char *)&a0[80]) = v162;
            goto LABEL_679859;
        }
        v151 = v151 & 0xffffffffffffff00 | 1;
        if ((v20 & 1))
            goto LABEL_67844f;
        v20.accepted(a1, 19);
        v165 = v20;
        v162 = v47;
        if (v162 != 37)
            goto LABEL_6797a5;
        if ((v165 & 1))
        {
            core::ptr::drop_in_place<core::option::Option<(just::token::Token,just::attribute_set::AttributeSet)>>(&v349);
            if (a1->field_20 != a1->field_58)
            {
                v349 = a1->field_20 - a1->field_58;
                v78 = &v349;
                v80 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                v20 = &g_830760;
                v30 = 2;
                v36 = 0;
                v32 = &v78;
                v33 = 1;
                v141.map_or_else(0, v247, &v20);
                v33 = v142;
                memcpy(&(char)v30, &v141, 16);
                v20 = 9223372036854775848;
                v78.error(a1, &v20);
                v290 = *((int128_t *)&v80);
                v291 = (int128_t)(&v85)[8];
                v292 = (int128_t)(&v88)[8];
                v293 = (int128_t)(&v91)[8];
                v20 = v290;
                v32 = v291;
                v36 = v292;
                v40 = v293;
                v294 = (int128_t)(&v94)[8];
                v44 = v294;
                a0[72] = v294;
                a0[56] = v293;
                a0[40] = v292;
                a0[24] = v291;
                a0[8] = v290;
                *((unsigned long long *)a0) = 0x8000000000000000;
                core::ptr::drop_in_place<alloc::vec::Vec<just::item::Item>>(&v69);
                return core::ptr::drop_in_place<just::parser::Parser>(a1);
            }
            v6 = 0;
            memcpy(&(char)v3, &v69, 16);
            if (a1->field_50)
            {
                v20.spec_to_string(a1->field_50);
                memcpy(&v78, &(char)v30, 16);
                if (*((long long *)&v20) != 0x8000000000000000)
                {
                    memcpy(&v350, &v78, 16);
                    v349 = *((long long *)&v20);
LABEL_679b26:
                    v84 = *((long long *)((char *)&a1->field_68 + 8));
                    *((int128_t *)&v78) = *((int128_t *)&(&a1->padding_60)[1]);
                    v20.to_vec(a1->field_28, a1->field_30);
                    *((long long *)&a0[88]) = (long long)(&v27)[8];
                    *((int128_t *)&a0[72]) = *((int128_t *)&v20);
                    *((int128_t *)&v20) = (int128_t)v2;
                    v32 = v6;
                    memcpy(&v34, &v349, 16);
                    v37 = v109;
                    *((unsigned long *)&a0[112]) = v84;
                    *((int128_t *)&a0[96]) = (int128_t)v78;
                    v287 = (int128_t)v20;
                    v288 = v32;
                    v289 = (long long)(&v32)[8];
                    *((long long *)&a0[32]) = (long long)(&v33)[8];
                    *((unsigned long long *)&a0[40]) = v37;
                    *((void* *)&a0[16]) = v288;
                    *((unsigned long *)&a0[24]) = v289;
                    *(a0) = v287;
                    *((unsigned long long *)&a0[48]) = 0;
                    *((unsigned long long *)&a0[56]) = 1;
                    *((unsigned long long *)&a0[64]) = 0;
                    core::ptr::drop_in_place<alloc::collections::btree::set::BTreeSet<just::unstable_feature::UnstableFeature>>(&a1->padding_38);
                    return core::ptr::drop_in_place<alloc::vec::Vec<&just::binding::Binding<just::expression::Expression>>>(a1->field_0, a1->field_8);
                }
            }
            v349 = 0;
            v350 = 1;
            v109 = 0;
            goto LABEL_679b26;
        }
        if (a1.next_is(24))
        {
            v166 = v143.lexeme();
            v166.from_lexeme(v247);
            switch (v166.from_lexeme(v247) & 255)
            {
            case 0:
                if (a1.next_are(&g_4715d1, 3))
                {
                    v112 = 37;
                    if (v112 == 37)
                    {
                        v72 = 0;
                        v74 = 0;
                        v72 = v73;
                        v74 = v75;
                    }
                    else
                    {
                        v74 = v116;
                        v163 = v163 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)(&v113)[8];
                        memcpy(&v72, &v113, 16);
                        v72 = v73;
                        v74 = v75;
                    }
                    v78.parse_alias(a1, &v72);
                    v167 = *((long long *)&v78);
                    v168 = *((int128_t *)&v81);
                    v169 = (int128_t)(&v85)[8];
                    v170 = (int128_t)(&v88)[8];
                    v171 = (int128_t)(&v91)[8];
                    v2 = v168;
                    v6 = v169;
                    v10 = v170;
                    v13 = v171;
                    v172 = (v163 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v168) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)(&v94)[8];
                    memcpy(&v17, &(char)v94, 16);
                    if (v167 != 0x8000000000000000)
                    {
                        *((int128_t *)&v55) = *((int128_t *)&v101);
                        v53 = v100;
                        v173 = (int128_t)v17;
                        v50 = v173;
                        v174 = (int128_t)v2;
                        v163 = ((v172 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v100) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v173) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v174;
                        v175 = (int128_t)v6;
                        v176 = (int128_t)v10;
                        *((int128_t *)&v44) = (int128_t)v13;
                        v40 = v176;
                        v36 = v175;
                        v32 = v174;
                        v22 = v167;
                        v20 = 0x8000000000000000;
                        v69.push(&v20, &g_8307b0);
                        goto LABEL_6785da;
                    }
                    else
                    {
                        *((int128_t *)&a0[72]) = (int128_t)v17;
                        v328 = (int128_t)v2;
                        v329 = (int128_t)v6;
                        v330 = (int128_t)v10;
                        *((int128_t *)&a0[56]) = (int128_t)v13;
                        a0[40] = v330;
                        a0[24] = v329;
                        a0[8] = v328;
                        *((unsigned long long *)a0) = 0x8000000000000000;
LABEL_679866:
                        if (v112 != 37)
                        {
                            core::ptr::drop_in_place<just::attribute_set::AttributeSet>(&v114);
                            goto LABEL_0x67987d;
                        }
                    }
                }
                break;
            case 10:
                if (a1.next_are(&g_4715d1, 3))
                {
                    v20.presume_keyword(a1, 10);
                    v158 = v47;
                    if (v158 != 37)
                        goto LABEL_679802;
                    v112 = 37;
                    if (v112 == 37)
                    {
                        v72 = 0;
                        v74 = 0;
                        v72 = v73;
                        v74 = v75;
                    }
                    else
                    {
                        v74 = v116;
                        v163 = v163 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)(&v113)[8];
                        memcpy(&v72, &v113, 16);
                        v72 = v73;
                        v74 = v75;
                    }
                    v78.parse_assignment(a1, 1, &v72);
                    v190 = *((long long *)&v78);
                    v191 = *((int128_t *)&v81);
                    v192 = (int128_t)(&v85)[8];
                    v193 = (int128_t)(&v88)[8];
                    v194 = (int128_t)(&v91)[8];
                    v1 = v191;
                    v5 = v192;
                    v9 = v193;
                    v14 = v194;
                    v195 = (int128_t)(&v94)[8];
                    memcpy(&v17, &(char)v94, 16);
                    if (v190 == 18)
                        goto LABEL_679c21;
                    v66 = (long long)v107;
                    v63 = v106;
                    memcpy(&v343, &v105, 16);
                    v196 = v104;
                    v62 = v196;
                    v197 = *((int128_t *)&v101);
                    v58 = v103;
                    v57 = v102;
                    v55 = v197;
                    v53 = v100;
                    v198 = (int128_t)v17;
                    v50 = v198;
                    v199 = (int128_t)v1;
                    v163 = (((((((v163 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v191) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v195) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v106) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v105) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v196) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v100) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v198) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v199;
                    v200 = (int128_t)v5;
                    v201 = (int128_t)v9;
                    *((int128_t *)&v44) = (int128_t)v14;
                    v40 = v201;
                    v36 = v200;
                    v32 = v199;
                    v26 = v190;
                    v20 = 9223372036854775809;
                    v69.push(&v20, &g_8307c8);
                    goto LABEL_6785da;
                }
                break;
            case 15:
                if (a1.next_are(&g_4715d4, 2) || a1.next_are(&g_4715d6, 3) || a1.next_are(&g_4715d9, 2))
                {
                    v20.presume_keyword(a1, 15);
                    v158 = v47;
                    if (v158 != 37)
                        goto LABEL_679802;
                    v20.accepted(a1, 31);
                    v177 = v20;
                    v158 = v47;
                    if (v158 == 37)
                    {
                        v20.parse_string_literal_token(a1);
                        if (*((int *)&v20) != 1)
                        {
                            v101 = v56;
                            v178 = v163 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v54);
                            memcpy(&(char)v100, &v54, 16);
                            v179 = *((int128_t *)&v52);
                            v98 = v179;
                            v180 = *((int128_t *)&v47);
                            memcpy(&(char)v93, &v47, 16);
                            v181 = (int128_t)v27;
                            v182 = (int128_t)(&v32)[8];
                            v183 = (int128_t)(&v36)[8];
                            v184 = *((int128_t *)&v42);
                            v90 = v184;
                            v87 = v183;
                            v84 = v182;
                            v78 = v181;
                            v342 = v93;
                            v57 = v184;
                            v55 = v183;
                            v53 = v182;
                            v50 = v181;
                            v185 = (int128_t)(&v94)[8];
                            v163 = (((v178 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v179) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v180) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v181) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v185;
                            *((int128_t *)&v37) = *((int128_t *)&v101);
                            v33 = v100;
                            v23 = v185;
                            v41 = 0x8000000000000000;
                            v61 = v177;
                            v20 = 9223372036854775811;
                            v69.push(&v20, &g_8307e0);
                            goto LABEL_6785da;
                        }
                        else
                        {
                            v299 = (int128_t)(&v44)[8];
                            v94 = v299;
                            v300 = (int128_t)v27;
                            v301 = (int128_t)(&v32)[8];
                            v302 = (int128_t)(&v36)[8];
                            v303 = (int128_t)(&v40)[8];
LABEL_679ad0:
                            v90 = v303;
                            v87 = v302;
                            v84 = v301;
                            v78 = v300;
                            goto LABEL_679af0;
                        }
                    }
                    else
                    {
                        *((long long *)&a0[72]) = (long long)(&v41)[8];
                        v314 = (int128_t)v21;
                        v315 = *((int128_t *)&(&v24)[9]);
                        v316 = *((int128_t *)&(&v34)[9]);
                        *((int128_t *)&a0[57]) = (int128_t)v341;
                        a0[41] = v316;
                        a0[25] = v315;
                        a0[9] = v314;
                        *((int *)&a0[81]) = (int)(&v44)[9];
                        *((unsigned int *)&a0[84]) = v49;
                        *((char *)&a0[8]) = v177;
LABEL_679855:
                        *((char *)&a0[80]) = v158;
                        goto LABEL_679859;
                    }
                }
                break;
            case 16:
                if (a1.next_are(&g_4715db, 3) || a1.next_are(&g_4715de, 3) || a1.next_are(&g_4715e1, 3) || a1.next_are(&g_467d98, 4) || a1.next_are(&g_4715d6, 3) || a1.next_are(&g_4715d9, 2))
                {
                    v126 = just::parser::Parser::parse_ast::pop_doc_comment(&v69, v150);
                    v20.presume_keyword(a1, 16);
                    v158 = v47;
                    if (v158 == 37)
                    {
                        v20.accepted(a1, 31);
                        v158 = v47;
                        if (v158 != 37)
                        {
                            *((long long *)&a0[72]) = (long long)(&v41)[8];
                            v308 = (int128_t)v21;
                            v309 = *((int128_t *)&(&v24)[9]);
                            v310 = *((int128_t *)&(&v34)[9]);
                            *((int128_t *)&a0[57]) = (int128_t)v341;
                            a0[41] = v310;
                            a0[25] = v309;
                            a0[9] = v308;
                            *((int *)&a0[81]) = (int)(&v44)[9];
                            *((unsigned int *)&a0[84]) = v49;
                            *((char *)&a0[8]) = v0;
                            goto LABEL_679855;
                        }
                        v0 = v20;
                        v20.parse_name(a1);
                        v158 = v47;
                        v202 = *((int128_t *)&v20);
                        v203 = *((int128_t *)&(&v34)[8]);
                        v204 = *((int128_t *)&(&v38)[8]);
                        memcpy(&v78, &v20, 16);
                        *((int128_t *)&v85) = *((int128_t *)&(&v24)[8]);
                        v88 = v203;
                        v91 = v204;
                        v93 = (long long)(&v41)[8];
                        if (v158 != 37)
                            goto LABEL_67964a;
                        v205 = (v163 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v202) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v78);
                        memcpy(&v131, &v78, 16);
                        memcpy(&v132, &v85, 16);
                        memcpy(&v133, &v88, 16);
                        memcpy(&v134, &v91, 16);
                        v135 = v93;
                        if (a1.next_is(33) || a1.next_are(&g_4715d4, 2))
                        {
                            v20.parse_string_literal(a1);
                            v158 = v47;
                            if (v158 == 37)
                            {
                                v205 = v205 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v20);
                                memcpy(&v72, &v20, 16);
                                memcpy(&v74, &v24, 16);
                                memcpy(&v76, &v34, 16);
                                v72 = v73;
                                v74 = v75;
                                v76 = v77;
                            }
                            else
                            {
                                v93 = (long long)(&v41)[8];
                                v319 = *((int128_t *)&v20);
                                v320 = (int128_t)(&v27)[8];
                                memcpy(&(char)v91, &(char)v40, 16);
                                *((int128_t *)&v88) = (int128_t)(&v33)[8];
                                v85 = v320;
                                v78 = v319;
                                *((unsigned int *)&a0[84]) = v49;
                                v273 = (int)(&v44)[9];
LABEL_67965c:
                                *((unsigned int *)&a0[81]) = v273;
                                *((long long *)&a0[72]) = *((long long *)&v348);
                                v322 = (int128_t)v78;
                                v323 = (int128_t)v85;
                                v324 = (int128_t)v88;
                                *((int128_t *)&a0[56]) = (int128_t)v91;
                                a0[40] = v324;
                                a0[24] = v323;
                                a0[8] = v322;
                                goto LABEL_679855;
                            }
                        }
                        else
                        {
                            v72 = 0x8000000000000000;
                            v72 = v73;
                        }
                        v112 = 37;
                        if (v112 == 37)
                        {
                            v117 = 0;
                            v119 = 0;
                            v117 = v118;
                        }
                        else
                        {
                            v119 = v116;
                            v205 = v205 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)(&v113)[8];
                            memcpy(&v117, &v113, 16);
                            v117 = v118;
                        }
                        v20.ensure_valid_attributes(&v117, "Module", 6, &v131, &g_4715e4, 2);
                        v206 = v47;
                        if (v206 != 37)
                        {
                            *((long long *)&a0[72]) = (long long)(&v41)[8];
                            v311 = *((int128_t *)&v20);
                            v312 = (int128_t)(&v27)[8];
                            v313 = (int128_t)(&v33)[8];
                            *((int128_t *)&a0[56]) = (int128_t)(&v37)[8];
                            a0[40] = v313;
                            a0[24] = v312;
                            a0[8] = v311;
                            *((int *)&a0[81]) = (int)(&v44)[9];
                            *((unsigned int *)&a0[84]) = v49;
                            *((char *)&a0[80]) = v206;
                            *((unsigned long long *)a0) = 0x8000000000000000;
                            core::ptr::drop_in_place<just::attribute_set::AttributeSet>(&v117);
                            core::ptr::drop_in_place<core::option::Option<just::string_literal::StringLiteral>>(&v72);
                            goto LABEL_679866;
                        }
                        v207 = v117.get(2);
                        if (v207)
                        {
                            if (v207[0] + 0x8000000000000000 != 3)
                                core::panicking::panic("internal error: entered unreachable code...//rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs", 40, &g_830828); /* do not return */
                            if (v207[1] == 0x8000000000000000)
                            {
                                v120 = 0x8000000000000000;
                                v120 = v121;
                            }
                            else
                            {
                                v20.clone(&v207[1]);
LABEL_67934c:
                                v122 = *((long long *)&(&v24)[8]);
                                v205 = v205 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v20);
                                memcpy(&v120, &v20, 16);
                                v120 = v121;
                            }
                        }
                        else if (v126)
                        {
                            v20.to_vec(v126, v247);
                            goto LABEL_67934c;
                        }
                        else
                        {
                            v120 = 0x8000000000000000;
                            v120 = v121;
                        }
                        v123 = 0;
                        v124 = 8;
                        v125 = 0;
                        (char)v1.into_iter(&v117);
                        while (true)
                        {
                            v20.next(&(char)v1);
                            v208 = *((long long *)&v20);
                            if (v208 == 9223372036854775829)
                                break;
                            v209 = *((int128_t *)&v24);
                            v205 = v205 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v209;
                            v210 = *((int128_t *)&v34);
                            v211 = *((int128_t *)&v38);
                            *((int128_t *)&v92) = *((int128_t *)&v42);
                            v89 = v211;
                            v86 = v210;
                            v80 = v209;
                            v78 = v208;
                            if (v208 + 0x8000000000000000 != 6)
                                core::ptr::drop_in_place<just::attribute::Attribute>(&v78);
                            else
                                v123.push(&(unsigned long long)v80, &g_830810);
                        }
                        core::ptr::drop_in_place<alloc::collections::btree::set::IntoIter<just::attribute::Attribute>>(&(char)v1);
                        v33 = 0;
                        v212 = *((int128_t *)&v123);
                        v27 = v212;
                        v47 = v122;
                        memcpy(&v42, &v120, 16);
                        v55 = v76;
                        v53 = v74;
                        v50 = v72;
                        v36 = 0x8000000000000000;
                        v344 = v135;
                        v213 = v131;
                        v163 = (((v205 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v212) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v120) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v213;
                        v343 = v134;
                        v62 = v133;
                        v58 = v132;
                        v57 = v213;
                        v65 = v0;
                        v20 = 9223372036854775812;
                        v69.push(&v20, &g_8307f8);
                        goto LABEL_6785da;
                    }
                    else
                    {
LABEL_679802:
                        *((long long *)&a0[72]) = (long long)(&v41)[8];
                        v284 = *((int128_t *)&v20);
                        v285 = (int128_t)(&v27)[8];
                        v286 = (int128_t)(&v33)[8];
                        *((int128_t *)&a0[56]) = (int128_t)(&v37)[8];
                        a0[40] = v286;
                        a0[24] = v285;
                        a0[8] = v284;
                        *((int *)&a0[81]) = (int)(&v44)[9];
                        *((unsigned int *)&a0[84]) = v49;
                        goto LABEL_679855;
                    }
                }
                break;
            case 21:
                if (a1.next_are(&g_4715d1, 3) || a1.next_are(&g_467f04, 4) || a1.next_are(&g_467d9c, 4) || a1.next_are(&g_4715de, 3) || a1.next_are(&g_4715e1, 3))
                {
                    v78.parse_set(a1);
                    v214 = v78;
                    if (v214 != 20)
                    {
                        v19 = (long long)v99;
                        v215 = v163 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)(&v94)[1];
                        memcpy(&v17, &(char)v93, 16);
                        v216 = (int128_t)v79;
                        v217 = (int128_t)(&v85)[1];
                        memcpy(&(char)v14, &v91, 16);
                        *((int128_t *)&v10) = (int128_t)v346;
                        v6 = v217;
                        v2 = v216;
                        v218 = *((int128_t *)&v101);
                        v59 = v103;
                        v57 = v102;
                        v55 = v218;
                        v53 = v100;
                        v52 = v19;
                        v219 = (int128_t)v17;
                        v48 = v219;
                        v220 = (int128_t)v2;
                        v163 = (((v215 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v216) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v100) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v219) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v220;
                        v221 = (int128_t)v6;
                        v222 = (int128_t)v10;
                        *((int128_t *)&v43) = (int128_t)v14;
                        v39 = v222;
                        v35 = v221;
                        v31 = v220;
                        v24 = v214;
                        v20 = 9223372036854775814;
                        v69.push(&v20, &g_830840);
                        goto LABEL_6785da;
                    }
                    else
                    {
                        v299 = (int128_t)(&v94)[8];
                        v18 = v299;
                        v300 = *((int128_t *)&v81);
                        v301 = (int128_t)(&v85)[8];
                        v302 = (int128_t)(&v88)[8];
                        v303 = (int128_t)(&v91)[8];
                        v16 = v303;
                        v12 = v302;
                        v8 = v301;
                        v4 = v300;
LABEL_679af0:
                        a0[72] = v299;
                        a0[56] = v303;
                        a0[40] = v302;
                        a0[24] = v301;
                        a0[8] = v300;
                        goto LABEL_679859;
                    }
                }
                break;
            case 25:
                if (a1.next_are(&g_4715de, 3) || a1.next_are(&g_4715e1, 3))
                {
                    v20.presume_keyword(a1, 25);
                    v158 = v47;
                    if (v158 != 37)
                        goto LABEL_679802;
                    v20.parse_name(a1);
                    v158 = v47;
                    v186 = v163 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v20);
                    v187 = *((int128_t *)&(&v34)[8]);
                    v188 = *((int128_t *)&(&v38)[8]);
                    memcpy(&v78, &v20, 16);
                    *((int128_t *)&v85) = *((int128_t *)&(&v24)[8]);
                    v88 = v187;
                    v91 = v188;
                    v93 = (long long)(&v41)[8];
                    if (v158 != 37)
                        goto LABEL_67964a;
                    v189 = *((int128_t *)&v78);
                    memcpy(&v136, &v78, 16);
                    memcpy(&v137, &v85, 16);
                    memcpy(&v138, &v88, 16);
                    memcpy(&v139, &v91, 16);
                    v140 = v93;
                    v20.expect_eol(a1);
                    v158 = v47;
                    if (v158 != 37)
                        goto LABEL_679802;
                    v47 = v140;
                    v163 = (v186 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v189) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v136;
                    v41 = v139;
                    v37 = v138;
                    v33 = v137;
                    v25 = v136;
                    v20 = 9223372036854775815;
                    v69.push(&v20, &g_830858);
                    goto LABEL_6785da;
                }
                break;
            default:
                if (a1.next_are(&g_4715ec, 2))
                {
                    v112 = 37;
                    if (v112 == 37)
                    {
                        v72 = 0;
                        v74 = 0;
                        v72 = v73;
                        v74 = v75;
                    }
                    else
                    {
                        v74 = v116;
                        v163 = v163 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)(&v113)[8];
                        memcpy(&v72, &v113, 16);
                        v72 = v73;
                        v74 = v75;
                    }
                    v78.parse_assignment(a1, 0, &v72);
                    v223 = *((long long *)&v78);
                    v224 = *((int128_t *)&v81);
                    v225 = (int128_t)(&v85)[8];
                    v226 = (int128_t)(&v88)[8];
                    v227 = (int128_t)(&v91)[8];
                    v1 = v224;
                    v5 = v225;
                    v9 = v226;
                    v14 = v227;
                    v228 = (int128_t)(&v94)[8];
                    memcpy(&v17, &(char)v94, 16);
                    if (v223 != 18)
                    {
                        v66 = (long long)v107;
                        v64 = v106;
                        memcpy(&v343, &v105, 16);
                        v229 = v104;
                        v62 = v229;
                        v230 = *((int128_t *)&v101);
                        v60 = v103;
                        v57 = v102;
                        v55 = v230;
                        v53 = v100;
                        v231 = (int128_t)v17;
                        v50 = v231;
                        v232 = (int128_t)v1;
                        v163 = (((((((v163 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v224) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v228) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v106) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v105) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v229) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v100) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v231) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v232;
                        v233 = (int128_t)v5;
                        v234 = (int128_t)v9;
                        *((int128_t *)&v44) = (int128_t)v14;
                        v40 = v234;
                        v36 = v233;
                        v32 = v232;
                        v28 = v223;
                        v20 = 9223372036854775809;
                        v69.push(&v20, &g_830888);
                        v112 = v112;
                    }
                    else
                    {
LABEL_679c21:
                        *((int128_t *)&a0[72]) = (int128_t)v17;
                        v305 = (int128_t)v1;
                        v306 = (int128_t)v5;
                        v307 = (int128_t)v9;
                        *((int128_t *)&a0[56]) = (int128_t)v14;
                        a0[40] = v307;
                        a0[24] = v306;
                        a0[8] = v305;
LABEL_679859:
                        goto LABEL_679863;
                    }
                }
                else
                {
                    v235 = just::parser::Parser::parse_ast::pop_doc_comment(&v69, v150);
                    v112 = 37;
                    if (v112 == 37)
                    {
                        v72 = 0;
                        v74 = 0;
                        v72 = v73;
                        v74 = v75;
                    }
                    else
                    {
                        v74 = v116;
                        v163 = v163 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)(&v113)[8];
                        memcpy(&v72, &v113, 16);
                        v72 = v73;
                        v74 = v75;
                    }
                    v20.parse_recipe(a1, &v72, v235, v247, 0);
                    v236 = *((long long *)&v20);
                    v237 = (int128_t)v27;
                    v238 = (int128_t)(&v32)[8];
                    v239 = (int128_t)(&v36)[8];
                    v240 = *((int128_t *)&v42);
                    v3 = v237;
                    v7 = v238;
                    v11 = v239;
                    v15 = v240;
                    v241 = *((int128_t *)&v47);
                    memcpy(&v17, &v47, 16);
                    if (v236 != 0x8000000000000000)
                    {
                        memcpy(&v100, &v52, 168);
                        v242 = (int128_t)v17;
                        v97 = v242;
                        v243 = (int128_t)v3;
                        v163 = (((v163 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v237) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v241) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v242) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v243;
                        v244 = (int128_t)v7;
                        v245 = (int128_t)v11;
                        *((int128_t *)&v92) = (int128_t)v15;
                        v89 = v245;
                        v86 = v244;
                        v82 = v243;
                        v78 = v236;
                        v69.push(&v78, &g_830870);
                        v112 = v112;
                    }
                    else
                    {
LABEL_67993d:
                        *((int128_t *)&a0[72]) = (int128_t)v17;
                        v296 = (int128_t)v3;
                        v297 = (int128_t)v7;
                        v298 = (int128_t)v11;
                        *((int128_t *)&a0[56]) = (int128_t)v15;
                        a0[40] = v298;
                        a0[24] = v297;
                        a0[8] = v296;
LABEL_679863:
                        *((long long *)a0) = 0x8000000000000000;
                        goto LABEL_679866;
                    }
                }
LABEL_6785da:
                v151 = v150;
                if (v112 != 37)
                {
LABEL_67970e:
                    v22 = v116;
                    v20 = 9223372036854775844;
                    v78.error(&v349, &v20);
                    *((int128_t *)&a0[72]) = *((int128_t *)&v348);
                    v277 = (int128_t)v78;
                    v278 = (int128_t)(&v83)[8];
                    v279 = (int128_t)(&v86)[8];
                    *((int128_t *)&a0[56]) = (int128_t)(&v89)[8];
                    a0[40] = v279;
                    a0[24] = v278;
                    a0[8] = v277;
                    *((unsigned long long *)a0) = 0x8000000000000000;
                    core::ptr::drop_in_place<just::attribute_set::AttributeSet>(&v114);
                    core::ptr::drop_in_place<alloc::vec::Vec<just::item::Item>>(&v69);
                    return core::ptr::drop_in_place<just::parser::Parser>(a1);
                }
LABEL_67845d:
                core::ptr::drop_in_place<core::option::Option<(just::token::Token,just::attribute_set::AttributeSet)>>(&v349);
                v150 = v151;
                break;
            }
        }
        else
        {
            v20.accepted(a1, 2);
            v165 = v20;
            v162 = v47;
            if (v162 != 37)
                goto LABEL_6797a5;
            if (!(v165 & 1))
            {
                v20.unexpected_token(a1);
                v299 = (int128_t)(&v44)[8];
                v94 = v299;
                v300 = (int128_t)v27;
                v301 = (int128_t)(&v32)[8];
                v302 = (int128_t)(&v36)[8];
                v303 = (int128_t)(&v40)[8];
                goto LABEL_679ad0;
            }
            v246 = just::parser::Parser::parse_ast::pop_doc_comment(&v69, v150);
            v112 = 37;
            if (v112 == 37)
            {
                v72 = 0;
                v74 = 0;
                v72 = v73;
                v74 = v75;
            }
            else
            {
                v74 = v116;
                v163 = v163 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)(&v113)[8];
                memcpy(&v72, &v113, 16);
                v72 = v73;
                v74 = v75;
            }
            v20.parse_recipe(a1, &v72, v246, v247, 1);
            v248 = *((long long *)&v20);
            v249 = (int128_t)v27;
            v250 = (int128_t)(&v32)[8];
            v251 = (int128_t)(&v36)[8];
            v252 = *((int128_t *)&v42);
            v3 = v249;
            v7 = v250;
            v11 = v251;
            v15 = v252;
            v253 = *((int128_t *)&v47);
            memcpy(&v17, &v47, 16);
            if (v248 == 0x8000000000000000)
                goto LABEL_67993d;
            memcpy(&v100, &v52, 168);
            v254 = (int128_t)v17;
            v97 = v254;
            v255 = (int128_t)v3;
            v163 = (((v163 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v249) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v253) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v254) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v255;
            v256 = (int128_t)v7;
            v257 = (int128_t)v11;
            *((int128_t *)&v92) = (int128_t)v15;
            v89 = v257;
            v86 = v256;
            v83 = v255;
            v78 = v248;
            v69.push(&v78, &g_830798);
            goto LABEL_6785da;
        }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<just::item::Item>>(&v69);
    return core::ptr::drop_in_place<just::parser::Parser>(a1);
}
