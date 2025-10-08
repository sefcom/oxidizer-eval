long long fish::reader::ReaderData::new(void* a0, unsigned long long a1, uint128_t a2[5], unsigned int a3)
{
    unsigned int v0;  // [bp-0xf46]
    unsigned short v1;  // [bp-0xf42]
    unsigned long long v2;  // [bp-0xf40]
    unsigned long long v3;  // [bp-0xf38]
    unsigned long long v4;  // [bp-0xf30]
    int v5;  // [bp-0xf28]
    unsigned long long v6;  // [bp-0xf18]
    void* v7;  // [bp-0xf10]
    void* v8;  // [bp-0xf00]
    void* v9;  // [bp-0xef0]
    unsigned long long v10;  // [bp-0xee8]
    uint128_t v11;  // [bp-0xee0]
    unsigned long long v12;  // [bp-0xed0]
    uint128_t v13;  // [bp-0xec8]
    unsigned long long v14;  // [bp-0xeb8]
    uint128_t v15;  // [bp-0xeb0]
    unsigned short v16;  // [bp-0xea0]
    uint128_t v17;  // [bp-0xe98]
    int v18;  // [bp-0xe88], Other Possible Types: char
    int v19;  // [bp-0xe78]
    int v20;  // [bp-0xe68]
    unsigned long long v21;  // [bp-0xe58]
    int v22;  // [bp-0xe48]
    int v23;  // [bp-0xe38]
    void* v24;  // [bp-0xe28]
    void* v25;  // [bp-0xe18]
    void* v26;  // [bp-0xe08]
    void* v27;  // [bp-0xdf8]
    unsigned long long v28;  // [bp-0xdf0]
    uint128_t v29;  // [bp-0xde8]
    unsigned long long v30;  // [bp-0xdd8]
    uint128_t v31;  // [bp-0xdd0]
    unsigned long long v32;  // [bp-0xdc0]
    uint128_t v33;  // [bp-0xdb8]
    unsigned short v34;  // [bp-0xda8]
    unsigned int v35;  // [bp-0xda6]
    unsigned short v36;  // [bp-0xda2]
    uint128_t v37;  // [bp-0xda0]
    void* v38;  // [bp-0xd90]
    unsigned long long v39;  // [bp-0xd88]
    uint128_t v40;  // [bp-0xd80]
    unsigned long long v41;  // [bp-0xd70]
    uint128_t v42;  // [bp-0xd68]
    unsigned long long v43;  // [bp-0xd58]
    void* v44;  // [bp-0xd50]
    void* v45;  // [bp-0xd48]
    unsigned long long v46;  // [bp-0xd40]
    void* v47;  // [bp-0xd38]
    int v48;  // [bp-0xd30]
    uint128_t v49;  // [bp-0xd26]
    unsigned short v50;  // [bp-0xd16]
    void* v51;  // [bp-0xd10]
    void* v52;  // [bp-0xd00]
    int v53;  // [bp-0xcf8]
    unsigned long long v54;  // [bp-0xce8]
    void* v55;  // [bp-0xce0]
    unsigned long long v56;  // [bp-0xcd8]
    uint128_t v57;  // [bp-0xcd0]
    unsigned long long v58;  // [bp-0xcc0]
    uint128_t v59;  // [bp-0xcb8]
    unsigned long long v60;  // [bp-0xca8]
    uint128_t v61;  // [bp-0xca0]
    unsigned long long v62;  // [bp-0xc90]
    uint128_t v63;  // [bp-0xc88]
    unsigned long long v64;  // [bp-0xc78]
    uint128_t v65;  // [bp-0xc70]
    unsigned long long v66;  // [bp-0xc60]
    uint128_t v67;  // [bp-0xc58]
    unsigned int v68;  // [bp-0xc48]
    void* v69;  // [bp-0xc38]
    void* v70;  // [bp-0xc28]
    void* v71;  // [bp-0xc18]
    void* v72;  // [bp-0xc08]
    void* v73;  // [bp-0xbf8]
    unsigned long long v74;  // [bp-0xbf0]
    uint128_t v75;  // [bp-0xbe8]
    uint128_t v76;  // [bp-0xbd8]
    void* v77;  // [bp-0xbc0]
    void* v78;  // [bp-0xbb0]
    unsigned long long v79;  // [bp-0xba8]
    uint128_t v80;  // [bp-0xba0]
    unsigned long long v81;  // [bp-0xb90]
    uint128_t v82;  // [bp-0xb88]
    unsigned long long v83;  // [bp-0xb78]
    uint128_t v84;  // [bp-0xb70]
    unsigned short v85;  // [bp-0xb60]
    unsigned int v86;  // [bp-0xb5e]
    unsigned short v87;  // [bp-0xb5a]
    uint128_t v88;  // [bp-0xb58]
    uint128_t v89;  // [bp-0xb48]
    uint128_t v90;  // [bp-0xb38]
    void* v91;  // [bp-0xb28]
    char v92;  // [bp-0xb20]
    void* v93;  // [bp-0xb18]
    void* v94;  // [bp-0xb08]
    void* v95;  // [bp-0xaf8]
    unsigned long long v96;  // [bp-0xaf0]
    void* v97;  // [bp-0xae8]
    int v98;  // [bp-0xae0]
    unsigned long long v99;  // [bp-0xad0]
    uint128_t v100;  // [bp-0xac8]
    void* v101;  // [bp-0xab8]
    char v102;  // [bp-0xa90]
    char v103;  // [bp-0x9b8]
    char v104;  // [bp-0x8a0]
    char v105;  // [bp-0x780]
    void* v106;  // [bp-0x6a0]
    void* v107;  // [bp-0x688]
    int v108;  // [bp-0x680]
    unsigned long long v109;  // [bp-0x670]
    int v110;  // [bp-0x668]
    int v111;  // [bp-0x658]
    int v112;  // [bp-0x648]
    int v113;  // [bp-0x638]
    int v114;  // [bp-0x628]
    int v115;  // [bp-0x618]
    int v116;  // [bp-0x608]
    int v117;  // [bp-0x5f8]
    char v118;  // [bp-0x5e8]
    char v119;  // [bp-0x530]
    void* v120;  // [bp-0x408]
    unsigned long long v121;  // [bp-0x400]
    uint128_t v122;  // [bp-0x3f8]
    unsigned long long v123;  // [bp-0x3e8]
    uint128_t v124;  // [bp-0x3e0]
    unsigned long long v125;  // [bp-0x3d0]
    uint128_t v126;  // [bp-0x3c8]
    unsigned long long v127;  // [bp-0x3b8]
    uint128_t v128;  // [bp-0x3b0]
    unsigned long long v129;  // [bp-0x3a0]
    void* v130;  // [bp-0x398]
    void* v131;  // [bp-0x390]
    unsigned long long v132;  // [bp-0x388]
    uint128_t v133;  // [bp-0x380]
    unsigned long long v134;  // [bp-0x370]
    void* v135;  // [bp-0x368]
    char v136;  // [bp-0x360]
    int v137;  // [bp-0x350]
    int v138;  // [bp-0x340]
    unsigned long long v139;  // [bp-0x330]
    unsigned int v140;  // [bp-0x2f8]
    unsigned long long v141;  // [bp-0x2f0]
    unsigned long long v142;  // [bp-0x2e8]
    void* v143;  // [bp-0x2e0]
    unsigned int v144;  // [bp-0x2d8]
    unsigned long long v145;  // [bp-0x2d4]
    unsigned int v146;  // [bp-0x2cc]
    char v147;  // [bp-0x2c8]
    char v148;  // [bp-0x2c0]
    int v149;  // [bp-0x238], Other Possible Types: char
    char v150;  // [bp-0x228]
    char v151;  // [bp-0x110]
    struct_0 *v153;  // r12
    char v154;  // dl

    v2 = a1;
    v9 = 0;
    v10 = 4;
    v11 = 0;
    v12 = 1;
    v17 = 0;
    v7 = 0;
    v13 = 0;
    v14 = 8;
    v15 = 0;
    v16 = 0;
    v8 = 0;
    if (a3)
    {
        v153 = fish::reader::commandline_state_snapshot();
        fish::builtins::fish_indent::fish_indent::{{closure}}(&v149, v153->field_28, v153->field_30);
        v99 = *((long long *)&v150);
        v98 = v149;
        v93 = 0;
        v95 = 0;
        v100 = 0;
        v101 = 0;
        v96 = 4;
        v97 = 0;
        v94 = 0;
        v7.push_edit(&v93, 0);
        v7.set_position(*((long long *)&v153->field_58));
        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v153, v154 & 1);
    }
    v3 = alloc::boxed::Box<T>::new();
    memcpy(&v148, &v7, 136);
    v55 = 0;
    v56 = 4;
    v57 = 0;
    v58 = 1;
    v59 = 0;
    v51 = 0;
    v52 = 0;
    v53 = v5;
    v54 = v6;
    v60 = 4;
    v68 = 0;
    v61 = 0;
    v62 = 4;
    v63 = 0;
    v64 = 4;
    v65 = 0;
    v66 = 4;
    v67 = 0;
    v18.default();
    v21 = 0x8000000000000000;
    v24 = 0;
    v38 = 0;
    *((uint128_t *)&v48) = 0;
    v49 = 0;
    v39 = 8;
    v40 = 0;
    v41 = 8;
    v50 = 0;
    v42 = 0;
    v43 = 4;
    v44 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 4;
    v29 = 0;
    v30 = 1;
    v31 = 0;
    v32 = 8;
    v33 = 0;
    v34 = 0;
    v36 = v1;
    v35 = v0;
    v45 = 0;
    v37 = 0;
    v46 = 4;
    v47 = 0;
    v69 = 0;
    v70 = 0;
    v71 = 0;
    v72 = 0;
    v73 = 0;
    v89 = 0;
    v90 = 0;
    v74 = 8;
    v91 = 0;
    v92 = 0;
    v77 = 0;
    v78 = 0;
    v75 = 0;
    v76 = 0;
    v79 = 4;
    v80 = 0;
    v81 = 1;
    v82 = 0;
    v83 = 8;
    v84 = 0;
    v85 = 0;
    v87 = v1;
    v86 = v0;
    v88 = 0;
    v151.new();
    v4 = a1;
    v149.default();
    v141 = v3;
    *((uint128_t *)&v110) = a2[0];
    *((uint128_t *)&v111) = a2[1];
    *((uint128_t *)&v112) = a2[2];
    *((uint128_t *)&v113) = a2[3];
    *((uint128_t *)&v114) = a2[4];
    memcpy(&v93, &v148, 136);
    v147 = 2;
    memcpy(&v102, &v51, 216);
    v115 = v18;
    v116 = v19;
    v117 = v20;
    memcpy(&v136, &v21, 16);
    v137 = v22;
    v138 = v23;
    memcpy(&v103, &v24, 280);
    memcpy(&v104, &v69, 288);
    v140 = 0x3b9aca00;
    memcpy(&v105, &v151, 224);
    memcpy(&v118, a0, 184);
    v142 = a1;
    memcpy(&v119, &v149, 296);
    v106 = 0;
    v107 = 0;
    v108 = v5;
    v109 = v6;
    v120 = 0;
    v121 = 4;
    v122 = 0;
    v123 = 4;
    v124 = 0;
    v125 = 4;
    v126 = 0;
    v127 = 4;
    v143 = 0;
    v145 = 0x10000;
    v128 = 0;
    v129 = 4;
    v130 = 0;
    v144 = 0x110000;
    *((unsigned int **)&v146) = &g_1000000;
    v131 = 0;
    v132 = 4;
    v133 = 0;
    v134 = 4;
    v135 = 0;
    v139 = 0x8000000000000000;
    return v93.new();
}
