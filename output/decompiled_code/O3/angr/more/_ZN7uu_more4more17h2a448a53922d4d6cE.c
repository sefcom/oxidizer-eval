long long uu_more::more::h2a448a53922d4d6c(unsigned long a0, unsigned long a1, unsigned long a2, unsigned int a3, unsigned long a4, unsigned long a5)
{
    unsigned int v0;  // [sp-0x3c8]
    unsigned long v1;  // [sp-0x2a0]
    unsigned long v2;  // [bp-0x298], Other Possible Types: char
    unsigned long v3;  // [sp-0x290]
    unsigned long v4;  // [sp-0x288]
    unsigned long v5;  // [bp-0x280], Other Possible Types: unsigned int
    unsigned long v6;  // [sp-0x278]
    unsigned long v7;  // [sp-0x270]
    unsigned long v8;  // [sp-0x268]
    unsigned long v9;  // [sp-0x260]
    unsigned long v10;  // [sp-0x258]
    unsigned long v11;  // [sp-0x248]
    unsigned int v12;  // [sp-0x23c]
    int v13;  // [bp-0x238], Other Possible Types: unsigned long
    int v14;  // [sp-0x228], Other Possible Types: unsigned long
    unsigned long v15;  // [sp-0x220]
    unsigned long v16;  // [sp-0x218]
    unsigned long v17;  // [sp-0x210]
    unsigned long v18;  // [sp-0x208]
    unsigned long v19;  // [sp-0x200]
    unsigned long v20;  // [sp-0x1f8]
    unsigned long v21;  // [sp-0x1f0]
    unsigned short v22;  // [sp-0x1e8]
    unsigned short v23;  // [sp-0x1e6]
    unsigned long v24;  // [sp-0x1d8]
    unsigned long v25;  // [bp-0x1d0], Other Possible Types: char
    unsigned long v26;  // [sp-0x1c8]
    char v27;  // [bp-0x1c0], Other Possible Types: unsigned long
    char v28;  // [bp-0x1be]
    char v29;  // [bp-0x1bc]
    unsigned long v30;  // [sp-0x1b8]
    unsigned long v31;  // [sp-0x1b0]
    unsigned long v32;  // [sp-0x1a8]
    unsigned long v33;  // [sp-0x1a0]
    unsigned long v34;  // [sp-0x198]
    unsigned long v35;  // [sp-0x190]
    char v36;  // [sp-0x188]
    unsigned short v37;  // [sp-0x180]
    char v38;  // [bp-0x170]
    char v39;  // [bp-0x160]
    unsigned long v40;  // [sp-0x158]
    unsigned int v41;  // [sp-0x14c]
    int v42;  // [bp-0x148], Other Possible Types: unsigned long
    int v43;  // [bp-0x138], Other Possible Types: unsigned long
    int v44;  // [sp-0x118], Other Possible Types: unsigned long
    unsigned long v45;  // [sp-0x110]
    int v46;  // [bp-0x108], Other Possible Types: unsigned long
    int v47;  // [sp-0xf8]
    int v48;  // [sp-0xe8]
    int v49;  // [sp-0xd8]
    int v50;  // [sp-0xc8]
    unsigned long v51;  // [sp-0xb8]
    int v52;  // [bp-0xa8], Other Possible Types: unsigned long
    int v53;  // [bp-0x98], Other Possible Types: unsigned long
    unsigned long v54;  // [sp-0x80]
    int v55;  // [bp-0x78], Other Possible Types: unsigned long
    unsigned long v57;  // [sp-0x60]
    int v58;  // [sp-0x58]
    int v59;  // [sp-0x48]
    unsigned long v60;  // [bp+0x8]
    char v61;  // [bp+0x10]
    char v62;  // [bp+0x18]
    unsigned long v65;  // rax
    unsigned long v66;  // r15
    unsigned long v67;  // r13
    unsigned long v68;  // rax
    unsigned long v69;  // r13
    unsigned long v73;  // r14
    unsigned long v74;  // r15
    unsigned long v75;  // r12
    unsigned long v76;  // r12
    unsigned long v77;  // cc_ndep
    int v78;  // ymm0
    unsigned long v79;  // rax
    unsigned long v80;  // rbx
    unsigned long v81;  // rax
    unsigned long v83;  // r13
    unsigned long v84;  // r13
    unsigned long v89;  // r13
    unsigned long v90;  // r15
    unsigned long v91;  // r15
    unsigned long v92;  // r13
    unsigned long v93;  // r14
    unsigned long v94;  // rdx
    unsigned long v95;  // cc_ndep
    unsigned long v96;  // rax
    unsigned long v97;  // rbp
    unsigned long v98;  // rsi
    unsigned long v99;  // r13
    unsigned long v100;  // r12
    unsigned int v101;  // r12d
    unsigned int v102;  // edx
    unsigned int v103;  // ecx
    unsigned long v104;  // r15
    unsigned long v105;  // cc_ndep
    unsigned long v106;  // rax
    unsigned long v107;  // r15
    unsigned long v108;  // cc_op
    unsigned long v109;  // cc_dep1
    unsigned long v110;  // cc_dep2
    unsigned long v111;  // rbx
    unsigned long v112;  // rbx
    unsigned long v113;  // rax
    unsigned long v114;  // cc_ndep
    unsigned int v115;  // eax
    unsigned long v117;  // rax
    unsigned long v118;  // rax
    unsigned long v119;  // rdx
    unsigned long v120;  // rcx
    unsigned long v121;  // rcx
    unsigned long v122;  // rax
    unsigned int v124;  // edi
    unsigned long v127;  // rax
    unsigned long v128;  // rax
    unsigned long v129;  // rax
    unsigned long v130;  // cc_ndep
    unsigned int v131;  // eax
    unsigned int v132;  // edx
    unsigned int v133;  // ecx
    unsigned long v134;  // rax
    unsigned long v135;  // rdx
    unsigned long v136;  // rsi
    unsigned long v137;  // rax
    unsigned long v138;  // rcx
    unsigned int v139;  // ecx
    unsigned int v140;  // eax
    unsigned long v141;  // rax
    unsigned long v142;  // r15
    unsigned int v143;  // eax
    unsigned long v144;  // rcx
    unsigned long v145;  // cc_ndep
    char v146;  // al
    unsigned long v147;  // rax
    unsigned long v148;  // rdx
    unsigned long v149;  // rdx
    unsigned long v150;  // rax
    unsigned long v151;  // rsi
    unsigned long v152;  // rax
    unsigned long v153;  // rsi
    unsigned long v154;  // rcx
    unsigned long v155;  // rbx
    unsigned long v156;  // rbx
    unsigned long v157;  // rax
    unsigned long v158;  // rbx
    unsigned long v159;  // rbx
    unsigned long v160;  // rax
    unsigned long v161;  // rsi
    unsigned long v162;  // cc_op
    unsigned long v163;  // cc_dep1
    unsigned long v164;  // rdx
    unsigned long v165;  // rdi
    unsigned int v166;  // edx
    unsigned int v167;  // edi
    unsigned int v168;  // edx
    unsigned int v169;  // esi
    unsigned int v170;  // edx
    unsigned long v171;  // cc_dep1
    unsigned long v172;  // rdx
    unsigned long v173;  // r8
    unsigned long v174;  // rdi
    unsigned long v175;  // rdx
    unsigned int v177;  // r10d
    unsigned long v180;  // rdx
    unsigned long v181;  // rdx
    unsigned long v182;  // rcx
    unsigned int v183;  // eax
    unsigned long v184;  // rcx
    unsigned int v185;  // eax
    unsigned int v186;  // ecx
    unsigned int v187;  // ecx
    unsigned long v188;  // cc_ndep
    unsigned long v189;  // rbx
    unsigned long v190;  // rbx
    unsigned long v191;  // cc_ndep
    unsigned long v192;  // rsi
    unsigned long v193;  // rbx
    unsigned long v194;  // rax
    unsigned long v195;  // rcx
    unsigned long v196;  // rbx
    unsigned int v197;  // eax
    unsigned int v198;  // ecx
    char v199;  // cl
    unsigned long v200;  // rax
    unsigned long v201;  // rsi
    unsigned long v202;  // rax
    unsigned long v203;  // rcx
    unsigned int v204;  // eax
    unsigned int v205;  // ecx
    unsigned long v206;  // rax
    unsigned long v207;  // rax
    unsigned long v208;  // rdx
    unsigned long v209;  // r13
    unsigned long v210;  // rax
    unsigned long v211;  // rcx
    unsigned long v212;  // rdx
    unsigned long v213;  // rcx
    unsigned long v214;  // rax
    unsigned long v215;  // rbp
    unsigned long v216;  // rbp
    unsigned long v217;  // rax
    unsigned long v218;  // r13
    unsigned long v219;  // rbx
    unsigned long v220;  // rax
    unsigned long v221;  // rcx
    unsigned long v222;  // rdx
    unsigned long v223;  // rbx
    unsigned long v224;  // r13
    unsigned long v225;  // rax
    unsigned long v226;  // rcx
    unsigned long v227;  // cc_ndep
    unsigned long v228;  // rax
    unsigned long v229;  // rbx
    unsigned long v230;  // rax
    unsigned long v231;  // rcx
    int v232;  // xmm0
    unsigned long v233;  // r12
    unsigned long v234;  // r13
    unsigned long v235;  // r15
    unsigned long v236;  // r15
    unsigned int v237;  // rdx, Other Possible Types: unsigned long
    int v238;  // xmm0
    int v239;  // ymm0
    unsigned long v242;  // rdx
    unsigned long v243;  // rcx
    unsigned long v244;  // r14
    char v245;  // bl
    unsigned long v246;  // r15
    unsigned long v247;  // rcx
    unsigned long v248;  // rax
    unsigned long v249;  // rdx
    unsigned long v250;  // rdx
    unsigned long v251;  // r8
    unsigned long v252;  // r8
    unsigned long v253;  // cc_ndep
    int v254;  // ymm2
    int v255;  // ymm3
    int v256;  // ymm8
    int v257;  // ymm6
    int v258;  // ymm4
    int v259;  // ymm1
    int v260;  // ymm9
    int v261;  // ymm7
    int v262;  // ymm5
    unsigned long v263;  // rbp
    unsigned long v264;  // r13
    unsigned long v265;  // rdx
    unsigned long v266;  // rax
    unsigned long v267;  // rcx
    unsigned long v268;  // rax
    unsigned long v269;  // rax
    unsigned long v270;  // rdx
    unsigned long v271;  // cc_op
    unsigned long v272;  // cc_dep2
    char v273;  // cc_dep1
    unsigned long v274;  // rdx
    unsigned long v275;  // rdi
    unsigned long v276;  // rcx
    unsigned long v277;  // r12
    int v278;  // xmm0
    int v279;  // xmm0
    int v280;  // xmm0
    int v281;  // xmm2
    int v282;  // ymm2
    int v283;  // xmm0
    int v284;  // xmm0
    int v285;  // xmm0
    int v286;  // ymm0
    int v287;  // xmm3
    int v288;  // ymm3
    unsigned long v289;  // rbp
    unsigned long v290;  // rdx
    unsigned long v291;  // rbx
    unsigned long v292;  // rdx
    unsigned long v294;  // rdx
    unsigned long v295;  // r15
    unsigned long v296;  // r12
    unsigned long v298;  // r8
    unsigned long v299;  // rbx
    unsigned long v300;  // rbx
    int v302;  // xmm0
    int v303;  // xmm8
    int v304;  // ymm8
    int v305;  // xmm6
    int v306;  // ymm6
    int v307;  // xmm4
    int v308;  // ymm4
    int v309;  // xmm0
    int v310;  // xmm1
    int v311;  // xmm9
    int v312;  // ymm9
    int v313;  // xmm7
    int v314;  // ymm7
    int v315;  // xmm5
    int v316;  // ymm5
    int v317;  // xmm1
    unsigned long v320;  // rax
    int v321;  // xmm8
    int v322;  // xmm9
    unsigned long v325;  // rax
    int v326;  // xmm6
    int v327;  // xmm7
    unsigned long v330;  // rax
    int v332;  // xmm4
    int v333;  // xmm5
    unsigned long v335;  // rcx
    unsigned long v336;  // rax
    unsigned long v337;  // rcx
    char v338;  // al
    unsigned long v339;  // rdi
    unsigned long v341;  // rdi
    int v342;  // xmm0
    int v343;  // xmm1
    int v344;  // xmm0
    int v345;  // xmm1
    unsigned long v347;  // r13
    int v348;  // xmm0
    int v349;  // xmm1
    int v350;  // xmm0
    int v351;  // xmm1
    unsigned long v354;  // r8
    unsigned long v355;  // rax
    unsigned long v356;  // rsi
    unsigned long v357;  // rax
    unsigned long v358;  // rax
    int v359;  // xmm0
    unsigned long v360;  // rax
    unsigned long v361;  // rax
    unsigned long v362;  // r14
    unsigned long v363;  // rbx
    int v364;  // xmm0
    int v365;  // xmm0
    int v366;  // xmm0
    unsigned long v367;  // r15
    unsigned long v369;  // rbp
    unsigned long v370;  // rbp
    unsigned long v371;  // rbp
    unsigned long v372;  // r13
    unsigned long v373;  // r15
    unsigned long v374;  // rbx
    unsigned long v375;  // r12
    unsigned long v376;  // r15
    unsigned long v377;  // rbx
    unsigned long v378;  // r15
    unsigned long v379;  // rax
    unsigned long v380;  // rax
    int v381;  // xmm0
    unsigned long v382;  // rax
    unsigned long v383;  // rax
    unsigned long v384;  // rax
    int v385;  // xmm0
    unsigned long v386;  // rbp
    unsigned long v387;  // r12
    unsigned long v388;  // r12
    unsigned long v390;  // rax
    unsigned int v391;  // eax
    unsigned int v392;  // ebx
    unsigned long v393;  // rax
    unsigned long v394;  // rax
    unsigned long v395;  // rcx
    unsigned long v397;  // rax
    unsigned long v398;  // rsi
    unsigned long v399;  // rax
    unsigned long v400;  // rsi
    unsigned long v401;  // rdx
    unsigned long v402;  // rsi
    unsigned long v403;  // rdx
    unsigned long v404;  // rdx
    unsigned long v405;  // rax
    unsigned long v406;  // rcx
    unsigned long v407;  // rax
    unsigned long v408;  // cc_dep2
    unsigned long v409;  // rdi
    unsigned long v410;  // rax
    unsigned long v411;  // rdi
    unsigned long v412;  // rdi
    unsigned long v413;  // cc_ndep
    unsigned long v414;  // rax
    unsigned long v415;  // rdi
    unsigned long v416;  // rdx
    unsigned long v417;  // rdi
    unsigned long v418;  // r8
    unsigned long v419;  // rax
    unsigned long v421;  // rsi
    unsigned long v422;  // rcx
    unsigned long v423;  // rax
    unsigned long v424;  // rax
    unsigned long v425;  // r9
    unsigned long v427;  // r8
    unsigned long v428;  // rax
    unsigned long v429;  // rax
    unsigned long v430;  // rax
    unsigned long v431;  // rax
    unsigned long v432;  // rax
    unsigned long v433;  // rax
    unsigned long v434;  // rax
    int v435;  // xmm0
    unsigned long v436;  // rdi
    unsigned long v437;  // rbx
    unsigned long v438;  // r14
    unsigned long v439;  // r15
    unsigned long v440;  // r14

    v54 = a4;
    v41 = a3;
    crossterm::terminal::sys::unix::window_size::h81abee8d2560d87b(&v27);
    if (!*((short *)&v27))
    {
        v12 = *((short *)&v28);
    }
    else
    {
        _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h5b1dfa3cc068f31eE.llvm.14242926303983770862(v30);
        v12 = v237;
        if (!((short)_ZN9crossterm8terminal3sys4unix10tput_value17h9bf26ea5706a7afcE.llvm.14242926303983770862("colsNone", 4) == 1) || !((short)_ZN9crossterm8terminal3sys4unix10tput_value17h9bf26ea5706a7afcE.llvm.14242926303983770862("lines", 5) == 1))
        {
            v27 = std::sys::pal::unix::os::errno::hddfd8da9c36b1a59() * 0x100000000 | 2;
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        }
    }
    v65 = *((long long *)&v62);
    if (*((short *)(v65 + 32)))
        v12 = *((short *)(v65 + 34));
    v27 = 0;
    v30 = a1;
    v31 = a0;
    v32 = a1;
    v33 = 0;
    v34 = a1;
    v35 = 42949672970;
    v36 = 1;
    v37 = 0;
    if (!core::str::iter::SplitInternal$LT$P$GT$::next_inclusive::h2dfe9bd177c9bbfa(&v27))
    {
        v68 = 8;
        v69 = 0;
        goto LABEL_4a0d7b;
    }
    v66 = 0;
    v67 = 0;
    do
    {
        v67 -= 1;
        v66 += 24;
    } while (core::str::iter::SplitInternal$LT$P$GT$::next_inclusive::h2dfe9bd177c9bbfa(&v27));
    if (!v67)
    {
        v69 = 0;
        v68 = 8;
        goto LABEL_4a0d69;
    }
    else
    {
        v69 = -(v67);
        if (v69 > 384307168202282325)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v68 = __rust_alloc(v66, 8);
        if (v68)
        {
LABEL_4a0d69:
LABEL_4a0d7b:
            v40 = *((short *)&v29);
            v8 = v69;
            v9 = v68;
            v10 = 0;
            v27 = 0;
            v30 = a1;
            v31 = a0;
            v32 = a1;
            v33 = 0;
            v34 = a1;
            v35 = 42949672970;
            v36 = 1;
            v37 = 0;
            v73 = &v27;
            v74 = 0;
            while (true)
            {
                v76 = v75;
                v79 = core::str::iter::SplitInternal$LT$P$GT$::next_inclusive::h2dfe9bd177c9bbfa(v73);
                if (!v79)
                    break;
                v80 = v79;
                v81 = v237 - 1;
                if (v237 >= 1 && *((char *)(v80 + v81)) == 10)
                {
                    v84 = v237 - 2;
                    if (v81)
                    {
                    }
                }
                v89 = v83;
                v1 = v80;
                v44 = 0;
                v45 = 8;
                v46 = 0;
                v4 = v89;
                if (unicode_width::str_width::h790f4f44c65722ae(v1, v89, 0) >= vvar_5199)
                {
                    v90 = v1;
                    if (v89)
                    {
                        v53 = v90 + v89;
                        v93 = v73 | -0x100 | 16;
                        v3 = 0;
                        v2 = 2;
                        v5 = 0;
                        v94 = 0;
                        v43 = 0;
                        v6 = 0;
                        v42 = 0;
                        v7 = 0;
                        while (true)
                        {
                            if (v94 == v89)
                                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                            if (!v94)
                            {
                                v96 = *((char *)v90);
                            }
                            else if (!(v94 < v89) || !((v96 = (unsigned long long)(char)*((char *)(v90 + v94)), (char)v96 >= 192)))
                            {
                                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                            }
                            v97 = v90 + v94;
                            v98 = v94;
                            v13 = v94;
                            if ((char)v96 >= 0)
                            {
                                v95 = amd64g_calculate_rflags_c(17, v96 & 255, 0, v95);
                                v99 = v90 + v98 + 1;
                                v100 = v96 & 4294967295;
                            }
                            else
                            {
                                v101 = (char)(v96 & 4294967295) & 31;
                                v102 = *((char *)(v97 + 1)) & 63;
                                if ((v96 & 255) <= 223)
                                {
                                    v99 = v97 + 2;
                                    v100 = v101 * 64 | v102;
                                }
                                else
                                {
                                    v103 = *((char *)(v97 + 2)) & 63 | v102 * 64;
                                    if ((v96 & 255) < 240)
                                    {
                                        v99 = v97 + 3;
                                        v100 = v103 | v101 * 0x1000;
                                    }
                                    else
                                    {
                                        v99 = v97 + 4;
                                        v100 = *((char *)(v97 + 3)) & 63 | v103 * 64 | (v101 & 7) * 0x40000;
                                    }
                                    v98 = v13;
                                }
                            }
                            v106 = 1;
                            if ((unsigned int)v100 >= 128)
                            {
                                v106 = 2;
                                if ((unsigned int)v100 >= 0x800)
                                {
                                    v105 = (unsigned int)v100 < 0x10000;
                                    v106 = 4 - ((unsigned int)v100 < 0x10000);
                                }
                            }
                            v107 = v104 + v106;
                            if ((char)__CFADD__(v104, v106))
                                v107 = -1;
                            v108 = 5;
                            v109 = 16;
                            v110 = 16;
                            if ((unsigned int)v100 >= 127)
                            {
                                v108 = 7;
                                v109 = v5;
                                v110 = v100 & 4294967295;
                                if (v5 > (unsigned int)v100 || (v111 = (unsigned long long)v2, v108 = 7, v109 = (unsigned long long)(unsigned int)(int)v3, v110 = v100 & 4294967295, (int)v3 < (unsigned int)v100))
                                {
                                    unicode_segmentation::tables::grapheme::grapheme_category::hacb4f3fc341d9e65(&v14, v100 & 4294967295);
                                    v5 = v14;
                                    v3 = *((int *)((char *)&v14 + 4));
                                    v113 = (char)v15;
                                    v2 = v113;
                                    v111 = v113 & 4294967295;
                                }
                            }
                            else if ((unsigned int)v100 > 31)
                            {
                                v108 = 19;
                                v109 = 0;
                                v110 = 0;
                                v111 = 0;
                            }
                            else
                            {
                                v108 = 7;
                                v109 = v100 & 4294967295;
                                v110 = 10;
                                v112 = ((unsigned int)v100 == 10 ? 7 : 2 - ((unsigned int)v100 == 13));
                            }
                            v114 = amd64g_calculate_rflags_all(v108, v109, v110, v105);
                            v115 = __ROL__((unsigned int)(v100 - 2381), 25);
                            if (v115 > 8 || (v0 = (unsigned int)347, v114 = 0, !((char)((unsigned long long)(char)*((char *)((char *)&v0 + ((unsigned long long)(v115 & 31) >> 3))) >> (unsigned long long)(char)(v115 & 31 & 7)) & 1)))
                            {
                                v118 = 371;
                                v119 = 0;
                                v120 = 371;
                            }
                            else
                            {
                                v114 = amd64g_calculate_rflags_c(0, (unsigned long long)(char)*((char *)((char *)&v0 + ((unsigned long long)(v115 & 31) >> 3))) >> (char)(v115 & 31 & 7) & 1, 0, 0);
                                v117 = v24 + 1;
                                v6 = 1;
                                if (!vvar_5208)
                                {
                                    v117 = 1;
                                    goto LABEL_4a1139;
                                }
                                else
                                {
                                    goto LABEL_4a1139;
                                }
                            }
                            while (true)
                            {
                                v122 = (v118 >> 1) + v119;
                                v124 = *((int *)((char *)&(&g_41e338)[v122] + 4));
                                if ((unsigned int)v100 <= v124 && (unsigned int)v100 >= (int)(&g_41e338)[v122])
                                    break;
                                if ((unsigned int)v100 > v124)
                                {
                                    v114 = (unsigned int)v100 < v124;
                                    v119 = v122 + 1;
                                }
                                v128 = v127;
                                v118 = v128 - v119;
                                if (v128 <= v119)
                                {
                                    v6 = 1;
                                    v117 = 0;
LABEL_4a1139:
                                    v24 = v117;
                                    break;
                                }
                            }
                            if ((char)v111 == 11)
                            {
                                v114 = (char)v111 < 11;
                                v129 = v11 + 1;
                            }
                            else if ((unsigned int)v111 != 16)
                            {
                                v43 = 1;
                                v129 = 0;
                            }
                            else
                            {
                                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                            }
                            v11 = v129;
                            if (v99 == v53)
                            {
                                v93 = v93 | -0x100 | 16;
                                v207 = v4;
                                if (v107 != v207)
                                {
                                    vvar_5533{stack -552} = 3;
                                    vvar_5534{stack -544} = v25;
                                    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                                }
                                goto LABEL_4a1b94;
                            }
                            v100 = *((char *)v99);
                            if ((char)v100 >= 0)
                            {
                                v130 = amd64g_calculate_rflags_c(17, v100 & 255, 0, v114);
                                v99 += 1;
                                if (!((unsigned int)v100 < 127))
                                    goto LABEL_4a12c0;
                                goto LABEL_4a119d;
                            }
                            v131 = (unsigned int)v100 & 31;
                            v132 = *((char *)(v99 + 1)) & 63;
                            if ((v100 & 255) <= 223)
                            {
                                v99 += 2;
                                v100 = v131 * 64 | v132;
                                if ((unsigned int)v100 < 127)
                                    goto LABEL_4a119d;
                                goto LABEL_4a12c0;
                            }
                            v133 = *((char *)(v99 + 2)) & 63 | v132 * 64;
                            if ((v100 & 255) >= 240)
                            {
                                v100 = *((char *)(v99 + 3)) & 63 | v133 * 64 | (v131 & 7) * 0x40000;
                                if ((unsigned int)v100 != 0x110000)
                                {
                                    v99 += 4;
                                    if (!((unsigned int)v100 < 127))
                                        goto LABEL_4a12c0;
LABEL_4a119d:
                                    if ((unsigned int)v100 > 31)
                                    {
                                        v93 = 0;
                                        goto LABEL_4a130c;
                                    }
                                    else
                                    {
                                        v93 = ((unsigned int)v100 == 10 ? 2 - ((unsigned int)v100 == 13) : 7);
                                        goto LABEL_4a130c;
                                    }
                                }
                            }
                            v99 += 3;
                            v100 = v133 | v131 * 0x1000;
                            if ((unsigned int)v100 < 127)
                                goto LABEL_4a119d;
LABEL_4a12c0:
                            if (v5 > (unsigned int)v100 || (v93 = (unsigned long long)v2, (int)v3 < (unsigned int)v100))
                            {
                                unicode_segmentation::tables::grapheme::grapheme_category::hacb4f3fc341d9e65(&v14, v100 & 4294967295);
                                v5 = v14;
                                v3 = *((int *)((char *)&v14 + 4));
                                v134 = (char)v15;
                                v2 = v134;
                                v93 = v134 & 4294967295;
                            }
LABEL_4a130c:
                            if (v107 > v4)
                            {
                                v14 = 3;
                                v15 = v25;
                                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                            }
                            if ((char)v111 == 16)
                            {
                                if (v107 < v4 && *((char *)(v1 + v107)) < 192)
                                    goto LABEL_4a33a8;
                                v135 = v1;
                                v136 = *((char *)(v135 + v107 - 1));
                                if ((char)v136 < 0)
                                {
                                    v137 = *((char *)(v135 + v107 - 2));
                                    if ((char)v137 >= 192)
                                    {
                                        v140 = (unsigned int)v137 & 31;
                                    }
                                    else
                                    {
                                        v138 = *((char *)(v135 + v107 - 3));
                                        v139 = ((char)v138 <= 191 ? (unsigned int)v138 & 15 : (unsigned int)v138 & 63 | (*((char *)(v135 + v107 - 4)) & 7) * 64);
                                        v140 = (unsigned int)v137 & 63 | v139 * 64;
                                    }
                                    v136 = (unsigned int)v136 & 63 | v140 * 64;
                                    if ((unsigned int)v136 == 0x110000)
                                    {
LABEL_4a3205:
                                        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                                    }
                                }
                                if ((unsigned int)v136 < 127)
                                {
                                    v111 = ((unsigned int)v136 <= 31 ? ((unsigned int)v136 == 10 ? 7 : 2 - ((unsigned int)v136 == 13)) : 0);
                                }
                                else if (v5 > (unsigned int)v136 || (v111 = (unsigned long long)v2, (int)v3 < (unsigned int)v136))
                                {
                                    unicode_segmentation::tables::grapheme::grapheme_category::hacb4f3fc341d9e65(&v14, v136);
                                    v5 = v14;
                                    v3 = *((int *)((char *)&v14 + 4));
                                    v141 = (char)v15;
                                    v2 = v141;
                                    v111 = v141 & 4294967295;
                                }
                                if ((char)v93 == 16)
                                    goto LABEL_4a3205;
                            }
                            if ((char)v111 == 1)
                            {
                                if (!((char)v93 == 7))
                                    goto LABEL_4a1b94;
                                goto LABEL_4a108a;
                            }
                            v143 = v111;
                            if (!(v143 != 2) || !(v143 != 7) || !((v144 = v93 & 4294967295, !((v93 & 255) <= 7) || !((v0 = (unsigned int)134, v130 = 0, ((char)(*((char *)&v0 + ((v144 & 4294967295 & 31) >> 3)) >> (char)((unsigned int)v144 & 31 & 7)) & 1))))))
                                goto LABEL_4a1b94;
                            if ((char)v111 == 6)
                            {
                                if (!((v93 & 255 & 255) <= 15))
                                    goto LABEL_4a1b94;
                                v0 = 54088;
                                v145 = 0;
                                if (!((char)(*((char *)&v0 + ((v144 & 4294967295 & 31) >> 3)) >> (char)((unsigned int)v144 & 31 & 7)) & 1))
                                {
                                    if (!((unsigned int)v144 == 5))
                                        goto LABEL_4a1b94;
                                    goto LABEL_4a15db;
                                }
                            }
                            if (!(v143 != 8) || !(v143 != 14))
                            {
                                v146 = 0;
                                if (!((unsigned int)(v144 - 12) >= 4) || !((unsigned int)v144 != 3))
                                    goto LABEL_4a108c;
                                goto LABEL_4a1571;
                            }
                            else
                            {
                                switch ((unsigned int)v144)
                                {
                                case 3: case 12: case 15:
LABEL_4a108a:
                                    v146 = 0;
                                    goto LABEL_4a108c;
                                case 13:
                                    if (!((v111 & 255) > 13) && !((v0 = (unsigned int)0x2600, v130 = 0, !((char)((unsigned long long)(char)*((char *)((char *)&v0 + ((unsigned long long)(v143 & 31) >> 3))) >> (unsigned long long)(char)(v143 & 31 & 7)) & 1))))
                                        goto LABEL_4a108a;
                                    v93 = v93 | -0x100 | 13;
LABEL_4a1b94:
                                    v94 = v142;
                                    v208 = v13;
                                    if (v94 < v208)
                                        goto LABEL_4a33a8;
                                    v209 = v4;
                                    if (v208 && (v13 >= v209 || *((char *)v97) < 192))
                                    {
LABEL_4a31da:
                                        break;
                                    }
                                    if (v94 < v209)
                                    {
                                        if (*((char *)(v1 + v94)) <= 191)
                                            goto LABEL_4a31da;
                                    }
                                    else
                                    {
                                        if (!(v94 == v209))
                                            goto LABEL_4a31da;
                                    }
                                    v210 = unicode_width::str_width::h790f4f44c65722ae(v97, v94 - v208, 0);
                                    v211 = v42 + v210;
                                    v42 = v211;
                                    if (v211 > v40)
                                    {
                                        v212 = v7;
                                        if (v13 < v212)
                                            break;
                                        if (v212)
                                        {
                                            v213 = v7;
                                            if (v213 < v209)
                                            {
                                                if (*((char *)(v1 + v213)) <= 191)
                                                    goto LABEL_4a322c;
                                            }
                                            else
                                            {
                                                if (!(v213 == v209))
                                                    goto LABEL_4a322c;
                                            }
                                        }
                                        v214 = v13;
                                        if (!v214)
                                        {
                                            v215 = v214;
                                            v216 = v215 - vvar_5239;
                                            if (v215 == vvar_5239)
                                            {
                                                v217 = 1;
                                            }
                                            else
                                            {
                                                if ((char)amd64g_calculate_condition(8, 8, v215, vvar_5239, v130))
                                                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                                                v217 = __rust_alloc(v216, 1);
                                                if (!v217)
                                                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                                                v218 = v4;
                                            }
                                            v26 = v217;
                                            memcpy(v26, v7 + v1, v216);
                                            v219 = v46;
                                            if (v219 == v44)
                                                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hb8a9f39ebde5a5c5(&v44);
                                            v220 = v45;
                                            v221 = v219 * 3;
                                            *((unsigned long *)(v220 + v221 * 8)) = v216;
                                            *((unsigned long *)(v220 + v221 * 8 + 8)) = v26;
                                            *((unsigned long *)(v220 + v221 * 8 + 16)) = v216;
                                            v130 = v219 < v44;
                                            v46 = v219 + 1;
                                            v7 = v13;
                                            v42 = v210;
                                            goto LABEL_4a0f8f;
                                        }
                                        else if (v214 < v209)
                                        {
                                            v214 = v13;
                                            if (*((char *)v97) <= 191)
                                            {
LABEL_4a32bb:
                                                break;
                                            }
                                        }
LABEL_4a322c:
                                        goto LABEL_4a32bb;
                                    }
LABEL_4a0f8f:
                                    v90 = v1;
                                    if (v94 == v209)
                                    {
                                        v222 = v7;
                                        if (v209 == v222)
                                        {
                                            v73 = &v27;
                                            goto LABEL_4a1e57;
                                        }
                                        v73 = &v27;
                                        if (!(!(v222) || !(v209 <= v222) && !(*((char *)(v90 + v222)) <= 191)))
                                            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                                        v224 = v209 - v222;
                                        if (v209 == v222)
                                        {
                                            v228 = 1;
                                        }
                                        else if ((char)amd64g_calculate_condition(8, 8, v209, v222, v130))
                                        {
LABEL_4a33be:
                                            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                                        }
                                        else
                                        {
                                            v224 = v224;
                                            v228 = __rust_alloc(v224, 1);
                                            if (!v228)
                                                goto LABEL_4a33be;
                                        }
                                        v52 = v228;
                                        memcpy(v228, v90 + v7, v224);
                                        v229 = v46;
                                        if (v229 == v44)
                                            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hb8a9f39ebde5a5c5(&v44);
                                        v230 = v45;
                                        v231 = v229 * 3;
                                        *((unsigned long *)(v230 + v231 * 8)) = v224;
                                        *((unsigned long *)(v230 + v231 * 8 + 8)) = v52;
                                        *((unsigned long *)(v230 + v231 * 8 + 16)) = v224;
                                        v130 = v229 < v44;
                                        v46 = v229 + 1;
                                        goto LABEL_4a1e57;
                                    }
                                default:
LABEL_4a1571:
                                    if ((char)v111 == 10)
                                        goto LABEL_4a108a;
                                    if ((char)v93 != 11)
                                    {
                                        if ((unsigned int)v144 != 5)
                                        {
                                            if (!((unsigned int)v144 == 4))
                                                goto LABEL_4a1b94;
                                            if ((char)v111 != 15)
                                            {
                                                v93 = v93 | -0x100 | 4;
                                                goto LABEL_4a1b94;
                                            }
                                            else
                                            {
                                                if (v107 < v4 && *((char *)(v1 + v107)) < 192)
                                                {
                                                    goto LABEL_4a33a8;
                                                }
                                                else
                                                {
                                                    v152 = v1;
                                                    v153 = *((char *)(v152 + v107 - 1));
                                                    if ((char)v153 >= 0)
                                                    {
                                                        v130 = amd64g_calculate_rflags_c(17, v153 & 255, 0, v145);
                                                        v158 = v152 + v107 - 1;
                                                        if ((unsigned int)v153 < 127)
                                                            goto LABEL_4a19a5;
                                                    }
                                                    else
                                                    {
                                                        v159 = v152 + v107;
                                                        v160 = *((char *)(v159 - 2));
                                                        if ((char)v160 >= 192)
                                                        {
                                                            v158 = v159 - 2;
                                                            v185 = (unsigned int)v160 & 31;
                                                        }
                                                        else
                                                        {
                                                            v184 = *((char *)(v159 - 3));
                                                            if ((char)v184 >= 192)
                                                            {
                                                                v158 = v159 - 3;
                                                                v187 = (unsigned int)v184 & 15;
                                                            }
                                                            else
                                                            {
                                                                v158 = v159 - 4;
                                                                v187 = (unsigned int)v184 & 63 | (*((char *)(v159 - 4)) & 7) * 64;
                                                            }
                                                            v144 = v187 * 64;
                                                            v185 = (unsigned int)v160 & 63 | (unsigned int)v144;
                                                        }
                                                        v152 = v185 * 64;
                                                        v153 = (unsigned int)v153 & 63 | (unsigned int)v152;
                                                        if ((unsigned int)v153 < 127)
                                                            goto LABEL_4a19a5;
                                                    }
                                                    if (v5 <= (unsigned int)v153 && (int)v3 >= (unsigned int)v153)
                                                    {
                                                        if (!(v2 == 15))
                                                            goto LABEL_4a19a5;
                                                    }
                                                    else
                                                    {
                                                        unicode_segmentation::tables::grapheme::grapheme_category::hacb4f3fc341d9e65(&v14, v153);
                                                        v5 = v14;
                                                        v3 = *((int *)((char *)&v14 + 4));
                                                        v152 = (char)v15;
                                                        v2 = v152;
                                                        if (!(v2 == 15))
                                                            goto LABEL_4a19a5;
                                                    }
                                                    v2 = 15;
                                                    while (v190 != v1)
                                                    {
                                                        v192 = *((char *)(v190 - 1));
                                                        if ((char)v192 >= 0)
                                                        {
                                                            v191 = amd64g_calculate_rflags_c(17, v192 & 255, 0, v191);
                                                            v193 = v190 - 1;
                                                            if (!((unsigned int)v192 < 127))
                                                                goto LABEL_4a195b;
                                                            goto LABEL_4a18e4;
                                                        }
                                                        v194 = *((char *)(v190 - 2));
                                                        if ((char)v194 >= 192)
                                                        {
                                                            v196 = v190 - 2;
                                                            v197 = (unsigned int)v194 & 31;
                                                        }
                                                        else
                                                        {
                                                            v195 = *((char *)(v190 - 3));
                                                            if ((char)v195 >= 192)
                                                            {
                                                                v196 = v190 - 3;
                                                                v198 = (unsigned int)v195 & 15;
                                                            }
                                                            else
                                                            {
                                                                v196 = v190 - 4;
                                                                v198 = (unsigned int)v195 & 63 | (*((char *)(v190 - 4)) & 7) * 64;
                                                            }
                                                            v144 = v198 * 64;
                                                            v197 = (unsigned int)v194 & 63 | (unsigned int)v144;
                                                        }
                                                        v152 = v197 * 64;
                                                        v192 = (unsigned int)v192 & 63 | (unsigned int)v152;
                                                        if ((unsigned int)v192 < 127)
                                                        {
LABEL_4a18e4:
                                                            if (!((unsigned int)v192 <= 31) || !((v199 = (char)(char)((unsigned int)v192 == 13), v144 = v144 | -0x100 | (unsigned long long)v199, (unsigned int)v192 != 10)))
                                                                break;
                                                            v152 = v152 | -0x100 | 2 | -0x100 | 2 - v199;
                                                            goto LABEL_4a18c0;
                                                        }
LABEL_4a195b:
                                                        if (v5 > (unsigned int)v192 || (v152 = (unsigned long long)v2, (int)v3 < (unsigned int)v192))
                                                        {
                                                            unicode_segmentation::tables::grapheme::grapheme_category::hacb4f3fc341d9e65(&v14, v192);
                                                            v5 = v14;
                                                            v3 = *((int *)((char *)&v14 + 4));
                                                            v152 = (char)v15;
                                                            v2 = v152;
                                                        }
LABEL_4a18c0:
                                                        if ((char)v152 != 3 && (unsigned int)v152 == 4)
                                                            goto LABEL_4a19a7;
                                                    }
                                                }
                                            }
                                        }
LABEL_4a15db:
                                        if (!(v107 < v4) || !(*((char *)(v1 + v107)) < 192))
                                        {
                                            v147 = v1 + v107;
                                            v148 = v6;
                                            if (v148)
                                                v149 = v24;
                                            do
                                            {
                                                v161 = *((char *)(v147 - 1));
                                                if ((char)v161 >= 0)
                                                {
                                                    v145 = amd64g_calculate_rflags_c(17, v161 & 255, 0, v145);
                                                    v162 = 28;
                                                    v163 = v147 - 1;
                                                    v147 -= 1;
                                                }
                                                else
                                                {
                                                    v164 = *((char *)(v147 - 2));
                                                    if ((char)v164 >= 192)
                                                    {
                                                        v147 -= 2;
                                                        v166 = (unsigned int)v164 & 31;
                                                    }
                                                    else
                                                    {
                                                        v165 = *((char *)(v147 - 3));
                                                        if ((char)v165 < 192)
                                                        {
                                                            v147 -= 4;
                                                            v167 = (unsigned int)v165 & 63 | (*((char *)(v147 - 4)) & 7) * 64;
                                                        }
                                                        else
                                                        {
                                                            v147 -= 3;
                                                            v167 = (unsigned int)v165 & 15;
                                                        }
                                                        v166 = (unsigned int)v164 & 63 | v167 * 64;
                                                    }
                                                    v168 = v166 * 64;
                                                    v169 = (unsigned int)v161 & 63;
                                                    v162 = 19;
                                                    v163 = v169 | v168;
                                                    v161 = v169 | v168;
                                                }
                                                v145 = amd64g_calculate_rflags_all(v162, v163, 0, v145);
                                                v170 = __ROL__((unsigned int)(v161 - 2381), 25);
                                                if (!(v170 <= 8) || !((v0 = (unsigned int)347, v171 = (unsigned long long)(char)*((char *)((char *)&v0 + ((unsigned long long)(v170 & 31) >> 3))) >> (char)(v170 & 31 & 7) & 1, v145 = 0, ((char)((unsigned long long)(char)*((char *)((char *)&v0 + ((unsigned long long)(v170 & 31) >> 3))) >> (unsigned long long)(char)(v170 & 31 & 7)) & 1))))
                                                {
                                                    v172 = 371;
                                                    v173 = 0;
                                                    v174 = 371;
                                                    while (true)
                                                    {
                                                        v175 = (v172 >> 1) + v173;
                                                        v177 = *((int *)((char *)&(&g_41e338)[v175] + 4));
                                                        if ((unsigned int)v161 <= v177 && (unsigned int)v161 >= (int)(&g_41e338)[v175])
                                                            break;
                                                        if ((unsigned int)v161 > v177)
                                                        {
                                                            v145 = (unsigned int)v161 < v177;
                                                            v173 = v175 + 1;
                                                        }
                                                        v181 = v180;
                                                        v172 = v181 - v173;
                                                        if (v181 <= v173 && v6 && v24 && (unsigned int)v161 >= 127)
                                                        {
                                                            if (v5 > (unsigned int)v161 || (int)v3 < (unsigned int)v161)
                                                            {
                                                                unicode_segmentation::tables::grapheme::grapheme_category::hacb4f3fc341d9e65(&v14, v161);
                                                                v5 = v14;
                                                                v3 = *((int *)((char *)&v14 + 4));
                                                                v2 = v15;
                                                            }
                                                            goto LABEL_4a19a7;
                                                        }
                                                    }
                                                }
                                                else
                                                {
                                                    v145 = amd64g_calculate_rflags_c(0, v171, 0, 0);
                                                    v154 += 1;
                                                    v6 = 1;
                                                    v24 = v154;
                                                }
                                            } while (v147 != v1);
                                        }
                                        else
                                        {
                                            goto LABEL_4a33a8;
                                        }
LABEL_4a19a5:
                                        goto LABEL_4a19a7;
                                    }
                                    else if ((char)v111 != 11)
                                    {
                                        v93 = v93 | -0x100 | 11;
                                        goto LABEL_4a1b94;
                                    }
                                    else
                                    {
                                        if (v43)
                                        {
                                            v146 = v11 | -0x100 | ~((char)v11) & 1;
                                            goto LABEL_4a108c;
                                        }
                                        if (v107 < v4 && *((char *)(v1 + v107)) < 192)
                                        {
LABEL_4a33a8:
                                            break;
                                        }
                                        v150 = v1;
                                        v151 = *((char *)(v150 + v107 - 1));
                                        if ((char)v151 >= 0)
                                        {
                                            v130 = amd64g_calculate_rflags_c(17, v151 & 255, 0, v145);
                                            v155 = v150 + v107 - 1;
                                            if ((unsigned int)v151 < 127)
                                                goto LABEL_4a1b51;
                                        }
                                        else
                                        {
                                            v156 = v150 + v107;
                                            v157 = *((char *)(v156 - 2));
                                            if ((char)v157 > 191)
                                            {
                                                v155 = v156 - 2;
                                                v183 = (unsigned int)v157 & 31;
                                            }
                                            else
                                            {
                                                v182 = *((char *)(v156 - 3));
                                                if ((char)v182 > 191)
                                                {
                                                    v155 = v156 - 3;
                                                    v186 = (unsigned int)v182 & 15;
                                                }
                                                else
                                                {
                                                    v155 = v156 - 4;
                                                    v186 = (unsigned int)v182 & 63 | (*((char *)(v156 - 4)) & 7) * 64;
                                                }
                                                v183 = (unsigned int)v157 & 63 | v186 * 64;
                                            }
                                            v150 = v183 * 64;
                                            v151 = (unsigned int)v151 & 63 | (unsigned int)v150;
                                            if ((unsigned int)v151 < 127)
                                                goto LABEL_4a1b51;
                                        }
                                        if (v5 <= (unsigned int)v151 && (int)v3 >= (unsigned int)v151)
                                        {
                                            if (!(v2 == 11))
                                                goto LABEL_4a1b51;
                                            goto LABEL_4a1a24;
                                        }
                                        else
                                        {
                                            unicode_segmentation::tables::grapheme::grapheme_category::hacb4f3fc341d9e65(&v14, v151);
                                            v5 = v14;
                                            v3 = *((int *)((char *)&v14 + 4));
                                            v150 = (char)v15;
                                            v2 = v150;
                                            if (v2 == 11)
                                            {
LABEL_4a1a24:
                                                v2 = 11;
                                                if (v155 == v1)
                                                {
                                                    v189 = 1;
                                                    goto LABEL_4a1b53;
                                                }
                                                else
                                                {
                                                    v189 = 1;
                                                    do
                                                    {
                                                        v201 = *((char *)(v155 - 1));
                                                        if ((char)v201 < 0)
                                                        {
                                                            v202 = *((char *)(v155 - 2));
                                                            if ((char)v202 >= 192)
                                                            {
                                                                v11 = v155 - 2;
                                                                v204 = (unsigned int)v202 & 31;
                                                            }
                                                            else
                                                            {
                                                                v203 = *((char *)(v155 - 3));
                                                                if ((char)v203 < 192)
                                                                {
                                                                    v11 = v155 - 4;
                                                                    v205 = (unsigned int)v203 & 63 | (*((char *)(v155 - 4)) & 7) * 64;
                                                                }
                                                                else
                                                                {
                                                                    v11 = v155 - 3;
                                                                    v205 = (unsigned int)v203 & 15;
                                                                }
                                                                v204 = (unsigned int)v202 & 63 | v205 * 64;
                                                            }
                                                            v200 = v204 * 64;
                                                            v201 = (unsigned int)v201 & 63 | (unsigned int)v200;
                                                            if ((unsigned int)v201 < 127)
                                                                goto LABEL_4a1b53;
                                                        }
                                                        else
                                                        {
                                                            v188 = amd64g_calculate_rflags_c(17, v201 & 255, 0, v188);
                                                            v11 = v155 - 1;
                                                            if ((unsigned int)v201 < 127)
                                                                goto LABEL_4a1b53;
                                                        }
                                                        if (v5 > (unsigned int)v201 || (v206 = v200 | -0x100 | 11, (int)v3 < (unsigned int)v201))
                                                        {
                                                            unicode_segmentation::tables::grapheme::grapheme_category::hacb4f3fc341d9e65(&v14, v201);
                                                            v5 = v14;
                                                            v3 = *((int *)((char *)&v14 + 4));
                                                            v206 = (char)v15;
                                                        }
                                                        v188 = 0;
                                                        v189 += 1;
                                                        v155 = v11;
                                                    } while (v155 != v1);
                                                    v2 = 11;
                                                    goto LABEL_4a1b53;
                                                }
                                            }
                                            else
                                            {
LABEL_4a1b51:
                                                v189 = 0;
LABEL_4a1b53:
                                                v11 = v189;
                                                v43 = 1;
LABEL_4a19a7:
                                                v146 = -255;
                                                v25 = *((long long *)&v25) & -0x100 | -255;
LABEL_4a108c:
                                                if (!(!(v146 & 255 & 255)))
                                                    goto LABEL_4a1b94;
                                            }
                                        }
                                    }
                                    continue;
                                }
                            }
                        }
                    }
LABEL_4a1e57:
                    v16 = v46;
                }
                else
                {
                    if (!v89)
                    {
                        v91 = 1;
                    }
                    else
                    {
                        if (v89 < 0)
                            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                        v91 = __rust_alloc(v4, 1);
                        if (!v91)
                            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                        v218 = v4;
                    }
                    memcpy(v91, v1, v92);
                    v223 = v46;
                    if (v223 == v44)
                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hb8a9f39ebde5a5c5(&v44);
                    v225 = v45;
                    v226 = v223 * 3;
                    *((unsigned long *)(v225 + v226 * 8)) = v92;
                    v55 = v91;
                    *((unsigned long *)(v225 + v226 * 8 + 8)) = v91;
                    *((unsigned long *)(v225 + v226 * 8 + 16)) = v92;
                    v227 = v223 < v44;
                    v16 = v223 + 1;
                }
                v232 = *((int128_t *)&v44);
                v78 = v78 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v232;
                v14 = v232;
                v233 = v15;
                v234 = v16;
                v235 = v10;
                if (v8 - v235 < v234)
                {
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h3677ff10a29e3450(&v8, v235, v234);
                    v236 = v10;
                }
                memcpy(v236 * 24 + v9, v233, v234 * 24);
                v74 = v236 + v234;
                v10 = v74;
                if (v14)
                    __rust_dealloc(v233);
            }
            v238 = *((int128_t *)&v8);
            v239 = v78 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v238;
            v14 = v238;
            v242 = *((long long *)&v62);
            v243 = *((short *)(v242 + 38));
            v17 = *((long long *)(v242 + 24));
            v12 = ((char)amd64g_calculate_condition(2, 6, (unsigned long long)(v12 & 65535), 1, v77) ? (v12 | -0x10000 | (unsigned short)v12 - 1) & 4294967295 & 4294967295 : 0);
            v22 = v12;
            v16 = v74;
            v18 = v60;
            v19 = *((long long *)&v61);
            v20 = v74;
            v23 = v243;
            v21 = 0;
            if (*((long long *)v242) == 0x8000000000000000)
            {
LABEL_4a2736:
                if (!(char)v41)
                    goto LABEL_4a2a39;
                goto LABEL_4a2744;
            }
            v244 = v15;
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v8, *((long long *)&v62));
            v6 = v10;
            v245 = !v74 | !v6;
            if (v74 && v6)
            {
                v11 = v244 + v74 * 24;
                v246 = v9;
                v247 = v6;
                v7 = v247 - 1;
                v248 = 0;
                v249 = v247;
                v250 = v249 - 4;
                if (v249 < 4)
                    v250 = 0;
                v4 = v250;
                v26 = v247 + 15;
                v40 = v246 + 1;
                v57 = v247 + 63;
                v3 = v247 + 127;
                v243 = v247 + 31;
                v5 = v243;
                while (true)
                {
                    v243 = v248;
                    if (v244 == v11 && v8)
                    {
                        __rust_dealloc(v246);
                        goto LABEL_4a2682;
                    }
                    v263 = *((long long *)(v244 + 8));
                    v264 = *((long long *)(v244 + 16));
                    v265 = v6;
                    if (v265 >= v264)
                    {
                        if (!(v265 == v264))
                            goto LABEL_4a2040;
                        v271 = 19;
                        v268 = bcmp(v246, v263, v265) & 4294967295 & 4294967295;
                        v272 = 0;
                        goto LABEL_4a21ea;
                    }
                    if (v265 == 1)
                    {
                        v266 = *((char *)v246);
                        if (v264 > 15)
                        {
                            v268 = core::slice::memchr::memchr_aligned::hd7c7abb492a5eb9c(v266 & 4294967295, v263);
                            v271 = 8;
                            v272 = 1;
                        }
                        else
                        {
                            v267 = 0;
                            do
                            {
                                v273 = *((char *)(v263 + v267));
                                if (*((char *)(v263 + v267)) == (char)v266)
                                    goto LABEL_4a265d;
                            } while ((v253 = (unsigned long long)(char)(v273 < (char)v266), v267 += 1, v264 != v267));
LABEL_4a2040:
                            v252 = 0;
                            goto LABEL_4a2043;
                        }
LABEL_4a21ea:
                        v252 = v251 | -0x100 | amd64g_calculate_condition(4, v271, v268, v272, v253) & 255;
                        goto LABEL_4a2043;
                    }
                    if (v265 >= 33)
                    {
LABEL_4a2198:
                        core::str::pattern::StrSearcher::new::h5c57f06bc9dca553(&v27, v263, v264, v246, v6);
                        _$LT$core..str..pattern..StrSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hbde308aa4da90228(&v44, &v27);
                        v252 = (char)v44;
                        goto LABEL_4a2043;
                    }
                    v269 = *((char *)v246);
                    v270 = v6;
                    if (v270 == 2)
                    {
                        if (v264 >= 17)
                        {
                            v276 = *((char *)v40);
                            v275 = 1;
                            continue;
                        }
                        goto LABEL_4a2151;
                    }
                    else
                    {
                        v274 = v270;
                        if (!(v4 < v274))
                            goto LABEL_4a2198;
                        v275 = v274 - 1;
                        if (v275 >= v6)
                            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                        v276 = *((char *)(v246 + v274 - 1));
                        if ((char)v276 == (char)v269)
                            continue;
                        if (v26 > v264)
                        {
LABEL_4a2151:
                            v25 = v245;
                            v6 = v6;
                            do
                            {
                                v289 = v263;
                                v290 = v6;
                                v291 = v264;
                            } while (v291 >= v290 && (v253 = (unsigned long long)(char)(v291 < v290), v264 = v291 - 1, v294 = v6, (int)(long long)bcmp(v289, v246, v290)));
                            v252 = v252 | -0x100 | v292 <= v291;
                            goto LABEL_4a2043;
                        }
                        else
                        {
                            v25 = v245;
                            v246 = v246;
                            v278 = v269 & 4294967295;
                            v279 = InterleaveLOV(v278, v278);
                            v280 = (unsigned long long)(v279 >> 64) CONCAT (unsigned short)v279 CONCAT (unsigned short)v279 CONCAT (unsigned short)v279 CONCAT (unsigned short)v279;
                            v281 = (unsigned int)v280 CONCAT (unsigned int)v280 CONCAT (unsigned int)v280 CONCAT (unsigned int)v280;
                            v254 = v254 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v281;
                            v283 = v276 & 4294967295;
                            v284 = InterleaveLOV(v283, v283);
                            v285 = (unsigned long long)(v284 >> 64) CONCAT (unsigned short)v284 CONCAT (unsigned short)v284 CONCAT (unsigned short)v284 CONCAT (unsigned short)v284;
                            v286 = v239 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v278 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v279 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v280 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v283 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v284 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v285;
                            v287 = (unsigned int)v285 CONCAT (unsigned int)v285 CONCAT (unsigned int)v285 CONCAT (unsigned int)v285;
                            v255 = v255 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v287;
                            v27 = v263;
                            v30 = v264;
                            v31 = v40;
                            v32 = v7;
                            v2 = v275;
                            v53 = v281;
                            v13 = v287;
                            if (vvar_5289 >= v264)
                            {
                                v298 = 0;
                                v299 = 0;
                            }
                            else
                            {
                                v295 = v263 + 48;
                                v296 = v275 + v263 + 48;
                                v298 = 0;
                                v3 = v3;
                                while (true)
                                {
                                    v300 = 0;
                                    v302 = *((int128_t *)(v295 + v300 - 48));
                                    v303 = *((int128_t *)(v295 + v300 - 32));
                                    v304 = v256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v303;
                                    v305 = *((int128_t *)(v295 + v300 - 16));
                                    v306 = v257 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v305;
                                    v307 = *((int128_t *)(v295 + v300));
                                    v308 = v258 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v307;
                                    v309 = CmpEQV(v302, v281);
                                    v286 = v286 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v302 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v309;
                                    v310 = *((int128_t *)(v296 + v300 - 48));
                                    v311 = *((int128_t *)(v296 + v300 - 32));
                                    v312 = v260 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v311;
                                    v313 = *((int128_t *)(v296 + v300 - 16));
                                    v314 = v261 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v313;
                                    v315 = *((int128_t *)(v296 + v300));
                                    v316 = v262 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v315;
                                    v317 = CmpEQV(v310, v287);
                                    v259 = v259 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v310 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v317 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(v317 & v309);
                                    if (UnaryOp GetMSBs)
                                    {
                                        v1 = v298;
                                        v43 = v307;
                                        v42 = v315;
                                        v55 = v305;
                                        v52 = v313;
                                        v59 = v303;
                                        v58 = v311;
                                        v320 = core::str::pattern::simd_contains::_$u7b$$u7b$closure$u7d$$u7d$::h01e36cac27312010(&v27, v300, UnaryOp GetMSBs, (char)(v298 & 4294967295) & 1);
                                        v312 = v312 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58;
                                        v304 = v304 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59;
                                        v314 = v314 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v52;
                                        v306 = v306 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v55;
                                        v316 = v316 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v42;
                                        v308 = v308 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v43;
                                        v288 = v288 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v13;
                                        v282 = v282 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v53;
                                        v275 = v2;
                                        v298 = (v320 | -0x100 | ((char)v320 | (char)v1) & 1) & 4294967295;
                                        v3 = v3;
                                    }
                                    v321 = CmpEQV(v303, v281);
                                    v256 = v304 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v321;
                                    v322 = CmpEQV(v311, v287);
                                    v260 = v312 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v322 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(v322 & v321);
                                    if (UnaryOp GetMSBs)
                                    {
                                        v1 = v298;
                                        v43 = v307;
                                        v42 = v315;
                                        v55 = v305;
                                        v52 = v313;
                                        v325 = core::str::pattern::simd_contains::_$u7b$$u7b$closure$u7d$$u7d$::h01e36cac27312010(&v27, v300 + 16, UnaryOp GetMSBs, (char)(v298 & 4294967295) & 1);
                                        v314 = v314 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v52;
                                        v306 = v306 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v55;
                                        v316 = v316 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v42;
                                        v308 = v308 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v43;
                                        v288 = v288 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v13;
                                        v282 = v282 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v53;
                                        v275 = v2;
                                        v298 = (v325 | -0x100 | ((char)v325 | (char)v1) & 1) & 4294967295;
                                        v3 = v3;
                                    }
                                    v326 = CmpEQV(v305, v281);
                                    v257 = v306 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v326;
                                    v327 = CmpEQV(v313, v287);
                                    v261 = v314 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v327 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(v327 & v326);
                                    if (UnaryOp GetMSBs)
                                    {
                                        v1 = v298;
                                        v43 = v307;
                                        v42 = v315;
                                        v330 = core::str::pattern::simd_contains::_$u7b$$u7b$closure$u7d$$u7d$::h01e36cac27312010(&v27, v300 + 32, UnaryOp GetMSBs, (char)(v298 & 4294967295) & 1);
                                        v316 = v316 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v42;
                                        v308 = v308 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v43;
                                        v288 = v288 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v13;
                                        v282 = v282 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v53;
                                        v275 = v2;
                                        v298 = (v330 | -0x100 | ((char)v330 | (char)v1) & 1) & 4294967295;
                                        v3 = v3;
                                    }
                                    v332 = CmpEQV(v307, v281);
                                    v258 = v308 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v332;
                                    v333 = CmpEQV(v315, v287);
                                    v262 = v316 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v333 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(v333 & v332);
                                    if (UnaryOp GetMSBs)
                                    {
                                        v1 = v298;
                                        v336 = core::str::pattern::simd_contains::_$u7b$$u7b$closure$u7d$$u7d$::h01e36cac27312010(&v27, v300 + 48, UnaryOp GetMSBs, (char)(v298 & 4294967295) & 1);
                                        v288 = v288 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v13;
                                        v282 = v282 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v53;
                                        v275 = v2;
                                        v298 = (v336 | -0x100 | ((char)v336 | (char)v1) & 1) & 4294967295 & 4294967295;
                                        v3 = v3;
                                    }
                                    v337 = v335;
                                    v299 = v300 + 64;
                                    if (!(v337 + v300 < v264) || !(!((char)(v298 & 4294967295) & 1)))
                                        goto LABEL_4a254e;
                                }
                            }
LABEL_4a254e:
                            v338 = (char)(v298 & 4294967295) & 1;
                            if (v299 + v26 < v264 && !v338)
                            {
                                do
                                {
                                    v342 = *((int128_t *)(v263 + v299));
                                    v343 = *((int128_t *)(v275 + v263 + v299));
                                    v344 = CmpEQV(v342, v281);
                                    v286 = v286 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v342 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v344;
                                    v345 = CmpEQV(v343, v287);
                                    v259 = v259 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v343 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v345 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(v345 & v344);
                                    if (UnaryOp GetMSBs)
                                    {
                                        v288 = v288 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v13;
                                        v282 = v282 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v53;
                                        v341 = v2;
                                        v298 = (unsigned int)core::str::pattern::simd_contains::_$u7b$$u7b$closure$u7d$$u7d$::h01e36cac27312010(&v27, v299, UnaryOp GetMSBs, 0);
                                    }
                                } while (v5 + v299 < v264 && (v299 += 16, !((char)(v298 & 4294967295) & 1)));
                            }
                            v347 = v264 - v7;
                            v348 = *((int128_t *)(v263 + v347 - 16));
                            v349 = *((int128_t *)(v339 + v347 - 16 + v263));
                            v350 = CmpEQV(v348, v281);
                            v239 = v286 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v348 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v350;
                            v351 = CmpEQV(v349, v287);
                            v259 = v259 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v349 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v351 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(v351 & v350);
                            if (UnaryOp GetMSBs)
                                v354 = (unsigned int)core::str::pattern::simd_contains::_$u7b$$u7b$closure$u7d$$u7d$::h01e36cac27312010(&v27, v347 - 16, UnaryOp GetMSBs, v338) | -0x100 | (char)core::str::pattern::simd_contains::_$u7b$$u7b$closure$u7d$$u7d$::h01e36cac27312010(&v27, v347 - 16, UnaryOp GetMSBs, v338) | v338;
                            v252 = v354 | -0x100 | (char)v354 & 1;
LABEL_4a2043:
                            v76 = v277;
                            v244 += 24;
                            v243 = v243;
                            v248 = v243 + 1;
                            if ((char)v252)
                                break;
                        }
                    }
                }
            }
LABEL_4a265d:
            if (v8)
                __rust_dealloc(v9);
            if (!v245)
            {
                v17 = v243;
                goto LABEL_4a2736;
            }
LABEL_4a2682:
            v355 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, &anon.d58bd02a723bd021606085005bc52729.42.llvm.16558445346262642515, 4, v243);
            if (v355)
            {
LABEL_4a26ce:
                v27 = 0x8000000000000000;
                v32 = v355;
                v357 = __rust_alloc(32, 8);
                if (!v357)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v359 = *((int128_t *)&v27);
                *((int128_t *)(v357 + 16)) = *((int128_t *)&v31);
                *((void*)v357) = v359;
                goto LABEL_4a30bc;
            }
            v355 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(a2, v356, v237, v121);
            if (!(!v355) || !((v355 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, "\rPattern not found\n\r::::::::::::::\n\r{}\n\r::::::::::::::\n{}\n%Next file: --More--()", 19, v121), !v355)))
                goto LABEL_4a26ce;
            v77 = amd64g_calculate_rflags_c(20, v355, 0, v95);
            v22 = v12 - 1;
            if (!(char)v41)
            {
LABEL_4a2a39:
                uu_more::Pager::draw::h18b39364ddb28b02(&v14, a2, 0x110000, v243);
                v382 = v22;
                if ((char)v41)
                {
                    *((long long *)(*((long long *)&v62) + 24)) = 0;
                    v382 = (unsigned int)v382 + 3;
                    v22 = v382;
                }
                v383 = v382 & 4294967295;
                v384 = v383 + v17;
                if ((char)__CFADD__(v383, v17))
                    v384 = -1;
                v357 = 0;
                if (!(v60) && !(v384 < v20))
                    goto LABEL_4a30bc;
            }
            else
            {
LABEL_4a2744:
                v358 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, &anon.d58bd02a723bd021606085005bc52729.42.llvm.16558445346262642515, 4, v243);
                if (!(!v358) || !((v358 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(a2, v356, v237, v121), !v358)))
                {
                    v27 = v358;
                    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                }
                v360 = v54;
                v362 = v361;
                v363 = 1;
                if (!v360)
                    v360 = 1;
                v54 = v360;
                v8 = 0;
                v9 = 1;
                v10 = 0;
                core::str::pattern::StrSearcher::new::h5c57f06bc9dca553(&v27, "\r::::::::::::::\n\r{}\n\r::::::::::::::\n{}\n%Next file: --More--()", 36, "{}\n%Next file: --More--()", 2);
                v51 = *((long long *)&v39);
                v364 = *((int128_t *)&v38);
                v50 = v364;
                v365 = *((int128_t *)&v37);
                v49 = v365;
                v366 = *((int128_t *)&v27);
                v239 = v239 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v364 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v365 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v366;
                *((int128_t *)&v48) = *((int128_t *)&v35);
                *((int128_t *)&v47) = *((int128_t *)&v33);
                *((int128_t *)&v46) = *((int128_t *)&v31);
                v44 = v366;
                v367 = 0;
                while (true)
                {
                    v370 = v369;
                    v10 = v10;
                    _$LT$core..str..pattern..StrSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hbde308aa4da90228(&v27, &v44);
                    if (!v27)
                        break;
                    v371 = 4321621 + v370;
                    v372 = 4321621 + v30 - v371;
                    if (v8 - v367 < v372)
                    {
                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h3220183dc567c273(&v8, v367, v372);
                        v373 = v10;
                        v374 = v9;
                    }
                    memcpy(v374 + v373, v371, v372);
                    v10 = v372 + v10;
                    if (v8 - v10 < v362)
                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h3220183dc567c273(&v8, v10, v362);
                    v363 = v9;
                    memcpy(v363 + v10, v54, v362);
                    v367 = v10 + v362;
                    v10 = v367;
                    v369 = v31;
                }
                v375 = 36 - v370;
                if (v8 - v367 < v375)
                {
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h3220183dc567c273(&v8, v367, v375);
                    v373 = v10;
                    v374 = v9;
                }
                memcpy(v376 + v377, 4321621 + v370, v375);
                v378 = v8;
                v379 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, v377, v375 + v10, v121);
                if (!v379)
                {
                    if (v378)
                        __rust_dealloc(v377);
                    v22 -= 3;
                    goto LABEL_4a2a39;
                }
                v27 = 0x8000000000000000;
                v32 = v379;
                v380 = __rust_alloc(32, 8);
                if (!v380)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v357 = v380;
                v381 = *((int128_t *)&v27);
                *((int128_t *)(v380 + 16)) = *((int128_t *)&v31);
                *((void*)v380) = v381;
                if (!v378)
                    goto LABEL_4a30bc;
                goto LABEL_4a30a6;
            }
            while (true)
            {
                do
                {
                    crossterm::event::poll::h022ea6e8603af0c1(&v27, 0, 10000000);
                    if ((char)v27)
                    {
                        v44 = v30;
                        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                    }
                } while (!*((char *)&v27 + 1));
                crossterm::event::read::h888ef8060de400af(&v27, v356);
                if (v27 == 9223372036854775814)
                {
                    v8 = v30;
                    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                }
                v46 = v31;
                v385 = *((int128_t *)&v27);
                v239 = v239 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v385;
                v44 = v385;
                v386 = v44;
                v387 = v386 ^ 0x8000000000000000;
                v390 = v388;
                if (v390 != 2 && v390 == 5)
                {
                    v392 = 0x110000;
                    if (!*((short *)(*((long long *)&v62) + 32)))
                    {
                        v394 = (short)(&v44)[10];
                        v395 = 0;
                        *((int *)&v22) = ((char)amd64g_calculate_condition(2, 6, v394 & 65535, 1, v77) ? (unsigned short)((v394 | -0x10000 | (unsigned short)v394 - 1) & 4294967295 & 4294967295) : 0);
                        goto LABEL_4a2bab;
                    }
                }
                v391 = *((char *)&v46 + 2);
                if (v391)
                {
                    if (v391 == 2)
                        goto LABEL_4a2ef0;
                    v393 = (char)(&v44)[8];
                    goto LABEL_4a2d3f;
                }
                v393 = (char)(&v44)[8];
                if ((char)v393 == 15)
                {
                    v397 = (char)v46;
                    if ((unsigned int)v397 != 2)
                    {
                        if (!(!(unsigned int)v397))
                            goto LABEL_4a2f2c;
                        if ((int)(&v44)[12] != 113)
                        {
                            v392 = (int)(&v44)[12];
                            goto LABEL_4a2f3b;
                        }
                    }
                    else if ((int)(&v44)[12] != 99)
                    {
                        v392 = (int)(&v44)[12];
                        goto LABEL_4a2bab;
                    }
                    uu_more::reset_term::h30fedddbe2bd2661(a2, v356, v237, v121);
                    std::process::exit::hf8c1b9d00a2a86fd(0); /* do not return */
                }
LABEL_4a2d3f:
                switch ((unsigned int)v393)
                {
                case 4: case 8:
                    if (!(!(char)v46))
                        goto LABEL_4a2ef0;
                    v398 = v22;
                    v399 = v17;
                    v400 = v398 + v21;
                    if ((char)__CFADD__(v398, v21))
                        v400 = -1;
                    v401 = v399;
                    v395 = v401 - v400;
                    if (v400 > v401)
                        v395 = 0;
                    v17 = v395;
                    if (!((char)amd64g_calculate_condition(6, 8, v401, v400, v77)) && *((char *)&v23 + 1))
                    {
                        v411 = v16;
                        v412 = v411 - v395;
                        if (v395 > v411)
                            v412 = 0;
                        if (v411 > v412)
                        {
                            v417 = v15;
                            v418 = v417 + v411 * 24 + -(v412) * 24;
                            while (true)
                            {
                                v421 = ~(v419) + v399;
                                if (*((long long *)(v418 - 8)))
                                    break;
                                v423 = v422;
                                v424 = v423 - 1;
                                if (1 > v423)
                                    v424 = 0;
                                v425 = v421;
                                if (v425 < 1)
                                    break;
                                v427 = v418 - 24;
                                v428 = (v427 - v417) / 24;
                                v429 = v428 - v421;
                                if (v421 > v428)
                                    v429 = 0;
                                v418 = v427 + -(v429) * 24;
                                if (v428 <= v429)
                                    break;
                            }
                        }
                        v17 = v395;
                    }
                    v392 = 0x110000;
                    if (!*((short *)(*((long long *)&v62) + 32)))
                        break;
                    v430 = crossterm::command::write_command_ansi::hb51c29bd2c66fb22(a2, 1);
                    if (!v430)
                    {
                        v430 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(a2, v356, v237, v121);
                        if (!v430 && (v430 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a2, "\n\r...back 1 page\n", 17, v121), !v430))
                            break;
                    }
                    v27 = 0x8000000000000000;
                    v32 = v430;
                    v434 = __rust_alloc(32, 8);
                    if (!v434)
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                    v357 = v434;
                    v435 = *((int128_t *)&v27);
                    *((int128_t *)(v434 + 16)) = *((int128_t *)&v31);
                    *((void*)v434) = v435;
                    if (!(v387 <= 5))
                        goto LABEL_4a30a1;
LABEL_4a309b:
                    if (!(v387 == 4))
                        goto LABEL_4a30bc;
LABEL_4a30a1:
                    if (v386)
                    {
LABEL_4a30a6:
                        __rust_dealloc(v436);
                    }
LABEL_4a30bc:
                    v437 = v15;
                    v438 = v16;
                    if (v438)
                    {
                        v439 = v437 + 8;
                        do
                        {
                            v440 = v438;
                            if (*((long long *)(v439 - 8)))
                                __rust_dealloc(*((long long *)v439));
                        } while ((v253 = (unsigned long long)(char)(v273 < (char)v266), v267 += 1, v264 != v267));
                    }
                    if (!v14)
                        return v357;
                    __rust_dealloc(v437);
                case 5: case 9:
                    if (!(char)v46)
                        goto LABEL_4a2f79;
                    goto LABEL_4a2ef0;
                case 15:
                    v397 = (char)v46;
LABEL_4a2f2c:
                    v392 = (int)(&v44)[12];
                    if (!(!(v397 & 255 & 255)))
                        break;
LABEL_4a2f3b:
                    if (v392 == 32)
                    {
LABEL_4a2f79:
                        v395 = v20;
                        v402 = v22;
                        v403 = v17;
                        v404 = v403 + v402;
                        if ((char)__CFADD__(v403, v402))
                            v404 = -1;
                        if (v404 < v395)
                        {
                            v409 = v402 * 2 & 4294967295;
                            v410 = v403 + v409;
                            if ((char)__CFADD__(v403, v409))
                                v410 = -1;
                            v415 = v395 - v402;
                            v17 = v416;
                            v392 = 0x110000;
                            break;
                        }
LABEL_4a302f:
                        v357 = 0;
                        if (!(v387 <= 5))
                            goto LABEL_4a30a1;
                        goto LABEL_4a309b;
                    }
                    else
                    {
                        if (v392 != 106 && v392 == 107)
                        {
                            v407 = v17;
                            v395 = v407 - 1;
                            if (1 > v407)
                                v395 = 0;
                            v17 = v395;
                            v392 = 0x110000;
                            break;
                        }
                        v405 = v17;
                        v406 = v22;
                        v395 = v406 + v405;
                        if ((char)__CFADD__(v406, v405))
                            v395 = -1;
                        v408 = v20;
                        if (!(v395 < v20))
                            goto LABEL_4a302f;
                        v413 = v395 < v408;
                        v414 = v405 + 1;
                        if ((char)amd64g_calculate_condition(4, 24, v405 + 1, 0, amd64g_calculate_rflags_c(8, v395, v408, v77)))
                            v414 = -1;
                        v17 = v414;
                        v392 = 0x110000;
LABEL_4a2bab:
                        if ((v387 > 5 || v387 == 4) && v386)
                            __rust_dealloc(v45);
                        v431 = *((long long *)&v62);
                        if (*((char *)(v431 + 37)))
                        {
                            v44 = std::io::stdio::stdout::h077da66234850927();
                            v432 = crossterm::command::write_command_ansi::h26f69c27ee1e41ff(&v44, 0, 0);
                            if (!(!v432) || !((v432 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(&v44, &anon.d58bd02a723bd021606085005bc52729.40.llvm.16558445346262642515, 3, v121), !v432)))
                            {
                                v27 = v432;
                                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                            }
                            v27 = std::io::stdio::stdout::h077da66234850927();
                            v432 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(&v27, v356, v237, v121);
                            if (v432)
                            {
                                vvar_5527{stack -448} = v432;
                                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                            }
                        }
                        else if (*((char *)(v431 + 36)))
                        {
                            v44 = std::io::stdio::stdout::h077da66234850927();
                            v433 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(&v44, &anon.d58bd02a723bd021606085005bc52729.38.llvm.16558445346262642515, 4, v121);
                            if (!(!v433) || !((v433 = crossterm::command::write_command_ansi::h26f69c27ee1e41ff(&v44, 0, 0), !v433)))
                            {
                                v27 = v433;
                                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                            }
                            v27 = std::io::stdio::stdout::h077da66234850927();
                            v433 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(&v27, v356, v237, v121);
                            if (v433)
                            {
                                vvar_5530{stack -448} = v433;
                                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                            }
                        }
                        uu_more::Pager::draw::h18b39364ddb28b02(&v14, a2, v392, v395);
                    }
                default:
LABEL_4a2ef0:
                    if ((v387 > 5 || v387 == 4) && v386)
                        __rust_dealloc(v45);
                    continue;
                }
            }
        }
    }
}
