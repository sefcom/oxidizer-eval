long long just::parser::Parser::parse_conditional(void* a0, void* a1)
{
    int v0;  // [bp-0x288], Other Possible Types: char
    char v1;  // [sp-0x280]
    int v2;  // [bp-0x278], Other Possible Types: char
    char v3;  // [bp-0x270]
    int v4;  // [bp-0x268]
    char v5;  // [bp-0x260]
    int v6;  // [bp-0x258]
    char v7;  // [bp-0x250]
    int v8;  // [bp-0x248]
    unsigned int v9;  // [bp-0x244]
    char v10;  // [bp-0x240]
    char v11;  // [bp-0x23f]
    unsigned int v12;  // [bp-0x23c]
    int v13;  // [bp-0x238]
    char v14;  // [bp-0x230]
    int v15;  // [bp-0x228]
    char v16;  // [bp-0x220]
    int v17;  // [bp-0x218]
    unsigned long long v18;  // [bp-0x210]
    int v19;  // [bp-0x208], Other Possible Types: char, unsigned int, unsigned long long
    unsigned int v20;  // [bp-0x205]
    int v21;  // [bp-0x200]
    int v22;  // [bp-0x1f8]
    int v23;  // [bp-0x1f0]
    int v24;  // [bp-0x1e8], Other Possible Types: char
    int v25;  // [bp-0x1e0]
    int v26;  // [sp-0x1d8]
    int v27;  // [bp-0x1d0]
    char v28;  // [sp-0x1c8], Other Possible Types: unsigned long
    char v29;  // [bp-0x1c0]
    char v30;  // [bp-0x1b8]
    int v31;  // [bp-0x1b0]
    int v32;  // [bp-0x1a0]
    unsigned long long v33;  // [bp-0x190]
    int v34;  // [bp-0x188], Other Possible Types: char
    unsigned long long v35;  // [bp-0x178]
    char v36;  // [bp-0x168], Other Possible Types: unsigned int
    unsigned int v37;  // [bp-0x165]
    int v38;  // [bp-0x158], Other Possible Types: char
    int v39;  // [bp-0x148], Other Possible Types: char
    int v40;  // [bp-0x138], Other Possible Types: char
    int v41;  // [bp-0x128], Other Possible Types: char
    unsigned long long v42;  // [bp-0x118]
    int v43;  // [bp-0x110]
    int v44;  // [bp-0x108]
    int v45;  // [bp-0x100]
    int v46;  // [bp-0xf8]
    int v47;  // [bp-0xf0]
    int v48;  // [bp-0xe8]
    int v49;  // [bp-0xe0]
    int v50;  // [bp-0xd8], Other Possible Types: char
    char v51;  // [bp-0xd0]
    char v52;  // [bp-0xc8]
    int v53;  // [bp-0xc0]
    int v54;  // [bp-0xb8]
    int v55;  // [bp-0xb0]
    char v56;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v57;  // [bp-0xa0]
    unsigned long long v58;  // [bp-0x98]
    int v59;  // [bp-0x90]
    int v60;  // [bp-0x80]
    int v61;  // [bp-0x70]
    int v62;  // [bp-0x60]
    int v63;  // [bp-0x58]
    char v64;  // [bp-0x50]
    char v65;  // [bp-0x48]
    int v66;  // [bp-0x40]
    int v67;  // [bp-0x30]
    unsigned long long v68;  // [bp-0x20]
    unsigned long v70;  // rax
    unsigned long long v71;  // rax
    int v72;  // xmm0
    int v73;  // xmm1
    int v74;  // xmm2
    int v75;  // xmm0
    int v76;  // xmm1
    int v77;  // xmm2
    int v78;  // xmm3
    char v79;  // al
    unsigned long long v80;  // rax
    int v81;  // xmm0
    int v82;  // xmm1
    int v83;  // xmm2
    int v84;  // xmm3
    int v85;  // xmm0
    int v86;  // xmm1
    int v87;  // xmm2
    int v88;  // xmm3
    unsigned long long v89;  // rax
    int v90;  // xmm0
    int v91;  // xmm2
    int v92;  // xmm3
    int v93;  // xmm0
    int v94;  // xmm1
    int v95;  // xmm2
    unsigned long long v96;  // rax
    int v97;  // xmm0
    int v98;  // xmm1
    unsigned long long v99;  // rax
    unsigned long long v100;  // rcx
    int v101;  // xmm0
    char v102;  // sil
    int v103;  // xmm1
    int v104;  // xmm2
    unsigned int v105;  // edi
    int v106;  // xmm0
    int v107;  // xmm1
    int v108;  // xmm2
    unsigned long long v109;  // rcx
    int v110;  // xmm0
    char v111;  // sil
    int v112;  // xmm1
    int v113;  // xmm2
    unsigned int v114;  // edi
    unsigned long long v115;  // rcx
    int v116;  // xmm0
    char v117;  // sil
    int v118;  // xmm1
    int v119;  // xmm2
    unsigned int v120;  // edi
    int v121;  // xmm0
    int v122;  // xmm1
    int v123;  // xmm0
    int v124;  // xmm1
    int v125;  // xmm2

    v0.parse_condition(a1);
    v70 = v10;
    if ((char)v70 != 37)
    {
        v28 = (long long)v8;
        v121 = (int128_t)v0;
        v122 = (int128_t)v2;
        memcpy(&(char)v26, &(char)v6, 16);
        *((int128_t *)&v24) = (int128_t)v4;
        v22 = v122;
        v19 = v121;
        *((unsigned int *)&a0[84]) = v12;
        *((int *)&a0[81]) = *((int *)&v11);
        *((unsigned long *)&a0[72]) = v28;
        v123 = (int128_t)v19;
        v124 = (int128_t)v22;
        v125 = (int128_t)v24;
        *((int128_t *)&a0[56]) = (int128_t)v26;
        a0[40] = v125;
        a0[24] = v124;
        a0[8] = v123;
        *((char *)&a0[80]) = v70;
        *((unsigned long long *)a0) = 18;
        return v70;
    }
    memcpy(&v34, &v0, 16);
    v35 = *((long long *)&v2);
    v0.expect(a1, 7);
    if (v10 == 37)
    {
        v0.parse_expression(a1);
        v71 = *((long long *)&v0);
        memcpy(&(char)v19, &v1, 16);
        *((int128_t *)&v22) = *((int128_t *)&v3);
        memcpy(&v24, &v5, 16);
        *((int128_t *)&v26) = *((int128_t *)&v7);
        memcpy(&v28, &v10, 16);
        if (v71 == 18)
        {
            *((int128_t *)&a0[72]) = *((int128_t *)&v28);
            v72 = *((int128_t *)&v19);
            v73 = (int128_t)v22;
            v74 = *((int128_t *)&v24);
            *((int128_t *)&a0[56]) = (int128_t)v26;
            a0[40] = v74;
            a0[24] = v73;
            a0[8] = v72;
        }
        else
        {
            v68 = v18;
            v75 = *((int128_t *)&v14);
            *((int128_t *)&v67) = *((int128_t *)&v16);
            v66 = v75;
            v76 = (int128_t)v22;
            v77 = *((int128_t *)&v24);
            v78 = (int128_t)v26;
            *((int128_t *)&v59) = *((int128_t *)&v19);
            v60 = v76;
            v61 = v77;
            v62 = v78;
            memcpy(&v64, &v28, 16);
            v58 = v71;
            v0.expect(a1, 8);
            if (v10 == 37)
            {
                v0.expect_keyword(a1, 9);
                if (v10 == 37)
                {
                    v0.accepted_keyword(a1, 13);
                    v79 = v0;
                    if (v10 == 37)
                    {
                        if ((v79 & 1))
                        {
                            v0.parse_conditional(a1);
                            v80 = *((long long *)&v0);
                            memcpy(&(char)v19, &v1, 16);
                            *((int128_t *)&v22) = *((int128_t *)&v3);
                            memcpy(&v24, &v5, 16);
                            *((int128_t *)&v26) = *((int128_t *)&v7);
                            memcpy(&v28, &v10, 16);
                            if (v80 == 18)
                            {
                                *((int128_t *)&a0[72]) = *((int128_t *)&v28);
                                v81 = *((int128_t *)&v19);
                                v82 = (int128_t)v22;
                                v83 = *((int128_t *)&v24);
                                v84 = (int128_t)v26;
                            }
                            else
                            {
                                v57 = v18;
                                v85 = *((int128_t *)&v14);
                                *((int128_t *)&v55) = *((int128_t *)&v16);
                                v53 = v85;
                                v86 = (int128_t)v22;
                                v87 = *((int128_t *)&v24);
                                v88 = (int128_t)v26;
                                *((int128_t *)&v43) = *((int128_t *)&v19);
                                v45 = v86;
                                v47 = v87;
                                v49 = v88;
                                memcpy(&v51, &v28, 16);
                                v42 = v80;
                                goto LABEL_67c2e4;
                            }
                        }
                        else
                        {
                            v0.expect(a1, 7);
                            if (v10 != 37)
                                goto LABEL_67c1c6;
                            v0.parse_expression(a1);
                            v89 = *((long long *)&v0);
                            memcpy(&v36, &v1, 16);
                            memcpy(&v38, &v3, 16);
                            memcpy(&v39, &v5, 16);
                            memcpy(&v40, &v7, 16);
                            memcpy(&v41, &v10, 16);
                            if (v89 == 18)
                            {
                                a0[72] = v41;
                                v81 = *((int128_t *)&v36);
                                v82 = v38;
                                v83 = v39;
                                v84 = v40;
                            }
                            else
                            {
                                v33 = v18;
                                v90 = *((int128_t *)&v14);
                                *((int128_t *)&v32) = *((int128_t *)&v16);
                                v31 = v90;
                                *((int128_t *)&v21) = *((int128_t *)&v36);
                                v23 = v38;
                                v25 = v39;
                                v27 = v40;
                                memcpy(&v29, &v41, 16);
                                v19 = v89;
                                v0.expect(a1, 8);
                                if (v10 != 37)
                                {
                                    v100 = *((long long *)&v0);
                                    v101 = *((int128_t *)&v1);
                                    v102 = (&v7)[8];
                                    v36 = *((int *)&(&v7)[9]);
                                    v37 = v9;
                                    *((unsigned int *)&a0[84]) = v12;
                                    *((int *)&a0[81]) = *((int *)&v11);
                                    v103 = *((int128_t *)&v3);
                                    v104 = *((int128_t *)&v5);
                                    v105 = v36;
                                    *((unsigned int *)&a0[76]) = v37;
                                    *((unsigned int *)&a0[73]) = v105;
                                    *((unsigned long long *)&a0[8]) = v100;
                                    a0[16] = v101;
                                    a0[32] = v103;
                                    a0[48] = v104;
                                    *((char *)&a0[64]) = v7;
                                    *((char *)&a0[72]) = v102;
                                    *((char *)&a0[80]) = v10;
                                    *((unsigned long long *)a0) = 18;
                                    core::ptr::drop_in_place<just::expression::Expression>(&(char)v19);
                                    core::ptr::drop_in_place<just::expression::Expression>(&v58);
                                    return (unsigned long long)core::ptr::drop_in_place<just::condition::Condition>(&v34);
                                }
                                v91 = (int128_t)(&v23)[8];
                                v92 = (int128_t)(&v25)[8];
                                memcpy(&(char)v42, &(char)v19, 16);
                                *((int128_t *)&v44) = (int128_t)(&v21)[8];
                                v46 = v91;
                                v48 = v92;
                                memcpy(&v50, &v27, 16);
                                memcpy(&v52, &v30, 16);
                                *((int128_t *)&v54) = (int128_t)(&v31)[8];
                                memcpy(&v56, &(char)v32, 16);
LABEL_67c2e4:
                                *((int128_t *)&v17) = (int128_t)(&v67)[8];
                                *((int128_t *)&v15) = (int128_t)(&v66)[8];
                                *((int128_t *)&v13) = *((int128_t *)&v65);
                                v8 = v63;
                                v93 = *((int128_t *)&v58);
                                v94 = (int128_t)(&v59)[8];
                                v95 = (int128_t)(&v60)[8];
                                *((int128_t *)&v6) = (int128_t)(&v61)[8];
                                v4 = v95;
                                v2 = v94;
                                v0 = v93;
                                v96 = v0.new();
                                v19 = v96;
                                memcpy(&(char)v17, &v56, 16);
                                *((int128_t *)&v15) = (int128_t)(&v53)[8];
                                memcpy(&(char)v13, &v52, 16);
                                v8 = v50;
                                v97 = *((int128_t *)&v42);
                                v98 = (int128_t)(&v43)[8];
                                memcpy(&(char)v6, &(char)v47, 16);
                                *((int128_t *)&v4) = (int128_t)(&v45)[8];
                                v2 = v98;
                                v0 = v97;
                                v99 = v0.new();
                                *((unsigned long long *)&a0[40]) = v35;
                                a0[24] = v34;
                                *((unsigned long long *)a0) = 12;
                                *((unsigned long long *)&a0[8]) = v96;
                                *((unsigned long long *)&a0[16]) = v99;
                                return v99;
                            }
                        }
LABEL_67c0c3:
                        a0[56] = v84;
                        a0[40] = v83;
                        a0[24] = v82;
                        a0[8] = v81;
                    }
                    else
                    {
                        *((long long *)&a0[72]) = *((long long *)&(&v7)[8]);
                        v106 = (int128_t)v0;
                        v107 = *((int128_t *)&(&v2)[1]);
                        v108 = (int128_t)v4;
                        *((int128_t *)&a0[57]) = (int128_t)v6;
                        a0[41] = v108;
                        a0[25] = v107;
                        a0[9] = v106;
                        *((int *)&a0[81]) = *((int *)&v11);
                        *((unsigned int *)&a0[84]) = v12;
                        *((char *)&a0[8]) = v79;
                        *((char *)&a0[80]) = v10;
                    }
                }
                else
                {
                    *((int128_t *)&a0[72]) = (int128_t)v8;
                    v81 = (int128_t)v0;
                    v82 = *((int128_t *)&v2);
                    v83 = (int128_t)v4;
                    v84 = (int128_t)v6;
                    goto LABEL_67c0c3;
                }
            }
            else
            {
LABEL_67c1c6:
                v109 = *((long long *)&v0);
                v110 = *((int128_t *)&v1);
                v111 = (&v7)[8];
                v19 = *((int *)&(&v7)[9]);
                v20 = v9;
                *((unsigned int *)&a0[84]) = v12;
                *((int *)&a0[81]) = *((int *)&v11);
                v112 = *((int128_t *)&v3);
                v113 = *((int128_t *)&v5);
                v114 = v19;
                *((unsigned int *)&a0[76]) = v20;
                *((unsigned int *)&a0[73]) = v114;
                *((unsigned long long *)&a0[8]) = v109;
                a0[16] = v110;
                a0[32] = v112;
                a0[48] = v113;
                *((char *)&a0[64]) = v7;
                *((char *)&a0[72]) = v111;
                *((char *)&a0[80]) = v10;
            }
            *((unsigned long long *)a0) = 18;
            core::ptr::drop_in_place<just::expression::Expression>(&v58);
            return (unsigned long long)core::ptr::drop_in_place<just::condition::Condition>(&v34);
        }
    }
    else
    {
        v115 = (long long)v0;
        v116 = *((int128_t *)&v1);
        v117 = (char)v8;
        v19 = (int)v8;
        v20 = v9;
        *((unsigned int *)&a0[84]) = v12;
        *((int *)&a0[81]) = *((int *)&v11);
        v118 = *((int128_t *)&v3);
        v119 = *((int128_t *)&v5);
        v120 = v19;
        *((unsigned int *)&a0[76]) = v20;
        *((unsigned int *)&a0[73]) = v120;
        *((unsigned long long *)&a0[8]) = v115;
        a0[16] = v116;
        a0[32] = v118;
        a0[48] = v119;
        *((char *)&a0[64]) = v7;
        *((char *)&a0[72]) = v117;
        *((char *)&a0[80]) = v10;
    }
    *((unsigned long long *)a0) = 18;
    return (unsigned long long)core::ptr::drop_in_place<just::condition::Condition>(&v34);
}
