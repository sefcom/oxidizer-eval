long long uu_cksum::cksum::hb6ce13f943bb3d18(struct_3 *a0, struct struct_0 *a1[7], unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    struct_0 *v0;  // [sp-0x338], Other Possible Types: unsigned long long
    struct struct_0 **v1;  // [sp-0x330], Other Possible Types: struct_0 *, unsigned long long
    struct struct_0 **v2;  // [sp-0x328], Other Possible Types: char, unsigned long
    struct_0 *v3;  // [bp-0x327]
    struct_0 *v4;  // [sp-0x320]
    void* v5;  // [bp-0x318], Other Possible Types: unsigned long
    struct_0 *v6;  // [bp-0x317]
    struct_0 *v7;  // [sp-0x310]
    struct_0 *v8;  // [sp-0x308], Other Possible Types: unsigned long long
    void* v9;  // [sp-0x300], Other Possible Types: unsigned short
    char v10;  // [sp-0x2fe]
    struct_0 *v11;  // [bp-0x2f8], Other Possible Types: unsigned long, unsigned long long, char
    struct_0 *v12;  // [sp-0x2f0], Other Possible Types: unsigned long long
    struct_0 *v13;  // [bp-0x2e8], Other Possible Types: struct struct_0 **, unsigned long, unsigned long long
    struct_0 *v14;  // [bp-0x2e7]
    struct_0 *v15;  // [bp-0x2e0], Other Possible Types: unsigned int, unsigned long long
    struct_0 *v16;  // [bp-0x2d8], Other Possible Types: struct struct_0 **, void*
    struct_0 *v17;  // [bp-0x2d7]
    struct_0 *v18;  // [sp-0x2d0], Other Possible Types: unsigned long long
    struct_0 *v19;  // [bp-0x2c8], Other Possible Types: char
    unsigned long long v20;  // [sp-0x2c0], Other Possible Types: unsigned short
    char v21;  // [sp-0x2be]
    unsigned long long v22;  // [sp-0x2b0]
    unsigned long long v23;  // [sp-0x2a8]
    unsigned long long v24;  // [sp-0x2a0]
    unsigned long long v25;  // [sp-0x298]
    char v26;  // [sp-0x290]
    unsigned long long v27;  // [sp-0x288]
    unsigned long long v28;  // [sp-0x278]
    unsigned long long v29;  // [sp-0x268]
    unsigned long long v30;  // [sp-0x260]
    char v31;  // [sp-0x258]
    unsigned short v32;  // [sp-0x24a]
    struct_0 *v33;  // [sp-0x248], Other Possible Types: unsigned long long
    struct_0 *v34;  // [sp-0x240], Other Possible Types: unsigned long long
    struct struct_0 **v35;  // [sp-0x238], Other Possible Types: unsigned long long
    unsigned long long v36;  // [sp-0x230]
    struct struct_0 **v37;  // [sp-0x228]
    char v38;  // [bp-0x227]
    unsigned long long v39;  // [sp-0x220]
    char v40;  // [bp-0x218]
    char v41;  // [bp-0x210]
    char v42;  // [bp-0x20f]
    char v43;  // [bp-0x20e]
    unsigned long long v44;  // [sp-0x200]
    struct struct_0 **v45;  // [sp-0x1f8], Other Possible Types: unsigned long, unsigned long long
    struct_0 *v46;  // [sp-0x1f0], Other Possible Types: unsigned long
    uint128_t v47[2];  // [bp-0x1e8], Other Possible Types: struct_0 *
    struct_0 *v48;  // [sp-0x1e0]
    struct_0 *v49;  // [sp-0x1d8]
    struct_0 *v50;  // [bp-0x1b8], Other Possible Types: unsigned long, unsigned long long
    struct_0 *v51;  // [sp-0x1b0]
    struct_0 *v52;  // [bp-0x1a8]
    unsigned long v53;  // [bp-0x190], Other Possible Types: unsigned short
    char v54;  // [bp-0x188]
    char v55;  // [bp-0x180]
    struct struct_0 **v56;  // [bp-0x178], Other Possible Types: char
    char v57;  // [bp-0x177]
    char v58;  // [bp-0x167]
    char v59;  // [bp-0x158]
    char v60;  // [bp-0x150]
    char v61;  // [bp-0x14f]
    char v62;  // [bp-0x14e]
    char v63;  // [bp-0x148]
    char v64;  // [bp-0x140]
    char v65;  // [bp-0x138]
    unsigned long long v66[2];  // [sp-0x130]
    unsigned long long v67[2];  // [sp-0x128]
    unsigned long long v68;  // [sp-0x120]
    unsigned long long v69;  // [sp-0x118]
    struct struct_0 **v70;  // [sp-0x110]
    struct struct_0 **v71;  // [sp-0x108]
    unsigned long long v72;  // [sp-0x100]
    struct_0 *v73;  // [sp-0xf8]
    char v74;  // [bp-0xf0]
    char v75;  // [bp-0xe8]
    char v76;  // [bp-0xe0]
    char v77;  // [bp-0xd8]
    char v78;  // [bp-0xd0]
    char v79;  // [bp-0xc8]
    char v80;  // [bp-0xc0]
    char v81;  // [bp-0xb0]
    char v82;  // [bp-0xa8]
    char v83;  // [bp-0x98]
    char v84;  // [bp-0x90]
    char v85;  // [bp-0x80]
    char v86;  // [bp-0x78]
    char v87;  // [bp-0x68]
    char v88;  // [bp-0x60]
    char v89;  // [bp-0x50]
    char v90;  // [bp-0x48]
    char v91;  // [bp-0x38]
    struct_0 *v93;  // xmm0
    int v94;  // ymm0
    int v95;  // ymm0
    struct_0 *v96;  // xmm1
    int v97;  // ymm1
    int v98;  // ymm1
    struct_0 *v99;  // xmm2
    int v100;  // ymm2
    int v101;  // ymm2
    struct_0 *v102;  // xmm3
    int v103;  // ymm3
    int v104;  // ymm3
    unsigned long long v105;  // rcx
    struct_0 *v106;  // rax
    unsigned long long v107[2];  // rax
    struct_0 *v108;  // r15
    int v109;  // ymm0
    int v110;  // ymm5
    int v111;  // ymm6
    int v112;  // ymm7
    int v113;  // ymm4
    unsigned long long v114;  // rbp
    struct_0 *v115;  // r15
    struct_0 *v116;  // r12
    struct_0 *v117;  // rbx
    struct_0 *v118;  // r14
    char v119;  // r13b
    char v120;  // al
    struct_0 *v121;  // xmm0
    struct_0 *v122;  // xmm1
    char v123;  // cl
    unsigned short v124;  // dx
    struct_0 *v125;  // xmm0
    int v126;  // ymm0
    struct_0 *v127;  // xmm1
    int v128;  // ymm1
    struct struct_0 **v129;  // al
    struct_0 *v130;  // xmm0
    struct_0 *v131;  // xmm1
    char v132;  // cl
    unsigned short v133;  // dx
    struct_0 *v134;  // xmm0
    struct_0 *v135;  // xmm1
    unsigned long long v136;  // r8
    unsigned long long v137;  // r9
    struct_5 *v139;  // rax
    unsigned long long v140;  // rcx
    struct_0 *v142;  // xmm0
    struct_0 *v143;  // xmm1
    struct_0 *v144;  // xmm0
    uint128_t v145[2];  // rax
    struct_0 *v147;  // xmm0
    struct_0 *v148;  // xmm1
    unsigned int v149;  // eax
    uint128_t v150[2];  // rbx
    struct_0 *v151;  // r15
    struct struct_1 **v152;  // rax
    struct_0 *v153;  // xmm0
    struct_0 *v154;  // xmm0
    struct_0 *v155;  // xmm0
    unsigned long long v156;  // rbx
    struct_2 *v157;  // r15
    struct struct_1 **v158;  // rax
    unsigned long long v159;  // rcx
    struct_0 *v160;  // xmm0
    unsigned long long v161;  // rax
    unsigned long long v162;  // rax
    struct_0 *v165;  // xmm0
    int v166;  // ymm0
    unsigned long long v167;  // rax
    struct_3 *v169;  // rsi
    char v170;  // cl
    struct_0 *v171;  // xmm0
    struct_3 *v172;  // rax
    struct struct_0 **v174;  // r15
    struct_0 *v176;  // xmm0
    struct_0 *v177;  // xmm0
    struct_0 *v178;  // rax
    struct_0 *v179;  // rax
    struct struct_0 **v180;  // r12
    struct_0 *v181;  // xmm0
    struct_0 *v182;  // rcx
    unsigned long long v183;  // rdx
    struct_0 *v184;  // xmm0
    struct struct_0 **v186;  // rax
    struct struct_0 **v187;  // rcx
    struct_0 *v188;  // xmm0
    struct_0 *v189;  // xmm1
    struct_0 *v190;  // xmm2
    struct_0 *v191;  // xmm2
    struct_0 *v192;  // xmm3
    struct_0 *v193;  // xmm3
    struct_0 *v194;  // xmm4
    int v195;  // xmm4
    struct_0 *v196;  // xmm4
    struct_0 *v197;  // xmm4
    struct_0 *v198;  // xmm2
    int v199;  // xmm2
    struct_0 *v200;  // xmm2
    struct_0 *v201;  // xmm2
    struct_0 *v202;  // xmm4
    struct_0 *v203;  // xmm2
    struct struct_0 **v204;  // rdx
    struct struct_0 **v206;  // rax
    struct_0 *v207;  // xmm1
    int v208;  // xmm1
    struct struct_0 **v209;  // rcx
    unsigned long long v210;  // rdx
    struct_0 *v211;  // xmm0
    struct_0 *v212;  // xmm0
    struct struct_0 **v213;  // rsi
    struct_0 *v214;  // xmm0
    unsigned long long v216;  // rsi
    unsigned long long v217;  // rdx
    struct struct_1 **v218;  // rax
    struct_0 *v219;  // rdx
    unsigned long long v220;  // rsi
    struct_3 *v221;  // rax
    unsigned long long v222;  // rbx
    struct_2 *v223;  // r15
    struct struct_1 **v224;  // rax
    unsigned long long v225;  // rbx
    struct_0 *v226;  // rax
    unsigned long long v227;  // rbx
    struct_0 *v228;  // rax
    unsigned long long v229;  // rax
    unsigned long long v230;  // r12
    struct_2 *v231;  // r13
    struct struct_1 **v232;  // rax
    struct_3 *v233;  // rax
    unsigned long long v234;  // r12
    struct_2 *v235;  // r13
    struct struct_1 **v236;  // rax
    struct_0 *v237;  // [sp-0x1c9]
    struct_0 *v238;  // [sp-0x199]

    v93 = *((int128_t *)&a1[0]);
    v95 = v94 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93;
    v96 = *((int128_t *)&a1[2]);
    v98 = v97 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v96;
    v99 = *((int128_t *)&a1[4]);
    v101 = v100 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v99;
    v102 = *((int128_t *)&a1[6]);
    v104 = v103 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v102;
    v19 = v102;
    v16 = v99;
    v13 = v96;
    v11 = v93;
    v71 = &v11;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h1a8ec3febed40c9a(&v63, &v11, a2);
    v105 = *((long long *)&v65);
    if (!(a0->field_3a == 1) || !(v105 >= 2))
    {
        v107 = *((long long *)&v64);
        v66[0] = v107;
        v67[0] = v107;
        v68 = *((long long *)&v63);
        v69 = &v107[v105];
        if (v105)
        {
            v72 = &a0->field_20;
            v70 = &v13;
            do
            {
                v67[0] = v107 + 1;
                v114 = v107[0];
                v44 = v107[1];
                std::path::Path::components::h4f3217acf0fc8653(&v33, v114, v107[1]);
                std::path::Path::components::h4f3217acf0fc8653(&v54, "-: \ncrcbsd", 1);
                v115 = v33;
                v116 = v34;
                v117 = *((long long *)&v54);
                v118 = *((long long *)&v55);
                if (v116 != v118)
                {
                    v119 = (char)v35;
                }
                else
                {
                    v119 = (char)v35;
                    if (v41 == v60 && v42 == 2 && v61 == 2)
                    {
                        if (v119 != 6)
                        {
                            v120 = v56;
                            if (v120 == 6)
                            {
                                if (v119 < 3)
                                    goto LABEL_4f8401;
                            }
                            else
                            {
                                if (!(!(v120 < 3 ^ v119 < 3)))
                                    goto LABEL_4f8401;
                            }
                        }
                        else if ((char)v56 <= 2)
                        {
                            goto LABEL_4f8433;
                        }
                        if (!(!(_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8b34d8993ad0add6(v115, v116, v117, v116) & 255 & 255 & 255)))
                            goto LABEL_4f8525;
                    }
                }
                if (v119 == 6)
                    goto LABEL_4f8433;
LABEL_4f8401:
                v238 = *((long long *)&v40);
                v121 = *((int128_t *)&v35);
                v109 = v109 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v121;
                v122 = *((int128_t *)&v38);
                v98 = v98 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v122;
                v52 = v122;
                v50 = v121;
LABEL_4f8433:
                v123 = v43;
                v124 = *((short *)&v41);
                v0 = v115;
                v1 = v116;
                v2 = 6;
                v8 = v238;
                v125 = *((int128_t *)&v50);
                v126 = v109 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v125;
                v127 = *((int128_t *)&v52);
                v128 = v98 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v127;
                v6 = v127;
                v3 = v125;
                v9 = v124;
                v10 = v123;
                v129 = (char)v56;
                if (v13 != 6)
                {
                    v237 = *((long long *)&v59);
                    v130 = *((int128_t *)&v57);
                    v126 = v126 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v130;
                    v131 = *((int128_t *)&v58);
                    v128 = v128 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v131;
                    v49 = v131;
                    v47 = v130;
                }
                v132 = v62;
                v133 = *((short *)&v60);
                v11 = v117;
                v12 = v118;
                v13 = v129;
                v19 = v237;
                v134 = *((int128_t *)&v47);
                v109 = v126 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v134;
                v135 = *((int128_t *)&v49);
                v98 = v128 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v135;
                v17 = v135;
                v14 = v134;
                v20 = v133;
                v21 = v132;
                if ((char)core::iter::traits::iterator::Iterator::eq_by::h9c926603090ea0c5(&v0, &v11, v20, v21, v136, v137))
                {
LABEL_4f8525:
                    v139 = __rust_alloc(8, 8);
                    if (!v139)
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                    *((long long *)&v139->field_0) = std::io::stdio::stdin::h7215cc131abb55d8();
                    v140 = &g_6c7750;
                    goto LABEL_4f8730;
                    goto LABEL_4f8730;
                }
                else
                {
                    if ((char)std::path::Path::is_dir::h9ac0db933706da51(v114, v44))
                    {
                        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h23f884a6321ac4a7(&v11, 0x2000, v219);
                        v139 = __rust_alloc(40, 8);
                        if (!v139)
                            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                        v139->field_20 = *((long long *)((char *)&(&v14)[1] + 7));
                        v142 = *((int128_t *)&v11);
                        v109 = v109 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v142;
                        v143 = *((int128_t *)&v13);
                        v98 = v98 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v143;
                        *((struct_0 **)&v139->field_10) = v143;
                        *((struct_0 **)&v139->field_0) = v142;
                        v140 = &g_6c76f8;
                    }
                    else
                    {
                        std::fs::File::open::hbfa1402203b032e3(&v47, v114, v44);
                        if (!(int)v47)
                        {
                            v139 = __rust_alloc(4, 4);
                            if (!v139)
                                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                            v139->field_0 = *((int *)((char *)&v47 + 4));
                            v140 = &g_6c7670;
                        }
                        else
                        {
                            *((double *)&v50) = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h1f3b2191af63415d(v48, v114, v44);
                            uucore::mods::error::set_exit_code::h0565497d88d725e1();
                            v33 = uucore::util_name::h359eff083fe53467();
                            v34 = v219;
                            v0 = &v33;
                            v1 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he27513d365b32725;
                            v2 = &v50;
                            v4 = &_$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h8015ce4856dd5853;
                            v11 = &g_6c76c8.field_0;
                            v12 = 3;
                            v16 = 0;
                            v13 = &v0;
                            v15 = 2;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v11, v220, v219);
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::ha5d5218b753bcbd6(v50);
                            continue;
                        }
                    }
LABEL_4f8730:
                    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h085cd045337a0ec3(&v54, 0x2000, v139, v140);
                    if ((char)std::path::Path::is_dir::h9ac0db933706da51(v114, v44))
                    {
                        v0 = v114;
                        v1 = v44;
                        v33 = &v0;
                        v34 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                        v11 = &g_6c7910.field_0;
                        v12 = 2;
                        v16 = 0;
                        v13 = &v33;
                        v15 = 1;
                        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v80, &v11);
                        v15 = 1;
                        v144 = *((int128_t *)&v80);
                        v11 = v144;
                        v13 = *((long long *)&v81);
                        v145 = __rust_alloc(32, 8);
                        if (!v145)
                            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                        v147 = *((int128_t *)&v11);
                        v109 = v95 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v144 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v147;
                        v148 = *((int128_t *)&v13);
                        v98 = v98 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v148;
                        *((struct_0 **)&v145[1]) = v148;
                        *((struct_0 **)&v145[0]) = v147;
                        *((uint128_t *[2])&v47[0]) = v145;
                        v48 = &g_6c7968.field_0;
                        uucore::mods::error::set_exit_code::h0565497d88d725e1();
                        v33 = uucore::util_name::h359eff083fe53467();
                        v34 = v219;
                        v0 = &v33;
                        v1 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he27513d365b32725;
                        v2 = &v47;
                        v4 = &_$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hcc4aa3174c86439f;
                        v11 = &g_6c76c8.field_0;
                        v12 = 3;
                        v16 = 0;
                        v13 = &v0;
                        v15 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v11, v220, v219);
                        v150 = v47;
                        v151 = v48;
                        if (v151->field_0)
                            v152(v150);
                        if (v151->padding_8)
                            __rust_dealloc(v150);
                        if (*((long long *)&v55))
                            __rust_dealloc(*((long long *)&v54));
                        v156 = *((long long *)&(&v58)[7]);
                        v157 = *((long long *)&(&v58)[15]);
                        v158 = v157->field_0;
                        if (v158)
                        {
                            v158(v156);
                            goto LABEL_4f90ba;
                        }
                        goto LABEL_4f90ba;
                    }
                    uucore::features::checksum::digest_reader::h23616c096fcb641f(&v11, v72, &v54, 0, a0->field_30);
                    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hd1dd49fd0d4c43f1(&v0, &v11);
                    v108 = v1;
                    if (v50 == 0x8000000000000000)
                    {
LABEL_4f9920:
                        if (*((long long *)&v55))
                            __rust_dealloc(*((long long *)&v54));
                        v230 = *((long long *)&(&v58)[7]);
                        v231 = *((long long *)&(&v58)[15]);
                        if (v231->field_0)
                            v232(v230);
                        if (v231->field_8)
                            __rust_dealloc(v230);
                        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::haeb0af3911426116(v66);
                        goto LABEL_4f827c;
                    }
                    v50 = v0;
                    v51 = v108;
                    v52 = &v2;
                    v73 = v4;
                    switch (v149)
                    {
                    case 0:
                        v49 = v52;
                        v47 = v50;
                        v48 = v51;
                        break;
                    case 2:
                        if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8b34d8993ad0add6(a0->field_10, a0->field_18, "crcbsd", 3) || (char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8b34d8993ad0add6(a0->field_10, a0->field_18, "sysvCoreTextSlimm", 4) || (char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8b34d8993ad0add6(a0->field_10, a0->field_18, "bsd", 3))
                        {
                            v49 = v52;
                            v153 = *((int128_t *)&v50);
                            v95 = v95 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v153;
                            v47 = v153;
                            break;
                        }
                        else
                        {
                            v35 = &g_6c7800->field_0;
                            v154 = *((int128_t *)&g_6c77f0);
                            v33 = v154;
                            v13 = v52;
                            v155 = *((int128_t *)&v50);
                            v11 = v155;
                            _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$hex..FromHex$GT$::from_hex::h313ce0937a58fa63(&v0, &v11, v219);
                            if (v0 == 0x8000000000000000)
                            {
                                *((int128_t *)&v11) = *((int128_t *)&v1);
                                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                            }
                            v159 = v2;
                            v13 = &v2;
                            v160 = *((int128_t *)&v0);
                            v95 = v95 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v154 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v155 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v160;
                            v11 = v160;
                            data_encoding::Encoding::encode::h1e562fe871d15868(&v47, &v33, v12, v159);
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he6cb72440aee0566();
                            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd7acbc74dd17aa1a(&v11);
                            if (v33 != 0x8000000000000000)
                            {
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he6cb72440aee0566();
                                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd7acbc74dd17aa1a(&v33);
                            }
                            break;
                        }
                    default:
                        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8b34d8993ad0add6(a0->field_10, a0->field_18, "crcbsd", 3))
                        {
                            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8b34d8993ad0add6(a0->field_10, a0->field_18, "sysvCoreTextSlimm", 4) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8b34d8993ad0add6(a0->field_10, a0->field_18, "bsd", 3))
                            {
                                v13 = v52;
                                *((int128_t *)&v11) = *((int128_t *)&v50);
                                _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$hex..FromHex$GT$::from_hex::h313ce0937a58fa63(&v0, &v11, v219);
                                if (v0 == 0x8000000000000000)
                                {
                                    *((int128_t *)&v11) = *((int128_t *)&v1);
                                    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                                }
                                v13 = v2;
                                *((int128_t *)&v11) = *((int128_t *)&v0);
LABEL_4f98b4:
                                v0 = std::io::stdio::stdout::h077da66234850927();
                                v229 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(&v0, v12, v13);
                                v108 = (!v229 ? uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h1e47f2ada1a82a7a(v229) : 0);
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he6cb72440aee0566();
                                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd7acbc74dd17aa1a(&v11);
                                goto LABEL_4f9920;
                            }
                            v227 = (unsigned int)core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u16$GT$::from_str::haf22888ecbeba9aa(v51, v52);
                            if (((char)v227 & 1))
                            {
                                v11 = v227 >> 8;
                                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                            }
                            alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hf62a81ff83705e7c(&v11, 2, 0);
                            if (!v11)
                            {
                                v228 = v13;
                                *((unsigned short *)&v228->field_0) = __ROL__((unsigned short)((v227 & 4294967295) >> 16 & 4294967295), 8);
                                v11 = v12;
                                v12 = v228;
                                v13 = 2;
LABEL_4f98af:
                                goto LABEL_4f98b4;
                            }
                        }
                        else
                        {
                            v225 = core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u32$GT$::from_str::hecf13f2b24d2aba7(v51, v52);
                            if (((char)v225 & 1))
                            {
                                v11 = v225 >> 8;
                                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                            }
                            alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hf62a81ff83705e7c(&v11, 4, 0);
                            if (!v11)
                            {
                                v226 = v13;
                                *((unsigned int *)&v226->field_0) = __buildin_bswap32(v225 >> 32);
                                v11 = v12;
                                v12 = v226;
                                v13 = 4;
                                goto LABEL_4f98af;
                            }
                        }
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    }
                    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8b34d8993ad0add6(a0->field_10, a0->field_18, "sysvCoreTextSlimm", 4))
                    {
                        v161 = core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u16$GT$::from_str::haf22888ecbeba9aa(v48, v49);
                        if (((char)v161 & 1))
                        {
                            v11 = v161 >> 8;
                            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                        }
                        v53 = (v161 & 4294967295) >> 16 & 4294967295;
                        v45 = uucore::features::sum::div_ceil::h779a15ddc1fadc0e(v73, a0->field_30);
                        *((int *)&v33) = (1 ? 1 : " * (Try ' --help' for more information.\n");
                        v34 = 1 ^ 1;
                        v11 = &v53;
                        v12 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hc16e9a303f8fca40;
                        v13 = &v45;
                        v15 = &core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                        v16 = &v33;
                        v18 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he27513d365b32725;
                        v0 = &g_6c7890.field_0;
                        v1 = 3;
                        v5 = 0;
                        v2 = &v11;
                        v4 = 3;
                        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v82, &v0);
                        v165 = *((int128_t *)&v82);
                        v166 = v95 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v165;
                        v11 = v165;
                        v167 = *((long long *)&v83);
                        goto LABEL_4f8f10;
                    }
                    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8b34d8993ad0add6(a0->field_10, a0->field_18, "bsd", 3))
                    {
                        v162 = core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u16$GT$::from_str::haf22888ecbeba9aa(v48, v49);
                        if (((char)v162 & 1))
                        {
                            v11 = v162 >> 8;
                            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                        }
                        v32 = (v162 & 4294967295) >> 16 & 4294967295;
                        v53 = uucore::features::sum::div_ceil::h779a15ddc1fadc0e(v73, a0->field_30);
                        *((int *)&v45) = (1 ? 1 : " * (Try ' --help' for more information.\n");
                        v46 = 1 ^ 1;
                        v0 = &v32;
                        v1 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hc16e9a303f8fca40;
                        v2 = &v53;
                        v4 = &core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                        v5 = &v45;
                        v7 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he27513d365b32725;
                        v8 = 5;
                        v9 = 0;
                        v11 = 2;
                        v13 = 1;
                        v15 = 3;
                        v16 = 0;
                        v18 = 34359738400;
                        v19 = 3;
                        v20 = 2;
                        v22 = 1;
                        v23 = 3;
                        v24 = 1;
                        v25 = 32;
                        v26 = 3;
                        v27 = 2;
                        v28 = 2;
                        v29 = 2;
                        v30 = 32;
                        v31 = 3;
                        v33 = &g_6c7890.field_0;
                        v34 = 3;
                        v37 = &v11;
                        v39 = 3;
                        v35 = &v0;
                        v36 = 4;
                        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v84, &v33);
                        v176 = *((int128_t *)&v84);
                        v166 = v95 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v176;
                        v11 = v176;
                        v167 = *((long long *)&v85);
                        goto LABEL_4f8f10;
                    }
                    else if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8b34d8993ad0add6(a0->field_10, a0->field_18, "crcbsd", 3))
                    {
                        v169 = a0;
                        v170 = v169->field_38;
                        if (!(v170 & (char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8b34d8993ad0add6(a0->field_10, a0->field_18, "blake2b * (Try ' --help' for more information.\n", 7)))
                        {
                            if (!v170)
                            {
                                *((int *)&v33) = (!a0->field_39 ? " * (Try ' --help' for more information.\n" : "* (Try ' --help' for more information.\n");
                                v34 = 1;
                                v0 = &v47;
                                v1 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v2 = &v33;
                                v4 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he27513d365b32725;
                                v11 = &g_6c7820.field_0;
                                v12 = 2;
                                v16 = 0;
                                v13 = &v0;
                                v15 = 2;
                                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v90, &v11);
                                v181 = *((int128_t *)&v90);
                                v166 = v95 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v181;
                                v11 = v181;
                                v13 = *((long long *)&v91);
                                v178 = 1;
LABEL_4f8f1a:
                                v182 = 0;
                                v183 = 0;
                                goto LABEL_4f8f1e;
                            }
                            v172 = a0;
                            v174 = v172->field_18;
                            alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hf62a81ff83705e7c(&v11, v174, 0);
                            if (v11)
                                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                            v180 = v13;
                            memcpy(v180, v172->field_10, v174);
                            if (!v174)
                            {
LABEL_4f95e4:
                                v0 = v12;
                                v1 = v180;
                                v2 = v174;
                                v45 = &v0;
                                v46 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v11 = &g_6c7840.field_0;
                                v12 = 2;
                                v16 = 0;
                                v13 = &v45;
                                v15 = 1;
                                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v33, &v11);
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he6cb72440aee0566();
                                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd7acbc74dd17aa1a(&v0);
                                v211 = *((int128_t *)&v33);
                                v0 = v211;
                                v2 = v35;
                                v33 = &v47;
                                v34 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v11 = &g_6c7860.field_0;
                                v12 = 1;
                                v16 = 0;
                                v13 = &v33;
                                v15 = 1;
                                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v77, &v11);
                                v212 = *((int128_t *)&v0);
                                v166 = v95 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v211 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v212;
                                v11 = v212;
                                v13 = v2;
                                v182 = *((long long *)&v77);
                                v178 = *((long long *)&v78);
                                v183 = *((long long *)&v79);
LABEL_4f9714:
LABEL_4f8f1e:
                                v213 = v13;
                                v35 = v13;
                                v214 = *((int128_t *)&v11);
                                v109 = v166 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v214;
                                v33 = v214;
                                v0 = v182;
                                v1 = v178;
                                v2 = v183;
                                v45 = &v33;
                                v46 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v11 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654.field_0;
                                v12 = 1;
                                v16 = 0;
                                v13 = &v45;
                                v15 = 1;
                                std::io::stdio::_print::he918bceb0c89db46(&v11, v213, v183);
                                v45 = &v0;
                                v46 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v11 = &g_6c78f0;
                                v12 = 2;
                                v16 = 0;
                                v13 = &v45;
                                v15 = 1;
                                std::io::stdio::_print::he918bceb0c89db46(&v11, v216, v217);
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he6cb72440aee0566();
                                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd7acbc74dd17aa1a(&v0);
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he6cb72440aee0566();
                                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd7acbc74dd17aa1a(&v33);
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he6cb72440aee0566();
                                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd7acbc74dd17aa1a(&v47);
                                if (*((long long *)&v55))
                                    __rust_dealloc(*((long long *)&v54));
                                v156 = *((long long *)&(&v58)[7]);
                                v157 = *((long long *)&(&v58)[15]);
                                v218 = v157->field_0;
                                if (v218)
                                    v218(v156);
LABEL_4f90ba:
                                if (v157->field_8)
                                    __rust_dealloc(v156);
                            }
                            else
                            {
                                if (v174 < 8)
                                {
LABEL_4f95ae:
                                    do
                                    {
                                        v210 = *((char *)v209);
                                        *((char *)v209) = (char)(((v210 - 97 & 4294967295 & 255 & 255) < 26) * 32) ^ (char)v210;
                                        v209 = (char *)v209 + 1;
                                    } while (v209 != v180 + v174);
                                    goto LABEL_4f95e4;
                                }
                                else
                                {
                                    if (v174 < 32)
                                    {
                                        v186 = 0;
                                    }
                                    else
                                    {
                                        v186 = v174 & -0x20;
                                        v187 = 0;
                                        v110 = v110 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 212176064080114571335986519928043708319;
                                        v111 = v111 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 33361016364797888574840647787428256025;
                                        v112 = v112 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 42702100946941297375796029167908167712;
                                        do
                                        {
                                            v188 = *((int128_t *)(v180 + v187));
                                            v95 = v95 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v188;
                                            v189 = *((int128_t *)(v180 + v187 + 16));
                                            v98 = v98 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v189;
                                            v190 = v188;
                                            v191 = AddV(v190, 212176064080114571335986519928043708319);
                                            v192 = v189;
                                            v193 = AddV(v192, 212176064080114571335986519928043708319);
                                            v104 = v104 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v192 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v193;
                                            v194 = v191;
                                            v195 = MinV(v194, 33361016364797888574840647787428256025);
                                            v196 = CmpEQV(v195, v191);
                                            v197 = v196 & 42702100946941297375796029167908167712;
                                            v198 = v193;
                                            v199 = MinV(v198, 33361016364797888574840647787428256025);
                                            v200 = CmpEQV(v199, v193);
                                            v201 = v200 & 42702100946941297375796029167908167712;
                                            v202 = v197 ^ v188;
                                            v113 = v113 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v194 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v195 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v196 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v197 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v202;
                                            v203 = v201 ^ v189;
                                            v101 = v101 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v190 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v191 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v198 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v199 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v200 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v201 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v203;
                                            *((struct_0 **)(v180 + v187)) = v202;
                                            *((struct_0 **)(v180 + v187 + 16)) = v203;
                                            v187 += 4;
                                        } while (v186 != v187);
                                        if (v174 == v186)
                                            goto LABEL_4f95e4;
                                        if (!((char)v174 & 24))
                                        {
                                            v206 = v186 + v180;
                                            goto LABEL_4f95ae;
                                        }
                                    }
                                    v204 = v174 & -8;
                                    v104 = v104 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 11502087481254191007;
                                    v113 = v113 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 1880844493789993498;
                                    v110 = v110 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 2314885530818453536;
                                    do
                                    {
                                        v95 = v95 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | *((long long *)(v180 + v186));
                                        v207 = (uint128_t)v95;
                                        v208 = AddV(v207, 11502087481254191007);
                                        v98 = v98 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v207 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v208;
                                        v101 = v101 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v208 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MaxV(v208, 1880844493789993498)) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | CmpEQV(MaxV(v208, 1880844493789993498), v208) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ~(CmpEQV(MaxV(v208, 1880844493789993498), v208)) & 2314885530818453536 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ~(CmpEQV(MaxV(v208, 1880844493789993498), v208)) & 2314885530818453536 ^ (uint128_t)v95;
                                        *((unsigned long long *)(v180 + v186)) = (unsigned long long)v101;
                                        v186 += 1;
                                    } while (v204 != v186);
                                    if (v174 == v204)
                                        goto LABEL_4f95e4;
                                    goto LABEL_4f95ae;
                                }
                            }
                        }
                        else if (v169->field_0)
                        {
                            v33 = v169->field_8 * 8;
                            v0 = &v33;
                            v1 = &core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                            v11 = &g_6c7870.field_0;
                            v12 = 2;
                            v16 = 0;
                            v13 = &v0;
                            v15 = 1;
                            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v88, &v11);
                            v177 = *((int128_t *)&v88);
                            v95 = v95 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v177;
                            v0 = v177;
                            v2 = *((long long *)&v89);
                            goto LABEL_4f9359;
                        }
                        else
                        {
                            alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hf62a81ff83705e7c(&v11, 9, 0);
                            if (!v11)
                            {
                                v179 = v13;
                                v179->field_0 = 2333482830128041026;
                                v179->padding_8[0] = 40;
                                v0 = v12;
                                v1 = v179;
                                v2 = 9;
LABEL_4f9359:
                                v33 = &v47;
                                v34 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v11 = &g_6c7860.field_0;
                                v12 = 1;
                                v16 = 0;
                                v13 = &v33;
                                v15 = 1;
                                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v74, &v11);
                                v184 = *((int128_t *)&v0);
                                v166 = v95 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v184;
                                v11 = v184;
                                v13 = v2;
                                v182 = *((long long *)&v74);
                                v178 = *((long long *)&v75);
                                v183 = *((long long *)&v76);
                                goto LABEL_4f9714;
                            }
                        }
                    }
                    else
                    {
                        *((int *)&v33) = (1 ? 1 : " * (Try ' --help' for more information.\n");
                        v34 = 1 ^ 1;
                        v11 = &v47;
                        v12 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v13 = &v73;
                        v15 = &core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                        v16 = &v33;
                        v18 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he27513d365b32725;
                        v0 = &g_6c7890.field_0;
                        v1 = 3;
                        v5 = 0;
                        v2 = &v11;
                        v4 = 3;
                        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v86, &v0);
                        v171 = *((int128_t *)&v86);
                        v166 = v95 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v171;
                        v11 = v171;
                        v167 = *((long long *)&v87);
LABEL_4f8f10:
                        v13 = v167;
                        v178 = 1;
                        goto LABEL_4f8f1a;
                    }
                }
            } while ((v107 = v67, v107 != v69));
        }
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::haeb0af3911426116(v66);
        v221 = a0;
        v222 = v221->field_20;
        v223 = v221->field_28;
        if (v223->field_0)
            v224(v222);
        if (!v223->field_8)
            return 0;
        __rust_dealloc(v222);
    }
    else
    {
        v11 = 0x8000000000000000;
        v106 = __rust_alloc(24, 8);
        if (!v106)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v108 = v106;
        v108->field_10 = v13;
        *((int128_t *)&v108->field_0) = *((int128_t *)&v11);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he6cb72440aee0566();
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9278caf5fe72a763(&v63);
LABEL_4f827c:
        v233 = a0;
        v234 = v233->field_20;
        v235 = v233->field_28;
        if (v235->field_0)
            v236(v234);
        if (v235->field_8)
        {
            __rust_dealloc(v234);
            return v108;
        }
        return v108;
    }
}
