long long uu_cp::copy::hcab10a33a092c158(struct_2 *a0, struct_3 *a1, struct struct_0 **a2, unsigned long long a3, unsigned long long a4, char a5[79])
{
    char v0;  // [bp-0x438]
    char v1;  // [bp-0x430]
    char v2;  // [bp-0x428]
    char v3;  // [bp-0x420]
    char v4;  // [sp-0x41b]
    char v5;  // [sp-0x41a]
    char v6;  // [sp-0x419]
    struct_3 *v7;  // [sp-0x410]
    struct struct_0 **v8;  // [sp-0x408], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x400]
    unsigned long long v10;  // [sp-0x3f8]
    unsigned int v11;  // [sp-0x3ec]
    struct struct_0 **v12;  // [sp-0x3e8], Other Possible Types: unsigned long long
    unsigned long long v13[4];  // [sp-0x3e0], Other Possible Types: unsigned long long
    int v14;  // [sp-0x3d8], Other Possible Types: struct struct_0 **, unsigned long, unsigned long long
    unsigned long v15;  // [bp-0x3d0], Other Possible Types: char
    struct struct_0 **v16;  // [sp-0x3c8]
    struct struct_0 **v17;  // [sp-0x3b8]
    struct struct_0 **v18;  // [sp-0x398]
    unsigned int v19;  // [sp-0x38c]
    int v20;  // [bp-0x388], Other Possible Types: struct struct_0 **, char
    struct struct_0 **v21;  // [sp-0x378], Other Possible Types: unsigned long
    struct struct_0 **v22;  // [bp-0x368], Other Possible Types: unsigned long long
    struct struct_0 **v23;  // [sp-0x360], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v24;  // [sp-0x358]
    struct struct_0 **v25;  // [bp-0x348], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long long v26[4];  // [bp-0x340], Other Possible Types: char, unsigned long long
    struct struct_1 **v27;  // [bp-0x338], Other Possible Types: struct struct_0 **, char, unsigned long long
    char v28;  // [bp-0x330], Other Possible Types: unsigned long long
    void* v29;  // [sp-0x328], Other Possible Types: struct struct_0 **
    struct struct_0 **v30;  // [bp-0x320], Other Possible Types: char
    struct struct_0 **v31;  // [sp-0x318]
    char v32;  // [bp-0x310]
    char v33;  // [bp-0x2f8]
    struct struct_0 **v34;  // [bp-0x298], Other Possible Types: unsigned long long
    unsigned long long v35[4];  // [bp-0x288]
    struct struct_0 **v36;  // [bp-0x278], Other Possible Types: void*, unsigned int, unsigned long
    unsigned long long v37[4];  // [bp-0x268]
    struct struct_0 **v38;  // [bp-0x258]
    unsigned long long v39;  // [sp-0x248]
    struct struct_0 **v40;  // [sp-0x238], Other Possible Types: unsigned long, unsigned long long
    struct struct_0 **v41;  // [sp-0x230], Other Possible Types: unsigned long long [4]
    struct struct_0 **v42;  // [sp-0x228]
    struct struct_0 **v43;  // [sp-0x218]
    struct struct_0 **v44;  // [sp-0x210]
    unsigned long long v45;  // [sp-0x208]
    unsigned long long v46;  // [sp-0x200]
    struct struct_0 **v47;  // [bp-0x1f8], Other Possible Types: unsigned long long [4], unsigned int, unsigned long long, unsigned long
    char v48;  // [sp-0x1f4]
    unsigned long long v49[4];  // [bp-0x1f0], Other Possible Types: unsigned long, unsigned long long
    char v50;  // [sp-0x1ec]
    unsigned long v51;  // [bp-0x1eb], Other Possible Types: unsigned long long
    struct struct_0 **v52;  // [bp-0x1e8], Other Possible Types: unsigned long
    unsigned int v53;  // [sp-0x1e4]
    char v54;  // [bp-0x1e0], Other Possible Types: unsigned long, unsigned long long
    void* v55;  // [sp-0x1d8]
    char v56;  // [bp-0x1c8]
    struct struct_0 **v57;  // [sp-0x148]
    struct struct_0 **v58;  // [sp-0x138]
    struct struct_0 **v59;  // [sp-0x128]
    struct struct_0 **v60;  // [sp-0x120]
    unsigned long long v61;  // [sp-0x110]
    unsigned long long v62;  // [sp-0x108]
    struct struct_0 **v63;  // [sp-0x100]
    struct struct_0 **v64;  // [sp-0xf8]
    struct struct_0 **v65;  // [sp-0xe8]
    struct struct_0 **v66;  // [sp-0xd8]
    struct struct_0 **v67;  // [sp-0xc8]
    struct struct_0 **v68;  // [sp-0xb8]
    struct struct_0 **v69;  // [sp-0xa8]
    struct struct_0 **v70;  // [sp-0xa0]
    struct struct_0 **v71;  // [sp-0x98]
    unsigned long long v72;  // [sp-0x90]
    char v73;  // [bp-0x88]
    char v74;  // [bp-0x78]
    char v75;  // [bp-0x70]
    char v76;  // [bp-0x68]
    char v77;  // [bp-0x58]
    unsigned long long v79;  // 4096
    unsigned long long v80;  // 4096
    unsigned long long v81;  // rcx
    unsigned long long v82;  // r8
    unsigned long long v83;  // rbx
    unsigned long long v84;  // r14
    unsigned int v85;  // ebp
    unsigned long long v86;  // rax
    struct struct_6 **v87;  // fs
    struct_5 *v88;  // rax
    struct struct_0 **v89;  // r14
    struct struct_0 **v90;  // r15
    struct struct_0 **v91;  // xmm0
    struct struct_0 **v92;  // xmm1
    struct_5 *v93;  // rax
    struct struct_0 **v94;  // xmm0
    struct struct_0 **v95;  // xmm1
    struct struct_0 **v96;  // rax
    struct struct_0 **v97;  // xmm0
    struct struct_0 **v98;  // xmm1
    struct struct_0 **v99;  // xmm1
    struct_5 *v100;  // rax
    struct struct_0 **v101;  // r14
    struct struct_0 **v102;  // r15
    struct_5 *v103;  // rax
    struct struct_0 **v104;  // xmm0
    struct struct_0 **v105;  // xmm1
    struct_5 *v106;  // rax
    struct struct_0 **v107;  // r14
    struct struct_0 **v108;  // r15
    struct_5 *v109;  // rax
    struct struct_0 **v110;  // xmm0
    int v111;  // ymm0
    int v112;  // ymm0
    struct struct_0 **v113;  // xmm1
    int v114;  // ymm1
    int v115;  // ymm1
    void* v117;  // r14
    void* v118;  // rbx
    void* v119;  // r12
    void* v120;  // r14
    struct_3 *v121;  // rax
    unsigned long long v122;  // r12
    unsigned long long v123;  // r13
    unsigned long long v124;  // rdx
    unsigned long long v125;  // rsi
    unsigned long long v126;  // rax
    unsigned long long v127;  // rdx
    struct_2 *v128;  // r12
    unsigned long long v129;  // rdx
    unsigned long long v130[4];  // ecx
    char v131;  // al
    struct struct_0 **v132;  // xmm0
    struct struct_0 **v133;  // xmm0
    unsigned long long v135;  // rsi
    int v137;  // ymm1
    int v138;  // ymm2
    int v139;  // ymm3
    unsigned long long v140;  // rax
    struct struct_0 **v141;  // r15
    struct struct_0 **v142;  // r12
    struct struct_0 **v143;  // r13
    int v144;  // xmm0
    int v145;  // xmm0
    int v146;  // xmm0
    unsigned long long v147[4];  // xmm1
    struct struct_0 **v148;  // xmm0
    int v150;  // ymm0
    unsigned long long v151;  // rbp
    struct_3 *v152;  // rax
    unsigned long long v153;  // rbx
    unsigned long long v154;  // r14
    unsigned long long v155;  // rbp
    unsigned long long v157[3];  // rax
    struct struct_0 **v158;  // r8
    unsigned long long v159;  // r9
    struct struct_0 **v162;  // xmm0
    unsigned long long v164;  // rax
    struct_3 *v165;  // rax
    unsigned long long v166;  // r15
    unsigned long long v167[4];  // rbx
    unsigned long long v168;  // rsi
    struct struct_0 **v169;  // xmm0
    struct struct_0 **v170;  // xmm0
    unsigned long long v171;  // rcx
    unsigned long long v173;  // rsi
    struct struct_0 **v174;  // r14
    unsigned long long v175;  // rax
    struct struct_0 **v176;  // r15
    struct struct_0 **v177;  // rbp
    int v178;  // xmm0
    int v179;  // xmm0
    int v180;  // xmm0
    unsigned long long v181[4];  // xmm1
    unsigned long long v183;  // r12
    struct struct_0 **v184;  // xmm0
    unsigned long long v186;  // r13
    unsigned long long v187;  // r13
    struct struct_0 **v191;  // xmm0
    unsigned long long v194;  // r15
    unsigned long long v195[4];  // rbx
    struct_2 *v196;  // r12
    unsigned long long v197[4];  // r13
    struct struct_0 **v198;  // r8
    unsigned long long v199;  // rbp
    struct struct_0 **v200;  // xmm0
    struct struct_0 **v201;  // xmm1
    struct struct_0 **v203;  // rcx
    unsigned long long v204;  // rsi
    unsigned long long v205;  // rbp
    unsigned long long v206;  // r13
    struct struct_0 **v207;  // r12
    unsigned long long v208;  // r15
    struct struct_0 **v209;  // xmm0
    struct struct_0 **v211;  // xmm1
    struct struct_0 **v212;  // xmm2
    struct struct_0 **v213;  // xmm3
    unsigned long long v216;  // r9
    struct struct_0 **v217;  // xmm0
    struct struct_0 **v218;  // xmm1
    struct struct_0 **v219;  // xmm2
    struct struct_0 **v220;  // xmm3
    unsigned long long v222;  // rdx
    struct struct_0 **v223;  // rsi
    unsigned long long v225;  // rsi
    struct struct_0 **v226;  // xmm0
    struct struct_0 **v227;  // xmm1
    struct struct_0 **v228;  // r14
    unsigned long long v229;  // rax
    unsigned long long v230[4];  // r15
    struct struct_0 **v232;  // r14
    struct struct_0 **v234;  // xmm0
    char v235;  // bl
    unsigned int v239;  // eax
    unsigned long long v240;  // rdx
    unsigned long long v241;  // r8
    unsigned long long v242;  // r9
    unsigned long long v244;  // rsi
    unsigned long long v245;  // rdx
    unsigned long long v246;  // rcx
    unsigned long long v247;  // rdx
    unsigned long long v248;  // rsi

    v7 = a1;
    if (a2 <= 1 && (v10 = a4, v9 = a3, v81 = v9, v82 = v10, !(char)std::path::Path::is_dir::h9ac0db933706da51(a3, a4)))
    {
        v85 = vvar_702{reg 56} | -0x100 | 1;
        if ((char)std::path::Path::is_dir::h9ac0db933706da51(v81, v82))
        {
            v12 = 1;
            v13 = v9;
            v14 = v10;
            v15 = 1;
            v40 = &v12;
            v41[0] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v86 = &g_5553e0;
LABEL_4b6fde:
            v47 = v86;
            v49 = 2;
            v55 = 0;
            v52 = &v40;
            v54 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v26, &v47);
            *((long long *)((char *)&a0->field_28 + 8)) = *((long long *)&v32);
            v91 = *((int128_t *)&v26);
            v92 = *((int128_t *)&v28);
            *((int128_t *)&(&a0->padding_20)[1]) = *((int128_t *)&v30);
            a0->field_18 = v92;
            a0->field_8 = v91;
            a0->field_0 = 4;
            return a0;
        }
    }
    else
    {
        v83 = v80;
        v84 = v79;
        if (!(char)std::path::Path::is_dir::h9ac0db933706da51(v84, v83))
        {
            v12 = 1;
            v13 = v84;
            v14 = v83;
            v15 = 1;
            v40 = &v12;
            v41[0] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v86 = &g_5556d8;
            goto LABEL_4b6fde;
        }
        else
        {
            v9 = v84;
            v10 = v83;
            v85 = 0;
        }
    }
    if (*((long long *)&*(v87)->padding_-28[40]))
    {
        v88 = &*(v87)->padding_-28[40];
        v89 = v88->field_8;
        v90 = v88->field_10;
    }
    else
    {
        v89 = std::sys::pal::unix::rand::hashmap_random_keys::h37536acea0ea3646();
        v93 = &*(v87)->padding_-28[40];
        v93->field_0 = 1;
        v93->field_8 = v89;
        v93->field_10 = v90;
    }
    *((struct struct_0 ***)&*(v87)->padding_-28[32]) = (char *)v29 + 1;
    hashbrown::raw::RawTable$LT$T$C$A$GT$::with_capacity_in::h9be4660a8b39b13f(&v25, a2);
    v29 = v89;
    v30 = v90;
    v94 = *((int128_t *)&v25);
    v95 = *((int128_t *)&v27);
    v57 = v94;
    v58 = v95;
    v59 = v29;
    v60 = v30;
    v96 = _ZN4core3ops8function6FnOnce9call_once17h28a17089225366aeE.llvm.6718713517116596339(0);
    if (!v96)
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    v97 = *((int128_t *)&v96);
    *(v96) = (char *)&*(v96)->field_0 + 1;
    v98 = *((int128_t *)&g_555b50);
    v65 = v98;
    v99 = *((int128_t *)&anon.fe5408d5d7d92996f9ef4a67419399fb.2.llvm.6718713517116596339);
    v64 = v99;
    v66 = v97;
    if (*((long long *)&*(v87)->padding_-28[40]))
    {
        v100 = &*(v87)->padding_-28[40];
        v101 = v100->field_8;
        v102 = v100->field_10;
    }
    else
    {
        v101 = std::sys::pal::unix::rand::hashmap_random_keys::h37536acea0ea3646();
        v103 = &*(v87)->padding_-28[40];
        v103->field_0 = 1;
        v103->field_8 = v101;
        v103->field_10 = v102;
    }
    *((struct struct_0 ***)&*(v87)->padding_-28[32]) = (char *)v29 + 1;
    hashbrown::raw::RawTable$LT$T$C$A$GT$::with_capacity_in::hcc33f8de746ed638(&v25, a2);
    v29 = v101;
    v30 = v102;
    v104 = *((int128_t *)&v25);
    v105 = *((int128_t *)&v27);
    v67 = v104;
    v68 = v105;
    v69 = v29;
    v70 = v30;
    if (*((long long *)&*(v87)->padding_-28[40]))
    {
        v106 = &*(v87)->padding_-28[40];
        v107 = v106->field_8;
        v108 = v106->field_10;
    }
    else
    {
        v107 = std::sys::pal::unix::rand::hashmap_random_keys::h37536acea0ea3646();
        v109 = &*(v87)->padding_-28[40];
        v109->field_0 = 1;
        v109->field_8 = v107;
        v109->field_10 = v108;
    }
    *((struct struct_0 ***)&*(v87)->padding_-28[32]) = (char *)v29 + 1;
    hashbrown::raw::RawTable$LT$T$C$A$GT$::with_capacity_in::hec1ab0affd35f176(&v25, a2);
    v29 = v107;
    v30 = v108;
    v110 = *((int128_t *)&v25);
    v112 = v111 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v94 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v97 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v104 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v110;
    v113 = *((int128_t *)&v27);
    v115 = v114 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v95 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v98 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v99 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v105 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v113;
    v40 = v110;
    v42 = v113;
    v43 = v29;
    v44 = v30;
    if (!(char)vvar_2379)
    {
        v38 = 0;
        goto LABEL_4b75c1;
    }
    v34 = a2;
    v36 = v85;
    if (!a2)
    {
        v117 = 0;
        goto LABEL_4b7421;
    }
    if (!a5[70])
    {
        v119 = 0;
        v120 = 0;
    }
    else
    {
        v118 = 0;
        v117 = 0;
        do
        {
            v121 = v7;
            v122 = *((long long *)(v121 + v118 + 8));
            v123 = *((long long *)(v121 + v118 + 16));
            std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v25, v122, v123);
            if (*((int *)&v25) == 2)
                goto LABEL_4b838b;
            if (((short)*((int *)&v32) & 0xf000) != 0x4000)
            {
                v117 += *((long long *)&v33);
                continue;
            }
            else
            {
                if (!(!uu_cp::disk_usage_directory::h97bf732a1d9577f3(v122, v123)))
                    goto LABEL_4b838b;
                v117 += v124;
            }
            v118 += 24;
        } while ((a2 << 3) + (a2 << 4) != v118);
        goto LABEL_4b7421;
    }
    do
    {
        std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v25, *((long long *)(v7 + v119 + 8)), *((long long *)(v7 + v119 + 16)));
        if (*((int *)&v25) == 2)
        {
LABEL_4b838b:
            v128 = a0;
            v128->field_0 = 2;
            v128->field_8 = v26;
        }
    } while ((v126 = ((*((int *)&v32) & 0xf000) == 0x4000 ? 0 : *((long long *)&v33)), v117 = v120 + v126, v119 += 24, (a2 << 3) + (a2 << 4) != v119));
LABEL_4b7421:
    indicatif::draw_target::ProgressDrawTarget::stderr::h4a66a105bd7b0684(&v25, v125, v127);
    indicatif::progress_bar::ProgressBar::with_draw_target::h56a557ce18c94842(&v12, 1, v117, &v25);
    _ZN9indicatif5style8Template8from_str17h5ab5ab07129954d3E.llvm.7449428882404917472(&v25, "{msg}: [{elapsed_precise}] {wide_bar} {bytes:>7}/{total_bytes:7}: warning: source file  specified more than once\nwill not overwrite just-created ''", 64);
    a2 = v34;
    v129 = v25;
    v130 = *((int *)&(&v25)[8]);
    v131 = (&v25)[12];
    if (v129 == 0x8000000000000000)
    {
LABEL_4b85c4:
        v47[0] = v130;
        v48 = v131;
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    }
    v53 = *((int *)&(&v27)[4]);
    v51 = *((long long *)&(&v25)[13]);
    v47 = v129;
    v49[0] = v130;
    v50 = v131;
    _ZN9indicatif5style13ProgressStyle3new17he63c0f651a0a86f8E.llvm.7449428882404917472(&v25, &v47);
    if (v25 == 0x8000000000000000)
    {
        v130 = *((int *)&(&v25)[8]);
        v131 = (&v25)[12];
        goto LABEL_4b85c4;
    }
    memcpy(&v47, &v25, 136);
    indicatif::progress_bar::ProgressBar::set_style::ha2f60e08e54542c2(&v12, &v47);
    v24 = v14;
    v132 = *((int128_t *)&v12);
    v22 = v132;
    if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
        once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    indicatif::progress_bar::ProgressBar::with_message::hd521bd3733c78537(&v20, &v22, g_55c040, g_55c048);
    _ZN9indicatif12progress_bar11ProgressBar10tick_inner17h3f0569065f05af30E.llvm.13353452179671622258(&v20, std::time::Instant::now::h9c8927e2f473c2b3(), v124);
    v39 = v21;
    v133 = v20;
    v112 = v112 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v132 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v133;
    v38 = v133;
LABEL_4b75c1:
    v62 = (char *)v7 + 0x18 * a2;
    v6 = a5[78];
    v5 = a5[76];
    v61 = &a5[48];
    v4 = a5[68];
    v46 = v4;
    v45 = a5[66];
    v19 = 1;
    v11 = 0;
    v61 = v61;
    while (true)
    {
        if (v7 == v62)
        {
            if (v38)
            {
                v27 = v39;
                *((int128_t *)&v25) = *((int128_t *)&v38);
                indicatif::progress_bar::ProgressBar::finish::hb02588bc1bc9fc56(&v25, v135, v61);
                core::ptr::drop_in_place$LT$indicatif..progress_bar..ProgressBar$GT$::h56020f60fa3ab6fd(&v25, v244, v124);
            }
            v128->field_0 = (-0x100 | !((char)v11 & 1)) * 8 + 5;
            _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h76e9946abf67fcc7(&v40);
            _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd3d5f40a06a9d740(&v67);
        }
        if ((&v58)[1])
        {
            v140 = core::hash::BuildHasher::hash_one::h0104cabcaacbd063(&v59, v7);
            v141 = v57;
            v142 = (&v57)[1];
            v143 = v142 & v140;
            v144 = v140 >> 57;
            v145 = InterleaveLOV(v144, v144);
            v146 = (unsigned long long)(v145 >> 64) CONCAT (unsigned short)v145 CONCAT (unsigned short)v145 CONCAT (unsigned short)v145 CONCAT (unsigned short)v145;
            v112 = v112 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v144 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v145 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v146;
            v147 = (unsigned int)v146 CONCAT (unsigned int)v146 CONCAT (unsigned int)v146 CONCAT (unsigned int)v146;
            v137 = v137 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v147;
            v36 = 0;
            v35[0] = v147;
            while (true)
            {
                v148 = *((int128_t *)(v141 + v143));
                v34 = v148;
                v150 = v112 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v148 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | CmpEQV(v148, v147);
                v151 = UnaryOp GetMSBs;
                if ((unsigned int)v151)
                {
                    v152 = v7;
                    v153 = v152->field_8;
                    v154 = v152->field_10;
                    do
                    {
                        v155 = v151;
                        v157 = v141[1 + -1 * ((!(v155 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295) + (char *)v143 & v142)];
                        if ((char)_ZN59_$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$2eq17h1d8861b9e1bd0bd7E.llvm.6279117827671126663(v153, v154, v157[1], v157[2], v158, v159))
                        {
                            if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                                once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                            v169 = *((int128_t *)&g_55c040);
                            v112 = v150 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v169;
                            v47 = v169;
                            v12 = &v47;
                            v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf5c7cfdfb3184423;
                            v25 = &g_555370;
                            v26 = 2;
                            v29 = 0;
                            v27 = &v12;
                            v28 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v25, v168, v124);
                            v47 = 1;
                            v49 = v153;
                            v52 = v154;
                            v54 = 1;
                            v12 = &v47;
                            v13[0] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                            v25 = &g_555390;
                            v26[0] = 2;
                            v29 = 0;
                            v27 = &v12;
                            v28 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v25, v244, v124);
                            goto LABEL_4b7640;
                        }
                    } while ((v126 = ((*((int *)&v32) & 0xf000) == 0x4000 ? 0 : *((long long *)&v33)), v117 = v120 + v126, v119 += 24, (a2 << 3) + (a2 << 4) != v119));
                }
                v162 = *((int128_t *)&v34);
                v112 = v150 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v162 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | CmpEQV(v162, 340282366920938463463374607431768211455);
                if (UnaryOp GetMSBs)
                    break;
                v164 = v36;
                v36 = v164 + 16;
                v143 = 16 + (char *)v143 + v164 & v142;
                v137 = v137 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v35);
            }
        }
        v165 = v7;
        v166 = v165->field_8;
        v167 = v165->field_10;
        uu_cp::construct_dest_path::haa7ffe475c78372d(&v75, v166, v167, v9, v10, v19, v0, v1);
        v128 = a0;
        if (*((int *)&v75) != 13)
        {
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v20, v9, v10);
            ::0x4aaf10::core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h208a3451f3a30570(&v75, v244, v124, v171, v158, v159, *((long long *)&v2), *((long long *)&v3));
        }
        else
        {
            v21 = *((long long *)&v77);
            v170 = *((int128_t *)&v76);
            v112 = v112 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v170;
            v20 = v170;
        }
        v173 = (&v20)[1];
        v174 = v21;
        v34 = (&v20)[1];
        std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v25, v173, v174);
        v35[0] = v167;
        v8 = v166;
        if (vvar_2444 == 2)
        {
            v49[0] = v26;
            v47 = 2;
            goto LABEL_4b79fa;
        }
        memcpy(&v47, &v25, 176);
        if (v47 == 2)
        {
LABEL_4b79fa:
            _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h94632dc869fb5d57E.llvm.6903499209109998583(&v49);
            goto LABEL_4b7a07;
        }
        std::sys::pal::unix::fs::lstat::hbbeb53ede4a4ae6e(&v25, v34, v174);
        if (*((int *)&v25) == 2)
            goto LABEL_4b8492;
        if (((short)*((int *)&v32) & 0xf000) == 0xa000)
        {
LABEL_4b7a07:
            std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v25, v166, v167);
            if ((int)v25 != 2)
            {
                memcpy(&v47, &v25, 176);
                if (v47 == 2)
                    goto LABEL_4b7a6d;
                std::sys::pal::unix::fs::lstat::hbbeb53ede4a4ae6e(&v25, v166, v167);
                if (*((int *)&v25) == 2)
                {
LABEL_4b8492:
                    v128->field_0 = 2;
                    v128->field_8 = v26;
                    goto LABEL_4b84a7;
                }
                if (!(((int)(&v31)[1] & 0xf000) == 0xa000))
                    goto LABEL_4b7a7a;
            }
            else
            {
                v49[0] = v26;
                v47 = 2;
LABEL_4b7a6d:
                _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h94632dc869fb5d57E.llvm.6903499209109998583(&v49);
LABEL_4b7a7a:
                if (v6 == 1)
                    goto LABEL_4b7a85;
                else
                    goto LABEL_4b7b95;
            }
        }
LABEL_4b7a85:
        if (!(&v42)[1])
            goto LABEL_4b7b95;
        v175 = core::hash::BuildHasher::hash_one::h0104cabcaacbd063(&v43, &v20);
        v176 = v41;
        v177 = v176 & v175;
        v178 = v175 >> 57;
        v179 = InterleaveLOV(v178, v178);
        v180 = (unsigned long long)(v179 >> 64) CONCAT (unsigned short)v179 CONCAT (unsigned short)v179 CONCAT (unsigned short)v179 CONCAT (unsigned short)v179;
        v112 = v112 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v178 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v179 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v180;
        v181 = (unsigned int)v180 CONCAT (unsigned int)v180 CONCAT (unsigned int)v180 CONCAT (unsigned int)v180;
        v137 = v137 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v181;
        v18 = v40;
        v37[0] = v181;
        v18 = v18;
        v183 = 0;
        v184 = *((int128_t *)(v18 + v177));
        v36 = v184;
        v112 = v112 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v184 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | CmpEQV(v184, v181);
        v186 = UnaryOp GetMSBs;
        if ((unsigned int)v186)
        {
            do
            {
                v187 = v186;
                if ((char)_ZN59_$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$2eq17h1d8861b9e1bd0bd7E.llvm.6279117827671126663(v34, v174, v18[2 + 2 * -((!(v187 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295) + (char *)v177 & v176) + -((!(v187 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295) + (char *)v177 & v176)], v18[1 + 2 * -((!(v187 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295) + (char *)v177 & v176) + -((!(v187 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295) + (char *)v177 & v176)], v158, v159))
                {
                    if (v5 == 2)
                        goto LABEL_4b7b95;
                    v22 = v34;
                    v23 = v174;
                    v12 = v8;
                    v13[0] = v35;
                    v47 = &v22;
                    v49 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                    v52 = &v12;
                    v54 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                    v25 = &g_5553b0;
                    v26 = 3;
                    v29 = 0;
                    v27 = &v47;
                    v28 = 2;
                    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v73, &v25);
                    v128 = a0;
                    v128->field_18 = *((long long *)&v74);
                    *((int128_t *)&v128->field_8) = *((int128_t *)&v73);
                    v128->field_0 = 4;
                    goto LABEL_4b84a7;
                }
            } while ((v126 = ((*((int *)&v32) & 0xf000) == 0x4000 ? 0 : *((long long *)&v33)), v117 = v120 + v126, v119 += 24, (a2 << 3) + (a2 << 4) != v119));
LABEL_4b84a7:
            v248 = (long long)v20;
            if (v248)
                __rust_dealloc(v34);
            if (v38)
                core::ptr::drop_in_place$LT$indicatif..progress_bar..ProgressBar$GT$::h56020f60fa3ab6fd(&v38, v248, v247);
        }
        else
        {
            v191 = *((int128_t *)&v36);
            v112 = v112 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v191 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | CmpEQV(v191, 340282366920938463463374607431768211455);
            if (UnaryOp GetMSBs)
            {
LABEL_4b7b95:
                v194 = v8;
                v195 = v35;
                v196 = a0;
                if ((char)std::path::Path::is_dir::h9ac0db933706da51(v194, v195))
                {
                    uu_cp::copydir::copy_directory::hc7cc11fa2426db1e(&v12, &v38, v194, v195, v9, v10, a5, &v64, &v40, &v67, v0);
                }
                else
                {
                    uu_cp::construct_dest_path::haa7ffe475c78372d(&v25, v194, v195, v9, v10, v19, v0, v1);
                    v197 = v26;
                    v198 = v27;
                    v199 = v28;
                    if (v12 != 13)
                    {
                        v200 = *((int128_t *)&v29);
                        v112 = v112 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v200;
                        v201 = v31;
                        v137 = v137 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v201;
                        v17 = v201;
                        v16 = v200;
                        v13[0] = v197;
                        v14 = v198;
                        v15 = v199;
                        v12 = v25;
                        v12 = v12;
                        v13[0] = v13;
                        goto LABEL_4b7f90;
                    }
                    else
                    {
                        v18 = v198;
                        uu_cp::copy_file::h80a41499590e341a(&v47, &v38, v194, v195, v198, v199, a5, &v64, &v40, &v67);
                        if (v4)
                        {
                            v37[0] = v13;
                            uu_cp::aligned_ancestors::h926ed14216efe686(&v25, v194, v195, v18, v199);
                            v8 = v25;
                            v35[0] = v26;
                            v203 = v27;
                            if (v203)
                            {
                                v195 = v35;
                                v36 = 0x20 * v203 + (char *)v195;
                                while (true)
                                {
                                    v204 = v195[0];
                                    if (!v195[0])
                                        break;
                                    v205 = v195[2];
                                    v206 = v195[3];
                                    uucore::features::fs::canonicalize::h7ab26776cac58614(&v22, v204, v195[1], 0, 1);
                                    v207 = v22;
                                    if (v207 == 0x8000000000000000)
                                    {
                                        _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h94632dc869fb5d57E.llvm.6903499209109998583(&v23);
                                        goto LABEL_4b7d4d;
                                    }
                                    v208 = v23;
                                    uu_cp::copy_attributes::h1e6de8c81317045e(&v25, v208, v24, v205, v206, v61);
                                    if ((int)v25 != 13)
                                    {
                                        v209 = *((int128_t *)&v25);
                                        v112 = v112 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v209;
                                        v211 = *((int128_t *)&v27);
                                        v137 = v137 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v211;
                                        v212 = *((int128_t *)&v29);
                                        v138 = v138 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v212;
                                        v213 = v31;
                                        v139 = v139 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v213;
                                        v17 = v213;
                                        v16 = v212;
                                        v14 = v211;
                                        v12 = v209;
                                        if (v207)
                                            __rust_dealloc(v208);
                                        v223 = v8;
                                        v197 = v37;
                                        if (v223)
                                            __rust_dealloc(v35);
                                        if (v47 != 13)
                                        {
                                            ::0x4aaf10::core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h208a3451f3a30570(&v47, v223, v222, v171, v158, v159, *((long long *)&v2), *((long long *)&v3));
                                            goto LABEL_4b7f21;
                                        }
                                    }
                                    else
                                    {
                                        if (v207)
                                            __rust_dealloc(v208);
LABEL_4b7d4d:
                                        v195 += 1;
                                        if (v195 == v36)
                                            break;
                                    }
                                }
                            }
                            v197 = v37;
                            if (v8)
                                __rust_dealloc(v35);
                        }
                        v217 = *((int128_t *)&v47);
                        v112 = v112 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v217;
                        v218 = *((int128_t *)((char *)&v51 + 3));
                        v137 = v137 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v218;
                        v219 = *((int128_t *)&v55);
                        v138 = v138 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v219;
                        v220 = *((int128_t *)&v56);
                        v139 = v139 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v220;
                        v17 = v220;
                        v16 = v219;
                        v14 = v218;
                        v12 = v217;
LABEL_4b7f21:
                        if (v197)
                            __rust_dealloc(v18);
                    }
                }
                v12 = v12;
                v13[0] = v13;
                if (v12 != 13)
                {
LABEL_4b7f90:
                    v13[0] = v13;
                    v12 = v12;
                    v225 = (long long)(&v14)[8];
                    v226 = v16;
                    v112 = v112 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v226;
                    v227 = v17;
                    v115 = v137 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v227;
                    v31 = v227;
                    v29 = v226;
                    v27 = v14;
                    v28 = v225;
                    v25 = v12;
                    v26[0] = v13;
                    v63 = &v25;
                    v228 = v25;
                    v229 = (char *)v228 + 2;
                    if (11 <= v229)
                        v229 = 4;
                    if (v229 != 3 && v229 != 6)
                    {
                        if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                            once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                        v234 = *((int128_t *)&g_55c040);
                        v112 = v112 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v234;
                        v22 = v234;
                        v71 = &v22;
                        v72 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf5c7cfdfb3184423;
                        v47 = &g_555318;
                        v49 = 2;
                        v55 = 0;
                        v52 = &v71;
                        v54 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v47, v225, v27);
                        v22 = &v63;
                        v23 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4e13e03281125ccf;
                        v47 = &g_555338;
                        v49 = 2;
                        v55 = 0;
                        v52 = &v22;
                        v54 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v47, v244, v124);
                        v232 = v25;
                    }
                    ::0x4aaf10::core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h208a3451f3a30570(&v25, v225, v27, 4, v198, v216, *((long long *)&v2), *((long long *)&v3));
                    v239 = (v232 != 8 ? 1 : 1);
                    v11 = v239;
                    v235 = v195 | -0x100 | 1 | -0x100 | 1;
                    v26[0] = v26;
                    goto LABEL_4b81b7;
                }
                else if (!v174)
                {
                    v230 = 1;
LABEL_4b8172:
                    memcpy(v26, v34, v174);
                    v25 = v174;
                    v26[0] = v230;
                    v27 = v174;
                    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h59e7ee9522f2f279(&v40, &v25, v124, v171, v158, v159);
                    v235 = 0;
                    v26[0] = v26;
LABEL_4b81b7:
                    v26[0] = v26;
                    if ((long long)v20)
                        __rust_dealloc((&v20)[1]);
                    if (!v235 && (int)v12 != 13)
                        ::0x4aaf10::core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h208a3451f3a30570(&v12, (long long)v20, v240, 1, v241, v242, *((long long *)&v2), *((long long *)&v3));
                }
                else
                {
                    if (v174 < 0)
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    v230 = __rust_alloc(v174, 1);
                    if (v230)
                        goto LABEL_4b8172;
                }
LABEL_4b7640:
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::ha78ee962ee1146d5(&v57, v7, v245, v246, v241, v242);
                v7 += 1;
            }
            else
            {
                v177 = 16 + (char *)v177 + v183 & v176;
                v137 = v137 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v37);
                v18 = v18;
            }
        }
    }
}
