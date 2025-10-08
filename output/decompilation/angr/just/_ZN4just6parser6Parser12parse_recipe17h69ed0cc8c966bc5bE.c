long long just::parser::Parser::parse_recipe(struct_2 *a0, struct_0 *a1, void* a2, unsigned long long a3, unsigned long long a4, unsigned int a5)
{
    char v0;  // [bp-0x541]
    void* v1;  // [bp-0x540]
    unsigned int v2;  // [bp-0x52c]
    char v3;  // [bp-0x528], Other Possible Types: unsigned int, unsigned long, unsigned long long
    int v4;  // [bp-0x527]
    void* v5;  // [bp-0x520], Other Possible Types: unsigned long long
    char v6;  // [bp-0x518], Other Possible Types: unsigned long long, unsigned long
    int v7;  // [bp-0x517]
    int v8;  // [bp-0x510], Other Possible Types: unsigned long, unsigned long long
    char v9;  // [bp-0x508], Other Possible Types: unsigned long
    int v10;  // [bp-0x507]
    void* v11;  // [bp-0x500], Other Possible Types: unsigned long long
    int v12;  // [bp-0x4f8], Other Possible Types: char, unsigned long long
    int v13;  // [bp-0x4f7]
    unsigned long v14;  // [bp-0x4f0], Other Possible Types: unsigned long long
    char v15;  // [bp-0x4e8], Other Possible Types: unsigned long, unsigned long long
    int v16;  // [bp-0x4e7]
    unsigned int v17;  // [bp-0x4e4]
    char v18;  // [bp-0x4e0]
    int v19;  // [bp-0x4df]
    int v20;  // [bp-0x4dc]
    char v21;  // [bp-0x4d0], Other Possible Types: unsigned long long
    char v22;  // [bp-0x4c8]
    char v23;  // [bp-0x4c0]
    unsigned long long v24;  // [bp-0x4b8]
    int v25;  // [bp-0x4b0]
    char v26;  // [bp-0x4a0], Other Possible Types: unsigned long long
    int v27;  // [bp-0x498]
    char v28;  // [bp-0x490]
    int v29;  // [bp-0x488]
    unsigned long long v30;  // [bp-0x480]
    int v31;  // [bp-0x478]
    int v32;  // [bp-0x470]
    unsigned long long v33;  // [bp-0x460]
    unsigned long long v34;  // [bp-0x458]
    int v35;  // [bp-0x450]
    unsigned long long v36;  // [bp-0x440]
    int v37;  // [bp-0x438], Other Possible Types: char, unsigned int, unsigned long long
    int v38;  // [bp-0x438]
    unsigned int v39;  // [bp-0x435]
    int v40;  // [bp-0x430]
    int v41;  // [bp-0x428]
    int v42;  // [sp-0x428]
    int v43;  // [bp-0x420]
    int v44;  // [bp-0x418]
    int v45;  // [bp-0x418]
    int v46;  // [bp-0x410]
    int v47;  // [bp-0x408]
    int v48;  // [bp-0x400]
    int v49;  // [bp-0x3f8], Other Possible Types: unsigned long long
    int v50;  // [bp-0x3f0]
    char v51;  // [bp-0x3e0]
    char v52;  // [bp-0x3d0]
    int v53;  // [bp-0x3c0]
    char v54;  // [bp-0x3b0]
    char v55;  // [bp-0x3a0]
    char v56;  // [bp-0x390]
    int v57;  // [bp-0x380]
    unsigned long long v58;  // [bp-0x370]
    char v59;  // [bp-0x368], Other Possible Types: unsigned long long
    char v60;  // [bp-0x368]
    void* v61;  // [bp-0x360], Other Possible Types: unsigned long long
    void* v62;  // [bp-0x350]
    unsigned long long v63;  // [bp-0x348]
    void* v64;  // [bp-0x340]
    void* v65;  // [bp-0x338], Other Possible Types: unsigned long long
    int v66;  // [bp-0x338], Other Possible Types: char
    unsigned long long v67;  // [bp-0x330]
    int v68;  // [bp-0x328], Other Possible Types: void*, char
    unsigned long long v69;  // [bp-0x328]
    int v70;  // [bp-0x318], Other Possible Types: char
    int v71;  // [bp-0x308], Other Possible Types: char
    int v72;  // [bp-0x2f8], Other Possible Types: char
    int v73;  // [bp-0x2e8]
    struct_1 *v74;  // [bp-0x2e0]
    unsigned long long v75;  // [bp-0x2d8]
    int v76;  // [bp-0x2c8]
    unsigned long long v77;  // [bp-0x2c8]
    unsigned long long v78;  // [bp-0x2c8]
    int v79;  // [bp-0x2c0]
    unsigned long long v80;  // [bp-0x2b8]
    void* v81;  // [bp-0x2a8]
    unsigned long long v82;  // [bp-0x2a0]
    void* v83;  // [bp-0x298]
    int v84;  // [bp-0x290], Other Possible Types: char
    unsigned long v85;  // [bp-0x280]
    int v86;  // [bp-0x278]
    char v87;  // [bp-0x268]
    char v88;  // [bp-0x258]
    char v89;  // [bp-0x248]
    unsigned long long v90;  // [bp-0x238]
    char v91;  // [bp-0x230]
    unsigned long long v92;  // [bp-0x220]
    int v93;  // [bp-0x218], Other Possible Types: char
    int v94;  // [bp-0x208], Other Possible Types: char
    int v95;  // [bp-0x1f8], Other Possible Types: char
    char v96;  // [bp-0x1e8]
    unsigned long long v97;  // [bp-0x1d8]
    char v98;  // [bp-0x1d0]
    unsigned long long v99;  // [bp-0x1d0]
    unsigned long long v100;  // [bp-0x100]
    char v101;  // [bp-0xf8]
    char v102;  // [bp-0xe8]
    char v103;  // [bp-0xd8]
    char v104;  // [bp-0xc8]
    char v105;  // [bp-0xb8]
    char v106;  // [bp-0xa8]
    char v107;  // [bp-0x98]
    int v108;  // [bp-0x88]
    char v109;  // [bp-0x78]
    char v110;  // [bp-0x68]
    char v111;  // [bp-0x58]
    int v112;  // [bp-0x48]
    unsigned long long v113;  // [bp-0x38]
    int v115;  // xmm2
    int v116;  // xmm3
    unsigned long long v117;  // rax
    int v118;  // xmm1
    int v119;  // xmm2
    int v120;  // xmm3
    struct_2 *v121;  // rcx
    int v122;  // xmm0
    int v123;  // xmm1
    int v124;  // xmm2
    int v125;  // xmm3
    char v126;  // al
    char v127;  // cl
    unsigned long long v128;  // rax
    int v129;  // xmm0
    int v130;  // xmm1
    int v131;  // xmm2
    unsigned int v132;  // edx
    char v133;  // al
    int v134;  // xmm0
    int v135;  // xmm1
    char v136;  // al
    int v137;  // xmm0
    int v138;  // xmm1
    int v139;  // xmm0
    int v140;  // xmm1
    int v141;  // xmm0
    int v142;  // xmm1
    int v143;  // xmm2
    int v144;  // xmm0
    int v145;  // xmm1
    int v146;  // xmm2
    int v147;  // xmm3
    int v148;  // xmm4
    unsigned long long v149;  // rax
    unsigned long v150;  // rdx
    unsigned long v151;  // rdx
    unsigned long v152;  // rdx
    int v154;  // xmm0
    int v155;  // xmm1
    int v156;  // xmm2
    unsigned long long v157;  // rax
    unsigned long long v158;  // rdx
    unsigned long v159;  // rax
    unsigned long v160;  // rcx
    unsigned long v161;  // rax
    unsigned long v163;  // rdx
    unsigned long long v164[2];  // rax
    unsigned long long v165;  // rbp
    unsigned int v166;  // ebp
    int v167;  // xmm0
    int v168;  // xmm1
    int v169;  // xmm2
    unsigned int v170;  // edx
    int v171;  // xmm0
    int v172;  // xmm1
    int v173;  // xmm2
    unsigned int v174;  // esi
    int v175;  // xmm0
    int v176;  // xmm1
    int v177;  // xmm0
    int v178;  // xmm1
    int v179;  // xmm2
    unsigned long long v180;  // rcx
    int v181;  // xmm0
    char v182;  // sil
    int v183;  // xmm1
    int v184;  // xmm2
    unsigned int v185;  // edi
    int v186;  // xmm0
    int v187;  // xmm1
    int v188;  // xmm2
    unsigned int v189;  // esi
    unsigned int v190;  // ecx
    int v191;  // xmm0
    int v192;  // xmm1
    int v193;  // xmm2

    v61 = a3;
    (char)v3.parse_name(a1);
    v115 = *((int128_t *)&v9);
    v116 = *((int128_t *)&v12);
    memcpy(&(char)v38, &(char)v3, 16);
    *((int128_t *)&v42) = *((int128_t *)&v6);
    v44 = v115;
    v47 = v116;
    v49 = *((long long *)&v15);
    if (v18 == 37)
    {
        v59 = a4;
        memcpy(&v93, &v37, 16);
        memcpy(&v94, &v42, 16);
        memcpy(&v95, &v44, 16);
        memcpy(&v96, &v47, 16);
        v97 = v49;
        v86 = v93;
        memcpy(&v87, &v42, 16);
        memcpy(&v88, &v44, 16);
        memcpy(&v89, &v47, 16);
        v90 = v97;
        v81 = 0;
        v82 = 8;
        v83 = 0;
        while (a1.next_is(24) || a1.next_is(18))
        {
            (char)v3.parse_parameter(a1, 1);
            v117 = *((long long *)&v3);
            v118 = *((int128_t *)&v8);
            v119 = *((int128_t *)&v11);
            v120 = *((int128_t *)&v14);
            *((int128_t *)&v37) = *((int128_t *)&v5);
            v42 = v118;
            v44 = v119;
            v47 = v120;
            memcpy(&v49, &v18, 16);
            if (v117 != 19)
            {
                v113 = v33;
                v112 = v32;
                memcpy(&v111, &v30, 16);
                memcpy(&v110, &v28, 16);
                memcpy(&v109, &v26, 16);
                v108 = v25;
                memcpy(&v107, &v23, 16);
                memcpy(&v106, &v21, 16);
                v100 = v117;
                memcpy(&v105, &v49, 16);
                memcpy(&v104, &v47, 16);
                memcpy(&v103, &v44, 16);
                memcpy(&v102, &v42, 16);
                memcpy(&v101, &v37, 16);
                v81.push(&v100);
            }
            else
            {
                v121 = a0;
                *((int128_t *)&v1[72]) = *((int128_t *)&v49);
                v122 = (int128_t)v37;
                v123 = (int128_t)v42;
                v124 = (int128_t)v44;
                v125 = (int128_t)v47;
                goto LABEL_67f11f;
            }
        }
        (char)v3.accepted(a1, 30);
        v126 = v3;
        if (v18 != 37)
        {
LABEL_67f242:
            *((long long *)&v1[72]) = *((long long *)&v15);
            v186 = (int128_t)v4;
            v187 = (int128_t)v7;
            v188 = (int128_t)v10;
            *((int128_t *)&v1[57]) = (int128_t)v13;
            v1[41] = v188;
            v1[25] = v187;
            v1[9] = v186;
            v189 = (int)v20;
            *((int *)&v1[81]) = (int)v19;
            *((unsigned int *)&v1[84]) = v189;
            *((char *)&v1[8]) = v126;
            *((char *)&v1[80]) = v18;
            *((unsigned long long *)v1) = 0x8000000000000000;
            goto LABEL_67f295;
        }
        if (!(v3 & 1))
        {
            (char)v3.accepted(a1, 1);
            v126 = v3;
            if (v18 != 37)
                goto LABEL_67f242;
            v127 = 2;
            if (!(v126 & 1))
            {
                v99 = 19;
                goto LABEL_67f3c8;
            }
        }
        (char)v3.parse_parameter(a1, v127);
        v128 = *((long long *)&v3);
        memcpy(&v66, &v5, 16);
        memcpy(&v68, &v8, 16);
        memcpy(&v70, &v11, 16);
        memcpy(&v71, &v14, 16);
        memcpy(&v72, &v18, 16);
        if (v128 == 19)
        {
            v121 = a0;
            v1[72] = v72;
            v122 = *((int128_t *)&v66);
            v123 = v68;
            v124 = v70;
            v125 = v71;
LABEL_67f11f:
            *((void*)((char *)&v121->field_28 + 8)) = v125;
            *((void*)((char *)&v121->field_18 + 8)) = v124;
            *((void*)((char *)&v121->field_8 + 8)) = v123;
            *((void*)&(&v121->field_0)[1]) = v122;
            v121->field_0 = 0x8000000000000000;
        }
        else
        {
            v58 = v33;
            v57 = v32;
            memcpy(&v56, &v30, 16);
            memcpy(&v55, &v28, 16);
            memcpy(&v54, &v26, 16);
            v53 = v25;
            memcpy(&v52, &v23, 16);
            memcpy(&v51, &v21, 16);
            *((int128_t *)&v40) = *((int128_t *)&v66);
            v43 = v68;
            v46 = v70;
            v48 = v71;
            v50 = v72;
            v37 = v128;
            (char)v3.forbid(a1);
            if (v18 == 37)
            {
                memcpy(&v98, &(char)v38, 208);
LABEL_67f3c8:
                (char)v3.expect(a1, 12);
                if (v18 == 37)
                {
                    v62 = 0;
                    v63 = 8;
                    v64 = 0;
                    while (true)
                    {
                        (char)v3.accept_dependency(a1);
                        v133 = v18;
                        if (v18 != 37)
                        {
LABEL_67f858:
                            v49 = *((long long *)&v15);
                            v175 = *((int128_t *)&v3);
                            v176 = *((int128_t *)&v6);
                            memcpy(&(char)v46, &v12, 16);
                            *((int128_t *)&v44) = *((int128_t *)&v9);
                            v42 = v176;
                            v37 = v175;
                            *((int *)&v1[84]) = (int)v20;
                            *((int *)&v1[81]) = (int)v19;
                            *((unsigned long long *)&v1[72]) = v49;
                            v177 = (int128_t)v37;
                            v178 = (int128_t)v42;
                            v179 = (int128_t)v44;
                            *((int128_t *)&v1[56]) = (int128_t)(&v46)[8];
                            v1[40] = v179;
                            v1[24] = v178;
                            v1[8] = v177;
                            *((char *)&v1[80]) = v133;
                            *((unsigned long long *)v1) = 0x8000000000000000;
                            goto LABEL_67f8ee;
                        }
                        v134 = *((int128_t *)&v3);
                        v135 = *((int128_t *)&v6);
                        *((int128_t *)&v45) = *((int128_t *)&v9);
                        v41 = v135;
                        v38 = v134;
                        if ((long long)v38 == 0x8000000000000000)
                            break;
                        v62.push(&(char)v38, &g_830928);
                    }
                    core::ptr::drop_in_place<core::option::Option<just::unresolved_dependency::UnresolvedDependency>>(&(char)v38);
                    (char)v3.accepted(a1, 0);
                    v136 = v3;
                    if (v18 != 37)
                    {
                        *((long long *)&v1[72]) = *((long long *)&v15);
                        v171 = (int128_t)v4;
                        v172 = (int128_t)v7;
                        v173 = (int128_t)v10;
                        *((int128_t *)&v1[57]) = (int128_t)v13;
                        v1[41] = v173;
                        v1[25] = v172;
                        v1[9] = v171;
                        v174 = (int)v20;
                        *((int *)&v1[81]) = (int)v19;
                        *((unsigned int *)&v1[84]) = v174;
                        *((char *)&v1[8]) = v136;
                        *((char *)&v1[80]) = v18;
                        *((unsigned long long *)v1) = 0x8000000000000000;
                        goto LABEL_67f8ee;
                    }
                    if ((v136 & 1))
                    {
                        v65 = 0;
                        v67 = 8;
                        v68 = 0;
                        while (true)
                        {
                            (char)v3.accept_dependency(a1);
                            if (v18 != 37)
                            {
                                v49 = *((long long *)&v15);
                                v139 = *((int128_t *)&v3);
                                v140 = *((int128_t *)&v6);
                                memcpy(&(char)v46, &v12, 16);
                                *((int128_t *)&v44) = *((int128_t *)&v9);
                                v42 = v140;
                                v37 = v139;
                                *((int *)&v1[84]) = (int)v20;
                                *((int *)&v1[81]) = (int)v19;
                                *((unsigned long long *)&v1[72]) = v49;
                                v141 = (int128_t)v37;
                                v142 = (int128_t)v42;
                                v143 = (int128_t)v44;
                                *((int128_t *)&v1[56]) = (int128_t)(&v46)[8];
                                v1[40] = v143;
                                v1[24] = v142;
                                v1[8] = v141;
                                *((char *)&v1[80]) = v18;
                                *((unsigned long long *)v1) = 0x8000000000000000;
                                goto LABEL_67f9bf;
                            }
                            v137 = *((int128_t *)&v3);
                            v138 = *((int128_t *)&v6);
                            *((int128_t *)&v45) = *((int128_t *)&v9);
                            v41 = v138;
                            v38 = v137;
                            if ((long long)v38 == 0x8000000000000000)
                                break;
                            v65.push(&(char)v38, &g_830940);
                        }
                        core::ptr::drop_in_place<core::option::Option<just::unresolved_dependency::UnresolvedDependency>>(&(char)v38);
                        if (v69)
                        {
                            v62.append_elements(8, v69);
                            v68 = 0;
                            core::ptr::drop_in_place<alloc::vec::Vec<just::unresolved_dependency::UnresolvedDependency>>(&v65);
                            goto LABEL_67f785;
                        }
                        else
                        {
                            (char)v3.unexpected_token(a1);
                            v144 = *((int128_t *)&v18);
                            v49 = v144;
                            v145 = *((int128_t *)&v5);
                            v146 = *((int128_t *)&v8);
                            v147 = *((int128_t *)&v11);
                            v148 = *((int128_t *)&v14);
                            v47 = v148;
                            v44 = v147;
                            v42 = v146;
                            v37 = v145;
                            v1[72] = v144;
                            v1[56] = v148;
                            v1[40] = v147;
                            v1[24] = v146;
                            v1[8] = v145;
                            *((unsigned long long *)v1) = 0x8000000000000000;
LABEL_67f9bf:
                            core::ptr::drop_in_place<alloc::vec::Vec<just::unresolved_dependency::UnresolvedDependency>>(&v65);
LABEL_67f8ee:
                            core::ptr::drop_in_place<alloc::vec::Vec<just::unresolved_dependency::UnresolvedDependency>>(&v62);
                        }
                    }
                    else
                    {
LABEL_67f785:
                        (char)v3.expect_eol(a1);
                        if (v18 == 37)
                        {
                            (char)v3.parse_body(a1);
                            v133 = v18;
                            if (v18 != 37)
                                goto LABEL_67f858;
                            v149 = *((long long *)&v6);
                            *((int128_t *)&v73) = *((int128_t *)&v3);
                            v75 = v149;
                            if (v75)
                            {
                                v2 = v74->field_8.is_shebang(v74->field_10);
                                v0 = a2.contains(16);
                                if (((char)v2 & v0) != 1)
                                    goto LABEL_67f9ec;
                                v5 = v86.lexeme();
                                v6 = v150;
                                v3 = 9223372036854775858;
                                (char)v38.error(&v86, &(char)v3);
                            }
                            else
                            {
                                v0 = a2.contains(16);
                                v2 = 0;
LABEL_67f9ec:
                                if (a2.contains(19) && a2.contains(9))
                                {
                                    v5 = v86.lexeme();
                                    v6 = v151;
                                    v3 = 9223372036854775853;
                                    (char)v38.error(&v86, &(char)v3);
                                }
                                else if (a2.contains(3) && a2.contains(10))
                                {
                                    v5 = v86.lexeme();
                                    v6 = v152;
                                    v3 = 9223372036854775840;
                                    (char)v38.error(&v86, &(char)v3);
                                }
                                else
                                {
                                    v157 = v86.lexeme();
                                    v3 = 0;
                                    if (!(char)core::slice::<impl [T]>::starts_with(v157, v158, ::0x5fb200::core::char::methods::encode_utf8_raw(95, &(char)v3), v158))
                                        a2.contains(15);
                                    if (v61)
                                    {
                                        (char)v3.to_vec(v61, v59);
                                        v80 = *((long long *)&v6);
                                        *((int128_t *)&v76) = *((int128_t *)&v3);
                                    }
                                    else
                                    {
                                        v77 = 0x8000000000000000;
                                    }
                                    v59 = 1;
                                    v61 = v64;
                                    v159 = *((long long *)a2);
                                    v160 = (long long)a2[8];
                                    v161 = v159;
                                    if (v161)
                                        v161 = (long long)a2[16];
                                    v163 = v159;
                                    v3 = v163;
                                    v5 = 0;
                                    v6 = v159;
                                    v8 = v160;
                                    v9 = v163;
                                    v11 = 0;
                                    v12 = v159;
                                    v14 = v8;
                                    v15 = v161;
                                    while (true)
                                    {
                                        do
                                        {
                                            if (!(char)v3.next())
                                            {
                                                v91.filter(&(char)v77);
                                                v166 = a1->field_80;
                                                v84.clone(a1->field_8, a1->field_10);
                                                v65 = 0x8000000000000000;
                                                (char)v38.into_iter(&v81);
                                                (char)v3.chain(&(char)v38, &v98);
                                                (char)v38.collect(&(char)v3);
                                                *((int128_t *)&v35) = *((int128_t *)a2);
                                                v36 = (long long)a2[16];
                                                memcpy(&(char)v3, &(char)v73, 16);
                                                v6 = v75;
                                                *((int128_t *)&v8) = *((int128_t *)&v62);
                                                v11 = v64;
                                                memcpy(&v22, &v91, 16);
                                                v24 = v92;
                                                v15 = v85;
                                                v12 = v84;
                                                v34 = v97;
                                                memcpy(&(char)v32, &v96, 16);
                                                v31 = v95;
                                                v29 = v94;
                                                v27 = v93;
                                                v26 = v69;
                                                memcpy(&v25, &v65, 16);
                                                v21 = (long long)v41;
                                                memcpy(&v18, &(char)v38, 16);
                                                memcpy(v1, &(char)v3, 240);
                                                *((void* *)&v1[240]) = v61;
                                                *((unsigned int *)&v1[248]) = v166;
                                                *((char *)&v1[252]) = v60;
                                                *((char *)&v1[253]) = a5;
                                                *((char *)&v1[254]) = (char)v2 | v0;
                                                return a5;
                                            }
                                        } while (v164[0] + 0x8000000000000000 != 3);
                                        v165 = 0x8000000000000000;
                                        if (v164[1] != 0x8000000000000000)
                                        {
                                            (char)v38.clone(&v164[1]);
                                            v165 = (long long)v38;
                                            *((int128_t *)&v66) = (int128_t)(&v38)[8];
                                        }
                                        core::ptr::drop_in_place<regex::error::Error>(&(char)v77);
                                        v78 = v165;
                                        *((int128_t *)&v79) = (int128_t)v66;
                                    }
                                }
                            }
                            *((int128_t *)&v1[72]) = *((int128_t *)&v49);
                            v154 = (int128_t)v38;
                            v155 = (int128_t)v41;
                            v156 = (int128_t)v45;
                            *((int128_t *)&v1[56]) = (int128_t)(&v46)[8];
                            v1[40] = v156;
                            v1[24] = v155;
                            v1[8] = v154;
                            *((unsigned long long *)v1) = 0x8000000000000000;
                            core::ptr::drop_in_place<alloc::vec::Vec<just::line::Line>>(&(char)v73);
                            goto LABEL_67f8ee;
                        }
                        else
                        {
                            *((long long *)&v1[72]) = *((long long *)&v15);
                            v167 = *((int128_t *)&v3);
                            v168 = *((int128_t *)&v6);
                            v169 = *((int128_t *)&v9);
                            *((int128_t *)&v1[56]) = *((int128_t *)&v12);
                            v1[40] = v169;
                            v1[24] = v168;
                            v1[8] = v167;
                            v170 = (int)v20;
                            *((int *)&v1[81]) = (int)v19;
                            *((unsigned int *)&v1[84]) = v170;
                            *((char *)&v1[80]) = v18;
                            *((unsigned long long *)v1) = 0x8000000000000000;
                            goto LABEL_67f8ee;
                        }
                    }
                }
                else
                {
                    v180 = *((long long *)&v3);
                    v181 = *((int128_t *)&v5);
                    v182 = v15;
                    v37 = (int)v16;
                    v39 = v17;
                    *((int *)&v1[84]) = (int)v20;
                    *((int *)&v1[81]) = (int)v19;
                    v183 = *((int128_t *)&v8);
                    v184 = *((int128_t *)&v11);
                    v185 = v37;
                    *((unsigned int *)&v1[76]) = v39;
                    *((unsigned int *)&v1[73]) = v185;
                    *((unsigned long long *)&v1[8]) = v180;
                    v1[16] = v181;
                    v1[32] = v183;
                    v1[48] = v184;
                    *((unsigned long long *)&v1[64]) = v14;
                    *((char *)&v1[72]) = v182;
                    *((char *)&v1[80]) = v18;
                    *((unsigned long long *)v1) = 0x8000000000000000;
                }
                core::ptr::drop_in_place<core::option::Option<just::parameter::Parameter>>(&v98);
            }
            else
            {
                *((long long *)&v1[72]) = *((long long *)&v15);
                v129 = *((int128_t *)&v3);
                v130 = *((int128_t *)&v6);
                v131 = *((int128_t *)&v9);
                *((int128_t *)&v1[56]) = *((int128_t *)&v12);
                v1[40] = v131;
                v1[24] = v130;
                v1[8] = v129;
                v132 = (int)v20;
                *((int *)&v1[81]) = (int)v19;
                *((unsigned int *)&v1[84]) = v132;
                *((char *)&v1[80]) = v18;
                *((unsigned long long *)v1) = 0x8000000000000000;
                core::ptr::drop_in_place<just::parameter::Parameter>(&(char)v38);
            }
        }
LABEL_67f295:
        core::ptr::drop_in_place<alloc::vec::Vec<just::parameter::Parameter>>(&v81);
    }
    else
    {
        v190 = (int)v19;
        *((int *)&v1[84]) = (int)v20;
        *((unsigned int *)&v1[81]) = v190;
        *((unsigned long long *)&v1[72]) = v49;
        v191 = *((int128_t *)&v37);
        v192 = (int128_t)v42;
        v193 = (int128_t)v44;
        *((int128_t *)&v1[56]) = (int128_t)v47;
        v1[40] = v193;
        v1[24] = v192;
        v1[8] = v191;
        *((char *)&v1[80]) = v18;
        *((unsigned long long *)v1) = 0x8000000000000000;
    }
    return core::ptr::drop_in_place<just::attribute_set::AttributeSet>(a2);
}
