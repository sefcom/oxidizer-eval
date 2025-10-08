long long meilitool::export_documents(unsigned long long a0[3], unsigned long long a1[3], unsigned int a2, unsigned long long a3, char *a4)
{
    unsigned long long v0[3];  // [bp-0xb90]
    unsigned int v1;  // [bp-0xb84]
    unsigned long long v2;  // [bp-0xb80]
    unsigned long long v3;  // [bp-0xb70]
    char v4;  // [bp-0xb68]
    unsigned int v5;  // [bp-0xb5c]
    int v6;  // [bp-0xb58]
    unsigned long long v7;  // [bp-0xb48]
    unsigned long long v8;  // [bp-0xb40]
    unsigned long long v9;  // [bp-0xb38]
    unsigned long long v10;  // [bp-0xb30]
    unsigned long long v11;  // [bp-0xb28]
    unsigned long long v12;  // [bp-0xb20]
    unsigned long long v13;  // [bp-0xb18]
    unsigned long long v14;  // [bp-0xb10]
    char v15;  // [bp-0xb08]
    unsigned long long v16;  // [bp-0xaf8]
    char v17;  // [bp-0xae8]
    void* v18;  // [bp-0xad8]
    unsigned long long v19;  // [bp-0xac8]
    unsigned long v20;  // [bp-0xac0]
    unsigned long v21;  // [bp-0xab8]
    unsigned long v22;  // [bp-0xab0]
    unsigned long v23;  // [bp-0xaa8]
    char v24;  // [bp-0xaa0]
    unsigned long long v25;  // [bp-0xa98]
    unsigned long long v26;  // [bp-0xa90]
    void* v27;  // [bp-0xa88], Other Possible Types: unsigned long
    void* v28;  // [bp-0xa88], Other Possible Types: unsigned long long, unsigned int
    char *v29;  // [bp-0xa88], Other Possible Types: int, unsigned long long
    unsigned int v30;  // [bp-0xa84]
    void* v31;  // [bp-0xa80], Other Possible Types: unsigned long, unsigned long long
    int v32;  // [bp-0xa80], Other Possible Types: char, unsigned int, unsigned long
    unsigned int v33;  // [bp-0xa7c]
    char *v34;  // [bp-0xa78], Other Possible Types: unsigned long long
    char *v35;  // [bp-0xa78], Other Possible Types: char, unsigned int, unsigned long long
    char v36;  // [bp-0xa78]
    unsigned int v37;  // [bp-0xa77]
    unsigned int v38;  // [bp-0xa74]
    int v39;  // [sp-0xa70], Other Possible Types: unsigned long long
    unsigned long long v40;  // [bp-0xa70]
    unsigned int v41;  // [sp-0xa68]
    void* v42;  // [bp-0xa68]
    int v43;  // [bp-0xa60], Other Possible Types: void*
    unsigned long long v44;  // [bp-0xa58]
    unsigned int v45;  // [bp-0xa56]
    unsigned short v46;  // [bp-0xa52]
    int v47;  // [bp-0xa50], Other Possible Types: unsigned long long
    unsigned long long v48;  // [bp-0xa48]
    unsigned long long v49;  // [bp-0xa40]
    int v50;  // [bp-0xa38]
    int v51;  // [bp-0xa28]
    int v52;  // [bp-0xa18]
    int v53;  // [bp-0x8b8]
    int v54;  // [bp-0x8a8]
    unsigned long long v55;  // [bp-0x8a0]
    int v56;  // [bp-0x898]
    unsigned long long v57;  // [bp-0x890]
    unsigned long v58;  // [bp-0x890]
    unsigned short v59;  // [bp-0x888]
    unsigned int v60;  // [bp-0x886]
    unsigned short v61;  // [bp-0x882]
    int v62;  // [bp-0x878]
    unsigned long long v63;  // [bp-0x868]
    char v64;  // [bp-0x860]
    unsigned long long v65;  // [bp-0x858]
    unsigned long long v66;  // [bp-0x850]
    char v67;  // [bp-0x848]
    unsigned long long v68;  // [bp-0x838]
    unsigned long long v69;  // [bp-0x830]
    char *v70;  // [bp-0x828]
    int v72;  // [bp-0x828]
    unsigned long long v73;  // [bp-0x820]
    void* v74;  // [bp-0x818]
    int v75;  // [bp-0x7e0]
    char v76;  // [bp-0x7b8]
    int v77;  // [bp-0x7a8]
    int v78;  // [bp-0x798]
    int v79;  // [bp-0x788]
    unsigned long long v80;  // [bp-0x778]
    int v81;  // [bp-0x768]
    unsigned long long v82;  // [bp-0x760]
    void* v83;  // [bp-0x758], Other Possible Types: int, char, unsigned long long
    unsigned long long v84;  // [bp-0x758]
    int v85;  // [bp-0x748], Other Possible Types: char
    int v86;  // [bp-0x738], Other Possible Types: char
    unsigned long long v87;  // [bp-0x728]
    char *v88;  // [bp-0x628], Other Possible Types: int, char
    unsigned int v89;  // [bp-0x624]
    unsigned long v90;  // [bp-0x620], Other Possible Types: unsigned long long
    int v91;  // [bp-0x618], Other Possible Types: unsigned long long
    unsigned int v92;  // [bp-0x614]
    unsigned long long v93;  // [bp-0x610]
    int v94;  // [bp-0x608]
    int v95;  // [bp-0x458]
    int v96;  // [bp-0x440]
    int v97;  // [bp-0x428]
    unsigned long long v98;  // [bp-0x418]
    char v99;  // [bp-0x410]
    int v100;  // [bp-0x40f]
    char v101;  // [bp-0x408]
    char v102;  // [bp-0x3f8]
    char v103;  // [bp-0x3e8]
    char v104;  // [bp-0x3d8]
    char v105;  // [bp-0x3c8]
    char v106;  // [bp-0x3b8]
    int v107;  // [bp-0x3a8]
    char v108;  // [bp-0x398]
    unsigned long long v109;  // [bp-0x388]
    char *v110;  // [bp-0x380]
    char *v111;  // [bp-0x378]
    void* v112;  // [bp-0x370]
    void* v113;  // [bp-0x368]
    int v114;  // [bp-0x360]
    unsigned long long v115;  // [bp-0x350]
    char v116;  // [bp-0x348]
    char *v117;  // [bp-0x340]
    unsigned long long v118;  // [sp-0x340]
    unsigned long long v119;  // [bp-0x338]
    int v120;  // [sp-0x338]
    char *v121;  // [bp-0x330], Other Possible Types: unsigned int
    void* v122;  // [bp-0x328], Other Possible Types: unsigned long long
    unsigned int v123;  // [bp-0x328], Other Possible Types: unsigned long, unsigned long long
    int v124;  // [bp-0x320], Other Possible Types: void*
    void* v125;  // [bp-0x320], Other Possible Types: unsigned int
    char v126;  // [bp-0x318]
    int v127;  // [bp-0x310]
    char v128;  // [bp-0x308]
    int v129;  // [bp-0x300]
    unsigned long long v130;  // [bp-0x2f8]
    int v131;  // [bp-0x2f0], Other Possible Types: char
    unsigned long long v132;  // [bp-0x2e0]
    unsigned long long v133;  // [bp-0x200]
    unsigned long long v134;  // [bp-0x1f8]
    char v135;  // [bp-0x1f0]
    unsigned long long v137[3];  // r14
    unsigned long v138;  // r15
    unsigned long long v139;  // rdx
    unsigned long long v140;  // r13
    uint256_t v141;  // ymm0
    unsigned int v142;  // eax
    char v143[16];  // r13
    char *v144;  // rdi
    char v145;  // sil
    int v146;  // ymm0, Other Possible Types: uint256_t
    char *v147;  // r13
    uint256_t v148;  // ymm0
    uint256_t v149;  // ymm0
    unsigned short v150;  // ax
    int v151;  // xmm0
    int v152;  // xmm1
    int v153;  // xmm0
    int v154;  // xmm2
    unsigned long long v155;  // rax
    unsigned long long v156;  // rax
    unsigned long long v158;  // rdi
    void* v159;  // rcx
    int v161;  // xmm0
    unsigned long long v162;  // r9
    unsigned long long *v164;  // r13
    int v165;  // xmm0
    unsigned long long v166;  // rax
    unsigned long long v167;  // rax
    unsigned long long v168;  // rax
    unsigned long long v169;  // rax
    unsigned long long v170;  // rdx
    char v171;  // bpl
    char *v172;  // r15
    unsigned long long v173;  // rax
    int v174;  // xmm0
    unsigned long long v175;  // rax
    char v176;  // sil
    unsigned long long v177;  // [bp-0x768]
    int v178;  // [bp-0x600]

    v137 = a0;
    v138 = a0[1];
    v23 = a0[2];
    v24.join(v138, a0[2], "tasks", 5);
    v27 = 0;
    v35 = 0;
    v41 = 0;
    v40 = 429496729601;
    (char)v88.open(&(char)v28, &v24);
    v140 = v139;
    if (!((char)(char)v88.with_context(v25, v26) & 1))
    {
        v2 = v139;
        (char)v28.new(&v2, a2, a3, a4);
        v141 = v146 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v32);
        memcpy(&(char)v88, &v32, 16);
        v91 = v40;
        if (v28 == 1)
        {
            v35 = v91;
            *((int128_t *)&v29) = *((int128_t *)&v88);
            v140 = (char)v28.from();
            goto LABEL_760c1d;
        }
        v16 = v91;
        v146 = v141 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v88);
        memcpy(&v15, &v88, 16);
        meilitool::try_opening_database(&(char)v28, &v2, &v15);
        v140 = *((long long *)&v32);
        if (!((char)v27 & 1))
        {
            (char)v88.iter(v140, *((int *)&(&v32)[8]), &v15);
            v142 = *((int *)&v88);
            if (v142 == 5)
            {
                v20 = v138;
                v5 = a2;
                v3 = v90;
                v4 = v91;
                v143 = &v67;
                v22 = a1[1];
                v21 = a1[2];
                v172 = &v32;
                v19 = a3;
                *((int *)&v8) = (((char)a3 & 1) ? a4 : 0);
                v144 = &v64;
                v0[0] = a0;
            }
            else
            {
                v176 = v91;
                v38 = v92;
                v37 = *((int *)((char *)&v91 + 1));
                v28 = v142;
                v30 = v89;
                v32 = v90;
                v35 = v176;
                v140 = v28.from();
                goto LABEL_760c10;
            }
        }
        else
        {
LABEL_760c10:
            core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v15);
LABEL_760c1d:
            core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v2);
            goto LABEL_760c27;
        }
        while (true)
        {
            v144.next(v145);
            if (*((int *)&v64) != 1)
                break;
            if (v65)
            {
                v146 = v146 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)*(v143);
                *((char [16])&v95) = *(v143);
                v68 = v65;
                v69 = v66;
                if (!(char)v68.equal(v69, v22, v21))
                {
                    v88 = &v68;
                    v90 = <&T as core::fmt::Display>::fmt;
                    v27 = &g_926f30;
                    v31 = 2;
                    v42 = 0;
                    v35 = &(char)v88;
                    v40 = 1;
                    std::io::stdio::_eprint(&(char)v28);
                    v58 = v57;
                    goto LABEL_76094b;
                }
                (char)v88.join(v20, v23, "indexes", 7);
                (char)v28.spec_to_string(&v95);
                v9.join(v90, v91, &(char)v28);
                core::ptr::drop_in_place<std::path::PathBuf>(&(char)v88);
                v117 = 0;
                v121 = 0;
                v123 = 0;
                v125 = 0;
                (char)v28.new(&v117, &v9);
                (char)v88.with_context(&(char)v28, v10, v11);
                v140 = v90;
                if (!(long long)v88)
                {
                    v137 = v0;
LABEL_760bfc:
                    core::ptr::drop_in_place<std::path::PathBuf>(&v9);
                    goto LABEL_760c06;
                }
                ::libc.so.0::memcpy(&v135, &(char)v91, 448);
                v133 = (long long)v88;
                v134 = v140;
                (char)v28.read_txn(&v133, a2, a3, a4);
                v147 = &v9;
                v148 = v146 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v31);
                memcpy(&(char)v88, &v32, 16);
                v91 = v40;
                if (v28 == 1)
                {
                    v35 = v91;
                    *((int128_t *)&v29) = (int128_t)v88;
                    v137 = v0;
                    v140 = (char)v28.from();
LABEL_760bef:
                    core::ptr::drop_in_place<milli::index::Index>(&v133);
                    goto LABEL_760bfc;
                }
                v7 = v91;
                v149 = v148 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v88;
                memcpy(&v6, &(char)v88, 16);
                v137 = v0;
                (char)v28.fields_ids_map(&v133, &v6);
                v150 = v44;
                if (v150 == 2)
                {
                    v173 = *((long long *)&(&v32)[8]);
                    v91 = v173;
                    v174 = *((int128_t *)&v27);
                    v88 = v174;
                    v35 = v173;
                    v29 = v174;
                    v140 = (char)v28.from();
                    goto LABEL_760be5;
                }
                v151 = *((int128_t *)&v27);
                v152 = *((int128_t *)&(&v32)[8]);
                *((int128_t *)&v94) = *((int128_t *)&v42);
                v91 = v152;
                v88 = v151;
                v61 = v46;
                v60 = v45;
                v153 = (int128_t)v88;
                v154 = (int128_t)v94;
                v53 = v153;
                *((int128_t *)&v54) = (int128_t)v91;
                v56 = v154;
                v59 = v150;
                v155 = v55;
                v58 = v57;
                v156 = v155;
                if (v156)
                {
                    v58 = v57;
                    v156 = v57;
                }
                v158 = (long long)v56;
                v159 = v155;
                v27 = v159;
                v31 = 0;
                v34 = v155;
                v40 = v158;
                v42 = v159;
                v43 = 0;
                v44 = v155;
                v47 = v40;
                v48 = v156;
                v12.collect(&(char)v28);
                if (((char)v19 & 1))
                {
                    v117 = a4;
                    v88 = &v117;
                    v90 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                    v27 = &g_926ee0;
                    v31 = 2;
                    v42 = 0;
                    v34 = &(char)v88;
                    v40 = 1;
                    std::io::stdio::_eprint(&(char)v28);
                }
                v75.with_capacity(std::io::stdio::stdout());
                (char)v88.documents_ids(&v133, &v6);
                memcpy(&v62, &v90, 16);
                v63 = v93;
                if ((int)v88 != 1)
                {
                    (char)v28.into_iter(&v62);
                    memcpy(&v108, &v52, 16);
                    v161 = v51;
                    v107 = v161;
                    memcpy(&v106, &v50, 16);
                    memcpy(&v105, &v48, 16);
                    v146 = (((((((v149 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v151) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v153) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v90)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v52) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v161) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v48)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v27);
                    memcpy(&v104, &v44, 16);
                    memcpy(&v103, &v42, 16);
                    memcpy(&v102, &v36, 16);
                    memcpy(&v101, &v28, 16);
                    v109 = v8;
                    v110 = &v133;
                    v111 = &v6;
                    v112 = 0;
                    v123 = v122;
                    v125 = v124;
                    while (true)
                    {
                        (char)v88.next(&v101);
                        if (v90 == 94)
                            break;
                        v162 = (long long)v94;
                        if ((unsigned int)v90 != 93)
                        {
                            ::libc.so.0::memcpy(&v42, &v178, 288);
                            v29 = v90;
                            v32 = v1;
                            v33 = v92;
                            v35 = v93;
                            v39 = v162;
                            v137 = v0;
                            v168 = (char)v28.from();
                            goto LABEL_760b33;
                        }
                        v1 = (int)v91;
                        milli::obkv_to_json(&v117, v13, v14, &v53, v93, v162);
                        memcpy(&v177, &v119, 16);
                        memcpy(&v83, &v123, 16);
                        memcpy(&v85, &v126, 16);
                        memcpy(&v86, &v128, 16);
                        v87 = v130;
                        if (v117 != 93)
                        {
                            ::libc.so.0::memcpy(&v50, &v131, 240);
                            *((int128_t *)&v32) = *((int128_t *)&v177);
                            v39 = v83;
                            v43 = v85;
                            v47 = v86;
                            v49 = v87;
                            v29 = v117;
                            v137 = v0;
                            v168 = (char)v28.from();
LABEL_760b33:
                            v140 = v168;
                            goto LABEL_760bac;
                        }
                        v146 = (v146 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v119)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v177);
                        memcpy(&v76, &v177, 16);
                        v77 = v83;
                        v78 = v85;
                        v79 = v86;
                        v80 = v87;
                        v147 = &v9;
                        if (__ROR__(15170602326218735249 * (long long)v88, 4) <= 1844674407370955)
                        {
                            v177 = (long long)v88 + v8;
                            v117 = &v177;
                            v119 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                            v27 = &g_926f00;
                            v31 = 2;
                            v42 = 0;
                            v34 = &v117;
                            v40 = 1;
                            std::io::stdio::_eprint(&(char)v28);
                        }
                        if (!(char)v5)
                        {
                            v117.embeddings(&v133, &v6, v1);
                            memcpy(&v177, &v119, 16);
                            v84 = v123;
                            if (v117 != 93)
                            {
                                ::libc.so.0::memcpy(&v42, &v125, 288);
                                *((int128_t *)&v32) = *((int128_t *)&v177);
                                v39 = v83;
                                v29 = v117;
                                v137 = v0;
                                v169 = (char)v28.from();
LABEL_760b9c:
                                v140 = v169;
                                goto LABEL_760b9f;
                            }
                            v146 = (v146 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v119)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v177);
                            memcpy(&v17, &v177, 16);
                            v18 = v83;
                            if (!v83)
                            {
                                core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<alloc::string::String,milli::index::EmbeddingsWithMetadata>>(&v17);
                                goto LABEL_7608b0;
                            }
                            v117.entry(&v76);
                            v137 = v0;
                            (char)v28.with_capacity_and_hasher(std::thread::local::LocalKey<T>::with(), a2);
                            v164 = v117.or_insert(&(char)v28);
                            if (*(v164) > 9223372036854775812)
                            {
                                v70.into_iter(&v17);
                                while (true)
                                {
                                    v96.next(&v70);
                                    if ((long long)v96 == 0x8000000000000000)
                                        break;
                                    v115 = v98;
                                    v165 = v97;
                                    v114 = v165;
                                    v113 = 0;
                                    *((int *)&v116) = (!v99 ? 0 : (char)v100 ^ 1);
                                    serde_json::value::to_value(&(char)v28, &v113);
                                    v117.unwrap(&(char)v28);
                                    (char)v28.insert_full(v164, &v96, &v117);
                                    v87 = v49;
                                    v146 = (v146 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v165) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v31);
                                    memcpy(&v86, &v47, 16);
                                    memcpy(&v85, &v43, 16);
                                    memcpy(&v83, &v40, 16);
                                    *((int128_t *)&v81) = *((int128_t *)&v31);
                                    core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(&v177);
                                }
                                core::ptr::drop_in_place<alloc::collections::btree::map::IntoIter<alloc::string::String,milli::index::EmbeddingsWithMetadata>>(&v70);
                                v147 = &v9;
                                goto LABEL_7608b0;
                            }
                            v177.external_id_of(&v133, &v6, v1);
                            if ((int)v177 == 93)
                            {
                                meilitool::export_documents::{{closure}}(&v117, &v82);
                                v172 = &v32;
                                ::libc.so.0::memcpy(&v32, &v117, 320);
                                v28 = 0;
                                if (v31 == 93)
                                {
                                    v74 = v42;
                                    *((int128_t *)&v72) = *((int128_t *)&v36);
                                    goto LABEL_760ec8;
                                }
                            }
                            else
                            {
                                ::libc.so.0::memcpy(&v32, &v177, 320);
                                v28 = 1;
                            }
                            v70 = &v1;
                            v73 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
                            v118 = &g_926f20;
                            v119 = 1;
                            v125 = 0;
                            v121 = &v70;
                            v122 = 1;
                            v177.map_or_else(0, v170, &v118);
                            *((int128_t *)&v72) = *((int128_t *)&v177);
                            v74 = v83;
                            v171 = 1;
LABEL_760ec8:
                            v177.clone(v164);
                            v122 = v74;
                            *((int128_t *)&v120) = *((int128_t *)&v70);
                            *((int128_t *)&v124) = *((int128_t *)&v177);
                            v127 = v83;
                            v129 = v85;
                            v131 = v86;
                            v132 = v87;
                            v118 = 40;
                            v140 = v118.from();
                            if (v28 == 1)
                            {
                                core::ptr::drop_in_place<core::result::Result<core::option::Option<core::result::Result<alloc::string::String,milli::error::Error>>,milli::error::Error>>(&(char)v28);
                            }
                            else if (v31 != 93)
                            {
                                if ((unsigned int)v31 != 94)
                                    core::ptr::drop_in_place<core::result::Result<alloc::string::String,milli::error::Error>>(v172);
                            }
                            else
                            {
                                if (v171)
                                    core::ptr::drop_in_place<alloc::string::String>(&v36);
                            }
                            core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<alloc::string::String,milli::index::EmbeddingsWithMetadata>>(&v17);
LABEL_760b9f:
                            core::ptr::drop_in_place<serde_json::map::Map<alloc::string::String,serde_json::value::Value>>(&v76);
LABEL_760bac:
                            core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<core::iter::adapters::skip::Skip<roaring::bitmap::iter::IntoIter>,milli::index::Index::iter_documents<core::iter::adapters::skip::Skip<roaring::bitmap::iter::IntoIter>>::{{closure}}>>>(&v101);
                            goto LABEL_760bb9;
                        }
                        else
                        {
LABEL_7608b0:
                            v166 = serde_json::ser::to_writer(&v75, &v76);
                            if (!v166)
                            {
                                core::ptr::drop_in_place<serde_json::map::Map<alloc::string::String,serde_json::value::Value>>(&v76);
                                v123 = v123;
                            }
                            else
                            {
                                v137 = v0;
                                v169 = v166.from();
                                goto LABEL_760b9c;
                            }
                        }
                    }
                    v137 = v0;
                    core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<core::iter::adapters::skip::Skip<roaring::bitmap::iter::IntoIter>,milli::index::Index::iter_documents<core::iter::adapters::skip::Skip<roaring::bitmap::iter::IntoIter>>::{{closure}}>>>(&v101);
                    v167 = v75.flush();
                    if (!v167)
                    {
                        core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(&v75);
                        core::ptr::drop_in_place<alloc::vec::Vec<u16>>(v12, v13);
                        core::ptr::drop_in_place<milli::fields_ids_map::FieldsIdsMap>(&v53);
                        core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v6);
                        core::ptr::drop_in_place<milli::index::Index>(&v133);
                        core::ptr::drop_in_place<std::path::PathBuf>(v147);
                        v137 = v0;
                        v143 = &v67;
LABEL_76094b:
                        v57 = v58;
                        v144 = &v64;
                    }
                    else
                    {
                        v175 = v167.from();
LABEL_760e02:
                        v140 = v175;
LABEL_760bb9:
                        core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(&v75);
                        core::ptr::drop_in_place<alloc::vec::Vec<u16>>(v12, v13);
                        core::ptr::drop_in_place<milli::fields_ids_map::FieldsIdsMap>(&v53);
LABEL_760be5:
                        core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v6);
                        goto LABEL_760bef;
                    }
                }
                else
                {
                    v91 = v63;
                    v88 = v62;
                    v175 = (char)v88.from();
                    goto LABEL_760e02;
                }
            }
            else
            {
                *((char [16])&v32) = *(v143);
                v29 = v69;
                v140 = (char)v28.from();
LABEL_760c06:
                core::ptr::drop_in_place<heed::iterator::iter::RoIter<heed_types::bytes::Bytes,heed_types::bytes::Bytes>>(&v3);
                goto LABEL_760c10;
            }
        }
        core::ptr::drop_in_place<heed::iterator::iter::RoIter<heed_types::bytes::Bytes,heed_types::bytes::Bytes>>(&v3);
        core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v15);
        core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v2);
        v140 = 0;
    }
LABEL_760c27:
    core::ptr::drop_in_place<std::path::PathBuf>(&v24);
    core::ptr::drop_in_place<alloc::string::String>(a1);
    core::ptr::drop_in_place<std::path::PathBuf>(v137);
    return v140;
}
