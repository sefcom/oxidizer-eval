long long uu_realpath::uu_app::h447138237669ebf4(unsigned long long a0)
{
    void* v0;  // [bp-0xa78], Other Possible Types: char, unsigned long long
    unsigned long long v1;  // [sp-0xa70]
    void* v2;  // [sp-0xa68], Other Possible Types: unsigned long long
    void* v3;  // [sp-0xa50]
    void* v4;  // [sp-0xa40]
    unsigned long long v5;  // [sp-0xa28]
    void* v6;  // [sp-0xa10]
    unsigned long long v7;  // [sp-0xa08]
    int v8;  // [sp-0xa00]
    unsigned long long *v9;  // [sp-0x9f0], Other Possible Types: unsigned long long
    int v10;  // [bp-0x9e8], Other Possible Types: unsigned long
    unsigned long long v11;  // [sp-0x9d8]
    int v12;  // [sp-0x9d0]
    unsigned long long v13;  // [sp-0x9c0]
    int v14;  // [sp-0x9b8]
    unsigned long long v15;  // [sp-0x9a8]
    int v16;  // [sp-0x9a0]
    unsigned long long v17;  // [sp-0x990]
    int v18;  // [sp-0x988]
    unsigned long long v19;  // [sp-0x978]
    int v20;  // [sp-0x970]
    unsigned long long v21;  // [sp-0x960]
    int v22;  // [sp-0x958]
    unsigned long long v23;  // [sp-0x948]
    int v24;  // [sp-0x940]
    unsigned long long v25;  // [sp-0x930]
    int v26;  // [bp-0x928]
    int v27;  // [bp-0x920]
    unsigned long long v28;  // [sp-0x918]
    int v29;  // [bp-0x910], Other Possible Types: unsigned long
    unsigned long long v30;  // [sp-0x900]
    int v31;  // [sp-0x8f8]
    unsigned long long v32;  // [sp-0x8e8]
    int v33;  // [sp-0x8e0]
    unsigned long long v34;  // [sp-0x8d0]
    void* v35;  // [sp-0x8c8]
    unsigned long long v36;  // [sp-0x8c0]
    int v37;  // [sp-0x8b8]
    unsigned long v38;  // [sp-0x8a8], Other Possible Types: unsigned long long
    int v39;  // [bp-0x8a0], Other Possible Types: char
    unsigned long long v40;  // [sp-0x880]
    unsigned long long v41;  // [sp-0x868]
    unsigned long long v42;  // [sp-0x860]
    unsigned long long v43;  // [sp-0x858]
    unsigned long long v44;  // [sp-0x850]
    void* v45;  // [sp-0x848]
    unsigned long long v46;  // [sp-0x838]
    unsigned int v47;  // [sp-0x830]
    unsigned short v48;  // [sp-0x82c]
    char v49;  // [bp-0x829]
    unsigned long long v50;  // [sp-0x818]
    unsigned long long v51;  // [sp-0x810]
    char v52;  // [bp-0x7bc]
    char v53;  // [bp-0x7b4]
    int v54;  // [bp-0x7a8], Other Possible Types: void*, char, unsigned long long
    unsigned long long v55;  // [sp-0x7a0]
    void* v56;  // [sp-0x798], Other Possible Types: unsigned long long
    void* v57;  // [sp-0x780]
    void* v58;  // [sp-0x770]
    unsigned long long v59;  // [sp-0x758]
    void* v60;  // [sp-0x740]
    unsigned long long v61;  // [sp-0x738]
    int v62;  // [sp-0x730]
    unsigned long long v63;  // [sp-0x720]
    int v64;  // [sp-0x718]
    unsigned long long v65;  // [sp-0x708]
    int v66;  // [sp-0x700]
    unsigned long long v67;  // [sp-0x6f0]
    int v68;  // [sp-0x6e8]
    unsigned long long v69;  // [sp-0x6d8]
    int v70;  // [sp-0x6d0]
    unsigned long long v71;  // [sp-0x6c0]
    int v72;  // [sp-0x6b8]
    unsigned long long v73;  // [sp-0x6a8]
    int v74;  // [sp-0x6a0]
    unsigned long long v75;  // [sp-0x690]
    int v76;  // [sp-0x688]
    unsigned long long *v77;  // [sp-0x678], Other Possible Types: unsigned long long
    int v78;  // [bp-0x670], Other Possible Types: unsigned long
    unsigned long long v79;  // [sp-0x660]
    int v80;  // [bp-0x658]
    int v81;  // [bp-0x650]
    unsigned long long v82;  // [sp-0x648]
    int v83;  // [bp-0x640], Other Possible Types: unsigned long
    unsigned long long v84;  // [sp-0x630]
    int v85;  // [sp-0x628]
    unsigned long long v86;  // [sp-0x618]
    int v87;  // [sp-0x610]
    unsigned long long v88;  // [sp-0x600]
    void* v89;  // [sp-0x5f8]
    unsigned long long v90;  // [sp-0x5f0]
    int v91;  // [sp-0x5e8]
    unsigned long long v92;  // [sp-0x5d8]
    unsigned long long v93;  // [sp-0x5b0]
    unsigned long long v94;  // [sp-0x598]
    unsigned long long v95;  // [sp-0x590]
    void* v96;  // [sp-0x588], Other Possible Types: unsigned long long
    unsigned long long v97;  // [sp-0x580]
    void* v98;  // [sp-0x578]
    int v99;  // [sp-0x568], Other Possible Types: unsigned long long
    unsigned int v100;  // [sp-0x560]
    unsigned short v101;  // [sp-0x55c]
    char v102;  // [bp-0x559]
    unsigned long long v103;  // [sp-0x4ec]
    unsigned int v104;  // [sp-0x4e4]
    void* v105;  // [bp-0x4d8], Other Possible Types: char, unsigned long, unsigned long long
    char v106;  // [bp-0x4d0], Other Possible Types: unsigned long long
    void* v107;  // [sp-0x4c8], Other Possible Types: unsigned long long
    unsigned long v108;  // [sp-0x320], Other Possible Types: unsigned long long
    int v109;  // [bp-0x318], Other Possible Types: char
    char v110;  // [sp-0x28c]
    char v111;  // [bp-0x28b], Other Possible Types: unsigned short
    char v112;  // [sp-0x289]
    int v113;  // [bp-0x288], Other Possible Types: unsigned long long
    unsigned long long v114;  // [sp-0x280]
    void* v115;  // [sp-0x278]
    unsigned long long v116;  // [sp-0x270]
    char v117;  // [sp-0x3c]
    unsigned short v118;  // [sp-0x3b]
    char v119;  // [sp-0x39]
    unsigned long long v121;  // rbx
    unsigned long long v122;  // rsi
    unsigned long long v123;  // rax
    unsigned long long v124;  // rcx
    unsigned long long *v125;  // rbx
    unsigned long long *v127;  // rax
    unsigned long long *v128;  // rcx
    unsigned long long v129;  // rcx
    unsigned long long v130;  // rdx
    unsigned long long v131;  // rbx
    unsigned long long v132;  // rsi
    unsigned long long v133;  // rax
    unsigned long long v134;  // rcx
    unsigned long long v135;  // rax
    unsigned long long v136;  // rcx
    unsigned long long *v137;  // rsi
    unsigned long long *v138;  // rax
    unsigned long long *v139;  // rcx
    unsigned long long v140;  // rcx
    unsigned long long v141;  // rdx
    unsigned long long v142;  // rbx
    unsigned long long v143;  // rsi
    unsigned long long v144;  // rax
    unsigned long long v145;  // rcx
    unsigned long long v146;  // rbx
    unsigned long long v147;  // rax
    unsigned long long v148;  // rcx
    unsigned long long v149;  // r14
    unsigned long long v150;  // rsi
    unsigned long long v151;  // rax
    unsigned long long v152;  // rcx
    unsigned long long v153;  // rbx
    unsigned long long v154;  // rsi

    if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
        once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    clap_builder::builder::command::Command::new::hd1dec6b404496268(&v0, g_4ee7b0, g_4ee7b8);
    v50 = "0.0.27{} [OPTION]... FILE...";
    v51 = &g_1;
    memcpy(&v54, &v0, 712);
    clap_builder::builder::command::Command::about::hec490c06012e1bc3(&v0, &v54, "Print the resolved pathquietstriplogicalfiles0.0.27{} [OPTION]... FILE...", 23);
    uucore::format_usage::ha88dc4d716cb78ed(&v105, "{} [OPTION]... FILE...", 22);
    v121 = v105;
    if (v121 != 0x8000000000000000)
        *((int128_t *)&v54) = *((int128_t *)&v106);
    v122 = v38;
    if (v122 != 0x8000000000000000 && v122)
        __rust_dealloc(*((long long *)&v39));
    v38 = v121;
    *((int128_t *)&v39) = (int128_t)v54;
    memcpy(&v54, &v0, 700);
    v103 = 549755814016 | *((long long *)&v52);
    v104 = *((int *)&v53);
    *((int128_t *)&v8) = 0;
    *((int128_t *)&v10) = 0;
    *((int128_t *)&v12) = 0;
    *((int128_t *)&v14) = 0;
    *((int128_t *)&v16) = 0;
    *((int128_t *)&v18) = 0;
    *((int128_t *)&v20) = 0;
    *((int128_t *)&v22) = 0;
    *((int128_t *)&v24) = 0;
    *((int128_t *)&v26) = 0;
    *((int128_t *)&v29) = 0;
    *((int128_t *)&v31) = 0;
    *((int128_t *)&v33) = 0;
    v0 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = &g_1;
    v6 = 0;
    v7 = &g_1;
    v9 = &g_1;
    v11 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v28 = &g_1;
    v30 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v35 = 0;
    v36 = 0x8000000000000000;
    v38 = 0x8000000000000000;
    v40 = 9223372036854775809;
    v41 = "quietstriplogicalfiles0.0.27{} [OPTION]... FILE...";
    v42 = &g_1;
    v43 = "quietstriplogicalfiles0.0.27{} [OPTION]... FILE...";
    v44 = &g_1;
    v45 = 0;
    v46 = 4785074604081265;
    v47 = 0;
    v48 = 3337;
    v105 = 0;
    v106 = &g_1;
    v107 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::hec979437f3c01b0b(&v105, 0, 39);
    v123 = v106;
    v124 = v107;
    *((int128_t *)(v123 + v124 + (char *)&g_1)) = 140131684394963100452094902775021726062;
    *((int128_t *)(v123 + v124)) = 152038060492836063735163464382572162884;
    *((long long *)(v123 + v124 + (char *)&g_11)) = 8316024673781441641;
    v107 = v124 + (char *)&g_21;
    *((int128_t *)&v113) = *((int128_t *)&v106);
    if (v36 != 0x8000000000000000)
        *((int128_t *)&v105) = (int128_t)v113;
    v36 = v105;
    *((int128_t *)&v37) = *((int128_t *)&v105);
    memcpy(&v105, &v0, 588);
    v111 = v48;
    v112 = v49;
    *((uint128_t **)&v110) = &g_1;
    clap_builder::builder::command::Command::arg::h03b14665e1b05112(&v0, &v54, &v105);
    *((int128_t *)&v62) = 0;
    *((int128_t *)&v64) = 0;
    *((int128_t *)&v66) = 0;
    *((int128_t *)&v68) = 0;
    *((int128_t *)&v70) = 0;
    *((int128_t *)&v72) = 0;
    *((int128_t *)&v74) = 0;
    *((int128_t *)&v76) = 0;
    *((int128_t *)&v78) = 0;
    *((int128_t *)&v80) = 0;
    *((int128_t *)&v83) = 0;
    *((int128_t *)&v85) = 0;
    *((int128_t *)&v87) = 0;
    v54 = 0;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v59 = &g_1;
    v60 = 0;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v88 = &g_1;
    v89 = 0;
    v90 = 0x8000000000000000;
    v92 = 0x8000000000000000;
    v93 = 9223372036854775809;
    v94 = "striplogicalfiles0.0.27{} [OPTION]... FILE...";
    v95 = &g_1;
    v96 = "striplogicalfiles0.0.27{} [OPTION]... FILE...";
    v97 = &g_1;
    v98 = 0;
    v99 = 4785074604081267;
    v100 = 0;
    v101 = 3337;
    v125 = (long long)v78;
    v127 = &g_1;
    if (v125 == (long long)(&v76)[8])
    {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h321fef6f04399c70(&v76);
        v127 = v77;
    }
    v128 = v125 * &g_1;
    *((char **)((char *)v127 + v128 * &g_1)) = "no-symlinks";
    *((uint128_t **)((char *)v127 + v128 * &g_1 + &g_1)) = &g_1;
    *((uint128_t **)((char *)v127 + v128 * &g_1 + &g_1)) = &g_1;
    v78 = v125 + &g_1;
    memcpy(&v105, &v54, 592);
    v54 = 0;
    v55 = &g_1;
    v56 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::hec979437f3c01b0b(&v54, 0, 68);
    v129 = v55;
    v130 = v56;
    *((int128_t *)(v129 + v130 + (char *)&g_21)) = 143724793355310890908895847134106775411;
    *((int128_t *)(v129 + v130 + (char *)&g_11)) = 134844607655927065273936412794862465908;
    *((int128_t *)(v129 + v130 + (char *)&g_1)) = 146741741413229824402541239255257080942;
    *((int128_t *)(v129 + v130)) = 129102063761189104086550002330109767247;
    *((int *)(v129 + v130 + (char *)&g_31)) = 1936420457;
    v56 = v130 + (char *)&g_41;
    v131 = v54;
    *((int128_t *)&v113) = *((int128_t *)&v55);
    if (v131 != 0x8000000000000000)
        *((int128_t *)&v54) = (int128_t)v113;
    v132 = v108;
    if (v132 != 0x8000000000000000 && v132)
        __rust_dealloc(*((long long *)&v109));
    v108 = v131;
    *((int128_t *)&v109) = *((int128_t *)&v54);
    memcpy(&v113, &v105, 588);
    v118 = v111;
    v119 = v112;
    *((uint128_t **)&v117) = &g_1;
    clap_builder::builder::command::Command::arg::h03b14665e1b05112(&v54, &v0, &v113);
    *((int128_t *)&v8) = 0;
    *((int128_t *)&v10) = 0;
    *((int128_t *)&v12) = 0;
    *((int128_t *)&v14) = 0;
    *((int128_t *)&v16) = 0;
    *((int128_t *)&v18) = 0;
    *((int128_t *)&v20) = 0;
    *((int128_t *)&v22) = 0;
    *((int128_t *)&v24) = 0;
    *((int128_t *)&v26) = 0;
    *((int128_t *)&v29) = 0;
    *((int128_t *)&v31) = 0;
    *((int128_t *)&v33) = 0;
    v0 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = &g_1;
    v6 = 0;
    v7 = &g_1;
    v9 = &g_1;
    v11 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v28 = &g_1;
    v30 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v35 = 0;
    v36 = 0x8000000000000000;
    v38 = 0x8000000000000000;
    v40 = 9223372036854775809;
    v41 = &g_410ccc;
    v42 = &g_1;
    v43 = &g_410ccc;
    v44 = &g_1;
    v45 = 0;
    v46 = 4785074604081274;
    v47 = 0;
    v48 = 3337;
    v105 = 0;
    v106 = &g_1;
    v107 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::hec979437f3c01b0b(&v105, 0, 53);
    v133 = v106;
    v134 = v107;
    *((int128_t *)(v133 + v134 + (char *)&g_11)) = 134823838011066850255914895166460272688;
    *((int128_t *)(v133 + v134 + (char *)&g_1)) = 122457247705390947667837475083764132198;
    *((int128_t *)(v133 + v134)) = 43139984252227407021333699522341135699;
    *((long long *)(v133 + v134 + (char *)&g_21)) = 7308895159849414176;
    v107 = v134 + (char *)&g_31;
    *((int128_t *)&v113) = *((int128_t *)&v106);
    if (v36 != 0x8000000000000000)
        *((int128_t *)&v105) = (int128_t)v113;
    v36 = v105;
    *((int128_t *)&v37) = *((int128_t *)&v105);
    memcpy(&v105, &v0, 588);
    v111 = *((short *)((char *)&v48 + 1));
    v112 = v49;
    *((uint128_t **)&v110) = &g_1;
    clap_builder::builder::command::Command::arg::h03b14665e1b05112(&v0, &v54, &v105);
    *((int128_t *)&v62) = 0;
    *((int128_t *)&v64) = 0;
    *((int128_t *)&v66) = 0;
    *((int128_t *)&v68) = 0;
    *((int128_t *)&v70) = 0;
    *((int128_t *)&v72) = 0;
    *((int128_t *)&v74) = 0;
    *((int128_t *)&v76) = 0;
    *((int128_t *)&v78) = 0;
    *((int128_t *)&v80) = 0;
    *((int128_t *)&v83) = 0;
    *((int128_t *)&v85) = 0;
    *((int128_t *)&v87) = 0;
    v54 = 0;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v59 = &g_1;
    v60 = 0;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v88 = &g_1;
    v89 = 0;
    v90 = 0x8000000000000000;
    v92 = 0x8000000000000000;
    v93 = 9223372036854775809;
    v94 = "logicalfiles0.0.27{} [OPTION]... FILE...";
    v95 = &g_1;
    v96 = "logicalfiles0.0.27{} [OPTION]... FILE...";
    v97 = &g_1;
    v98 = 0;
    v99 = 4785074604081228;
    v100 = 0;
    v101 = 3337;
    v105 = 0;
    v106 = &g_1;
    v107 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::hec979437f3c01b0b(&v105, 0, 39);
    v135 = v106;
    v136 = v107;
    *((int128_t *)(v135 + v136 + (char *)&g_1)) = 153029430604595560605802116662170644336;
    *((int128_t *)(v135 + v136)) = 145464206997830901906462992124999853426;
    *((long long *)(v135 + v136 + (char *)&g_11)) = 8316862535939488115;
    v107 = v136 + (char *)&g_21;
    *((int128_t *)&v113) = *((int128_t *)&v106);
    if (v90 != 0x8000000000000000)
        *((int128_t *)&v105) = (int128_t)v113;
    v90 = v105;
    *((int128_t *)&v91) = *((int128_t *)&v105);
    memcpy(&v105, &v54, 588);
    v111 = v101;
    v112 = v102;
    *((uint128_t **)&v110) = &g_1;
    clap_builder::builder::command::Command::arg::h03b14665e1b05112(&v54, &v0, &v105);
    *((int128_t *)&v8) = 0;
    *((int128_t *)&v10) = 0;
    *((int128_t *)&v12) = 0;
    *((int128_t *)&v14) = 0;
    *((int128_t *)&v16) = 0;
    *((int128_t *)&v18) = 0;
    *((int128_t *)&v20) = 0;
    *((int128_t *)&v22) = 0;
    *((int128_t *)&v24) = 0;
    *((int128_t *)&v26) = 0;
    *((int128_t *)&v29) = 0;
    *((int128_t *)&v31) = 0;
    *((int128_t *)&v33) = 0;
    v0 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = &g_1;
    v6 = 0;
    v7 = &g_1;
    v9 = &g_1;
    v11 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v28 = &g_1;
    v30 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v35 = 0;
    v36 = 0x8000000000000000;
    v38 = 0x8000000000000000;
    v40 = 9223372036854775809;
    v41 = "physical";
    v42 = &g_1;
    v43 = "physical";
    v44 = &g_1;
    v45 = 0;
    v46 = 4785074604081232;
    v47 = 0;
    v48 = 3337;
    v137 = (long long)v10;
    if ((&v8)[8] - (char *)v137 <= 1)
    {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::hae8e28666f550f30(&v8, v137, 2);
        v137 = (long long)v10;
    }
    v138 = v9;
    v139 = v137 * &g_1;
    *((char **)(v138 + v139)) = "striplogicalfiles0.0.27{} [OPTION]... FILE...";
    *((uint128_t **)(v138 + v139 + (char *)&g_1)) = &g_1;
    *((char **)(v138 + v139 + (char *)&g_1)) = "logicalfiles0.0.27{} [OPTION]... FILE...";
    *((uint128_t **)(v138 + v139 + (char *)&g_11)) = &g_1;
    v10 = v137 + &g_1;
    memcpy(&v105, &v0, 592);
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::hec979437f3c01b0b(&v0, 0, 41);
    v140 = v1;
    v141 = v2;
    *((int128_t *)(v140 + v141 + (char *)&g_11)) = 55102854062847634536150674188355859566;
    *((int128_t *)(v140 + v141 + (char *)&g_1)) = 43056583137750029154261881450262651168;
    *((int128_t *)(v140 + v141)) = 153419034696698745126790316455170893170;
    v2 = v141 + (char *)&g_21;
    v142 = v0;
    *((int128_t *)&v113) = *((int128_t *)&v1);
    if (v142 != 0x8000000000000000)
        *((int128_t *)&v0) = (int128_t)v113;
    v143 = v108;
    if (v143 != 0x8000000000000000 && v143)
        __rust_dealloc((long long)v109);
    v108 = v142;
    *((int128_t *)&v109) = *((int128_t *)&v0);
    memcpy(&v113, &v105, 588);
    v118 = v111;
    v119 = v112;
    *((uint128_t **)&v117) = &g_1;
    clap_builder::builder::command::Command::arg::h03b14665e1b05112(&v0, &v54, &v113);
    *((int128_t *)&v62) = 0;
    *((int128_t *)&v64) = 0;
    *((int128_t *)&v66) = 0;
    *((int128_t *)&v68) = 0;
    *((int128_t *)&v70) = 0;
    *((int128_t *)&v72) = 0;
    *((int128_t *)&v74) = 0;
    *((int128_t *)&v76) = 0;
    *((int128_t *)&v78) = 0;
    *((int128_t *)&v80) = 0;
    *((int128_t *)&v83) = 0;
    *((int128_t *)&v85) = 0;
    *((int128_t *)&v87) = 0;
    v54 = 0;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v59 = &g_1;
    v60 = 0;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v88 = &g_1;
    v89 = 0;
    v90 = 0x8000000000000000;
    v92 = 0x8000000000000000;
    v93 = 9223372036854775809;
    v94 = "canonicalize-existing";
    v95 = &g_11;
    v96 = "canonicalize-existing";
    v97 = &g_11;
    v98 = 0;
    v99 = 4785074604081253;
    v100 = 0;
    v101 = 3337;
    v105 = 0;
    v106 = &g_1;
    v107 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::hec979437f3c01b0b(&v105, 0, 115);
    v144 = v106;
    v145 = v107;
    *((int128_t *)(v144 + v145 + (char *)&g_51)) = 160032439740208826633966587986440056941;
    *((int128_t *)(v144 + v145 + 80)) = 148059002548411277022890686501912539765;
    *((int128_t *)(v144 + v145 + (char *)&g_31)) = 132120308326804924762167061877841404005;
    *((int128_t *)(v144 + v145 + (char *)&g_21)) = 138842675149993255642681206219738145568;
    *((int128_t *)(v144 + v145 + (char *)&g_11)) = 161430567235438129490658631292080191859;
    *((int128_t *)(v144 + v145 + (char *)&g_1)) = 43165884018380737997498351533463203686;
    *((int128_t *)(v144 + v145)) = 43165554027848353185829832350145339747;
    *((int *)(v144 + v145 + (char *)&g_61)) = 1953720696;
    v107 = v145 + 115;
    *((int128_t *)&v113) = *((int128_t *)&v106);
    if (v90 != 0x8000000000000000)
        *((int128_t *)&v105) = (int128_t)v113;
    v90 = v105;
    *((int128_t *)&v91) = *((int128_t *)&v105);
    memcpy(&v105, &v54, 588);
    v111 = *((short *)((char *)&v101 + 1));
    v112 = v102;
    *((uint128_t **)&v110) = &g_1;
    clap_builder::builder::command::Command::arg::h03b14665e1b05112(&v54, &v0, &v105);
    *((int128_t *)&v8) = 0;
    *((int128_t *)&v10) = 0;
    *((int128_t *)&v12) = 0;
    *((int128_t *)&v14) = 0;
    *((int128_t *)&v16) = 0;
    *((int128_t *)&v18) = 0;
    *((int128_t *)&v20) = 0;
    *((int128_t *)&v22) = 0;
    *((int128_t *)&v24) = 0;
    *((int128_t *)&v26) = 0;
    *((int128_t *)&v29) = 0;
    *((int128_t *)&v31) = 0;
    *((int128_t *)&v33) = 0;
    v0 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = &g_1;
    v6 = 0;
    v7 = &g_1;
    v9 = &g_1;
    v11 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v28 = &g_1;
    v30 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v35 = 0;
    v36 = 0x8000000000000000;
    v38 = 0x8000000000000000;
    v40 = 9223372036854775809;
    v41 = "canonicalize-missingcanonicalize by following every symlink in every component of the given name recursively, without requirements on components existencerelative-toDIR";
    v42 = &g_11;
    v43 = "canonicalize-missingcanonicalize by following every symlink in every component of the given name recursively, without requirements on components existencerelative-toDIR";
    v44 = &g_11;
    v45 = 0;
    v46 = 4785074604081261;
    v47 = 0;
    v48 = 3337;
    v105 = 0;
    v106 = &g_1;
    v107 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::hec979437f3c01b0b(&v105, 0, 134);
    v146 = v107;
    memcpy(v106 + v146, "canonicalize by following every symlink in every component of the given name recursively, without requirements on components existencerelative-toDIR", 134);
    v107 = v146 + 134;
    *((int128_t *)&v113) = *((int128_t *)&v106);
    if (v36 != 0x8000000000000000)
        *((int128_t *)&v105) = (int128_t)v113;
    v36 = v105;
    *((int128_t *)&v37) = *((int128_t *)&v105);
    memcpy(&v105, &v0, 588);
    v111 = *((short *)((char *)&v48 + 1));
    v112 = v49;
    *((uint128_t **)&v110) = &g_1;
    clap_builder::builder::command::Command::arg::h03b14665e1b05112(&v0, &v54, &v105);
    *((int128_t *)&v62) = 0;
    *((int128_t *)&v64) = 0;
    *((int128_t *)&v66) = 0;
    *((int128_t *)&v68) = 0;
    *((int128_t *)&v70) = 0;
    *((int128_t *)&v72) = 0;
    *((int128_t *)&v74) = 0;
    *((int128_t *)&v76) = 0;
    *((int128_t *)&v78) = 0;
    *((int128_t *)&v80) = 0;
    *((int128_t *)&v85) = 0;
    *((int128_t *)&v87) = 0;
    v54 = 0;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v59 = &g_1;
    v60 = 0;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v82 = &g_1;
    *((int128_t *)&v83) = 0;
    v84 = &g_1;
    v86 = &g_1;
    v88 = &g_1;
    v89 = 0;
    v90 = 0x8000000000000000;
    v92 = 0x8000000000000000;
    v93 = 9223372036854775809;
    v94 = "relative-toDIR";
    v95 = &g_1;
    v96 = "relative-toDIR";
    v97 = &g_1;
    v98 = 0;
    v99 = 0x11000000110000;
    v100 = 0;
    v101 = 3337;
    v113 = "DIR";
    v114 = &g_1;
    v115 = 0;
    v116 = &g_1;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h856910d8809bb21d(&v105, &v113);
    if ((long long)(&v80)[8])
        __rust_dealloc(8);
    v83 = v107;
    *((int128_t *)&v81) = *((int128_t *)&v105);
    memcpy(&v105, &v54, 592);
    clap_builder::builder::arg::Arg::value_parser::h9a7bb5f717627c20(&v54, &v105);
    v105 = 0;
    v106 = &g_1;
    v107 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::hec979437f3c01b0b(&v105, 0, 39);
    v147 = v106;
    v148 = v107;
    *((int128_t *)(v147 + v148 + (char *)&g_1)) = 134866857477209936908976477190506964069;
    *((int128_t *)(v147 + v148)) = 157411932053442485384113607621198049904;
    *((long long *)(v147 + v148 + (char *)&g_11)) = 5929345290509492325;
    v107 = v148 + (char *)&g_21;
    v149 = v105;
    *((int128_t *)&v113) = *((int128_t *)&v106);
    if (v149 != 0x8000000000000000)
        *((int128_t *)&v105) = (int128_t)v113;
    v150 = v90;
    if (v150 != 0x8000000000000000 && v150)
        __rust_dealloc((long long)v91);
    v90 = v149;
    *((int128_t *)&v91) = *((int128_t *)&v105);
    memcpy(&v105, &v54, 592);
    clap_builder::builder::command::Command::arg::h03b14665e1b05112(&v54, &v0, &v105);
    *((int128_t *)&v8) = 0;
    *((int128_t *)&v10) = 0;
    *((int128_t *)&v12) = 0;
    *((int128_t *)&v14) = 0;
    *((int128_t *)&v16) = 0;
    *((int128_t *)&v18) = 0;
    *((int128_t *)&v20) = 0;
    *((int128_t *)&v22) = 0;
    *((int128_t *)&v24) = 0;
    *((int128_t *)&v26) = 0;
    *((int128_t *)&v31) = 0;
    *((int128_t *)&v33) = 0;
    v0 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = &g_1;
    v6 = 0;
    v7 = &g_1;
    v9 = &g_1;
    v11 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v28 = &g_1;
    *((int128_t *)&v29) = 0;
    v30 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v35 = 0;
    v36 = 0x8000000000000000;
    v38 = 0x8000000000000000;
    v40 = 9223372036854775809;
    v41 = "relative-base";
    v42 = &g_1;
    v43 = "relative-base";
    v44 = &g_1;
    v45 = 0;
    v46 = 0x11000000110000;
    v47 = 0;
    v48 = 3337;
    v113 = "DIR";
    v114 = &g_1;
    v115 = 0;
    v116 = &g_1;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h856910d8809bb21d(&v105, &v113);
    if ((long long)(&v26)[8])
        __rust_dealloc(8);
    v29 = v107;
    *((int128_t *)&v27) = *((int128_t *)&v105);
    memcpy(&v105, &v0, 592);
    clap_builder::builder::arg::Arg::value_parser::h9a7bb5f717627c20(&v0, &v105);
    v105 = 0;
    v106 = &g_1;
    v107 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::hec979437f3c01b0b(&v105, 0, 43);
    v151 = v106;
    v152 = v107;
    *((int128_t *)(v151 + v152 + (char *)&g_11)) = 109377115101153811585531903271942320160;
    *((int128_t *)(v151 + v152 + (char *)&g_1)) = 138843994274550138323161122397561058401;
    *((int128_t *)(v151 + v152)) = 149041746777561349171475249129195139696;
    v107 = v152 + (char *)&g_21;
    v153 = v105;
    *((int128_t *)&v113) = *((int128_t *)&v106);
    if (v153 != 0x8000000000000000)
        *((int128_t *)&v105) = (int128_t)v113;
    v154 = v36;
    if (v154 != 0x8000000000000000 && v154)
        __rust_dealloc((long long)v37);
    v36 = v153;
    *((int128_t *)&v37) = *((int128_t *)&v105);
    memcpy(&v105, &v0, 592);
    clap_builder::builder::command::Command::arg::h03b14665e1b05112(&v0, &v54, &v105);
    *((int128_t *)&v62) = 0;
    *((int128_t *)&v64) = 0;
    *((int128_t *)&v66) = 0;
    *((int128_t *)&v68) = 0;
    *((int128_t *)&v70) = 0;
    *((int128_t *)&v72) = 0;
    *((int128_t *)&v74) = 0;
    *((int128_t *)&v76) = 0;
    *((int128_t *)&v78) = 0;
    *((int128_t *)&v80) = 0;
    *((int128_t *)&v83) = 0;
    *((int128_t *)&v85) = 0;
    *((int128_t *)&v87) = 0;
    v54 = 0;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v59 = &g_1;
    v60 = 0;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v88 = &g_1;
    v89 = 0;
    v90 = 0x8000000000000000;
    v92 = 0x8000000000000000;
    v93 = 9223372036854775809;
    v94 = "files0.0.27{} [OPTION]... FILE...";
    v95 = &g_1;
    v96 = 0;
    v98 = 0;
    *((int128_t *)&v99) = 0xd01000000010011000000110000;
    clap_builder::builder::arg::Arg::value_parser::h9a7bb5f717627c20(&v105, &v54);
    *((uint128_t **)&v111) = &g_1;
    memcpy(&v54, &v105, 592);
    clap_builder::builder::command::Command::arg::h03b14665e1b05112(a0, &v0, &v54);
    return a0;
}
