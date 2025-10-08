char just::subcommand::Subcommand::run(void* a0, struct_2 *a1, unsigned long long a2, struct_3 *a3, struct_0 *a4, unsigned long long a5, unsigned long a6, unsigned long long a7[3])
{
    char v0;  // [bp-0x8f9]
    unsigned long long v1[34];  // [bp-0x8f8]
    struct_1 *v2;  // [bp-0x8f0]
    unsigned long v3;  // [bp-0x8e0]
    void* v4;  // [bp-0x8d8]
    int v5;  // [bp-0x8c8]
    int v6;  // [bp-0x8b8]
    int v7;  // [bp-0x8a8]
    int v8;  // [bp-0x898], Other Possible Types: char
    int v9;  // [bp-0x888]
    int v10;  // [bp-0x878]
    unsigned long long v11;  // [bp-0x868]
    char v12;  // [bp-0x860]
    int v13;  // [bp-0x85f]
    char v14;  // [bp-0x850]
    int v15;  // [bp-0x84f]
    char v16;  // [bp-0x840]
    int v17;  // [bp-0x83f]
    unsigned long long v18;  // [bp-0x830]
    unsigned long long v19;  // [bp-0x828]
    unsigned long long v20;  // [bp-0x820]
    unsigned long long v21;  // [bp-0x818]
    unsigned long long v22;  // [bp-0x810]
    unsigned long long v23;  // [bp-0x808]
    unsigned long long v24;  // [bp-0x800]
    unsigned long long v25;  // [bp-0x7f8]
    unsigned long long v26;  // [bp-0x7f0]
    unsigned long v27;  // [bp-0x7e8]
    int v28;  // [bp-0x7d8]
    int v29;  // [bp-0x7d8]
    int v30;  // [bp-0x7d1]
    int v31;  // [bp-0x7c8]
    int v32;  // [bp-0x7c1]
    int v33;  // [bp-0x7b8], Other Possible Types: char
    unsigned long long v34;  // [bp-0x7b1]
    unsigned long long v35;  // [bp-0x7a9]
    char v36;  // [bp-0x798]
    unsigned long long v37;  // [bp-0x790]
    unsigned long long v38;  // [bp-0x788]
    char *v39;  // [bp-0x780]
    unsigned long long v40;  // [bp-0x778]
    unsigned long long v41;  // [bp-0x770]
    unsigned long long v42;  // [bp-0x768]
    int v43;  // [bp-0x760]
    int v44;  // [bp-0x750]
    char v45;  // [bp-0x740]
    int v46;  // [bp-0x730]
    int v47;  // [bp-0x729]
    unsigned long long v48;  // [bp-0x728]
    int v49;  // [bp-0x719]
    int v50;  // [bp-0x709]
    int v51;  // [bp-0x6f8]
    int v52;  // [bp-0x6e8]
    int v53;  // [bp-0x6d8]
    char v54;  // [bp-0x6c8]
    int v55;  // [bp-0x6b8]
    int v56;  // [bp-0x6a8]
    unsigned long long v57;  // [bp-0x698]
    unsigned long long v58;  // [bp-0x688]
    int v59;  // [bp-0x688]
    unsigned long long v60;  // [bp-0x680]
    char *v61;  // [bp-0x678]
    int v62;  // [bp-0x678]
    unsigned long long v63;  // [bp-0x670]
    void* v64;  // [bp-0x668]
    int v65;  // [bp-0x668]
    int v66;  // [bp-0x658]
    int v67;  // [bp-0x648]
    int v68;  // [bp-0x640]
    unsigned long long v69;  // [bp-0x630]
    unsigned long long v70;  // [bp-0x628]
    unsigned long long v71;  // [bp-0x620]
    int v72;  // [bp-0x618]
    int v73;  // [bp-0x320]
    unsigned long long v74;  // rax
    struct_0 *v75;  // rbp
    struct_2 *v76;  // rsi
    struct_2 *v77;  // rcx
    unsigned long v78;  // r15
    uint256_t v79;  // ymm0
    uint256_t v80;  // ymm1
    uint256_t v81;  // ymm2
    int v82;  // xmm0
    int v83;  // xmm0
    int v84;  // xmm0
    int v85;  // xmm1
    int v86;  // xmm2
    int v87;  // xmm0
    int v88;  // xmm0
    int v89;  // xmm0
    uint256_t v90;  // ymm0
    int v91;  // xmm1
    uint256_t v92;  // ymm1
    int v93;  // xmm2
    uint256_t v94;  // ymm2
    char v95;  // bpl
    int v96;  // xmm0
    uint256_t v97;  // ymm0
    uint256_t v98;  // ymm1
    uint256_t v99;  // ymm2
    int v100;  // xmm0
    int v101;  // xmm0
    int v102;  // xmm1
    int v103;  // xmm2
    int v104;  // xmm0
    uint256_t v105;  // ymm0
    uint256_t v106;  // ymm1
    uint256_t v107;  // ymm2
    unsigned long long v108;  // rax
    unsigned long long v109;  // rdx
    int v111;  // xmm0
    int v112;  // xmm1
    unsigned long long v113;  // rax
    int v114;  // xmm1
    int v115;  // xmm2
    int v116;  // xmm0
    uint256_t v117;  // ymm0
    void* v118;  // rcx
    int v119;  // xmm0
    int v120;  // xmm1
    int v121;  // xmm2
    int v122;  // xmm3
    int v123;  // xmm0
    int v124;  // xmm1
    int v125;  // xmm0
    int v126;  // xmm1

    v74 = a3->field_0[1].parent(a3->field_8);
    if (!v74)
        core::option::unwrap_failed(&g_8310b0); /* do not return */
    v36.lexiclean(v74, a2);
    v75 = a4;
    if (v75->padding_70[366] == 1)
    {
        v76 = a1;
        v4 = 0;
        if (!((char)(((0 ^ v1[15]) & (0 ^ -(v1[15]))) >> 63)))
            v4 = a1->field_80;
        if (v1[33] < 9223372036854775810)
        {
            v77 = a1;
            v27 = v77->field_88;
            v78 = &(&v75->field_0)[1];
            v3 = &v75->field_68;
            v0 = v77->field_1a7;
            v26 = v37;
            v25 = v38;
            do
            {
                v12.run(v75, a1, a3, a7, a5, a6);
                if ((v12 & 62) != 52)
                    goto LABEL_68cb65;
                v57 = v24;
                v82 = *((int128_t *)&v22);
                v56 = v82;
                v83 = *((int128_t *)&v20);
                v55 = v83;
                v84 = *((int128_t *)&v12);
                v85 = *((int128_t *)&v14);
                v86 = *((int128_t *)&v16);
                memcpy(&v54, &v18, 16);
                v53 = v86;
                v52 = v85;
                v51 = v84;
                v41.search_parent_directory(a3->field_0[1], a3->field_8, v4, v27);
                v70 = v24;
                v87 = *((int128_t *)&v22);
                memcpy(&(char)v68, &v22, 16);
                v88 = *((int128_t *)&v20);
                v67 = v88;
                v89 = *((int128_t *)&v12);
                v90 = (((((v79 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v82) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v84) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v87) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v88) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v89;
                v91 = *((int128_t *)&v14);
                v92 = (v80 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v85) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91;
                v93 = *((int128_t *)&v16);
                v94 = (v81 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v86) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93;
                *((int128_t *)&v66) = *((int128_t *)&v18);
                v65 = v93;
                v62 = v91;
                v59 = v89;
                if (v41 == 0x8000000000000000)
                {
                    v95 = (char)v59;
                    core::ptr::drop_in_place<just::search_error::SearchError>(&v42);
                    v35 = v18;
                    v96 = (int128_t)v13;
                    v97 = v90 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v96;
                    v98 = v92 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v15;
                    v99 = v94 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v17;
                    memcpy(&v33, &v17, 16);
                    *((int128_t *)&v31) = (int128_t)v15;
                    v28 = v96;
                    if (v95 != 56)
                    {
                        v123 = *((int128_t *)&v19);
                        v124 = *((int128_t *)&v21);
                        *((int128_t *)&v2->field_38[8]) = *((int128_t *)&v23);
                        *((void*)&v2->field_30) = v124;
                        *((void*)&v2->field_21[8]) = v123;
                        *((unsigned long long *)&v2->field_21[0]) = v18;
                        v125 = (int128_t)v13;
                        v126 = (int128_t)v15;
                        *((int128_t *)((char *)&v2->field_11 + 1)) = (int128_t)v17;
                        *((void*)((char *)&v2->field_1 + 1)) = v126;
                        *((void*)&(&v2->field_0)[1]) = v125;
                        v2->field_0 = v95;
                        goto LABEL_68cbf8;
                    }
                }
                else
                {
                    v100 = *((int128_t *)&v41);
                    v97 = v90 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v100;
                    v98 = v92 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43;
                    v99 = v94 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44;
                    memcpy(&v34, &v44, 16);
                    v32 = v43;
                    v30 = v100;
                    core::ptr::drop_in_place<just::subcommand::Subcommand::run::{{closure}}>(&v58);
                }
                v101 = (int128_t)(&v28)[7];
                v102 = (int128_t)(&v31)[7];
                v103 = (int128_t)(&v33)[7];
                v50 = v103;
                v49 = v102;
                v47 = v101;
                core::ptr::drop_in_place<just::search::Search>(a3);
                v104 = (int128_t)v47;
                v105 = (v97 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v101) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v104;
                v106 = (v98 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v102) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49;
                v107 = (v99 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v103) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50;
                *((void*)&a3->field_10[1]) = v50;
                *((void*)&a3->field_8) = v49;
                *((void*)&a3->field_0[0]) = v104;
                if (v0 >= 2)
                {
                    v108 = a3->field_0[1].parent(a3->field_8);
                    if (!v108)
                        core::option::unwrap_failed(&g_8310c8); /* do not return */
                    v58.components(v26.strip_prefix(v25, v108, v109).unwrap(v109, &g_8310e0), a2);
                    v111 = (int128_t)v59;
                    v112 = (int128_t)v62;
                    v106 = v106 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v112;
                    v107 = v107 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v65;
                    memcpy(&v35, &v66, 16);
                    *((int128_t *)&v33) = *((int128_t *)&v64);
                    v31 = v112;
                    v29 = v111;
                    v46.collect(&(char)v29);
                    v113 = a3->field_0[1].file_name(a3->field_8);
                    if (!v113)
                        core::option::unwrap_failed(&g_8310f8); /* do not return */
                    (char)v29.join(v48, (long long)(&v47)[9], v113, v109);
                    v105 = (v105 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v111) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)(&v29)[8];
                    memcpy(&v45, &v29, 16);
                    v39 = &v45;
                    v40 = <std::path::Display as core::fmt::Display>::fmt;
                    v58 = &g_831090;
                    v60 = 2;
                    v64 = 0;
                    v61 = &v39;
                    v63 = 1;
                    std::io::stdio::_eprint(&v58);
                    core::ptr::drop_in_place<std::path::PathBuf>(&(char)v29);
                    core::ptr::drop_in_place<std::path::PathBuf>(&v46);
                }
                v58.compile(a1, a2, a3->field_0[1], a3->field_8);
                v114 = *((int128_t *)&v63);
                v115 = (int128_t)(&v65)[8];
                memcpy(&v5, &v60, 16);
                v6 = v114;
                v7 = v115;
                memcpy(&v8, &v66, 16);
                v116 = v68;
                v9 = v116;
                v117 = ((v105 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v60)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v116) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v69);
                memcpy(&v10, &v69, 16);
                v11 = v71;
                if (v58 == 0x8000000000000000)
                {
                    v118 = a0;
                    *((unsigned long long *)&v2->field_38[16]) = v11;
                    *((void*)&v2->field_38[0]) = v10;
                    *((void*)&v2->field_21[16]) = v9;
                    v119 = v5;
                    v120 = v6;
                    v121 = v7;
                    v122 = v8;
                    goto LABEL_68cbe9;
                }
                memcpy(&v73, &v72, 752);
                v75 = a4;
                core::ptr::drop_in_place<just::compilation::Compilation>(v75);
                v75->field_0 = v58;
                *((unsigned long long *)(v78 + 96)) = v11;
                *((void*)(v78 + 80)) = v10;
                *((void*)(v78 + 64)) = v9;
                v79 = ((v117 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v10) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v9) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v5;
                v80 = (v106 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v114) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v6;
                v81 = (v107 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v115) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v7;
                *((void*)(v78 + 48)) = v8;
                *((void*)(v78 + 32)) = v7;
                *((void*)(v78 + 16)) = v6;
                *((void*)v78) = v5;
                memcpy(v3, &v73, 752);
            } while (v75->padding_70[366]);
        }
    }
    v12.run(v75, a1, a3, a7, a5, a6);
LABEL_68cb65:
    if (a1->field_196 && (v12 & 62) == 52)
    {
        *((char *)a0) = 56;
        if (v12 != 56)
            core::ptr::drop_in_place<just::error::Error>(&v12);
    }
    else
    {
        v118 = a0;
        *((unsigned long long *)&v2->field_38[16]) = v24;
        *((int128_t *)&v2->field_38[0]) = *((int128_t *)&v22);
        *((int128_t *)&v2->field_21[16]) = *((int128_t *)&v20);
        v119 = *((int128_t *)&v12);
        v120 = *((int128_t *)&v14);
        v121 = *((int128_t *)&v16);
        v122 = *((int128_t *)&v18);
LABEL_68cbe9:
        v118[48] = v122;
        v118[32] = v121;
        v118[16] = v120;
        *(v118) = v119;
    }
LABEL_68cbf8:
    core::ptr::drop_in_place<std::path::PathBuf>(&v36);
    core::ptr::drop_in_place<just::compilation::Compilation>(a4);
    return core::ptr::drop_in_place<just::search::Search>(a3);
}
