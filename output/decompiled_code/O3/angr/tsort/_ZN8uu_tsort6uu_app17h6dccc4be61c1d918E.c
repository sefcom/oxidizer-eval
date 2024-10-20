long long uu_tsort::uu_app::h6dccc4be61c1d918(unsigned long long a0)
{
    void* v0;  // [bp-0x818], Other Possible Types: char
    void* v1;  // [sp-0x808]
    char v2;  // [bp-0x800]
    void* v3;  // [sp-0x7f0]
    void* v4;  // [sp-0x7e0]
    char v5;  // [bp-0x7d8]
    unsigned long long v6;  // [sp-0x7c8]
    char v7;  // [bp-0x7c0]
    void* v8;  // [sp-0x7b0]
    unsigned long long v9;  // [sp-0x7a8]
    int v10;  // [sp-0x7a0]
    unsigned long long v11;  // [sp-0x790]
    int v12;  // [sp-0x788]
    unsigned long long v13;  // [sp-0x778]
    int v14;  // [sp-0x770]
    unsigned long long v15;  // [sp-0x760]
    int v16;  // [sp-0x758]
    unsigned long long v17;  // [sp-0x748]
    int v18;  // [sp-0x740]
    unsigned long long v19;  // [sp-0x730]
    int v20;  // [sp-0x728]
    unsigned long long v21;  // [sp-0x718]
    int v22;  // [sp-0x710]
    unsigned long long v23;  // [sp-0x700]
    int v24;  // [sp-0x6f8]
    unsigned long long v25;  // [sp-0x6e8]
    int v26;  // [sp-0x6e0]
    unsigned long long v27;  // [sp-0x6d0]
    int v28;  // [sp-0x6c8]
    unsigned long long v29;  // [sp-0x6b8]
    int v30;  // [bp-0x6b0]
    unsigned long v31;  // [sp-0x6a8], Other Possible Types: unsigned long long
    unsigned long long v32[2];  // [sp-0x6a0], Other Possible Types: unsigned long long
    int v33;  // [bp-0x698], Other Possible Types: unsigned long long
    unsigned long long v34;  // [sp-0x688]
    int v35;  // [sp-0x680]
    unsigned long long v36;  // [sp-0x670]
    void* v37;  // [sp-0x668]
    unsigned long long v38;  // [sp-0x660]
    char v39;  // [bp-0x658]
    unsigned long v40;  // [sp-0x648], Other Possible Types: unsigned long long
    int v41;  // [bp-0x640], Other Possible Types: char
    char v42;  // [bp-0x630]
    unsigned long long v43;  // [sp-0x620]
    char v44;  // [bp-0x618]
    unsigned long long v45;  // [sp-0x608]
    unsigned long long v46;  // [sp-0x600]
    void* v47;  // [sp-0x5f8]
    char v48;  // [bp-0x5f0]
    void* v49;  // [sp-0x5e8]
    char v50;  // [bp-0x5e0]
    int v51;  // [sp-0x5d8]
    char v52;  // [bp-0x55c]
    char v53;  // [bp-0x554]
    int v54;  // [bp-0x548], Other Possible Types: char
    char v55;  // [bp-0x540]
    unsigned long long v56;  // [sp-0x538]
    int v57;  // [sp-0x530]
    int v58;  // [sp-0x520]
    unsigned long long v59;  // [sp-0x510]
    int v60;  // [sp-0x508]
    unsigned long long v61;  // [sp-0x4f8]
    int v62;  // [sp-0x4f0]
    void* v63;  // [sp-0x4e0]
    unsigned long long v64;  // [sp-0x4d8]
    int v65;  // [sp-0x4d0]
    unsigned long long v66;  // [sp-0x4c0]
    int v67;  // [sp-0x4b8]
    unsigned long long v68;  // [sp-0x4a8]
    int v69;  // [sp-0x4a0]
    unsigned long long v70;  // [sp-0x490]
    int v71;  // [sp-0x488]
    unsigned long long v72;  // [sp-0x478]
    int v73;  // [sp-0x470]
    unsigned long long v74;  // [sp-0x460]
    int v75;  // [sp-0x458]
    unsigned long long v76;  // [sp-0x448]
    int v77;  // [sp-0x440]
    unsigned long long v78;  // [sp-0x430]
    int v79;  // [sp-0x428]
    unsigned long long v80;  // [sp-0x418]
    int v81;  // [sp-0x410]
    unsigned long long v82;  // [sp-0x400]
    int v83;  // [sp-0x3f8]
    unsigned long long v84;  // [sp-0x3e8]
    int v85;  // [sp-0x3e0]
    unsigned long long v86[2];  // [sp-0x3d0]
    unsigned long long v87;  // [sp-0x3c8]
    void* v88;  // [sp-0x3c0]
    unsigned long long v89;  // [sp-0x3b8]
    int v90;  // [sp-0x3b0]
    unsigned long long v91;  // [sp-0x3a0]
    void* v92;  // [sp-0x398]
    unsigned long long v93;  // [sp-0x390]
    int v94;  // [sp-0x388]
    unsigned long long v95;  // [sp-0x378]
    int v96;  // [sp-0x370]
    int v97;  // [sp-0x360]
    unsigned long long v98;  // [sp-0x350]
    int v99;  // [sp-0x348]
    unsigned long long v100;  // [sp-0x338]
    unsigned long long v101;  // [sp-0x330]
    void* v102;  // [sp-0x328]
    unsigned long long v103;  // [sp-0x320]
    void* v104;  // [sp-0x318]
    unsigned long long v105;  // [sp-0x310]
    int v106;  // [sp-0x308]
    int v107;  // [bp-0x2f8], Other Possible Types: char
    unsigned long long v108;  // [sp-0x98]
    unsigned long long v109;  // [sp-0x90]
    unsigned long long v110;  // [sp-0x3c]
    unsigned int v111;  // [sp-0x34]
    unsigned long long v113;  // r14
    unsigned long long v114;  // rsi
    unsigned long long v115[2];  // rax

    if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
        once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    clap_builder::builder::command::Command::new::h4e65ac150f6d260f(&v107, g_4ec238, g_4ec240);
    v108 = "0.0.27{} [OPTIONS] FILETopological sort the strings in FILE.\nStrings are defined as any sequence of tokens separated by whitespace (tab, space, or newline), ordering them based on dependencies in a directed acyclic graph (DAG). \nUseful for scheduling and d";
    v109 = 6;
    memcpy(&v0, &v107, 712);
    uucore::format_usage::ha88dc4d716cb78ed(&v54, "{} [OPTIONS] FILETopological sort the strings in FILE.\nStrings are defined as any sequence of tokens separated by whitespace (tab, space, or newline), ordering them based on dependencies in a directed acyclic graph (DAG). \nUseful for scheduling and determi", 17);
    v113 = *((long long *)&v54);
    if (v113 != 0x8000000000000000)
        *((int128_t *)&v107) = *((int128_t *)&v55);
    v114 = v40;
    if (v114 != 0x8000000000000000 && v114)
        __rust_dealloc(*((long long *)&v41));
    v40 = v113;
    v41 = v107;
    memcpy(&v107, &v0, 712);
    clap_builder::builder::command::Command::about::hce5df06736b915db(&v0, &v107, "Topological sort the strings in FILE.\nStrings are defined as any sequence of tokens separated by whitespace (tab, space, or newline), ordering them based on dependencies in a directed acyclic graph (DAG). \nUseful for scheduling and determining execution order.\nIf FILE is not passed in, stdin is used instead.", 309);
    memcpy(&v107, &v0, 700);
    v110 = 549755814016 | *((long long *)&v52);
    v111 = *((int *)&v53);
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
    *((int128_t *)&v35) = 0;
    v0 = 0;
    v1 = 0;
    v3 = 0;
    v4 = 0;
    v6 = 5;
    v8 = 0;
    v9 = 8;
    v11 = 8;
    v13 = 8;
    v15 = 8;
    v17 = 8;
    v19 = 8;
    v21 = 8;
    v23 = 8;
    v25 = 8;
    v27 = 4;
    v29 = 8;
    v32 = 8;
    *((int128_t *)&v33) = 0;
    v34 = 8;
    v36 = 8;
    v37 = 0;
    v38 = 0x8000000000000000;
    v40 = 0x8000000000000000;
    v43 = 9223372036854775809;
    v45 = "filei128";
    v46 = 4;
    v47 = 0;
    v49 = 0;
    *((int128_t *)&v51) = 0xd09000000000011000000110000;
    v115 = __rust_alloc(16, 8);
    if (!v115)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v32[0] = "-src/uu/tsort/src/tsort.rs";
    v32[1] = 1;
    if (v31)
        __rust_dealloc(8);
    v31 = 1;
    v32[0] = v115;
    v33 = 1;
    *((int128_t *)&v57) = *((int128_t *)&v2);
    *((int128_t *)&v60) = *((int128_t *)&v5);
    *((int128_t *)&v62) = *((int128_t *)&v7);
    v65 = v10;
    v67 = v12;
    v69 = v14;
    v71 = v16;
    v73 = v18;
    *((int128_t *)&v75) = 0;
    *((int128_t *)&v77) = 0;
    *((int128_t *)&v79) = 0;
    *((int128_t *)&v81) = 0;
    *((int128_t *)&v83) = 0;
    *((int128_t *)&v85) = (int128_t)v30;
    *((int128_t *)&v90) = 0;
    *((int128_t *)&v94) = *((int128_t *)&v39);
    v96 = v41;
    *((int128_t *)&v97) = *((int128_t *)&v42);
    *((int128_t *)&v99) = *((int128_t *)&v44);
    *((int128_t *)&v54) = *((int128_t *)&v0);
    v56 = v1;
    *((int128_t *)&v58) = *((int128_t *)&v3);
    v59 = v4;
    v61 = 5;
    v63 = 0;
    v64 = 8;
    v66 = 8;
    v68 = 8;
    v70 = 8;
    v72 = 8;
    v74 = 8;
    v76 = 8;
    v78 = 8;
    v80 = 8;
    v82 = 4;
    v84 = 8;
    v86[0] = v32;
    v87 = 1;
    v88 = 0;
    v89 = 8;
    v91 = 8;
    v92 = 0;
    v93 = 0x8000000000000000;
    v95 = 0x8000000000000000;
    v98 = 9223372036854775809;
    v100 = "filei128";
    v101 = 4;
    v102 = 0;
    v103 = *((long long *)&v48);
    v104 = 0;
    v105 = *((long long *)&v50);
    *((int128_t *)&v106) = 0x309000000040011000000110000;
    clap_builder::builder::command::Command::arg::h8f86528f1ea8021b(a0, &v107, &v54);
    return a0;
}
