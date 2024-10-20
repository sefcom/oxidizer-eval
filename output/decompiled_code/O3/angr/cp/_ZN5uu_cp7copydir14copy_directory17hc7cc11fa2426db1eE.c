long long uu_cp::copydir::copy_directory::hc7cc11fa2426db1e(struct_3 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, struct_0 *a4, unsigned long long a5)
{
    void* v0;  // [sp-0x3f8], Other Possible Types: unsigned long long
    struct_0 *v1;  // [bp-0x3e8], Other Possible Types: char
    struct_0 *v2;  // [sp-0x3e0], Other Possible Types: unsigned long
    struct_0 *v3;  // [bp-0x3d8], Other Possible Types: char
    char v4;  // [bp-0x3d0]
    char v5;  // [sp-0x3cc]
    char v6;  // [sp-0x3cb]
    char v7;  // [sp-0x3ca]
    char v8;  // [sp-0x3c9]
    struct_0 *v9;  // [sp-0x3c0]
    unsigned long v10;  // [sp-0x3b8]
    unsigned long long v11;  // [sp-0x3b0]
    unsigned long long v12;  // [sp-0x3a8]
    struct_0 *v13;  // [bp-0x3a0], Other Possible Types: char
    struct_0 *v14;  // [bp-0x398], Other Possible Types: unsigned long
    char v15;  // [sp-0x394]
    struct_0 *v16;  // [sp-0x390], Other Possible Types: unsigned long, unsigned long long
    struct struct_4 **v17;  // [sp-0x388], Other Possible Types: struct struct_0 **, unsigned long, unsigned long long
    struct_0 *v18;  // [sp-0x380], Other Possible Types: unsigned long long
    void* v19;  // [sp-0x378], Other Possible Types: unsigned long
    struct_0 *v20;  // [sp-0x370]
    void* v21;  // [sp-0x368], Other Possible Types: unsigned long, unsigned long long
    char v22;  // [bp-0x360], Other Possible Types: unsigned long
    unsigned short v23;  // [sp-0x358]
    char v24;  // [sp-0x356]
    char v25;  // [sp-0x355]
    unsigned int v26;  // [bp-0x354]
    struct_0 *v27;  // [bp-0x2e8], Other Possible Types: char, unsigned long long
    unsigned long long v28;  // [sp-0x2e0]
    struct_0 *v29;  // [sp-0x2d8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v30;  // [sp-0x2d0]
    struct_0 *v31;  // [bp-0x2c8], Other Possible Types: void*
    unsigned long long v32;  // [sp-0x2b8]
    struct_0 *v33;  // [sp-0x2a8], Other Possible Types: unsigned long, unsigned long long
    struct_0 *v34;  // [sp-0x2a0], Other Possible Types: unsigned long, unsigned long long
    struct struct_0 **v35;  // [sp-0x298], Other Possible Types: struct_0 *, unsigned long, unsigned long long
    struct_0 *v36;  // [sp-0x290], Other Possible Types: unsigned long long
    void* v37;  // [sp-0x288], Other Possible Types: struct_0 *
    struct_0 *v38;  // [bp-0x280]
    struct_0 *v39;  // [bp-0x278]
    unsigned long long v40;  // [sp-0x270]
    unsigned long long v41;  // [sp-0x260]
    unsigned long v42;  // [sp-0x258]
    unsigned long long v43;  // [sp-0x250]
    struct_0 *v44;  // [sp-0x248], Other Possible Types: unsigned long, unsigned long long
    struct_0 *v45;  // [sp-0x240], Other Possible Types: unsigned long long
    struct_0 *v46;  // [bp-0x238], Other Possible Types: unsigned long long
    char v47;  // [bp-0x230], Other Possible Types: unsigned long
    struct_0 *v48;  // [sp-0x228]
    unsigned long long v49;  // [sp-0x218]
    int v50;  // [bp-0x208], Other Possible Types: struct_0 *, char
    unsigned long long v51;  // [sp-0x1f8]
    char v52[12];  // [sp-0x1e8]
    unsigned int v53;  // [sp-0x1dc]
    struct_0 *v54;  // [sp-0x1d8], Other Possible Types: unsigned long, unsigned long long
    struct_0 *v55;  // [sp-0x1d0], Other Possible Types: unsigned long long
    struct struct_0 **v56;  // [sp-0x1c8], Other Possible Types: unsigned long long
    struct_0 *v57;  // [bp-0x1c0], Other Possible Types: char
    struct_0 *v58;  // [sp-0x1b8]
    unsigned long long v59;  // [sp-0x1a8]
    unsigned long long v60;  // [sp-0x1a0]
    unsigned long long v61;  // [sp-0x198]
    unsigned long long v62;  // [sp-0x190]
    unsigned long v63;  // [sp-0x188], Other Possible Types: unsigned long long
    unsigned long v64;  // [sp-0x178], Other Possible Types: unsigned long long
    struct_2 *v65;  // [sp-0x170], Other Possible Types: unsigned long long
    struct_0 *v66;  // [sp-0x168]
    unsigned long long v67;  // [sp-0x160]
    void* v68;  // [sp-0x158], Other Possible Types: struct struct_0 **, struct_0 *, unsigned long long
    unsigned long v69;  // [sp-0x150], Other Possible Types: unsigned long long
    void* v70;  // [sp-0x148], Other Possible Types: struct struct_0 **, unsigned long long
    unsigned long v71;  // [bp-0x140], Other Possible Types: unsigned long long, char
    struct_0 *v72;  // [sp-0x138]
    unsigned long long v73;  // [sp-0x128]
    struct_0 *v74;  // [sp-0x120]
    unsigned long long v75;  // [sp-0x110]
    void* v76;  // [sp-0x108]
    struct_0 *v77;  // [sp-0x100]
    struct struct_0 **v78;  // [sp-0xf0]
    struct_0 *v79;  // [sp-0xe8]
    unsigned long long v80;  // [sp-0xe0]
    struct_0 *v81;  // [sp-0xd8]
    unsigned long long v82;  // [sp-0xd0]
    unsigned long long v83;  // [sp-0xc8]
    char v84;  // [sp-0xc0]
    unsigned int v85;  // [bp-0xbf]
    unsigned int v86;  // [sp-0xbc]
    struct_0 *v87;  // [sp-0xb8]
    struct_0 *v88;  // [bp-0xa8], Other Possible Types: char
    struct_0 *v89;  // [bp-0xa0]
    char v90;  // [bp-0x98]
    char v91;  // [bp-0x90]
    char v92;  // [bp-0x80]
    char v93;  // [bp-0x70]
    unsigned long v94;  // [sp-0x60], Other Possible Types: unsigned long long
    char v95;  // [bp-0x48]
    char v96;  // [bp-0x38]
    char v97[73];  // [bp+0x8]
    char v98;  // [bp+0x10]
    char v99;  // [bp+0x18]
    char v100;  // [bp+0x20]
    char v101;  // [bp+0x28]
    char v102[73];  // r15
    char v103;  // al
    unsigned long long v104;  // 4096
    unsigned long long v108;  // r12
    struct_0 *v109;  // r15
    unsigned long long v110;  // r14
    unsigned long long v111;  // r14
    unsigned long long v112;  // r9
    struct_0 *v113;  // rbx
    unsigned long long v114;  // rbp
    unsigned long long v115;  // r12
    unsigned long long v116;  // rdx
    struct_0 *v117;  // r13
    unsigned long long v118;  // rbp
    unsigned long long v119;  // rcx
    unsigned long long v120;  // rax
    unsigned long long v121;  // rcx
    unsigned long long v122;  // rax
    unsigned long long v123;  // rdx
    struct_2 *v124;  // rdx
    unsigned int v125;  // ecx
    struct_0 *v126;  // eax
    unsigned long long v127;  // rsi
    unsigned long long v128;  // rbp
    unsigned long long v129;  // rbx
    unsigned long long v130;  // rax
    struct_3 *v131;  // rcx
    unsigned long long v132;  // rbp
    unsigned long long v133;  // rbp
    struct_0 *v134;  // r14
    struct_0 *v135;  // r14
    struct_0 *v136;  // r14
    int v137;  // ymm0
    struct_0 *v138;  // rax
    struct_0 *v139;  // xmm0
    struct_0 *v140;  // r14
    struct_0 *v141;  // xmm0
    int v142;  // ymm0
    struct_0 *v143;  // r12
    struct struct_0 **v144;  // r15
    struct_3 *v145;  // rcx
    struct struct_0 **v146;  // rax
    struct_0 *v147;  // rcx
    struct_0 *v148;  // xmm0
    int v149;  // ymm0
    unsigned long long v150;  // rbx
    unsigned long long v151;  // rax
    struct_0 *v152;  // r13
    struct_0 *v153;  // xmm0
    struct_0 *v154;  // xmm0
    struct_0 *v155;  // xmm0
    char v156[73];  // rdx
    struct_0 *v157;  // xmm0
    int v158;  // ymm0
    struct struct_0 **v159;  // rcx
    unsigned int v160;  // eax
    struct_0 *v161;  // rbx
    struct struct_0 **v162;  // r14
    unsigned long v163;  // rbp
    unsigned long long v164;  // r8
    unsigned long long v165;  // r8
    unsigned long long v166;  // r9
    int v167;  // ymm1
    int v168;  // ymm2
    int v169;  // ymm3
    struct_0 *v170;  // rax
    unsigned long long v171;  // r15
    unsigned long long v172;  // rcx
    struct_0 *v173;  // xmm0
    struct_0 *v174;  // xmm1
    struct_0 *v175;  // xmm2
    struct_0 *v176;  // rbx
    struct_0 *v177;  // rax
    struct_0 *v178;  // r13
    struct_0 *v179;  // r13
    unsigned long long v180;  // rsi
    struct_0 *v181;  // xmm0
    struct struct_0 **v182;  // rsi
    struct_0 *v183;  // rbp
    struct_0 *v184;  // r14
    struct struct_0 **v185;  // rbx
    struct_0 *v187;  // r14
    struct struct_0 **v188;  // rbx
    unsigned long long v189;  // r15
    unsigned long long v190;  // r12
    unsigned long long v191;  // rax
    unsigned long long v192;  // rax
    unsigned long long v193;  // r12
    unsigned long long v194;  // r15
    struct_0 *v196;  // rbp
    struct_0 *v197;  // r12
    struct_0 *v198;  // rbx
    struct struct_0 **v199;  // r14
    unsigned long long v200;  // rdi
    char v201;  // bl
    struct_0 *v202;  // eax
    struct_0 *v203;  // rax
    struct_0 *v204;  // rax
    struct_0 *v205;  // rbx
    struct_0 *v206;  // xmm0
    struct_0 *v207;  // xmm1
    struct_0 *v208;  // xmm2
    unsigned long long v209;  // r14
    struct_0 *v210;  // xmm0
    struct_0 *v211;  // xmm1
    struct_0 *v212;  // xmm2
    struct_0 *v214;  // xmm0
    struct_0 *v215;  // xmm1
    struct_0 *v216;  // xmm2
    struct_0 *v217;  // xmm3
    struct_0 *v218;  // xmm0
    struct_0 *v219;  // xmm1
    struct_0 *v220;  // xmm2
    struct_0 *v221;  // rax
    struct_0 *v222;  // rax
    struct_3 *v223;  // rdx
    struct_0 *v224;  // xmm0
    struct_0 *v225;  // xmm1
    unsigned long long v226;  // rax
    struct_0 *v227;  // rax
    struct_3 *v228;  // rdx
    struct_0 *v229;  // xmm0
    struct_0 *v230;  // xmm1
    struct_0 *v231;  // r14
    struct_0 *v232;  // rbx
    struct_0 *v233;  // rax
    struct_3 *v234;  // rdx
    struct_0 *v235;  // xmm0
    struct_0 *v236;  // xmm1
    struct struct_0 **v237;  // r13
    struct_0 *v238;  // rbx
    struct_0 *v239;  // rbx
    struct_0 *v240;  // rbx
    unsigned long long v244;  // rbp
    unsigned long v245;  // r15
    struct_0 *v246;  // rax
    struct_0 *v247;  // rbx
    struct_3 *v248;  // rdx
    struct_0 *v249;  // xmm0
    struct_0 *v250;  // xmm1
    struct_0 *v251;  // rsi

    v102 = v97;
    v103 = v102[65];
    v13 = v103;
    if (!v103 && (!v101 || !v102[64]) && (char)std::path::Path::is_symlink::h6ab8b58756c51c6b(a2, a3))
    {
        v0 = v101;
        uu_cp::copy_file::h80a41499590e341a(a0, a1);
        return a0;
    }
    v108 = v104;
    if (!v102[70])
    {
        v68 = 1;
        v69 = v2;
        v70 = a3;
        v71 = 1;
        v54 = &v68;
        v55 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v14 = &g_555938.field_0;
        v16 = 1;
        v19 = 0;
        v17 = &v54;
        v18 = 1;
        a0 = a0;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&a0->field_8, &v14);
        a0->field_0 = 4;
        return a0;
    }
    v67 = a1;
    v2 = v69;
    uucore::features::fs::canonicalize::h7ab26776cac58614(&v14, a4, v108, 0, 2, a5, *((long long *)&v1), v2, *((long long *)&v3), *((long long *)&v4), a0);
    v109 = v14;
    v110 = v16;
    if (v109 != 0x8000000000000000)
    {
        v1 = a4;
        v43 = a3;
        uucore::features::fs::canonicalize::h7ab26776cac58614(&v14, v2, a3, 0, 2, v112, a4, v2, *((long long *)&v3), *((long long *)&v4), a0);
        v113 = v14;
        v114 = v16;
        if (v113 != 0x8000000000000000)
        {
            v3 = std::path::Path::_starts_with::h98ec86359c41a446(v110, v17, v114, v17);
            v115 = v108;
            if (v113)
                __rust_dealloc(v114);
            v117 = v1;
            if (v109)
                __rust_dealloc(v110);
            v118 = v43;
            if (v3)
            {
                v54 = 1;
                v55 = v2;
                v56 = v118;
                v57 = 1;
                v120 = std::path::Path::file_name::h79ecbb7850a9c7f3(v2, v118, v116, v119);
                if (!v120)
                    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                std::path::Path::_join::h609728e54bd034cb(&v88, v117, v115, v120, v123);
                v68 = 1;
                v69 = v89;
                v70 = *((long long *)&v90);
                v71 = 1;
                v33 = &v54;
                v34 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v35 = &v68;
                v36 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v14 = &g_5559d8;
                v16 = 2;
                v19 = 0;
                v17 = &v33;
                v18 = 2;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v27, &v14);
                if (*((long long *)&v88))
                    __rust_dealloc(v69);
                a0 = a0;
                a0->field_18 = v29;
                *((int128_t *)&a0->field_8) = *((int128_t *)&v27);
                a0->field_0 = 4;
                return a0;
            }
            else
            {
                v6 = v97[68];
                if (!v6 || (v122 = std::path::Path::parent::h65c9a340a6266f2d(v2, v118, v116, v121), !v122))
                {
                    std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v50, v117, v115);
                    goto LABEL_4c35d7;
                }
                std::path::Path::_join::h609728e54bd034cb(&v33, v117, v115, v122, v124);
                v125 = (!v97[50] ? 0 : 18);
                v15 = 1;
                if ((char)vvar_2823)
                    v125 = 63;
                v126 = 6291616();
                6291616(v126, v127);
                v128 = v43;
                v14 = (v126 & 511 | v125) ^ 511;
                v129 = v34;
                v130 = std::fs::DirBuilder::_create::h71276aa8883a3685(&v14, v129, v35);
                if (v130)
                {
                    v131 = a0;
                    v131->field_0 = 2;
                    v131->field_8 = v130;
                    if (!v33)
                        return a0;
LABEL_4c35b4:
                    __rust_dealloc(v129);
                }
                else
                {
                    if (v97[72])
                    {
                        std::path::Path::_join::h609728e54bd034cb(&v54, v117, v115, v2, v128);
                        v11 = v129;
                        v12 = v55;
                        uu_cp::aligned_ancestors::h926ed14216efe686(&v14, v2, v128, v55, v56, v112, a4, v2, *((long long *)&v3), *((long long *)&v4), a0);
                        v3 = v14;
                        v1 = v16;
                        v133 = v17;
                        if (v133)
                        {
                            v134 = v1;
                            do
                            {
                                v136 = v135;
                                v138 = v136->field_0;
                                v27 = v27;
                            } while (v27 && (v139 = *((int128_t *)&v136->field_10), v137 = v137 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v139, v27 = v138, v28 = v136->field_8, v88 = v139, v68 = (struct_0 *)&v27, v69 = (unsigned long long)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76, v70 = (struct struct_0 **)&v88, v71 = (unsigned long)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76, v14 = (struct_0 *)&g_555948.field_0, v16 = (struct_0 *)3, v19 = (void*)0, v17 = (struct struct_0 **)&v68, v18 = (unsigned long long)2, std::io::stdio::_print::he918bceb0c89db46(&v14, v127, v124), v140 = v136 + 32, v27 = v27, v27 = v27, v140 != (v133 << 5) + v134));
                        }
                        if (v3)
                            __rust_dealloc(v1);
                        v132 = v43;
                        if (v54)
                        {
                            __rust_dealloc(v12);
                            v43 = v43;
                        }
                    }
                    v51 = v35;
                    v141 = *((int128_t *)&v33);
                    v142 = v137 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v141;
                    v50 = v141;
LABEL_4c35d7:
                    v41 = (&v50)[1];
                    v42 = v51;
                    v7 = v97[56];
                    std::env::current_dir::h8e5fbaefdf378c8c(&v14);
                    v143 = v14;
                    if (v143 == 0x8000000000000000)
                    {
                        v33 = v16;
                        v68 = &v33;
                        v69 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                        v14 = &g_5559b0;
                        v16 = 1;
                        v19 = 0;
                        v17 = &v68;
                        v18 = 1;
                        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v95, &v14);
                        v145 = a0;
                        v145->field_18 = *((long long *)&v96);
                        *((int128_t *)&v145->field_8) = *((int128_t *)&v95);
                        v145->field_0 = 4;
                        ::0x4c2b70::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h94632dc869fb5d57(v33);
                        goto LABEL_4c4b81;
                    }
                    v144 = v17;
                    std::path::Path::_join::h609728e54bd034cb(&v68, v33, v144, v2, v118);
                    std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v14, v41, v42);
                    if (v14 == 2)
                    {
                        ::0x4c2b70::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h94632dc869fb5d57(v16);
                        goto LABEL_4c3720;
                    }
                    else
                    {
                        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v14, v2, v118);
                        if (v14)
                            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                        v146 = v17;
                        if (v146 < 2 || (v147 = v16, *((short *)(v147 + v146 - 2)) != 11823))
                        {
                            v150 = v69;
                            v151 = std::path::Path::parent::h65c9a340a6266f2d(v150, v70, v124, v147);
                            v152 = 0x8000000000000000;
                            if (v151)
                            {
                                std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v14, v151, v124);
                                v152 = v14;
                                v153 = *((int128_t *)&v16);
                                v142 = v142 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v153;
                                v33 = v153;
                            }
                            v154 = *((int128_t *)&v33);
                            v149 = v142 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v154;
                            v88 = v154;
                            if (v68)
                                __rust_dealloc(v150);
                        }
                        else
                        {
LABEL_4c3720:
                            v148 = *((int128_t *)&v69);
                            v149 = v142 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v148;
                            v88 = v148;
                            v68 = v68;
                        }
                        v155 = v88;
                        v58 = v155;
                        v54 = v143;
                        v55 = v33;
                        v56 = v144;
                        v57 = v68;
                        v59 = v41;
                        v60 = v42;
                        v61 = v2;
                        v62 = v118;
                        std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v14, v2, v118);
                        v156 = v97;
                        *((char *[73])&v52[0]) = &v156[48];
                        v18 = 0;
                        v20 = 10;
                        v21 = 0;
                        v22 = -1;
                        v23 = 0x100;
                        v24 = 0;
                        v25 = v156[67];
                        v81 = v20;
                        v82 = v21;
                        v79 = v18;
                        v80 = v19;
                        v83 = -1;
                        v85 = *((int *)&v23);
                        v86 = v26;
                        v157 = *((int128_t *)&v14);
                        v77 = v157;
                        v78 = v17;
                        v68 = 0;
                        v70 = 0;
                        v71 = 8;
                        v158 = v149 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v155 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v157 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                        *((int128_t *)&v72) = 0;
                        v73 = 8;
                        *((int128_t *)&v74) = 0;
                        v75 = 8;
                        v76 = 0;
                        v84 = v13;
                        *((int128_t *)&v87) = 0;
                        v8 = v156[66];
                        if (!v156[50])
                            v159 = 0;
                        else
                            v159 = 18;
                        v5 = v156[72];
                        v160 = (!(char)vvar_2915 ? 63 : (unsigned int)v159);
                        v53 = v160;
                        v161 = &v27;
                        v162 = &v33;
                        while (true)
                        {
LABEL_4c39f0:
                            v163 = v163;
                            _$LT$walkdir..IntoIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he01779e03549e115(&v88, &v68, v156, v159, v165, v166);
                            v170 = v88;
                            if (v170 != 2)
                                break;
                            v11 = (&v88)[1];
                            v171 = *((long long *)&v91);
                            v12 = (&v88)[2];
                            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(v161, (&v88)[2], v171);
                            v176 = v29;
                            v10 = v28;
                            std::path::Path::_join::h609728e54bd034cb(v162, v55, v56, v28, v176);
                            v177 = v34;
                            v178 = v35;
                            v1 = v177;
                            if (!(v57 == 0x8000000000000000) && !((v177 = std::path::Path::_strip_prefix::h4ff76a8ad9b06011(v1, v178, v58, (&v58)[1]), v177)) || !((std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v14, v177, v179), v183 = v14, v183 != 0x8000000000000000)))
                            {
LABEL_4c49a5:
                                if (v33)
                                    __rust_dealloc(v1);
                                if (v27)
                                    __rust_dealloc(v10);
                                goto LABEL_4c49de;
                            }
                            v66 = v176;
                            v184 = v16;
                            v185 = v17;
                            if (!v8)
                            {
                                v16 = v16;
                                v17 = v17;
                                v59 = v59;
                                v60 = v60;
                                goto LABEL_4c3e05;
                            }
                            v189 = v59;
                            v190 = v60;
                            if (v190 && ((*((char *)(v190 + v189 - 1)) == 92 | *((char *)(v190 + v189 - 1)) == 47) & (char)std::path::Path::is_dir::h9ac0db933706da51(v12, v171)))
                            {
                                *((int *)&v14) = 511;
                                v15 = 1;
                                v191 = std::fs::DirBuilder::_create::h71276aa8883a3685(&v14, v189, v190);
                                v16 = v16;
                                v17 = v17;
                                if (v191)
                                {
                                    v94 = v191;
                                    v44 = &v94;
                                    v45 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                                    v14 = &g_5558a8.field_0;
                                    v16 = 2;
                                    v19 = 0;
                                    v17 = &v44;
                                    v18 = 1;
                                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v14, v127, v124);
                                    ::0x4c2b70::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h94632dc869fb5d57(v94);
                                    goto LABEL_4c3e05;
                                }
                            }
                            v192 = std::path::Path::_strip_prefix::h4ff76a8ad9b06011(v184, v185, v61, v62);
                            if (!v192)
                            {
                                if (v183)
                                    __rust_dealloc(v184);
                                goto LABEL_4c49a5;
                            }
                            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v14, v192, v124);
                            if (v183)
                                __rust_dealloc(v184);
                            v183 = v14;
                            v16 = v16;
                            v17 = v17;
                            v187 = v16;
                            v188 = v17;
LABEL_4c3e05:
                            v193 = v60;
                            v194 = v59;
                            v17 = v17;
                            v16 = v16;
                            std::path::Path::_join::h609728e54bd034cb(&v14, v194, v193, v187, v188);
                            if (v183)
                                __rust_dealloc(v187);
                            v196 = v33;
                            if (v196 == 0x8000000000000000)
                            {
LABEL_4c49de:
                                v222 = 7;
                                goto LABEL_4c49e3;
                            }
                            v197 = v27;
                            v198 = v14;
                            v3 = v16;
                            v199 = v17;
                            if (((char)std::path::Path::is_symlink::h6ab8b58756c51c6b(v1, v178) & !v13))
                            {
                                uu_cp::copy_link::he25dc0adcd5dfd3b(&v33, v1, v178, v3, v199, *((long long *)&v98));
                                goto LABEL_4c3eb9;
                            }
                            if ((char)std::path::Path::is_dir::h9ac0db933706da51(v1, v178))
                            {
                                v44 = v1;
                                v45 = v178;
                                v27 = 0;
                                v28 = 1;
                                v29 = 0;
                                v21 = 32;
                                v22 = 3;
                                v14 = 0;
                                v17 = 0;
                                v19 = &v27;
                                v20 = &g_555828.field_0;
                                v9 = v198;
                                if ((char)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76(&v44, &v14))
                                    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                                v200 = v28;
                                v201 = (v29 < 2 ? (char)(v198 | -0x100 | *((short *)(-2 + v200 + (char *)&v29->field_0)) == 11823) : 0);
                                if (v27)
                                    __rust_dealloc(v200);
                                v198 = v9;
                                if (!(!v201) || !((std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v14, v3, v199), v14 == 2)))
                                    goto LABEL_4c4064;
                                ::0x4c2b70::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h94632dc869fb5d57(v16);
                                if ((char)std::path::Path::is_file::h82f08f46fb8d8099(v194, v193))
                                {
                                    _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::hfeb8d05a91b854b7(&v14, "cannot overwrite non-directory with directorycannot open  for reading: -r not specified; omitting directory cannot copy a directory, , into itself, ", 45);
                                    goto LABEL_4c44c9;
                                }
                                else
                                {
                                    v15 = 0;
                                    v202 = 6291616(0, v127);
                                    6291616(v202, v127);
                                    v14 = (v202 & 511 | v53) ^ 511;
                                    v203 = std::fs::DirBuilder::_create::h71276aa8883a3685(&v14, v3, v199);
                                    if (v203)
                                    {
                                        v33 = 2;
                                        v34 = v203;
                                        v198 = v9;
                                        goto LABEL_4c3eb9;
                                    }
                                    else
                                    {
                                        if (v5)
                                        {
                                            uu_cp::context_for::hb8fd5f35e65ec9ad(&v27, v10, v66, v3, v199);
                                            v44 = &v27;
                                            v45 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                            v14 = &g_5558c8.field_0;
                                            v16 = 2;
                                            v19 = 0;
                                            v17 = &v44;
                                            v18 = 1;
                                            std::io::stdio::_print::he918bceb0c89db46(&v14, v127, v124);
                                            if (v27)
                                                __rust_dealloc(v28);
                                        }
                                        v33 = 13;
                                        v9 = v9;
                                        goto LABEL_4c3eb9;
                                    }
                                }
                            }
LABEL_4c4064:
                            if ((char)std::path::Path::is_dir::h9ac0db933706da51(v1, v178))
                            {
LABEL_4c41ea:
                                v33 = 13;
                                if (v198)
                                    __rust_dealloc(v3);
                                v161 = &v27;
                                v162 = &v33;
                                if (v197)
                                    __rust_dealloc(v10);
                                if (v196)
                                    __rust_dealloc(v1);
                                goto LABEL_4c424d;
                            }
                            if (!v7)
                            {
                                v0 = 0;
                                uu_cp::copy_file::h80a41499590e341a(&v14, v67, v1, v178, v3, v199, v97, *((long long *)&v98), *((long long *)&v99), *((long long *)&v100));
                                v204 = v14;
                                if (v204 != 3)
                                {
                                    if (!((unsigned int)v204 == 13))
                                        goto LABEL_4c44c9;
                                    goto LABEL_4c41ea;
                                }
                                v209 = v19;
                                if ((char)std::io::error::Error::kind::hb2ff5fa058639b3d(v209) != 1)
                                {
LABEL_4c44c9:
                                    v214 = *((int128_t *)&v14);
                                    v158 = v158 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v214;
                                    v215 = *((int128_t *)&v17);
                                    v167 = v167 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v215;
                                    v216 = *((int128_t *)&v19);
                                    v168 = v168 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v216;
                                    v217 = *((int128_t *)&v21);
                                    v169 = v169 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v217;
                                    v39 = v217;
                                    v37 = v216;
                                    v35 = v215;
                                    v33 = v214;
                                    goto LABEL_4c3eb9;
                                }
                                else
                                {
                                    v198 = v198;
                                    v44 = 1;
                                    v45 = v10;
                                    v46 = v66;
                                    v47 = 1;
                                    v64 = &v44;
                                    v65 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                                    v27 = &g_5558e8;
                                    v28 = 2;
                                    v31 = 0;
                                    v29 = &v64;
                                    v30 = 1;
                                    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v94, &v27);
                                    *((double *)&v63) = uucore::mods::error::UIoError::new::h0ff3dcaa947fbefd((unsigned int)std::io::error::Error::kind::hb2ff5fa058639b3d(v209), &v94);
LABEL_4c43d4:
                                    _ZN6uucore4mods5error9EXIT_CODE17h7e79f2b7e24d7d70E.0.llvm.3928628070634382108 = v124->field_60(v63, v127);
                                    if (CasCmpNE(_ZN6uucore4mods5error9EXIT_CODE17h7e79f2b7e24d7d70E.0.llvm.3928628070634382108, _ZN6uucore4mods5error9EXIT_CODE17h7e79f2b7e24d7d70E.0.llvm.3928628070634382108))
                                        goto LABEL_4c43d4;
                                    v64 = uucore::util_name::h359eff083fe53467();
                                    v65 = v124;
                                    v44 = &v64;
                                    v45 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf5c7cfdfb3184423;
                                    v46 = &v63;
                                    v47 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h3b7771913610f49a;
                                    v27 = &g_555908.field_0;
                                    v28 = 3;
                                    v31 = 0;
                                    v29 = &v44;
                                    v30 = 2;
                                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v27, v127, v124);
                                    ::0x4c2ed0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hdded2e3072592e71(v63, v124);
                                    ::0x4c2b70::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h94632dc869fb5d57(v209);
                                    switch (v221)
                                    {
                                    case 3:
                                        if (v16)
                                        {
                                            __rust_dealloc(v17);
                                            break;
                                        }
                                    case 13:
                                        break;
                                    default:
                                        ::0x4c2860::core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h208a3451f3a30570(&v14, v127, v124, v121, v164, v112, v1, v2);
                                        break;
                                    }
                                }
                            }
                            v0 = 0;
                            uu_cp::copy_file::h80a41499590e341a(&v14, v67, v1, v178, v3, v199, v97, *((long long *)&v98), *((long long *)&v99), *((long long *)&v100));
                            v198 = v198;
                            if (v14 == 13)
                            {
LABEL_4c41e5:
                                goto LABEL_4c41ea;
                            }
                            v205 = v14;
                            v206 = *((int128_t *)&v16);
                            v158 = v158 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v206;
                            v207 = *((int128_t *)&v18);
                            v167 = v167 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v207;
                            v208 = *((int128_t *)&v20);
                            v168 = v168 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v208;
                            v27 = v206;
                            v29 = v207;
                            v31 = v208;
                            v32 = v22;
                            if ((char)std::path::Path::is_symlink::h6ab8b58756c51c6b(v1, v178))
                            {
                                ::0x4c2860::core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h208a3451f3a30570(&v14, v127, v124, v121, v164, v112, v1, v2);
                                goto LABEL_4c41e5;
                            }
                            v49 = v32;
                            v210 = *((int128_t *)&v27);
                            v158 = v158 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v210;
                            v211 = *((int128_t *)&v29);
                            v167 = v167 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v211;
                            v212 = *((int128_t *)&v31);
                            v168 = v168 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v212;
                            v48 = v212;
                            v46 = v211;
                            v44 = v210;
                            if (v205 == 13)
                                goto LABEL_4c41e5;
                            v159 = &v34;
                            v40 = v49;
                            v218 = *((int128_t *)&v44);
                            v158 = v158 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v218;
                            v219 = *((int128_t *)&v46);
                            v167 = v167 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v219;
                            v220 = v48;
                            v168 = v168 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v220;
                            v38 = v220;
                            v36 = v219;
                            v34 = v218;
                            v33 = v205;
LABEL_4c3eb9:
                            if (v198)
                                __rust_dealloc(v3);
                            v161 = &v27;
                            v162 = &v33;
                            if (v197)
                                __rust_dealloc(v10);
                            if (v196)
                                __rust_dealloc(v1);
                            v222 = v33;
                            if (v222 == 13)
                            {
LABEL_4c424d:
                                v132 = v43;
                                if (v11)
                                {
                                    __rust_dealloc(v12);
                                    v43 = v43;
                                }
                            }
                            else
                            {
                                v223 = a0;
                                *((unsigned long long *)((char *)&v223->field_28 + 8)) = v40;
                                v224 = *((int128_t *)&v34);
                                v225 = *((int128_t *)&(&v34)[2]);
                                *((int128_t *)&(&v223->padding_20)[1]) = *((int128_t *)&(&v37)[1]);
                                v223->field_18 = v225;
                                v223->field_8 = v224;
LABEL_4c49e3:
                                a0->field_0 = v222;
                                if (v11)
                                    __rust_dealloc(v12);
                                core::ptr::drop_in_place$LT$walkdir..IntoIter$GT$::hcdd5598b59714750(&v68);
                                goto LABEL_4c4a12;
                            }
                        }
                        if ((unsigned int)v170 != 3)
                        {
                            v172 = *((long long *)&v93);
                            v14 = v170;
                            v173 = *((int128_t *)&(&v88)[1]);
                            v174 = *((int128_t *)&v91);
                            v167 = v167 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v174;
                            v175 = *((int128_t *)&v92);
                            v168 = v168 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v175;
                            v20 = v175;
                            v18 = v174;
                            v16 = v173;
                            v22 = v172;
                            if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                                once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                            v181 = *((int128_t *)&g_55c040);
                            v158 = v158 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v173 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v181;
                            v27 = v181;
                            v44 = v161;
                            v45 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf5c7cfdfb3184423;
                            v33 = &g_555990;
                            v34 = 2;
                            v37 = 0;
                            v35 = &v44;
                            v36 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(v162, v180, v124);
                            v27 = &v14;
                            v28 = _$LT$walkdir..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hbf2d58447dc08690;
                            v33 = &g_5558c8.field_0;
                            v34 = 2;
                            v37 = 0;
                            v35 = v161;
                            v36 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(v162, v127, v124);
                            if (v14)
                            {
                                if (v16)
                                    __rust_dealloc(v17);
                                if (v19)
                                {
                                    __rust_dealloc(v20);
                                    goto LABEL_4c39f0;
                                }
                            }
                            else
                            {
                                v182 = v17;
                                if (v182 != 0x8000000000000000 && v182)
                                    __rust_dealloc(v18);
                                ::0x4c2b70::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h94632dc869fb5d57(v16);
                            }
                            continue;
                        }
                        core::ptr::drop_in_place$LT$walkdir..IntoIter$GT$::hcdd5598b59714750(&v68);
                        if (!v6)
                        {
                            uu_cp::copy_attributes::h1e6de8c81317045e(&v14, v2, v163, v41, v42, v52);
                            v227 = v14;
                            if (v227 != 13)
                            {
                                v228 = a0;
                                *((unsigned long *)((char *)&v228->field_28 + 8)) = v22;
                                v229 = *((int128_t *)&v16);
                                v230 = *((int128_t *)&v18);
                                *((int128_t *)&(&v228->padding_20)[1]) = *((int128_t *)&v20);
                                v228->field_18 = v230;
                                v228->field_8 = v229;
                                v228->field_0 = v227;
                                goto LABEL_4c4a12;
                            }
LABEL_4c4b68:
                            a0->field_0 = 13;
                            core::ptr::drop_in_place$LT$uu_cp..copydir..Context$GT$::h72981c5d26fb425f(&v54);
                            goto LABEL_4c4b81;
                        }
                        v226 = std::path::Path::file_name::h79ecbb7850a9c7f3(v2, v163, v124, v121);
                        if (!v226)
                            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                        std::path::Path::_join::h609728e54bd034cb(&v33, v41, v42, v226, v124);
                        v231 = v34;
                        v232 = v35;
                        uu_cp::copy_attributes::h1e6de8c81317045e(&v14, v2, v163, v231, v232, v52);
                        v233 = v14;
                        if (v233 != 13)
                        {
                            v234 = a0;
                            *((unsigned long *)((char *)&v234->field_28 + 8)) = v22;
                            v235 = *((int128_t *)&v16);
                            v236 = *((int128_t *)&v18);
                            *((int128_t *)&(&v234->padding_20)[1]) = *((int128_t *)&v20);
                            v234->field_18 = v236;
                            v234->field_8 = v235;
                            v234->field_0 = v233;
                            goto LABEL_4c4b0a;
                        }
                        uu_cp::aligned_ancestors::h926ed14216efe686(&v14, v2, v163, v231, v232, v112, v1, v2, v3, *((long long *)&v4), a0);
                        v231 = v231;
                        v2 = v14;
                        v13 = v16;
                        v237 = v17;
                        if (!v237)
                        {
                            if (v2)
                                __rust_dealloc(v13);
                            if (v33)
                                __rust_dealloc(v231);
                            goto LABEL_4c4b68;
                        }
                        else
                        {
                            v238 = v13;
                            while (true)
                            {
                                v240 = v239;
                                if (!v240->field_0)
                                    break;
                                uucore::features::fs::canonicalize::h7ab26776cac58614(&v68, v240->field_0, v240->field_8, 0, 1);
                                v244 = v68;
                                v245 = v69;
                                if (v244 == 0x8000000000000000)
                                {
                                    ::0x4c2b70::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h94632dc869fb5d57(v245);
                                    goto LABEL_4c48b7;
                                }
                                uu_cp::copy_attributes::h1e6de8c81317045e(&v14, v245, v70, v240->field_10, v240->field_18, v52);
                                v246 = v14;
                                if (v246 != 13)
                                {
                                    v248 = a0;
                                    *((unsigned long *)((char *)&v248->field_28 + 8)) = v22;
                                    v249 = *((int128_t *)&v16);
                                    v250 = *((int128_t *)&v18);
                                    *((int128_t *)&(&v248->padding_20)[1]) = *((int128_t *)&v20);
                                    v248->field_18 = v250;
                                    v248->field_8 = v249;
                                    v248->field_0 = v246;
                                    if (v244)
                                        __rust_dealloc(v245);
                                    if (v2)
                                    {
                                        __rust_dealloc(v13);
                                        goto LABEL_4c4b0a;
                                    }
                                }
                                else
                                {
                                    if (v244)
                                        __rust_dealloc(v245);
LABEL_4c48b7:
                                    v247 = v240 + 1;
                                    if (v247 == 0x20 * v237 + (char *)v238)
                                        break;
                                }
                            }
LABEL_4c4b0a:
                            if (v33)
                                __rust_dealloc(v231);
LABEL_4c4a12:
                            if (v54)
                                __rust_dealloc(v55);
                            v251 = v57;
                            if (v251 != 0x8000000000000000 && v251)
                                __rust_dealloc(v58);
                        }
LABEL_4c4b81:
                        if ((long long)v50)
                        {
                            v129 = (&v50)[1];
                            goto LABEL_4c35b4;
                        }
                    }
                }
                return a0;
            }
        }
        else if (v109)
        {
            __rust_dealloc(v110);
        }
    }
    a0 = a0;
    a0->field_0 = 2;
    a0->field_8 = v111;
    return a0;
}
