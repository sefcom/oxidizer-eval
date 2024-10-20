long long uu_tr::operation::Sequence::solve_set_characters::h3869f4b5f4375ab0(unsigned long long a0[6], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0[2];  // [sp-0x200]
    unsigned long long v1;  // [sp-0x1f8]
    unsigned long long v2;  // [sp-0x1f0]
    void* v3;  // [sp-0x1e8], Other Possible Types: struct_0 *, unsigned long long
    unsigned int v6;  // [sp-0x1cc]
    int v7;  // [bp-0x1c8], Other Possible Types: char
    char v8;  // [bp-0x1c0]
    unsigned long long v9;  // [sp-0x1b8]
    int v10;  // [bp-0x1a8], Other Possible Types: char
    char v11;  // [bp-0x1a0]
    char v12[17];  // [sp-0x198], Other Possible Types: char [2], unsigned long
    char v13;  // [bp-0x190]
    unsigned long long v15;  // [sp-0x170]
    char v16;  // [bp-0x168]
    char v17;  // [bp-0x160]
    char v18;  // [bp-0x158]
    unsigned long long v19;  // [sp-0x150]
    unsigned long long v20;  // [sp-0x148]
    unsigned long long v21;  // [sp-0x140]
    unsigned long long v22;  // [sp-0x138]
    unsigned long v23;  // [sp-0x130], Other Possible Types: unsigned long long
    unsigned short v24;  // [sp-0x128]
    char v25;  // [sp-0x126]
    unsigned long v26;  // [sp-0x120], Other Possible Types: unsigned long long
    char v27[2];  // [sp-0x118]
    unsigned long long v28;  // [sp-0x110]
    unsigned long long v29;  // [sp-0x108]
    void* v30;  // [sp-0x100]
    void* v31;  // [sp-0xf0]
    char v32[2];  // [sp-0xe0]
    unsigned long long v33;  // [sp-0xd8]
    unsigned long long v34;  // [sp-0xd0]
    void* v35;  // [sp-0xc8]
    void* v36;  // [sp-0xb8]
    char v37[17];  // [sp-0xa8]
    unsigned long long v38;  // [sp-0xa0]
    unsigned long long v39;  // [sp-0x98]
    char v40[17];  // [sp-0x90]
    unsigned long long v41;  // [sp-0x88]
    void* v42;  // [sp-0x80]
    void* v43;  // [sp-0x70]
    char v44[2];  // [sp-0x60]
    unsigned long long v45;  // [sp-0x58]
    void* v46;  // [sp-0x50]
    void* v47;  // [sp-0x40]
    char v49;  // [bp+0x10]
    unsigned long long v50;  // rbx
    char v51[17];  // r14
    unsigned long long v52;  // rax
    unsigned long long v53;  // rax
    void* v54;  // rcx
    void* v55;  // rax
    struct_1 *v56;  // rcx
    int v57;  // ymm0
    int v58;  // ymm0
    int v59;  // ymm1
    int v60;  // ymm1
    unsigned long long v61;  // rax
    int v62;  // ymm4
    int v63;  // ymm5
    int v64;  // xmm4
    unsigned long long v65;  // r8
    int v66;  // xmm5
    int v67;  // xmm4
    int v68;  // xmm4
    int v69;  // xmm4
    int v70;  // xmm4
    int v71;  // xmm4
    int v72;  // xmm0
    int v73;  // xmm5
    int v74;  // xmm5
    int v75;  // xmm4
    int v76;  // xmm4
    int v77;  // xmm4
    int v78;  // xmm1
    int v80;  // xmm1
    int v81;  // ymm1
    int v82;  // ymm0
    unsigned long long v83;  // rdx
    char *v84;  // rax
    int v86;  // ymm4
    int v87;  // ymm5
    unsigned long long v88;  // r9
    unsigned long long v89;  // rbp
    char v90[2];  // r13
    char v91[2];  // r12
    void* v92;  // rcx
    char v93[2];  // rax
    struct_1 *v94;  // rcx
    int v95;  // ymm0
    int v96;  // ymm1
    char v97[2];  // rax
    int v98;  // xmm4
    int v99;  // xmm5
    int v100;  // xmm4
    int v101;  // xmm4
    int v102;  // xmm4
    int v103;  // xmm4
    int v104;  // xmm4
    int v105;  // xmm0
    int v106;  // xmm5
    int v107;  // xmm5
    int v108;  // xmm4
    int v109;  // xmm4
    int v110;  // xmm4
    int v111;  // xmm1
    char v112[2];  // rdx
    char v113[2];  // rdx
    char *v114;  // rax
    unsigned long long v115;  // rcx
    char v116[2];  // r12
    char v117[2];  // r13
    char v118[2];  // r12
    char v119[2];  // rax
    char v121[2];  // rcx
    char v122[2];  // rax
    char v123[2];  // rdx
    char v124[2];  // r13
    unsigned long long v125;  // r12
    unsigned long long v126;  // rax
    void* v127;  // rbp
    unsigned long long v128;  // rdx
    void* v129;  // r12
    char v130[2];  // rbx
    void* v131;  // rax
    unsigned long long v132;  // r14
    char v133[17];  // rbp
    char v134[2];  // rbx
    struct_0 *v135;  // r10
    struct_0 *v136;  // r12
    struct_0 *v137;  // r13
    struct_0 *v138;  // rax
    char v139;  // dl
    char v140;  // al
    struct_0 *v141;  // rax
    struct_0 *v142;  // rcx
    struct_0 *v143;  // rcx
    struct_0 *v144;  // rcx
    struct_0 *v145;  // rdx
    char v146;  // dil
    char v147;  // sil
    struct_0 *v148;  // rax
    struct_0 *v151;  // r9
    char v152;  // dil
    char v153;  // sil
    struct_0 *v154;  // rdx
    struct_0 *v156;  // r9
    struct_0 *v157;  // r9
    struct_0 *v158;  // rax
    struct_0 *v159;  // rcx
    char v160;  // dl

    uu_tr::operation::Sequence::from_str::h56200db488f7fe37(&v10, a1, a2, a3, a4, a5);
    v50 = *((long long *)&v11);
    v51 = v12;
    v52 = *((long long *)&v13);
    if (*((long long *)&v10))
    {
        a0[1] = v50;
        a0[2] = v51;
        a0[3] = v1;
        a0[0] = 0x8000000000000000;
        return a0;
    }
    v1 = v52;
    if (v1)
    {
        v53 = v1;
        if (v53 < 4)
        {
            v54 = 0;
            v55 = 0;
            goto LABEL_48849a;
        }
        else
        {
            v55 = v53 & -4;
            v56 = &v51[2 + 14];
            v58 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            v60 = v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            do
            {
                v64 = *((int *)&v56->field_-10) * 0x100 | (char)v56->field_0;
                v65 = *((int *)&v56->field_-30) * 0x100 | (char)v56->field_-20;
                v66 = v65;
                v67 = CmpEQV(v64, 514);
                v68 = InterleaveLOV(v67, v67);
                v69 = (unsigned long long)(v68 >> 64) CONCAT (unsigned short)((unsigned long long)v68 >> 48) CONCAT (unsigned short)((unsigned int)v68 >> 16) CONCAT (unsigned short)((unsigned int)v68 >> 16) CONCAT (unsigned short)v68;
                v70 = (unsigned int)(v69 >> 96) CONCAT (unsigned int)((unsigned long long)v69 >> 32) CONCAT (unsigned int)((unsigned long long)v69 >> 32) CONCAT (unsigned int)v69;
                v71 = v70 & 18446744073709551617;
                v72 = AddV(0, v71);
                v58 = v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72;
                v73 = CmpEQV(v66, 514);
                v74 = InterleaveLOV(v73, v73);
                v63 = v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74;
                v75 = (unsigned long long)(v74 >> 64) CONCAT (unsigned short)((unsigned long long)v74 >> 48) CONCAT (unsigned short)((unsigned int)v74 >> 16) CONCAT (unsigned short)((unsigned int)v74 >> 16) CONCAT (unsigned short)v74;
                v76 = (unsigned int)(v75 >> 96) CONCAT (unsigned int)((unsigned long long)v75 >> 32) CONCAT (unsigned int)((unsigned long long)v75 >> 32) CONCAT (unsigned int)v75;
                v77 = v76 & 18446744073709551617;
                v62 = ...;
                v78 = AddV(0, v77);
                v60 = v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78;
                v56 = &v56[1].padding_-2f[11];
            } while (v61 != 4);
            v80 = AddV(v78, v72);
            v81 = v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80;
            v82 = v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((unsigned int)(v80 >> 96) CONCAT (unsigned int)(v80 >> 64) CONCAT (unsigned int)(v80 >> 96) CONCAT (unsigned int)(v80 >> 64)) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(AddV((unsigned int)(v80 >> 96) CONCAT (unsigned int)(v80 >> 64) CONCAT (unsigned int)(v80 >> 96) CONCAT (unsigned int)(v80 >> 64), v80));
            v54 = (unsigned long long)v82;
            if (v1 != v55)
            {
LABEL_48849a:
                v83 = v1 - v55;
                v84 = 0x10 * v55 + (char *)v51;
                do
                {
                    v54 += -0x100 | *(v84) == 2;
                    v84 += 16;
                } while (v83 != 1);
            }
        }
        if (!v54)
            goto LABEL_4884e4;
        a0[1] = 9223372036854775811;
        a0[0] = 0x8000000000000000;
    }
LABEL_4884e4:
    *((unsigned long long *)&v6) = a5;
    uu_tr::operation::Sequence::from_str::h56200db488f7fe37(&v10, a3, a4, v54, v65, v88);
    v89 = *((long long *)&v11);
    v90 = v12;
    v91 = *((long long *)&v13);
    if (*((long long *)&v10))
    {
        a0[1] = v89;
        a0[2] = v90;
        a0[3] = v91;
        a0[0] = 0x8000000000000000;
    }
    if (v91)
    {
        if (v91 < 4)
        {
            v92 = 0;
            v93 = 0;
            goto LABEL_4885e8;
        }
        else
        {
            v93 = v91 & -4;
            v94 = v90 + 24;
            v95 = v82 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            v96 = v81 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            do
            {
                v98 = *((int *)&v94->field_-10) * 0x100 | (char)v94->field_0;
                v99 = *((int *)&v94->field_-30) * 0x100 | (char)v94->field_-20;
                v100 = CmpEQV(v98, 514);
                v101 = InterleaveLOV(v100, v100);
                v102 = (unsigned long long)(v101 >> 64) CONCAT (unsigned short)((unsigned long long)v101 >> 48) CONCAT (unsigned short)((unsigned int)v101 >> 16) CONCAT (unsigned short)((unsigned int)v101 >> 16) CONCAT (unsigned short)v101;
                v103 = (unsigned int)(v102 >> 96) CONCAT (unsigned int)((unsigned long long)v102 >> 32) CONCAT (unsigned int)((unsigned long long)v102 >> 32) CONCAT (unsigned int)v102;
                v104 = v103 & 18446744073709551617;
                v105 = AddV(0, v104);
                v95 = v95 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v105;
                v106 = CmpEQV(v99, 514);
                v107 = InterleaveLOV(v106, v106);
                v87 = v87 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v99 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v106 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v107;
                v108 = (unsigned long long)(v107 >> 64) CONCAT (unsigned short)((unsigned long long)v107 >> 48) CONCAT (unsigned short)((unsigned int)v107 >> 16) CONCAT (unsigned short)((unsigned int)v107 >> 16) CONCAT (unsigned short)v107;
                v109 = (unsigned int)(v108 >> 96) CONCAT (unsigned int)((unsigned long long)v108 >> 32) CONCAT (unsigned int)((unsigned long long)v108 >> 32) CONCAT (unsigned int)v108;
                v110 = v109 & 18446744073709551617;
                v86 = ...;
                v111 = AddV(0, v110);
                v96 = v96 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v111;
                v94 = &v94[1].padding_-2f[11];
                v112 = v97 + 2;
            } while (v97 != 4);
            v92 = (unsigned long long)(v95 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((unsigned int)(AddV(v111, v105) >> 96) CONCAT (unsigned int)(AddV(v111, v105) >> 64) CONCAT (unsigned int)(AddV(v111, v105) >> 96) CONCAT (unsigned int)(AddV(v111, v105) >> 64)) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(AddV((unsigned int)(AddV(v111, v105) >> 96) CONCAT (unsigned int)(AddV(v111, v105) >> 64) CONCAT (unsigned int)(AddV(v111, v105) >> 96) CONCAT (unsigned int)(AddV(v111, v105) >> 64), AddV(v111, v105))));
            if (v91 != v93)
            {
LABEL_4885e8:
                v113 = v91 - v93;
                v114 = 0x10 * v93 + (char *)v90;
                do
                {
                    v92 += -0x100 | *(v114) == 2;
                    v114 += 16;
                    v112 = &v113[1];
                } while (v113 != 1);
            }
        }
        if (v92 <= 1)
            goto LABEL_48862b;
        v115 = 9223372036854775810;
        goto LABEL_48866f;
    }
LABEL_48862b:
    v116 = v91 * 16;
    if (v49)
    {
        do
        {
            v119 = v118;
            if (!v119)
                goto LABEL_48867b;
            v112 = v117;
            v121 = v112 + 8;
            v122 = v119 + 8;
            if (!(v112[0] == 4))
                continue;
            v123 = v112[1];
            v112 = v123 | -0x100 | (char)v123 - 6 & 251;
        } while (!((char)v123 - 6 & 251));
        v115 = 9223372036854775814;
LABEL_48866f:
        a0[1] = v115;
        a0[0] = 0x8000000000000000;
    }
LABEL_48867b:
    *(&v0) = v90;
    v20 = v1 * 16;
    *((char *[17])&v40[0]) = v51;
    v3 = &v51[v20];
    v41 = v3;
    v42 = 0;
    v43 = 0;
    v50 = v50;
    *((char *[17])&v51[0]) = v51;
    v2 = v89;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h66be8dd926fee8c5(&v7, v40, v112);
    if ((char)v6)
    {
        v24 = 0;
        v25 = 255;
        v23 = &v7;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hc6341b6b936688bc(&v10, &v23);
        if (*((long long *)&v7))
            __rust_dealloc(*((long long *)&v8));
        v9 = v12;
        v7 = v10;
    }
    v124 = v0;
    v125 = v116 + v124;
    v126 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h87d9102288a4cc56(v124, v125, 0);
    v21 = v9;
    v127 = v21 - v126;
    if (v126 > v21)
        v127 = 0;
    v26 = v127;
    *(&v27) = v124;
    v28 = v125;
    v29 = &v26;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hcc7b3b1ca75e2d4e(&v10, v27);
    if (v2)
        __rust_dealloc(v0);
    v89 = *((long long *)&v10);
    v128 = v12;
    *((long long *)&v90) = *((long long *)&v11);
    v19 = v128 * 16;
    v15 = &v90[v19];
    v22 = v128;
    if (v22)
    {
        v129 = 0;
        *(&v0) = v90;
        do
        {
            v130 = v0;
            if (v130[0] == 4)
            {
                if (!v129)
                {
                    v131 = 0;
                }
                else
                {
                    *(&v32) = v90;
                    v33 = v15;
                    v34 = v129;
                    v30 = 0;
                    v31 = 0;
                    v131 = core::iter::adapters::flatten::FlattenCompat$LT$I$C$U$GT$::iter_fold::h9912433ea56f1725(&v30);
                }
                if (v1)
                {
                    if (!v131 && v51[0] == 4)
                        continue;
                    if (v1 != 1)
                    {
                        v132 = 1;
                        v133 = 16;
                        while (!(*((char *)(v51 + v133)) == 4) || !((*((char *[17])&v37[0]) = v51, v38 = v3, v39 = v132, v35 = (void*)0, v36 = (void*)0, core::iter::adapters::flatten::FlattenCompat$LT$I$C$U$GT$::iter_fold::h9912433ea56f1725(&v35) == v131)))
                        {
                            v133 = &v133[16];
                            v132 = v39 + 1;
                            if (v20 == v133)
                                goto LABEL_48893d;
                        }
                    }
                }
LABEL_48893d:
                a0[1] = 9223372036854775815;
                a0[0] = 0x8000000000000000;
            }
        } while ((v134 = v130 + 16, v129 += 1, v134 != v15));
    }
    *(&v44) = v90;
    v45 = v15;
    v46 = 0;
    v47 = 0;
    v50 = v50;
    v51 = v51;
    v89 = v89;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h66be8dd926fee8c5(&v16, v44, v22);
    v135 = *((long long *)&v18);
    if (!v135)
    {
        v136 = 1;
        goto LABEL_488aa5;
    }
    v1 = *((long long *)&v17);
    if (v135 < 0)
    {
        v3 = 0;
        goto LABEL_488d95;
    }
    v3 = 1;
    v137 = v135;
    v138 = __rust_alloc(v135, 1);
    if (!v138)
    {
LABEL_488d95:
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    }
    v136 = v138;
    memcpy(v138, v1, v137);
    v135 = v137;
    if (v137 == 1)
LABEL_488aa5:
    v90 = v90;
    if (v135 >= 21)
    {
        v3 = v135;
        core::slice::sort::stable::driftsort_main::h39142832dbbb2378(v136, v135, &v10);
        v135 = v3;
    }
    else
    {
        if (((char)v135 & 1))
        {
            v141 = &v136->padding_-1;
        }
        else
        {
            v139 = v136->field_-2;
            v140 = v136->padding_-1;
            if (v140 < v139)
            {
                v142 = 1;
                do
                {
                    *((char *)(v136 + v142)) = v139;
                    if (v142 == 1)
                        goto LABEL_488cbd;
                } while ((v134 = v130 + 16, v129 += 1, v134 != v15));
                v143 = v142 + v136;
LABEL_488cbd:
                v144->field_-2 = v140;
            }
            v141 = &v136->field_0;
        }
        if (v135 != 2)
        {
            v145 = &v141->padding_-1;
            do
            {
                v146 = v141->padding_-1;
                v147 = v141->field_-2;
                if (v147 < v146)
                {
                    do
                    {
                        v148->field_-2 = v146;
                        if (v88 == v136)
                            break;
                    } while ((v134 = v130 + 16, v129 += 1, v134 != v15));
                    v151->field_-2 = v147;
                }
                v152 = v141->field_-2;
                v153 = v141->padding_-1;
                if (v153 < v152)
                {
                    do
                    {
                        v154->field_-2 = v152;
                        if (v156 == v136)
                            break;
                    } while ((v134 = v130 + 16, v129 += 1, v134 != v15));
                    v157->field_-2 = v153;
                }
                v141 = &v141->field_0;
                v145 = &v145->field_0;
            } while (v141 != v136 + v135);
        }
    }
    v158 = 1;
    do
    {
        if (*((char *)(v136 + v158)) == *((char *)(v136 + v158 - 1)))
        {
            for (v159 = &v158->padding_-1; v159 < v135; v159 = &v159->padding_-1)
            {
                v160 = *((char *)(v136 + v159));
                if (v160 != *((char *)(v136 + v158 - 1)))
                {
                    *((char *)(v136 + v158)) = v160;
                    v158 = &v158->padding_-1;
                }
            }
        }
    } while ((v134 = v130 + 16, v129 += 1, v134 != v15));
}
