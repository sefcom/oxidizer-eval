long long uu_cksum::cksum::h270f0d3ee6f4e986(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    int v0;  // [sp-0x338], Other Possible Types: unsigned long
    unsigned long v1;  // [sp-0x330]
    char v2;  // [sp-0x328], Other Possible Types: unsigned long
    int v3;  // [bp-0x327]
    unsigned long v4;  // [sp-0x320]
    unsigned long v5;  // [bp-0x318]
    int v6;  // [bp-0x317]
    unsigned long v7;  // [sp-0x310]
    unsigned long v8;  // [sp-0x308]
    unsigned long v9;  // [sp-0x300], Other Possible Types: unsigned short
    char v10;  // [sp-0x2fe]
    int v11;  // [bp-0x2f8], Other Possible Types: char, unsigned long
    unsigned long v12;  // [sp-0x2f0]
    char v13;  // [bp-0x2e8], Other Possible Types: unsigned long
    int v14;  // [bp-0x2e7]
    unsigned int v15;  // [bp-0x2e0], Other Possible Types: unsigned long
    unsigned long v16;  // [bp-0x2d8]
    int v17;  // [bp-0x2d7]
    unsigned long v18;  // [sp-0x2d0]
    char v19;  // [bp-0x2c8], Other Possible Types: unsigned long
    unsigned long v20;  // [sp-0x2c0], Other Possible Types: unsigned short
    char v21;  // [sp-0x2be]
    unsigned long v22;  // [sp-0x2b0]
    unsigned long v23;  // [sp-0x2a8]
    unsigned long v24;  // [sp-0x2a0]
    unsigned long v25;  // [sp-0x298]
    char v26;  // [sp-0x290]
    unsigned long v27;  // [sp-0x288]
    unsigned long v28;  // [sp-0x278]
    unsigned long v29;  // [sp-0x268]
    unsigned long v30;  // [sp-0x260]
    char v31;  // [sp-0x258]
    unsigned short v32;  // [sp-0x24a]
    int v33;  // [sp-0x248], Other Possible Types: unsigned long
    unsigned long v34;  // [sp-0x240]
    unsigned long v35;  // [sp-0x238]
    unsigned long v36;  // [sp-0x230]
    unsigned long v37;  // [sp-0x228]
    unsigned long v38;  // [bp-0x227]
    unsigned long v39;  // [sp-0x220]
    char v40;  // [bp-0x218]
    char v41;  // [bp-0x210]
    char v42;  // [bp-0x20f]
    char v43;  // [bp-0x20e]
    unsigned long v44;  // [sp-0x200]
    unsigned long v45;  // [sp-0x1f8]
    unsigned long v46;  // [sp-0x1f0]
    int v47;  // [bp-0x1e8], Other Possible Types: unsigned long
    unsigned long v48;  // [sp-0x1e0]
    int v49;  // [sp-0x1d8], Other Possible Types: unsigned long
    int v50;  // [bp-0x1b8], Other Possible Types: unsigned long
    unsigned long v51;  // [sp-0x1b0]
    int v52;  // [bp-0x1a8], Other Possible Types: unsigned long
    unsigned long v53;  // [bp-0x190], Other Possible Types: unsigned short
    char v54;  // [bp-0x188]
    char v55;  // [bp-0x180]
    char v56;  // [bp-0x178]
    char v57;  // [bp-0x177]
    char v58;  // [bp-0x167]
    char v59;  // [bp-0x158]
    char v60;  // [bp-0x150]
    char v61;  // [bp-0x14f]
    char v62;  // [bp-0x14e]
    char v63;  // [bp-0x148]
    char v64;  // [bp-0x140]
    char v65;  // [bp-0x138]
    unsigned long v66;  // [sp-0x130]
    unsigned long v67;  // [sp-0x128]
    unsigned long v68;  // [sp-0x120]
    unsigned long v69;  // [sp-0x118]
    unsigned long v70;  // [sp-0x110]
    unsigned long v71;  // [sp-0x108]
    unsigned long v72;  // [sp-0x100]
    unsigned long v73;  // [sp-0xf8]
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
    unsigned long v93;  // rcx
    unsigned long v94;  // rax
    unsigned long v95;  // rax
    unsigned long v96;  // r15
    int v97;  // ymm0
    int v98;  // ymm1
    int v99;  // ymm5
    int v100;  // ymm6
    int v101;  // ymm7
    int v102;  // ymm2
    int v103;  // ymm3
    int v104;  // ymm4
    unsigned long v105;  // rbp
    unsigned long v106;  // r15
    unsigned long v107;  // r12
    unsigned long v108;  // rbx
    unsigned long v109;  // r14
    char v110;  // r13b
    char v111;  // al
    int v112;  // xmm0
    int v113;  // xmm1
    char v114;  // cl
    unsigned short v115;  // dx
    int v116;  // xmm0
    int v117;  // ymm0
    int v118;  // xmm1
    int v119;  // ymm1
    char v120;  // al
    int v121;  // xmm0
    int v122;  // xmm1
    char v123;  // cl
    unsigned short v124;  // dx
    int v125;  // xmm0
    int v126;  // xmm1
    unsigned long v127;  // r8
    unsigned long v128;  // r9
    unsigned long v130;  // rax
    unsigned long v131;  // rcx
    int v133;  // xmm0
    int v134;  // ymm0
    int v135;  // xmm1
    int v136;  // xmm0
    unsigned long v137;  // rax
    int v139;  // xmm0
    int v140;  // xmm1
    unsigned int v141;  // eax
    unsigned long v142;  // rbx
    unsigned long v143;  // r15
    unsigned long v144;  // rax
    int v145;  // xmm0
    int v146;  // xmm0
    int v147;  // xmm0
    unsigned long v148;  // rbx
    unsigned long v149;  // r15
    unsigned long v150;  // rax
    unsigned long v151;  // rcx
    int v152;  // xmm0
    unsigned long v153;  // rax
    unsigned long v154;  // rax
    int v157;  // xmm0
    int v158;  // ymm0
    unsigned long v159;  // rax
    unsigned long v161;  // rsi
    char v162;  // cl
    int v163;  // xmm0
    unsigned long v164;  // rax
    unsigned long v166;  // r15
    int v168;  // xmm0
    int v169;  // xmm0
    unsigned long v170;  // rax
    unsigned long v171;  // rax
    unsigned long v172;  // r12
    int v173;  // xmm0
    unsigned long v174;  // rcx
    unsigned long v175;  // rdx
    int v176;  // xmm0
    unsigned long v178;  // rax
    unsigned long v179;  // rcx
    int v180;  // xmm0
    int v181;  // xmm1
    int v182;  // xmm2
    int v183;  // xmm2
    int v184;  // xmm3
    int v185;  // xmm3
    int v186;  // xmm4
    int v187;  // xmm4
    int v188;  // xmm4
    int v189;  // xmm4
    int v190;  // xmm2
    int v191;  // xmm2
    int v192;  // xmm2
    int v193;  // xmm2
    int v194;  // xmm4
    int v195;  // xmm2
    unsigned long v196;  // rdx
    unsigned long v198;  // rax
    int v199;  // xmm1
    int v200;  // xmm1
    unsigned long v201;  // rcx
    unsigned long v202;  // rdx
    int v203;  // xmm0
    int v204;  // xmm0
    unsigned long v205;  // rsi
    int v206;  // xmm0
    unsigned long v208;  // rsi
    unsigned long v209;  // rdx
    unsigned long v210;  // rax
    unsigned long v211;  // rdx
    unsigned long v212;  // rsi
    unsigned long v213;  // rax
    unsigned long v214;  // rbx
    unsigned long v215;  // r15
    unsigned long v216;  // rax
    unsigned long v217;  // rbx
    unsigned long v218;  // rax
    unsigned long v219;  // rbx
    unsigned long v220;  // rax
    unsigned long v221;  // rax
    unsigned long v222;  // r12
    unsigned long v223;  // r13
    unsigned long v224;  // rax
    unsigned long v225;  // rax
    unsigned long v226;  // r12
    unsigned long v227;  // r13
    unsigned long v228;  // rax
    unsigned long v229;  // [sp-0x1c9]
    unsigned long v230;  // [sp-0x199]

    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h1c0f65d929d869ec(&v63, "-: \ncrcbsd", 1);
    v93 = *((long long *)&v65);
    if (*((char *)(a0 + 58)) == 1 && v93 >= 2)
    {
        v11 = 0x8000000000000000;
        v94 = __rust_alloc(24, 8);
        if (!v94)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v96 = v94;
        *((long long *)(v96 + 16)) = *((long long *)&v13);
        *((int128_t *)v96) = *((int128_t *)&v11);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he6cb72440aee0566();
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9278caf5fe72a763(&v63);
    }
    else
    {
        v95 = *((long long *)&v64);
        v66 = v95;
        v67 = v95;
        v68 = *((long long *)&v63);
        v69 = v93 * 16 + v95;
        if (!v93)
        {
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::haeb0af3911426116(&v66);
            v213 = a0;
            v214 = *((long long *)(v213 + 32));
            v215 = *((long long *)(v213 + 40));
            if (*((long long *)v215))
                v216(v214);
            if (!*((long long *)(v215 + 8)))
                return 0;
            __rust_dealloc(v214);
        }
        else
        {
            v72 = a0 + 32;
            v71 = &v13;
            v70 = &v11;
            do
            {
                v67 = v95 + 16;
                v105 = *((long long *)v95);
                v44 = *((long long *)(v95 + 8));
                std::path::Path::components::h4f3217acf0fc8653(&v33, v105, *((long long *)(v95 + 8)));
                std::path::Path::components::h4f3217acf0fc8653(&v54, "-: \ncrcbsd", 1);
                v106 = v33;
                v107 = v34;
                v108 = *((long long *)&v54);
                v109 = *((long long *)&v55);
                if (v107 != v109)
                {
                    v110 = v35;
                }
                else
                {
                    v110 = v35;
                    if (v41 == v60 && v42 == 2 && v61 == 2)
                    {
                        if (v110 != 6)
                        {
                            v111 = v56;
                            if (v111 == 6)
                            {
                                if (v110 < 3)
                                    goto LABEL_4f66e1;
                            }
                            else
                            {
                                if (!(!(v111 < 3 ^ v110 < 3)))
                                    goto LABEL_4f66e1;
                            }
                        }
                        else if (v56 <= 2)
                        {
                            goto LABEL_4f670f;
                        }
                        if (!(!(_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8b34d8993ad0add6(v106, v107, v108, v107) & 255 & 255 & 255)))
                            goto LABEL_4f6801;
                    }
                }
                if (v110 == 6)
                    goto LABEL_4f670f;
LABEL_4f66e1:
                v230 = *((long long *)&v40);
                v112 = *((int128_t *)&v35);
                v97 = v97 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v112;
                v113 = *((int128_t *)&v38);
                v98 = v98 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v113;
                v52 = v113;
                v50 = v112;
LABEL_4f670f:
                v114 = v43;
                v115 = *((short *)&v41);
                v0 = v106;
                v1 = v107;
                v2 = 6;
                v8 = v230;
                v116 = (int128_t)v50;
                v117 = v97 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v116;
                v118 = (int128_t)v52;
                v119 = v98 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v118;
                v6 = v118;
                v3 = v116;
                v9 = v115;
                v10 = v114;
                v120 = v56;
                if (v13 != 6)
                {
                    v229 = *((long long *)&v59);
                    v121 = *((int128_t *)&v57);
                    v117 = v117 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v121;
                    v122 = *((int128_t *)&v58);
                    v119 = v119 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v122;
                    v49 = v122;
                    v47 = v121;
                }
                v123 = v62;
                v124 = *((short *)&v60);
                v11 = v108;
                v12 = v109;
                v13 = v120;
                v19 = v229;
                v125 = (int128_t)v47;
                v97 = v117 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v125;
                v126 = (int128_t)v49;
                v98 = v119 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v126;
                v17 = v126;
                v14 = v125;
                v20 = v124;
                v21 = v123;
                if ((char)core::iter::traits::iterator::Iterator::eq_by::h9c926603090ea0c5(&v0, &v11, v20, v21, v127, v128))
                {
LABEL_4f6801:
                    v130 = __rust_alloc(8, 8);
                    if (!v130)
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                    *((long long *)v130) = std::io::stdio::stdin::h7215cc131abb55d8();
                    v131 = &g_6c7750;
                    goto LABEL_4f6a00;
                }
                else
                {
                    if ((char)std::path::Path::is_dir::h9ac0db933706da51(v105, v44))
                    {
                        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h23f884a6321ac4a7(&v11, 0x2000, v211);
                        v130 = __rust_alloc(40, 8);
                        if (!v130)
                            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                        *((long long *)(v130 + 32)) = (long long)(&v14)[15];
                        v133 = *((int128_t *)&v11);
                        v97 = v97 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v133;
                        v135 = *((int128_t *)&v13);
                        v98 = v98 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v135;
                        *((void*)(v130 + 16)) = v135;
                        *((void*)v130) = v133;
                        v131 = &g_6c76f8;
                    }
                    else
                    {
                        std::fs::File::open::hbfa1402203b032e3(&v47, v105, v44);
                        if (!(int)v47)
                        {
                            v130 = __rust_alloc(4, 4);
                            if (!v130)
                                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                            *((int *)v130) = (int)(&v47)[4];
                            v131 = &g_6c7670;
                        }
                        else
                        {
                            *((double *)&v50) = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h1f3b2191af63415d(v48, v105, v44);
                            uucore::mods::error::set_exit_code::h0565497d88d725e1();
                            v33 = uucore::util_name::h359eff083fe53467();
                            v34 = v211;
                            v0 = &v33;
                            v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he27513d365b32725;
                            v2 = &v50;
                            v4 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h8015ce4856dd5853;
                            v11 = &g_6c76c8;
                            v12 = 3;
                            v16 = 0;
                            v13 = &v0;
                            v15 = 2;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v11, v212, v211);
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::ha5d5218b753bcbd6(v50);
                            continue;
                        }
                    }
LABEL_4f6a00:
                    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h085cd045337a0ec3(&v54, 0x2000, v130, v131);
                    if ((char)std::path::Path::is_dir::h9ac0db933706da51(v105, v44))
                    {
                        v0 = v105;
                        v1 = v44;
                        v33 = &v0;
                        v34 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                        v11 = &g_6c7910;
                        v12 = 2;
                        v16 = 0;
                        v13 = &v33;
                        v15 = 1;
                        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v80, &v11);
                        v15 = 1;
                        v136 = *((int128_t *)&v80);
                        v11 = v136;
                        v13 = *((long long *)&v81);
                        v137 = __rust_alloc(32, 8);
                        if (!v137)
                            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                        v139 = (int128_t)v11;
                        v97 = v134 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v136 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v139;
                        v140 = *((int128_t *)&v13);
                        v98 = v98 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v140;
                        *((void*)(v137 + 16)) = v140;
                        *((void*)v137) = v139;
                        v47 = v137;
                        v48 = &g_6c7968;
                        uucore::mods::error::set_exit_code::h0565497d88d725e1();
                        v33 = uucore::util_name::h359eff083fe53467();
                        v34 = v211;
                        v0 = &v33;
                        v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he27513d365b32725;
                        v2 = &v47;
                        v4 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hcc4aa3174c86439f;
                        v11 = &g_6c76c8;
                        v12 = 3;
                        v16 = 0;
                        v13 = &v0;
                        v15 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v11, v212, v211);
                        v142 = v47;
                        v143 = v48;
                        if (*((long long *)v143))
                            v144(v142);
                        if (*((long long *)(v143 + 8)))
                            __rust_dealloc(v142);
                        if (*((long long *)&v55))
                            __rust_dealloc(*((long long *)&v54));
                        v148 = *((long long *)&(&v58)[7]);
                        v149 = *((long long *)&(&v58)[15]);
                        v150 = *((long long *)v149);
                        if (v150)
                        {
                            v150(v148);
                            goto LABEL_4f738a;
                        }
                        goto LABEL_4f738a;
                    }
                    uucore::features::checksum::digest_reader::h23616c096fcb641f(&v11, v72, &v54, 0, *((long long *)(a0 + 48)));
                    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::ha942508612078a94(&v0, &v11);
                    v96 = v1;
                    if (v50 == 0x8000000000000000)
                    {
LABEL_4f7bf0:
                        if (*((long long *)&v55))
                            __rust_dealloc(*((long long *)&v54));
                        v222 = *((long long *)&(&v58)[7]);
                        v223 = *((long long *)&(&v58)[15]);
                        if (*((long long *)v223))
                            v224(v222);
                        if (*((long long *)(v223 + 8)))
                            __rust_dealloc(v222);
                        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::haeb0af3911426116(&v66);
                        goto LABEL_4f654d;
                    }
                    v50 = v0;
                    v51 = v96;
                    v52 = *((long long *)&v2);
                    v73 = v4;
                    switch (v141)
                    {
                    case 0:
                        v49 = v52;
                        v47 = v50;
                        v48 = v51;
                        break;
                    case 2:
                        if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8b34d8993ad0add6(*((long long *)(a0 + 16)), *((long long *)(a0 + 24)), "crcbsd", 3) || (char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8b34d8993ad0add6(*((long long *)(a0 + 16)), *((long long *)(a0 + 24)), "sysvCoreTextSlimm", 4) || (char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8b34d8993ad0add6(*((long long *)(a0 + 16)), *((long long *)(a0 + 24)), "bsd", 3))
                        {
                            v49 = v52;
                            v145 = *((int128_t *)&v50);
                            v134 = v134 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v145;
                            v47 = v145;
                            break;
                        }
                        else
                        {
                            v35 = g_6c7800;
                            v146 = g_6c77f0;
                            v33 = v146;
                            v13 = v52;
                            v147 = *((int128_t *)&v50);
                            v11 = v147;
                            _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$hex..FromHex$GT$::from_hex::h313ce0937a58fa63(&v0, &v11, v211);
                            if (v0 == 0x8000000000000000)
                            {
                                *((int128_t *)&v11) = *((int128_t *)&v1);
                                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                            }
                            v151 = *((long long *)&v2);
                            v13 = *((long long *)&v2);
                            v152 = *((int128_t *)&v0);
                            v134 = v134 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v146 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v147 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v152;
                            v11 = v152;
                            data_encoding::Encoding::encode::h1e562fe871d15868(&v47, &v33, v12, v151);
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
                        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8b34d8993ad0add6(*((long long *)(a0 + 16)), *((long long *)(a0 + 24)), "crcbsd", 3))
                        {
                            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8b34d8993ad0add6(*((long long *)(a0 + 16)), *((long long *)(a0 + 24)), "sysvCoreTextSlimm", 4) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8b34d8993ad0add6(*((long long *)(a0 + 16)), *((long long *)(a0 + 24)), "bsd", 3))
                            {
                                v13 = v52;
                                *((int128_t *)&v11) = *((int128_t *)&v50);
                                _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$hex..FromHex$GT$::from_hex::h313ce0937a58fa63(&v0, &v11, v211);
                                if (v0 == 0x8000000000000000)
                                {
                                    *((int128_t *)&v11) = *((int128_t *)&v1);
                                    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                                }
                                v13 = *((long long *)&v2);
                                *((int128_t *)&v11) = *((int128_t *)&v0);
LABEL_4f7b84:
                                v0 = std::io::stdio::stdout::h077da66234850927();
                                v221 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(&v0, v12, v13);
                                v96 = (!v221 ? uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h1e47f2ada1a82a7a(v221) : 0);
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he6cb72440aee0566();
                                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd7acbc74dd17aa1a(&v11);
                                goto LABEL_4f7bf0;
                            }
                            v219 = (unsigned int)core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u16$GT$::from_str::haf22888ecbeba9aa(v51, v52);
                            if (((char)v219 & 1))
                            {
                                v11 = v219 >> 8;
                                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                            }
                            alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hf62a81ff83705e7c(&v11, 2, 0);
                            if (!v11)
                            {
                                v220 = *((long long *)&v13);
                                *((unsigned short *)v220) = __ROL__((unsigned short)((v219 & 4294967295) >> 16 & 4294967295), 8);
                                v11 = v12;
                                v12 = v220;
                                v13 = 2;
LABEL_4f7b7f:
                                goto LABEL_4f7b84;
                            }
                        }
                        else
                        {
                            v217 = core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u32$GT$::from_str::hecf13f2b24d2aba7(v51, v52);
                            if (((char)v217 & 1))
                            {
                                v11 = v217 >> 8;
                                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                            }
                            alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hf62a81ff83705e7c(&v11, 4, 0);
                            if (!v11)
                            {
                                v218 = *((long long *)&v13);
                                *((unsigned int *)v218) = __buildin_bswap32(v217 >> 32);
                                v11 = v12;
                                v12 = v218;
                                v13 = 4;
                                goto LABEL_4f7b7f;
                            }
                        }
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    }
                    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8b34d8993ad0add6(*((long long *)(a0 + 16)), *((long long *)(a0 + 24)), "sysvCoreTextSlimm", 4))
                    {
                        v153 = core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u16$GT$::from_str::haf22888ecbeba9aa(v48, v49);
                        if (((char)v153 & 1))
                        {
                            v11 = v153 >> 8;
                            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                        }
                        v53 = (v153 & 4294967295) >> 16 & 4294967295;
                        v45 = uucore::features::sum::div_ceil::h779a15ddc1fadc0e(v73, *((long long *)(a0 + 48)));
                        *((int *)&v33) = (1 ? 1 : " * (Try ' --help' for more information.\n");
                        v34 = 1 ^ 1;
                        v11 = &v53;
                        v12 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hc16e9a303f8fca40;
                        v13 = &v45;
                        v15 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                        v16 = &v33;
                        v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he27513d365b32725;
                        v0 = &g_6c7890;
                        v1 = 3;
                        v5 = 0;
                        v2 = &v11;
                        v4 = 3;
                        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v82, &v0);
                        v157 = *((int128_t *)&v82);
                        v158 = v134 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v157;
                        v11 = v157;
                        v159 = *((long long *)&v83);
                        goto LABEL_4f71e0;
                    }
                    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8b34d8993ad0add6(*((long long *)(a0 + 16)), *((long long *)(a0 + 24)), "bsd", 3))
                    {
                        v154 = core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u16$GT$::from_str::haf22888ecbeba9aa(v48, v49);
                        if (((char)v154 & 1))
                        {
                            v11 = v154 >> 8;
                            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                        }
                        v32 = (v154 & 4294967295) >> 16 & 4294967295;
                        v53 = uucore::features::sum::div_ceil::h779a15ddc1fadc0e(v73, *((long long *)(a0 + 48)));
                        *((int *)&v45) = (1 ? 1 : " * (Try ' --help' for more information.\n");
                        v46 = 1 ^ 1;
                        v0 = &v32;
                        v1 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hc16e9a303f8fca40;
                        v2 = &v53;
                        v4 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                        v5 = &v45;
                        v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he27513d365b32725;
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
                        v33 = &g_6c7890;
                        v34 = 3;
                        v37 = &v11;
                        v39 = 3;
                        v35 = &v0;
                        v36 = 4;
                        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v84, &v33);
                        v168 = *((int128_t *)&v84);
                        v158 = v134 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v168;
                        v11 = v168;
                        v159 = *((long long *)&v85);
                        goto LABEL_4f71e0;
                        goto LABEL_4f71e0;
                    }
                    else if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8b34d8993ad0add6(*((long long *)(a0 + 16)), *((long long *)(a0 + 24)), "crcbsd", 3))
                    {
                        v161 = a0;
                        v162 = *((char *)(v161 + 56));
                        if (!(v162 & (char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8b34d8993ad0add6(*((long long *)(a0 + 16)), *((long long *)(a0 + 24)), "blake2b * (Try ' --help' for more information.\n", 7)))
                        {
                            if (!v162)
                            {
                                *((int *)&v33) = (!*((char *)(a0 + 57)) ? " * (Try ' --help' for more information.\n" : "* (Try ' --help' for more information.\n");
                                v34 = 1;
                                v0 = &v47;
                                v1 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v2 = &v33;
                                v4 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he27513d365b32725;
                                v11 = &g_6c7820;
                                v12 = 2;
                                v16 = 0;
                                v13 = &v0;
                                v15 = 2;
                                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v90, &v11);
                                v173 = *((int128_t *)&v90);
                                v158 = v134 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v173;
                                v11 = v173;
                                v13 = *((long long *)&v91);
                                v170 = 1;
LABEL_4f71ea:
                                v174 = 0;
                                v175 = 0;
                                goto LABEL_4f71ee;
                            }
                            v164 = a0;
                            v166 = *((long long *)(v164 + 24));
                            alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hf62a81ff83705e7c(&v11, v166, 0);
                            if ((long long)v11)
                                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                            v172 = v13;
                            memcpy(v172, *((long long *)(v164 + 16)), v166);
                            if (!v166)
                            {
LABEL_4f78b4:
                                v0 = v12;
                                v1 = v172;
                                v2 = v166;
                                v45 = &v0;
                                v46 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v11 = &g_6c7840;
                                v12 = 2;
                                v16 = 0;
                                v13 = &v45;
                                v15 = 1;
                                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v33, &v11);
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he6cb72440aee0566();
                                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd7acbc74dd17aa1a(&v0);
                                v203 = (int128_t)v33;
                                v0 = v203;
                                v2 = v35;
                                v33 = &v47;
                                v34 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v11 = &g_6c7860;
                                v12 = 1;
                                v16 = 0;
                                v13 = &v33;
                                v15 = 1;
                                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v77, &v11);
                                v204 = (int128_t)v0;
                                v158 = v134 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v203 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v204;
                                v11 = v204;
                                v13 = v2;
                                v174 = *((long long *)&v77);
                                v170 = *((long long *)&v78);
                                v175 = *((long long *)&v79);
LABEL_4f79e4:
LABEL_4f71ee:
                                v205 = v13;
                                v35 = v13;
                                v206 = (int128_t)v11;
                                v97 = v158 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v206;
                                v33 = v206;
                                v0 = v174;
                                v1 = v170;
                                v2 = v175;
                                v45 = &v33;
                                v46 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v11 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
                                v12 = 1;
                                v16 = 0;
                                v13 = &v45;
                                v15 = 1;
                                std::io::stdio::_print::he918bceb0c89db46(&v11, v205, v175);
                                v45 = &v0;
                                v46 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v11 = &g_6c78f0;
                                v12 = 2;
                                v16 = 0;
                                v13 = &v45;
                                v15 = 1;
                                std::io::stdio::_print::he918bceb0c89db46(&v11, v208, v209);
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he6cb72440aee0566();
                                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd7acbc74dd17aa1a(&v0);
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he6cb72440aee0566();
                                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd7acbc74dd17aa1a(&v33);
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he6cb72440aee0566();
                                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd7acbc74dd17aa1a(&v47);
                                if (*((long long *)&v55))
                                    __rust_dealloc(*((long long *)&v54));
                                v148 = *((long long *)&(&v58)[7]);
                                v149 = *((long long *)&(&v58)[15]);
                                v210 = *((long long *)v149);
                                if (v210)
                                    v210(v148);
LABEL_4f738a:
                                if (*((long long *)(v149 + 8)))
                                    __rust_dealloc(v148);
                            }
                            else
                            {
                                if (v166 < 8)
                                {
LABEL_4f787e:
                                    do
                                    {
                                        v202 = *((char *)v201);
                                        *((char *)v201) = (char)(((v202 - 97 & 4294967295 & 255 & 255) < 26) * 32) ^ (char)v202;
                                        v201 += 1;
                                    } while (v201 != v172 + v166);
                                    goto LABEL_4f78b4;
                                }
                                else
                                {
                                    if (v166 < 32)
                                    {
                                        v178 = 0;
                                    }
                                    else
                                    {
                                        v178 = v166 & -0x20;
                                        v179 = 0;
                                        v99 = v99 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 212176064080114571335986519928043708319;
                                        v100 = v100 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 33361016364797888574840647787428256025;
                                        v101 = v101 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 42702100946941297375796029167908167712;
                                        do
                                        {
                                            v180 = *((int128_t *)(v172 + v179));
                                            v134 = v134 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v180;
                                            v181 = *((int128_t *)(v172 + v179 + 16));
                                            v98 = v98 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v181;
                                            v182 = v180;
                                            v183 = AddV(v182, 212176064080114571335986519928043708319);
                                            v184 = v181;
                                            v185 = AddV(v184, 212176064080114571335986519928043708319);
                                            v103 = v103 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v184 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v185;
                                            v186 = v183;
                                            v187 = MinV(v186, 33361016364797888574840647787428256025);
                                            v188 = CmpEQV(v187, v183);
                                            v189 = v188 & 42702100946941297375796029167908167712;
                                            v190 = v185;
                                            v191 = MinV(v190, 33361016364797888574840647787428256025);
                                            v192 = CmpEQV(v191, v185);
                                            v193 = v192 & 42702100946941297375796029167908167712;
                                            v194 = v189 ^ v180;
                                            v104 = v104 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v186 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v187 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v188 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v189 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v194;
                                            v195 = v193 ^ v181;
                                            v102 = v102 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v182 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v183 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v190 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v191 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v192 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v193 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v195;
                                            *((void*)(v172 + v179)) = v194;
                                            *((void*)(v172 + v179 + 16)) = v195;
                                            v179 += 32;
                                        } while (v178 != v179);
                                        if (v166 == v178)
                                            goto LABEL_4f78b4;
                                        if (!((char)v166 & 24))
                                        {
                                            v198 = v178 + v172;
                                            goto LABEL_4f787e;
                                        }
                                    }
                                    v196 = v166 & -8;
                                    v103 = v103 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 11502087481254191007;
                                    v104 = v104 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 1880844493789993498;
                                    v99 = v99 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 2314885530818453536;
                                    do
                                    {
                                        v134 = v134 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | *((long long *)(v172 + v178));
                                        v199 = (uint128_t)v134;
                                        v200 = AddV(v199, 11502087481254191007);
                                        v98 = v98 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v199 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v200;
                                        v102 = v102 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v200 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MaxV(v200, 1880844493789993498)) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | CmpEQV(MaxV(v200, 1880844493789993498), v200) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ~(CmpEQV(MaxV(v200, 1880844493789993498), v200)) & 2314885530818453536 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ~(CmpEQV(MaxV(v200, 1880844493789993498), v200)) & 2314885530818453536 ^ (uint128_t)v134;
                                        *((unsigned long long *)(v172 + v178)) = (unsigned long long)v102;
                                        v178 += 8;
                                    } while (v196 != v178);
                                    if (v166 == v196)
                                        goto LABEL_4f78b4;
                                    goto LABEL_4f787e;
                                }
                            }
                        }
                        else if (*((long long *)v161))
                        {
                            v33 = *((long long *)(v161 + 8)) * 8;
                            v0 = &v33;
                            v1 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                            v11 = &g_6c7870;
                            v12 = 2;
                            v16 = 0;
                            v13 = &v0;
                            v15 = 1;
                            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v88, &v11);
                            v169 = *((int128_t *)&v88);
                            v134 = v134 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v169;
                            v0 = v169;
                            v2 = *((long long *)&v89);
                            goto LABEL_4f7629;
                        }
                        else
                        {
                            alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hf62a81ff83705e7c(&v11, 9, 0);
                            if (!v11)
                            {
                                v171 = v13;
                                *((long long *)v171) = 2333482830128041026;
                                *((char *)(v171 + 8)) = 40;
                                v0 = v12;
                                v1 = v171;
                                v2 = 9;
LABEL_4f7629:
                                v33 = &v47;
                                v34 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v11 = &g_6c7860;
                                v12 = 1;
                                v16 = 0;
                                v13 = &v33;
                                v15 = 1;
                                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v74, &v11);
                                v176 = (int128_t)v0;
                                v158 = v134 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v176;
                                v11 = v176;
                                v13 = v2;
                                v174 = *((long long *)&v74);
                                v170 = *((long long *)&v75);
                                v175 = *((long long *)&v76);
                                goto LABEL_4f79e4;
                            }
                        }
                    }
                    else
                    {
                        *((int *)&v33) = (1 ? 1 : " * (Try ' --help' for more information.\n");
                        v34 = 1 ^ 1;
                        v11 = &v47;
                        v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v13 = &v73;
                        v15 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                        v16 = &v33;
                        v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he27513d365b32725;
                        v0 = &g_6c7890;
                        v1 = 3;
                        v5 = 0;
                        v2 = &v11;
                        v4 = 3;
                        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v86, &v0);
                        v163 = *((int128_t *)&v86);
                        v158 = v134 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v163;
                        v11 = v163;
                        v159 = *((long long *)&v87);
LABEL_4f71e0:
                        v13 = v159;
                        v170 = 1;
                        goto LABEL_4f71ea;
                    }
                }
            } while ((v95 = v67, v95 != v69));
        }
    }
LABEL_4f654d:
    v225 = a0;
    v226 = *((long long *)(v225 + 32));
    v227 = *((long long *)(v225 + 40));
    if (*((long long *)v227))
        v228(v226);
    if (*((long long *)(v227 + 8)))
    {
        __rust_dealloc(v226);
        return v96;
    }
    return v96;
}
