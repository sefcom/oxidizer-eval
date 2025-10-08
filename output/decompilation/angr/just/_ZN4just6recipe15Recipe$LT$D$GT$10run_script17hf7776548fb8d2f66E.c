long long just::recipe::Recipe<D>::run_script(struct_4 *a0, struct_0 *a1, struct_3 *a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6)
{
    void* v0;  // [bp-0x390]
    struct_2 *v1;  // [bp-0x388], Other Possible Types: unsigned long
    int v2;  // [bp-0x378], Other Possible Types: char *
    unsigned int v3;  // [bp-0x374]
    unsigned long long v4;  // [bp-0x370]
    char v5;  // [bp-0x368]
    void* v6;  // [bp-0x359]
    int v7;  // [bp-0x348], Other Possible Types: char, unsigned long long
    int v9;  // [bp-0x341]
    unsigned short v10;  // [bp-0x33e]
    unsigned short v11;  // [bp-0x33c]
    unsigned short v12;  // [bp-0x33a]
    char v13;  // [bp-0x338]
    int v14;  // [bp-0x337]
    int v15;  // [bp-0x331]
    void* v16;  // [bp-0x329]
    int v17;  // [bp-0x328]
    int v18;  // [bp-0x318], Other Possible Types: char
    int v19;  // [bp-0x308], Other Possible Types: char
    int v20;  // [bp-0x2f8], Other Possible Types: char
    unsigned long long v21;  // [bp-0x2e8]
    void* v22;  // [bp-0x2e0]
    unsigned long long v23;  // [bp-0x2d8]
    void* v24;  // [bp-0x2d0]
    unsigned long long v25;  // [bp-0x2c8], Other Possible Types: unsigned long
    unsigned long long v26;  // [sp-0x2c8]
    char v27;  // [bp-0x2c8]
    void* v28;  // [bp-0x2c7]
    char v29;  // [bp-0x2c7]
    unsigned int v30;  // [bp-0x2c6]
    unsigned int v31;  // [bp-0x2c3]
    void* v32;  // [bp-0x2c0], Other Possible Types: unsigned long, unsigned long long
    char v33;  // [bp-0x2c0], Other Possible Types: unsigned long long
    unsigned long long v34;  // [bp-0x2bf]
    unsigned int v35;  // [bp-0x2bb]
    char *v36;  // [bp-0x2b8], Other Possible Types: unsigned long, unsigned long long
    char *v37;  // [bp-0x2b8]
    char v38;  // [bp-0x2b7]
    unsigned long long v39;  // [bp-0x2b0]
    unsigned long long v40;  // [bp-0x2b0]
    void* v41;  // [bp-0x2a8], Other Possible Types: unsigned long, unsigned long long
    void* v42;  // [bp-0x2a8]
    int v43;  // [bp-0x2a7]
    void* v44;  // [bp-0x2a0]
    char v45;  // [bp-0x2a0]
    unsigned long long v46;  // [bp-0x298]
    int v47;  // [bp-0x297]
    char v48;  // [bp-0x290], Other Possible Types: unsigned long long
    unsigned long long v49;  // [bp-0x288]
    int v50;  // [bp-0x287]
    char v51;  // [bp-0x280]
    char v52;  // [bp-0x278]
    int v53;  // [bp-0x277]
    char v54;  // [bp-0x270], Other Possible Types: unsigned long long
    unsigned long long v55;  // [bp-0x268]
    unsigned long long v56;  // [bp-0x260]
    int v57;  // [bp-0x258]
    int v58;  // [bp-0x248]
    int v59;  // [bp-0x238]
    int v60;  // [bp-0x228]
    int v61;  // [bp-0x218]
    int v62;  // [bp-0x208]
    int v63;  // [bp-0x1f8]
    unsigned long long v64;  // [bp-0x1e8]
    unsigned long long v65;  // [bp-0x1e0]
    unsigned long long v66;  // [bp-0x1d8]
    unsigned long v67;  // [bp-0x1d0]
    unsigned long v68;  // [bp-0x1c0]
    int v69;  // [bp-0x1b8], Other Possible Types: unsigned long long
    int v70;  // [bp-0x1b1]
    int v71;  // [bp-0x1b0], Other Possible Types: unsigned long
    int v72;  // [bp-0x1a9]
    unsigned long v73;  // [bp-0x1a8]
    unsigned long long v74;  // [bp-0x1a1]
    int v75;  // [bp-0x1a0]
    unsigned long long v76;  // [bp-0x1a0]
    int v77;  // [bp-0x198]
    char v78;  // [bp-0x198]
    int v79;  // [bp-0x198]
    unsigned short v80;  // [bp-0x197]
    char v81;  // [bp-0x195]
    char v82;  // [bp-0x194]
    unsigned short v83;  // [bp-0x193]
    char v84;  // [bp-0x191]
    int v85;  // [bp-0x190]
    char v86;  // [bp-0x188]
    int v87;  // [bp-0x180]
    int v88;  // [bp-0x178]
    int v89;  // [bp-0x170]
    int v90;  // [bp-0x168]
    int v91;  // [bp-0x160]
    unsigned long long v92;  // [bp-0x159]
    unsigned long long v93;  // [bp-0x150]
    int v94;  // [bp-0x148]
    int v95;  // [bp-0x138]
    int v96;  // [bp-0x128]
    int v97;  // [bp-0x118]
    int v98;  // [bp-0x108]
    int v99;  // [bp-0xf8]
    int v100;  // [bp-0xe8]
    int v101;  // [bp-0xd8], Other Possible Types: void*
    unsigned long long *v102;  // [bp-0xd0]
    unsigned long long v103;  // [bp-0xc8]
    unsigned long long v104;  // [bp-0xc0]
    int v105;  // [bp-0xb8]
    unsigned long long v106;  // [bp-0xb0]
    unsigned long long v107;  // [bp-0xa8]
    unsigned long v108;  // [bp-0xa0]
    char v109;  // [bp-0x80]
    unsigned long v110;  // [bp-0x78]
    unsigned long v111;  // [bp-0x70]
    char v112;  // [bp-0x68]
    unsigned long long v113;  // [bp-0x58]
    int v114;  // [bp-0x50], Other Possible Types: char
    char v115;  // [bp-0x40]
    void* v116;  // r13
    struct_1 *v117;  // r12
    unsigned long long v118;  // r14
    void* v119;  // rbx
    unsigned long long v120;  // xmm0lq
    char v121;  // cl
    unsigned int v122;  // edx
    unsigned int v123;  // ecx
    char v124;  // al
    char v125;  // cl
    unsigned long long v126;  // rdx
    unsigned long long v127;  // rsi
    unsigned long v128;  // rdi
    unsigned long v129;  // r8
    unsigned long long *v130;  // rax
    unsigned long long v131;  // rax
    unsigned long long v132;  // rcx
    unsigned long long v133;  // rax
    unsigned long long v134;  // rcx
    unsigned long long v135;  // rax
    unsigned long long v137;  // rdx
    unsigned long long v138;  // rax
    unsigned long v140;  // rdx
    char v141;  // cl
    unsigned int v142;  // esi
    char v143;  // dl
    char v144;  // sil
    unsigned long long v145;  // xmm0lq
    unsigned long long v146;  // rdi
    unsigned long long v147;  // r8
    unsigned long long v148;  // rax
    char v149;  // al
    struct_4 *v150;  // rdx
    int v151;  // xmm0
    int v152;  // xmm1
    int v153;  // xmm2
    int v154;  // xmm3
    unsigned long v155;  // rax
    unsigned long long v156;  // rax
    int v157;  // xmm0
    int v158;  // xmm1
    int v159;  // xmm1
    int v161;  // xmm0
    int v162;  // xmm1
    int v163;  // xmm2
    unsigned int v164;  // ebx
    char v165;  // al
    int v166;  // xmm0
    int v167;  // xmm2
    int v168;  // xmm3
    struct_4 *v169;  // rdx
    int v170;  // xmm0
    int v171;  // xmm0
    int v172;  // xmm1
    int v173;  // xmm2
    unsigned long long v174;  // rax
    struct_4 *v175;  // rcx
    int v176;  // [bp-0x347]
    unsigned int v177;  // [bp-0x2bf]

    v22 = 0;
    v23 = 8;
    v24 = 0;
    v1 = a1->field_8;
    v68 = a1->field_10;
    if (a1->field_10)
    {
        v116 = 0;
        while (true)
        {
            v27.evaluate_line(a6, *((long long *)(8 + v1 + (char *)v116)), *((long long *)(16 + v1 + (char *)v116)), 0);
            if (v27 != 56)
                break;
            v74 = v40;
            *((int128_t *)&v70) = *((int128_t *)&v33);
            memcpy(&v112, &v70, 16);
            v113 = v74;
            v22.push(&v112, &g_830c40);
            v116 += 32;
            if (v68 * 32 == v116)
                goto LABEL_684b7e;
        }
    }
LABEL_684b7e:
    v117 = a2->field_0;
    if (v117->field_1a7 && (v117->field_198 || a1->field_fd == 1) && v24)
    {
        v118 = v23;
        v119 = 0;
        do
        {
            v121 = v117->field_195;
            v122 = v117->field_180;
            *((char *)&v26) = v117->field_184;
            v29 = 1;
            v31 = 0;
            v30 = 0;
            v177 = v122;
            v35 = 10;
            v38 = v121;
            v7.stderr(&(char)v26);
            v123 = (char)v14;
            if (v123)
            {
                v124 = 10;
                if (v123 == 1)
                {
                    v125 = 10;
                    if (v7 != 1)
                        continue;
                }
                else
                {
                    v125 = 10;
                    continue;
                }
            }
            v120 = (long long)v176;
            v126 = v10 | (char)v11 * 0x10000;
            v127 = v12 | v13 * 0x10000;
            v128 = *((long long *)(8 + v118 + (char *)v119));
            v129 = *((long long *)(16 + v118 + (char *)v119));
            v76 = v120;
            v78 = v124;
            v80 = v126;
            v81 = (v126 & 4294967295) >> 16;
            v82 = v125;
            v83 = v127;
            v84 = (v127 & 4294967295) >> 16;
            v69 = 0x8000000000000000;
            v71 = v128;
            v73 = v129;
            v2 = &(char)v69;
            v4 = <ansi_term::display::ANSIGenericString<str> as core::fmt::Display>::fmt;
            v26 = &g_82dbd8;
            v33 = 2;
            v42 = 0;
            v37 = &(char)v2;
            v40 = 1;
            std::io::stdio::_eprint(&(char)v26);
            core::ptr::drop_in_place<ansi_term::display::ANSIGenericString<str>>(&(char)v69);
            v119 += 24;
        } while (v24 * 24 != v119);
    }
    if (v117->field_198)
    {
        a0->field_0 = 56;
    }
    else
    {
        v108 = &a1->field_d8;
        v130 = a1->field_d8.get(16);
        if (v130 && *(v130) - 9223372036854775809 > 19)
        {
            if (*(v130) == 0x8000000000000000)
                v130 = (a2->field_10->field_d8 != 0x8000000000000000 ? (struct struct_2 *)&a2->field_10->field_d8 : 0);
            if (!v130)
            {
                just::interpreter::Interpreter::default_script_interpreter();
                v130 = &_ZN4just11interpreter11Interpreter26default_script_interpreter8INSTANCE17h2296fe7f4ab02c14E;
            }
            v102 = v130;
            v101 = 0;
            goto LABEL_684f7a;
        }
        else if (v24)
        {
            v64 = v23;
            v114.new(*((long long *)(v23 + 8)), *((long long *)(v23 + 16)));
            if (*((long long *)&v114))
            {
                *((int128_t *)&v15) = *((int128_t *)&v115);
                v9 = v114;
LABEL_684f53:
                v131 = (long long)v15;
                v132 = (long long)(&v15)[8];
                *((int128_t *)&v101) = (int128_t)(&v7)[7];
                v103 = v131;
                v104 = v132;
LABEL_684f7a:
                v27.tempdir(a2, a1);
                if (v27 == 56)
                {
                    v74 = v40;
                    *((int128_t *)&v105) = *((int128_t *)&v33);
                    v107 = v40;
                    std::sys::pal::unix::os::split_paths::bytes_to_path(&v64, (long long)v105, v106);
                    v133 = a1->field_d8;
                    v134 = a1->field_e0;
                    v135 = v133;
                    if (v135)
                        v135 = a1->field_e8;
                    v137 = v133;
                    v25 = v137;
                    v32 = 0;
                    v36 = v133;
                    v39 = v134;
                    v41 = v137;
                    v44 = 0;
                    v46 = v133;
                    v48 = v39;
                    v49 = v135;
                    v138 = v27.try_fold();
                    v67 = &a1->padding_18[120];
                    v27.script_filename(&v101, a1->padding_18[120].lexeme(), v140, v138, v140);
                    v64.push(&v27);
                    v109.script(v101, v102, v1, v68, v23, v24);
                    if (v117->field_1a7 == 3)
                    {
                        v141 = v117->field_195;
                        *((char *)&v25) = v117->field_184;
                        v28 = 0;
                        v34 = 42949672964;
                        v38 = v141;
                        (char)v7.stderr(&(char)v25);
                        v142 = (char)v14;
                        if (v142)
                        {
                            v143 = 10;
                            if (v142 == 1)
                            {
                                v144 = 10;
                                if ((char)v7 == 1)
                                    goto LABEL_68518c;
                            }
                            else
                            {
                                v144 = 10;
                            }
                        }
                        else
                        {
LABEL_68518c:
                            v145 = (long long)(&v7)[1];
                            v146 = v10 | (char)v11 * 0x10000;
                            v147 = v12 | v13 * 0x10000;
                        }
                        v76 = v145;
                        v78 = v143;
                        v80 = v146;
                        v81 = (v146 & 4294967295) >> 16;
                        v82 = v144;
                        v83 = v147;
                        v84 = (v147 & 4294967295) >> 16;
                        v69 = 0x8000000000000000;
                        v71 = v110;
                        v73 = v111;
                        v2 = &(char)v69;
                        v4 = <ansi_term::display::ANSIGenericString<str> as core::fmt::Display>::fmt;
                        v25 = &g_82dbd8;
                        v32 = 2;
                        v41 = 0;
                        v36 = &(char)v2;
                        v39 = 1;
                        std::io::stdio::_eprint(&(char)v25);
                        core::ptr::drop_in_place<ansi_term::display::ANSIGenericString<str>>(&(char)v69);
                    }
                    v148 = std::fs::write(&v64, &v109);
                    if (v148)
                    {
                        just::execution_context::ExecutionContext::tempdir::{{closure}}(&v27, a1, v148);
                        v149 = v27;
                        *((int128_t *)&v69) = *((int128_t *)&v29);
                        memcpy(&(char)v73, &v38, 16);
                        *((int128_t *)&v77) = (int128_t)v43;
                        memcpy(&v86, &v47, 16);
                        *((int128_t *)&v88) = (int128_t)v50;
                        *((int128_t *)&v90) = (int128_t)v53;
                        v92 = v55;
                        if (v27 == 56)
                            goto LABEL_685468;
                        v150 = a0;
                        *((unsigned long long *)&v0[96]) = v92;
                        *((int128_t *)&v0[81]) = (int128_t)v90;
                        *((int128_t *)&v0[65]) = (int128_t)v88;
                        v151 = (int128_t)v69;
                        v152 = (int128_t)(&v70)[9];
                        v153 = (int128_t)v77;
                        v154 = *((int128_t *)&v86);
                        goto LABEL_6858ff;
                    }
LABEL_685468:
                    v155 = v67.lexeme();
                    v1 = a2->field_10;
                    (char)v2.working_directory(a1, a2->field_10, a2->field_18);
                    v27.command(&v101, v117, v65, v66, v155, v140, (v2 == 0x8000000000000000 ? 0 : v4), *((long long *)&v5));
                    v21 = v56;
                    v156 = v25;
                    *((int128_t *)&v7) = *((int128_t *)&v32);
                    memcpy(&v13, &v39, 16);
                    memcpy(&v15, &v44, 16);
                    memcpy(&v18, &v48, 16);
                    memcpy(&v19, &v51, 16);
                    memcpy(&v20, &v54, 16);
                    if (v156 == 0x8000000000000000)
                    {
                        *((unsigned long long *)&v0[96]) = v21;
                        v0[80] = v20;
                        v0[64] = v19;
                        v157 = (int128_t)v7;
                        v158 = *((int128_t *)&v13);
                        v0[48] = v18;
                        v0[32] = v17;
                        v0[16] = v158;
                        *(v0) = v157;
                        core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&(char)v2);
                        goto LABEL_685911;
                    }
                    v100 = v63;
                    v99 = v62;
                    v98 = v61;
                    v97 = v60;
                    v96 = v59;
                    v95 = v58;
                    v94 = v57;
                    v159 = *((int128_t *)&v13);
                    *((int128_t *)&v71) = (int128_t)v7;
                    v75 = v159;
                    v85 = v17;
                    v87 = v18;
                    v89 = v19;
                    v91 = v20;
                    v93 = v21;
                    v69 = v156;
                    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&(char)v2);
                    if (v1->field_1e8[1] || v108.contains(14))
                        (char)v69.args(a4, a5);
                    (char)v69.export(&v1->padding_0[168], a2->field_8, a3, &v1[1].padding_0[75]);
                    memcpy(&v27, &(char)v69, 224);
                    (char)v7.status_guard(&v27);
                    *((int128_t *)&v2) = (int128_t)v7;
                    if ((int)v2 == 1)
                    {
                        v7 = v4;
                        v27.error(&v101, v4, v67.lexeme(), v140);
                        *((unsigned long long *)&v0[96]) = v55;
                        *((int128_t *)&v0[80]) = *((int128_t *)&v52);
                        *((int128_t *)&v0[64]) = *((int128_t *)&v49);
                        v161 = *((int128_t *)&v25);
                        v162 = *((int128_t *)&v36);
                        v163 = *((int128_t *)&v41);
                        *((int128_t *)&v0[48]) = *((int128_t *)&v46);
                        v0[32] = v163;
                        v0[16] = v162;
                        *(v0) = v161;
                        goto LABEL_685911;
                    }
                    v164 = *((int *)&v13);
                    v27.map_or_else(!((char)v3 & 127), v3 >> 8, a1, v3, a1, (char)v1->field_1e8);
                    v149 = v27;
                    if (v27 != 56)
                    {
                        v150 = a0;
                        *((unsigned long long *)&v0[96]) = v55;
                        *((int128_t *)&v0[81]) = (int128_t)v53;
                        *((int128_t *)&v0[65]) = (int128_t)v50;
                        v151 = *((int128_t *)((char *)&v25 + 1));
                        v152 = *((int128_t *)((char *)&v36 + 1));
                        v153 = (int128_t)v43;
                        v154 = (int128_t)v47;
LABEL_6858ff:
                        *((void*)((char *)&v150->field_21 + 1)) = v154;
                        *((void*)((char *)&v150->field_11 + 1)) = v153;
                        *((void*)((char *)&v150->field_1 + 1)) = v152;
                        *((void*)&(&v150->field_0)[1]) = v151;
                        v150->field_0 = v149;
LABEL_685911:
                        core::ptr::drop_in_place<std::path::PathBuf>(&v64);
                        core::ptr::drop_in_place<tempfile::dir::TempDir>(&(char)v105);
                    }
                    else if (v164)
                    {
                        *((char *)v0) = 30;
                        *((unsigned int *)&v0[4]) = v164;
                        goto LABEL_685911;
                    }
                    else
                    {
                        a0->field_0 = 56;
                        core::ptr::drop_in_place<std::path::PathBuf>(&v64);
                        core::ptr::drop_in_place<tempfile::dir::TempDir>(&(char)v105);
                    }
                }
                else
                {
                    v166 = *((int128_t *)((char *)&v26 + 1));
                    v167 = *((int128_t *)&v42);
                    v168 = *((int128_t *)&v46);
                    *((int128_t *)&v72) = *((int128_t *)&(&v33)[8]);
                    v69 = v166;
                    v169 = a0;
                    *((unsigned long long *)&v0[96]) = v55;
                    *((int128_t *)&v0[80]) = *((int128_t *)&v52);
                    *((int128_t *)&v0[64]) = *((int128_t *)&v49);
                    v0[48] = v168;
                    v0[32] = v167;
                    *((int128_t *)&v0[16]) = (int128_t)(&v69)[15];
                    v170 = (int128_t)v69;
                    goto LABEL_68523b;
                }
            }
            else
            {
                just::recipe::Recipe<D>::run_script::{{closure}}(&v27, &v64, a2);
                *((int128_t *)&v7) = *((int128_t *)&v29);
                memcpy(&v13, &v38, 16);
                v16 = v42;
                *((int128_t *)&v69) = *((int128_t *)&v45);
                memcpy(&(char)v73, &v48, 16);
                *((int128_t *)&v79) = *((int128_t *)&v51);
                memcpy(&v86, &v54, 16);
                if (v27 == 56)
                    goto LABEL_684f53;
                v6 = v16;
                memcpy(&v5, &v13, 16);
                *((int128_t *)&v2) = (int128_t)v7;
                v171 = (int128_t)v69;
                v172 = (int128_t)(&v70)[9];
                v173 = (int128_t)v79;
                v169 = a0;
                *((int128_t *)&v0[88]) = *((int128_t *)&v86);
                v0[72] = v173;
                v0[56] = v172;
                v0[40] = v171;
                *((void* *)&v0[32]) = v6;
                v170 = (int128_t)v2;
                *((int128_t *)&v0[17]) = *((int128_t *)&v5);
LABEL_68523b:
                *((void*)&(&v169->field_0)[1]) = v170;
                v169->field_0 = v165;
            }
        }
        else
        {
            v27.to_vec("evaluated_lines was emptybad shebang line: # ]\n@ &&{{  }}src/recipe_resolver.rs", 25);
            v174 = v26;
            v175 = a0;
            *((int128_t *)&v0[16]) = *((int128_t *)&v33);
            *((char *)v0) = 29;
            *((unsigned long long *)&v0[8]) = v174;
        }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v22);
    return core::ptr::drop_in_place<just::evaluator::Evaluator>(a6);
}
