long long uu_mkdir::uu_app::hb29a56ce8060721b(unsigned long long a0)
{
    int v0;  // [bp-0x838], Other Possible Types: unsigned long long
    void* v1;  // [bp-0x820], Other Possible Types: char
    void* v2;  // [sp-0x810]
    void* v3;  // [sp-0x7f8]
    void* v4;  // [sp-0x7e8]
    unsigned long long v5;  // [sp-0x7d0]
    void* v6;  // [sp-0x7b8]
    unsigned long long v7;  // [sp-0x7b0]
    int v8;  // [sp-0x7a8]
    unsigned long long v9;  // [sp-0x798]
    int v10;  // [sp-0x790]
    unsigned long long v11;  // [sp-0x780]
    int v12;  // [sp-0x778]
    unsigned long long v13;  // [sp-0x768]
    int v14;  // [sp-0x760]
    unsigned long long v15;  // [sp-0x750]
    int v16;  // [sp-0x748]
    unsigned long long v17;  // [sp-0x738]
    int v18;  // [sp-0x730]
    unsigned long long v19;  // [sp-0x720]
    int v20;  // [sp-0x718]
    unsigned long long v21;  // [sp-0x708]
    int v22;  // [sp-0x700]
    unsigned long long v23;  // [sp-0x6f0]
    int v24;  // [sp-0x6e8]
    unsigned long long v25;  // [sp-0x6d8]
    int v26;  // [sp-0x6d0]
    unsigned long long v27;  // [sp-0x6c0]
    int v28;  // [sp-0x6b8]
    unsigned long long v29;  // [sp-0x6a8]
    int v30;  // [sp-0x6a0]
    unsigned long long v31;  // [sp-0x690]
    int v32;  // [sp-0x688]
    unsigned long long v33;  // [sp-0x678]
    void* v34;  // [sp-0x670]
    unsigned long long v35;  // [sp-0x668]
    int v36;  // [sp-0x660]
    unsigned long v37;  // [sp-0x650], Other Possible Types: unsigned long long
    int v38;  // [bp-0x648], Other Possible Types: char
    unsigned long long v39;  // [sp-0x628]
    unsigned long long v40;  // [sp-0x610]
    unsigned long long v41;  // [sp-0x608]
    unsigned long long v42;  // [sp-0x600]
    unsigned long long v43;  // [sp-0x5f8]
    void* v44;  // [sp-0x5f0]
    unsigned long long v45;  // [sp-0x5e0]
    unsigned int v46;  // [sp-0x5d8]
    unsigned short v47;  // [sp-0x5d4]
    char v48;  // [bp-0x5d1]
    unsigned long long v49;  // [sp-0x5c0]
    unsigned long long v50;  // [sp-0x5b8]
    char v51;  // [bp-0x564]
    char v52;  // [bp-0x55c]
    int v53;  // [bp-0x558], Other Possible Types: void*, char
    void* v54;  // [sp-0x548], Other Possible Types: unsigned long long
    unsigned long long v55;  // [sp-0x540]
    unsigned long long v56;  // [sp-0x538]
    void* v57;  // [sp-0x530]
    void* v58;  // [sp-0x520]
    unsigned long long v59;  // [sp-0x508]
    void* v60;  // [sp-0x4f0]
    unsigned long long v61;  // [sp-0x4e8]
    int v62;  // [sp-0x4e0]
    unsigned long long v63;  // [sp-0x4d0]
    int v64;  // [sp-0x4c8]
    unsigned long long v65;  // [sp-0x4b8]
    int v66;  // [sp-0x4b0]
    unsigned long long v67;  // [sp-0x4a0]
    int v68;  // [sp-0x498]
    unsigned long long v69;  // [sp-0x488]
    int v70;  // [sp-0x480]
    unsigned long long v71;  // [sp-0x470]
    int v72;  // [sp-0x468]
    unsigned long long v73;  // [sp-0x458]
    int v74;  // [sp-0x450]
    unsigned long long v75;  // [sp-0x440]
    int v76;  // [sp-0x438]
    unsigned long long v77;  // [sp-0x428]
    int v78;  // [sp-0x420]
    unsigned long long v79;  // [sp-0x410]
    int v80;  // [sp-0x408]
    unsigned long long v81;  // [sp-0x3f8]
    int v82;  // [sp-0x3f0]
    unsigned long long v83;  // [sp-0x3e0]
    int v84;  // [sp-0x3d8]
    unsigned long long v85;  // [sp-0x3c8]
    int v86;  // [sp-0x3c0]
    unsigned long long v87;  // [sp-0x3b0]
    void* v88;  // [sp-0x3a8]
    unsigned long long v89;  // [sp-0x3a0]
    int v90;  // [sp-0x398]
    unsigned long long v91;  // [sp-0x388]
    unsigned long long v92;  // [sp-0x360]
    unsigned long long v93;  // [sp-0x348]
    unsigned long long v94;  // [sp-0x340]
    void* v95;  // [sp-0x338], Other Possible Types: unsigned long long
    unsigned long long v96;  // [sp-0x330]
    void* v97;  // [sp-0x328]
    unsigned long long v98;  // [sp-0x318]
    unsigned int v99;  // [sp-0x310]
    unsigned short v100;  // [sp-0x30c]
    char v101;  // [bp-0x309]
    unsigned long long v102;  // [sp-0x29c]
    unsigned int v103;  // [sp-0x294]
    void* v104;  // [bp-0x288], Other Possible Types: char, unsigned long, unsigned long long
    char v105;  // [bp-0x280], Other Possible Types: unsigned long long
    void* v106;  // [sp-0x278], Other Possible Types: unsigned long long
    char v107;  // [sp-0x3c]
    char v108;  // [bp-0x3b], Other Possible Types: unsigned short
    char v109;  // [sp-0x39]
    unsigned long long v111;  // r14
    unsigned long long v112;  // rsi
    unsigned long long v113;  // rax
    unsigned long long v114;  // rcx
    unsigned long long v115;  // rax
    unsigned long long v116;  // rcx
    unsigned long long v117;  // rax
    unsigned long long v118;  // rcx

    if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
        once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    clap_builder::builder::command::Command::new::h6ae1ee2c02689c52(&v1, g_4e9fb0, g_4e9fb8);
    v49 = "0.0.27Create the given DIRECTORY(ies) if they do not exist{} [OPTION]... DIRECTORY...";
    v50 = &g_1;
    memcpy(&v53, &v1, 712);
    clap_builder::builder::command::Command::about::hf7865ba04ff1c547(&v1, &v53, "Create the given DIRECTORY(ies) if they do not exist{} [OPTION]... DIRECTORY...", 52);
    uucore::format_usage::ha88dc4d716cb78ed(&v104, "{} [OPTION]... DIRECTORY...", 27);
    v111 = v104;
    if (v111 != 0x8000000000000000)
        *((int128_t *)&v53) = *((int128_t *)&v105);
    v112 = v37;
    if (v112 != 0x8000000000000000 && v112)
        __rust_dealloc(*((long long *)&v38));
    v37 = v111;
    *((int128_t *)&v38) = (int128_t)v53;
    memcpy(&v53, &v1, 700);
    v102 = 549755814016 | *((long long *)&v51);
    v103 = *((int *)&v52);
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
    *((int128_t *)&v28) = 0;
    *((int128_t *)&v30) = 0;
    *((int128_t *)&v32) = 0;
    v1 = 0;
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
    v27 = &g_1;
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v34 = 0;
    v35 = 0x8000000000000000;
    v37 = 0x8000000000000000;
    v39 = 9223372036854775809;
    v40 = "modei128";
    v41 = &g_1;
    v42 = "modei128";
    v43 = &g_1;
    v44 = 0;
    v45 = 4785074604081261;
    v46 = 0;
    v47 = 3337;
    v104 = 0;
    v105 = &g_1;
    v106 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::hec979437f3c01b0b(&v104, 0, 42);
    v113 = v105;
    v114 = v106;
    *((int128_t *)(v113 + v114 + (char *)&g_11)) = 55097884398063910466731308763081700462;
    *((int128_t *)(v113 + v114 + (char *)&g_1)) = 147712497310637277440627902207053821039;
    *((int128_t *)(v113 + v114)) = 146423428480917077002374165787558831475;
    v106 = &(&g_1b)[v114];
    *((int128_t *)&v0) = *((int128_t *)&v105);
    if (v35 != 0x8000000000000000)
        *((int128_t *)&v104) = (int128_t)v0;
    v35 = v104;
    *((int128_t *)&v36) = *((int128_t *)&v104);
    memcpy(&v104, &v1, 592);
    clap_builder::builder::command::Command::arg::h99bf14ae2e373a6c(&v1, &v53, &v104);
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
    *((int128_t *)&v82) = 0;
    *((int128_t *)&v84) = 0;
    *((int128_t *)&v86) = 0;
    v53 = 0;
    v54 = 0;
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
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v87 = &g_1;
    v88 = 0;
    v89 = 0x8000000000000000;
    v91 = 0x8000000000000000;
    v92 = 9223372036854775809;
    v93 = "parents";
    v94 = &g_1;
    v95 = "parents";
    v96 = &g_1;
    v97 = 0;
    v98 = 4785074604081264;
    v99 = 0;
    v100 = 3337;
    v104 = 0;
    v105 = &g_1;
    v106 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::hec979437f3c01b0b(&v104, 0, 33);
    v115 = v105;
    v116 = v106;
    *((int128_t *)(v115 + v116 + (char *)&g_1)) = 134773313819626950255942133328999576675;
    *((int128_t *)(v115 + v116)) = 134846087002018385405799861852230607213;
    (&g_1b)[v116 + v115] = 100;
    v106 = &(&g_1b)[v116];
    *((int128_t *)&v0) = *((int128_t *)&v105);
    if (v89 != 0x8000000000000000)
        *((int128_t *)&v104) = (int128_t)v0;
    v89 = v104;
    *((int128_t *)&v90) = *((int128_t *)&v104);
    memcpy(&v104, &v53, 588);
    v108 = v100;
    v109 = v101;
    *((uint128_t **)&v107) = &g_1;
    clap_builder::builder::command::Command::arg::h99bf14ae2e373a6c(&v53, &v1, &v104);
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
    *((int128_t *)&v28) = 0;
    *((int128_t *)&v30) = 0;
    *((int128_t *)&v32) = 0;
    v1 = 0;
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
    v27 = &g_1;
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v34 = 0;
    v35 = 0x8000000000000000;
    v37 = 0x8000000000000000;
    v39 = 9223372036854775809;
    v40 = "verbose";
    v41 = &g_1;
    v42 = "verbose";
    v43 = &g_1;
    v44 = 0;
    v45 = 4785074604081270;
    v46 = 0;
    v47 = 3337;
    v104 = 0;
    v105 = &g_1;
    v106 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::hec979437f3c01b0b(&v104, 0, 42);
    v117 = v105;
    v118 = v106;
    *((int128_t *)(v117 + v118 + (char *)&g_11)) = 161430769900542305735089641090855102834;
    *((int128_t *)(v117 + v118 + (char *)&g_1)) = 133449583068449778121249753918860324710;
    *((int128_t *)(v117 + v118)) = 43061814656880547099851240092211966576;
    v106 = &(&g_1b)[v118];
    *((int128_t *)&v0) = *((int128_t *)&v105);
    if (v35 != 0x8000000000000000)
        *((int128_t *)&v104) = (int128_t)v0;
    v35 = v104;
    *((int128_t *)&v36) = *((int128_t *)&v104);
    memcpy(&v104, &v1, 588);
    v108 = v47;
    v109 = v48;
    *((uint128_t **)&v107) = &g_1;
    clap_builder::builder::command::Command::arg::h99bf14ae2e373a6c(&v1, &v53, &v104);
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
    *((int128_t *)&v82) = 0;
    *((int128_t *)&v84) = 0;
    *((int128_t *)&v86) = 0;
    v53 = 0;
    v54 = &g_1;
    v55 = &g_1;
    v56 = -1;
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
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v87 = &g_1;
    v88 = 0;
    v89 = 0x8000000000000000;
    v91 = 0x8000000000000000;
    v92 = 9223372036854775809;
    v93 = &g_410630;
    v94 = &g_1;
    v95 = 0;
    v97 = 0;
    v98 = 0x11000000110000;
    v99 = 0;
    v100 = 3329;
    v0 = &g_1;
    clap_builder::builder::arg::Arg::value_parser::hc35490602c86a16a(&v104, &v53, &v0);
    *((uint128_t **)&v108) = &g_1;
    memcpy(&v53, &v104, 592);
    clap_builder::builder::command::Command::arg::h99bf14ae2e373a6c(a0, &v1, &v53);
    return a0;
}
