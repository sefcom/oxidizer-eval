long long just::parser::Parser::parse_value(void* a0, unsigned long long a1[12])
{
    char v0;  // [bp-0x3b9]
    int v1;  // [bp-0x3b8], Other Possible Types: char, unsigned int
    unsigned int v2;  // [bp-0x3b5]
    int v3;  // [bp-0x3a8]
    int v4;  // [bp-0x3a8], Other Possible Types: char
    int v5;  // [bp-0x398]
    int v6;  // [bp-0x398]
    int v7;  // [bp-0x388], Other Possible Types: char
    int v8;  // [bp-0x388]
    int v9;  // [bp-0x378], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x378]
    int v11;  // [bp-0x378], Other Possible Types: unsigned long long
    char v12;  // [bp-0x360], Other Possible Types: unsigned long
    char v13;  // [sp-0x35f]
    char v14;  // [sp-0x35e]
    char v15;  // [bp-0x358]
    char v16;  // [bp-0x350]
    char v17;  // [bp-0x34f]
    char v18;  // [sp-0x34e]
    char v19;  // [bp-0x348]
    char v20;  // [bp-0x340]
    char v21;  // [bp-0x33f]
    char v22;  // [sp-0x33e]
    char v23;  // [bp-0x338]
    char v24;  // [bp-0x330]
    char v25;  // [bp-0x32f]
    char v26;  // [sp-0x32e]
    char v27;  // [bp-0x328], Other Possible Types: unsigned long
    char v28;  // [bp-0x320]
    char v29;  // [bp-0x31f]
    unsigned int v30;  // [bp-0x31c]
    char v31;  // [bp-0x318]
    char v32;  // [sp-0x317]
    char v33;  // [bp-0x314]
    int v34;  // [bp-0x308]
    int v35;  // [bp-0x2f8]
    unsigned long v36;  // [bp-0x2e8], Other Possible Types: unsigned long long
    unsigned long long v37;  // [bp-0x2e0]
    char v38;  // [bp-0x2d0]
    unsigned long long v39;  // [bp-0x2c8]
    unsigned long long v40;  // [bp-0x2c0]
    int v41;  // [bp-0x2b8], Other Possible Types: char, unsigned long
    int v42;  // [sp-0x2a8], Other Possible Types: unsigned long long
    unsigned long v43;  // [bp-0x2a8]
    int v44;  // [sp-0x298]
    int v45;  // [sp-0x288]
    unsigned long long v46;  // [sp-0x278]
    unsigned long v47;  // [bp-0x268]
    unsigned long long v48;  // [bp-0x258]
    unsigned long long v49;  // [bp-0x248]
    char v50;  // [bp-0x238]
    unsigned long long v51;  // [bp-0x228]
    int v52;  // [bp-0x218], Other Possible Types: char
    int v53;  // [bp-0x208]
    int v54;  // [bp-0x1f8]
    int v55;  // [bp-0x1e8]
    unsigned long long v56;  // [bp-0x1d8]
    int v57;  // [bp-0x1c8], Other Possible Types: char
    int v58;  // [bp-0x1b8]
    int v59;  // [bp-0x1a8]
    int v60;  // [bp-0x198]
    unsigned long long v61;  // [bp-0x188]
    char v62;  // [bp-0x178]
    int v63;  // [bp-0x168]
    int v64;  // [bp-0x158]
    int v65;  // [bp-0x148]
    unsigned long long v66;  // [bp-0x138]
    unsigned long v67;  // [bp-0x130]
    char v68;  // [bp-0x128]
    int v69;  // [bp-0x118]
    int v70;  // [bp-0x108]
    int v71;  // [bp-0xf8]
    char v72;  // [bp-0xe8]
    int v73;  // [bp-0xd8]
    int v74;  // [bp-0xc8]
    unsigned long long v75;  // [bp-0xb8]
    unsigned long v76;  // [bp-0xb0]
    char v77;  // [bp-0xa8]
    int v78;  // [bp-0x98]
    int v79;  // [bp-0x88]
    int v80;  // [bp-0x78]
    char v81;  // [bp-0x68]
    int v82;  // [bp-0x58]
    int v83;  // [bp-0x48]
    unsigned long long v84;  // [bp-0x38]
    unsigned long v86;  // rax
    char v87;  // r12b
    unsigned long long v88;  // rbp
    unsigned long v89;  // rax
    unsigned long long v90;  // r12
    unsigned long long v91;  // rdx
    unsigned long long v92;  // r15
    int v93;  // xmm0
    unsigned int v94;  // esi
    char *v95;  // rdi
    int v96;  // xmm0
    unsigned long v97;  // rcx
    int v98;  // xmm0
    int v99;  // xmm1
    int v100;  // xmm2
    unsigned int v101;  // edi
    unsigned long v102;  // rcx
    int v103;  // xmm0
    int v104;  // xmm1
    int v105;  // xmm2
    unsigned int v106;  // edi
    unsigned long long v107;  // rdx
    int v108;  // xmm0
    unsigned int v109;  // ecx
    int v110;  // xmm0
    int v111;  // xmm1
    int v112;  // xmm2
    unsigned int v113;  // esi
    char *v114;  // rdi
    int v115;  // xmm0
    unsigned long v116;  // rax
    unsigned long v117;  // rcx
    int v118;  // xmm0
    int v119;  // xmm1
    int v120;  // xmm2
    unsigned int v121;  // edi
    unsigned long v122;  // rcx
    int v123;  // xmm0
    int v124;  // xmm1
    int v125;  // xmm2
    unsigned int v126;  // edi
    int v127;  // xmm1
    int v128;  // xmm0
    int v129;  // xmm0

    if (a1.next_is(33) || (char)a1.next_is_shell_expanded_string())
    {
        (char)v12.parse_string_literal(a1);
        v86 = v31;
        if ((char)v86 == 37)
        {
            v128 = *((int128_t *)&v12);
            memcpy(&v6, &v20, 16);
            memcpy(&v4, &v16, 16);
            v1 = v128;
            a0[40] = v6;
            a0[24] = v4;
            a0[8] = v128;
            *((unsigned long long *)a0) = 16;
            return v86;
        }
        goto LABEL_67d469;
    }
    else
    {
        if (a1.next_is(3))
        {
            v12.next(a1);
            v86 = v31;
            memcpy(&v1, &v12, 16);
            memcpy(&v4, &v16, 16);
            memcpy(&v6, &v20, 16);
            memcpy(&v7, &v24, 16);
            v9 = *((long long *)&v28);
            if ((char)v86 == 37)
            {
                memcpy(&v62, &v1, 16);
                v63 = v3;
                v64 = v5;
                v65 = v8;
                v66 = v10;
                memcpy(&v41, &v1, 16);
                v42 = v63;
                v44 = v64;
                v45 = v65;
                v46 = v66;
                v12.from_string_or_backtick(&v62);
                v87 = v12;
                v86 = v31;
                if ((char)v86 == 37)
                {
                    v88 = v41.lexeme();
                    v41.lexeme();
                    v0 = v87;
                    v89 = v87;
                    v90 = v89 * 2 + 1;
                    v92 = (v89 - 1 & 4294967295 | 18446744073709551613) + v91;
                    v49 = v88;
                    v37 = v90.get(v92, v49, v91);
                    if (!v37)
                        core::str::slice_error_fail(v49, v91, v90, v92, &g_8308c8); /* do not return */
                    v12.advance(a1);
                    v86 = v31;
                    memcpy(&v1, &v12, 16);
                    memcpy(&v4, &v16, 16);
                    memcpy(&v6, &v20, 16);
                    memcpy(&v7, &v24, 16);
                    v9 = *((long long *)&v28);
                    if ((char)v86 == 37)
                    {
                        memcpy(&v57, &v1, 16);
                        v58 = v3;
                        v59 = v5;
                        v60 = v8;
                        v61 = v11;
                        if ((v0 & 1))
                            just::unindent::unindent(&v38, v37, v91);
                        else
                            v38.to_vec(v37, v91);
                        if (!(char)core::slice::<impl [T]>::starts_with(v39, v40, "#!internal error: entered unreachable code: Iterator was fused, but returned Some after Nonesrc/list.rssrc/loader.rs", 2))
                        {
                            *((unsigned long long *)&a0[24]) = v40;
                            *((int128_t *)&a0[8]) = *((int128_t *)&v38);
                            a0[32] = v57;
                            a0[48] = v58;
                            a0[64] = v59;
                            a0[80] = v60;
                            *((unsigned long long *)&a0[96]) = v61;
                            *((unsigned long long *)a0) = 9;
                            return v61;
                        }
                        v12 = 9223372036854775830;
                        v1.error(&v41, &v12);
                        a0[72] = v11;
                        v93 = *((int128_t *)&v1);
                        a0[56] = v8;
                        a0[40] = v5;
                        a0[24] = v3;
                        a0[8] = v93;
                        *((unsigned long long *)a0) = 18;
                        return core::ptr::drop_in_place<alloc::string::String>(&v38);
                    }
                }
                else
                {
                    *((long long *)&a0[72]) = *((long long *)&v28);
                    *((int128_t *)&a0[58]) = *((int128_t *)&v26);
                    *((int128_t *)&a0[42]) = *((int128_t *)&v22);
                    *((int128_t *)&a0[26]) = *((int128_t *)&v18);
                    *((int128_t *)&a0[10]) = *((int128_t *)&v14);
                    v94 = *((int *)&v33);
                    *((int *)&a0[81]) = *((int *)&v32);
                    *((unsigned int *)&a0[84]) = v94;
                    *((char *)&a0[8]) = v87;
                    *((char *)&a0[9]) = v13;
                    goto LABEL_67d4e5;
                }
            }
LABEL_67d501:
            v109 = *((int *)&v32);
            *((int *)&a0[84]) = *((int *)&v33);
LABEL_67d4b5:
            *((unsigned int *)&a0[81]) = v109;
            *((unsigned long long *)&a0[72]) = v10;
            v129 = (int128_t)v1;
            a0[56] = v8;
            a0[40] = v5;
            a0[24] = v3;
            a0[8] = v129;
LABEL_67d4e5:
            *((char *)&a0[80]) = v86;
        }
        else if (a1.next_is(24))
        {
            (char)v12.accepted_keyword(a1, 3);
            v86 = (char)v12;
            if (v31 == 37)
            {
                v95 = &(char)v12;
                if (((char)v86 & 1))
                {
                    v95.expect(a1, 28);
                    v86 = v31;
                    if ((char)v86 != 37)
                        goto LABEL_67d1c6;
                    (char)v12.parse_condition(a1);
                    v86 = v31;
                    if ((char)v86 == 37)
                    {
                        memcpy(&v41, &(char)v12, 16);
                        v42 = *((long long *)&v16);
                        (char)v12.expect(a1, 15);
                        if (v31 == 37)
                        {
                            (char)v12.parse_expression(a1);
                            memcpy(&v1, &v15, 16);
                            memcpy(&v4, &v19, 16);
                            memcpy(&(char)v5, &v23, 16);
                            memcpy(&v7, &v27, 16);
                            memcpy(&(char)v10, &v31, 16);
                            if (v12 == 18)
                            {
                                a0[72] = v9;
                                v96 = *((int128_t *)&v1);
                                a0[56] = v7;
                                a0[40] = v6;
                                a0[24] = v4;
                                a0[8] = v96;
LABEL_67d844:
                                *((unsigned long long *)a0) = 18;
                            }
                            else
                            {
                                v75 = v36;
                                v74 = v35;
                                v73 = v34;
                                v67 = v12;
                                memcpy(&v68, &v1, 16);
                                v69 = v4;
                                v70 = v6;
                                v71 = v7;
                                memcpy(&v72, &(char)v10, 16);
                                *((double *)&v47) = v67.new();
                                (char)v12.expect(a1, 29);
                                if (v31 == 37)
                                {
                                    *((unsigned long *)&a0[32]) = v43;
                                    a0[16] = v41;
                                    *((unsigned long long *)a0) = 8;
                                    *((unsigned long *)&a0[8]) = v47;
                                    return v43;
                                }
                                v97 = v12;
                                v98 = *((int128_t *)&v15);
                                v1 = *((int *)&v29);
                                v2 = v30;
                                *((int *)&a0[84]) = *((int *)&v33);
                                *((int *)&a0[81]) = *((int *)&v32);
                                v99 = *((int128_t *)&v19);
                                v100 = *((int128_t *)&v23);
                                v101 = v1;
                                *((unsigned int *)&a0[76]) = v2;
                                *((unsigned int *)&a0[73]) = v101;
                                *((unsigned long *)&a0[8]) = v97;
                                a0[16] = v98;
                                a0[32] = v99;
                                a0[48] = v100;
                                *((unsigned long *)&a0[64]) = v27;
                                *((char *)&a0[72]) = v28;
                                *((char *)&a0[80]) = v31;
                                *((unsigned long long *)a0) = 18;
                                core::ptr::drop_in_place<alloc::boxed::Box<just::expression::Expression>>(&v47);
                            }
                            return (unsigned long long)core::ptr::drop_in_place<just::condition::Condition>(&v41);
                        }
                        v102 = v12;
                        v103 = *((int128_t *)&v15);
                        v1 = *((int *)&v29);
                        v2 = v30;
                        *((int *)&a0[84]) = *((int *)&v33);
                        *((int *)&a0[81]) = *((int *)&v32);
                        v104 = *((int128_t *)&v19);
                        v105 = *((int128_t *)&v23);
                        v106 = v1;
                        *((unsigned int *)&a0[76]) = v2;
                        *((unsigned int *)&a0[73]) = v106;
                        *((unsigned long *)&a0[8]) = v102;
                        a0[16] = v103;
                        a0[32] = v104;
                        a0[48] = v105;
                        *((unsigned long *)&a0[64]) = v27;
                        *((char *)&a0[72]) = v28;
                        *((char *)&a0[80]) = v31;
                        goto LABEL_67d844;
                    }
LABEL_67d469:
                    v9 = *((long long *)&v28);
                    memcpy(&v8, &v24, 16);
                    memcpy(&v6, &v20, 16);
                    memcpy(&v4, &v16, 16);
                    *((int128_t *)&v1) = *((int128_t *)&v12);
                    *((int *)&a0[84]) = *((int *)&v33);
                    v109 = *((int *)&v32);
                    goto LABEL_67d4b5;
                }
                else
                {
                    v95.parse_name(a1);
                    v86 = v31;
                    memcpy(&(char)v1, &(char)v12, 16);
                    memcpy(&v4, &v16, 16);
                    memcpy(&v6, &v20, 16);
                    memcpy(&v7, &v24, 16);
                    v11 = *((long long *)&v28);
                    if ((char)v86 != 37)
                        goto LABEL_67d501;
                    memcpy(&v52, &v1, 16);
                    v53 = v3;
                    v54 = v5;
                    v55 = v8;
                    v56 = v9;
                    memcpy(&v41, &v1, 16);
                    v42 = v53;
                    v44 = v54;
                    v45 = v55;
                    v46 = v56;
                    if (!a1.next_is(28))
                    {
                        *((unsigned long long *)&a0[72]) = v56;
                        a0[56] = v55;
                        a0[40] = v54;
                        a0[24] = v53;
                        a0[8] = v52;
                        *((unsigned long long *)a0) = 17;
                        return v56;
                    }
                    (char)v12.parse_sequence(a1);
                    v86 = v31;
                    if ((char)v86 != 37)
                        goto LABEL_67d469;
                    memcpy(&v50, &v12, 16);
                    v51 = *((long long *)&v16);
                    if ((char)v41.lexeme().equal(v107, "whichwithout_extensioncacheconfiglocal configlocal dataexecutableWorking directory is not valid unicode: ", 5))
                        a1[1 + 1].insert(4);
                    v48 = v51;
                    memcpy(&(char)v47, &v50, 16);
                    (char)v12.resolve(&v52, &(char)v47);
                    v86 = v12;
                    memcpy(&(char)v1, &v15, 16);
                    memcpy(&v3, &v19, 16);
                    memcpy(&v6, &v23, 16);
                    memcpy(&v7, &(char)v27, 16);
                    memcpy(&v11, &v31, 16);
                    if (v86 != 7)
                    {
                        *((unsigned long *)&a0[120]) = v36;
                        a0[104] = v35;
                        a0[88] = v34;
                        a0[72] = v9;
                        v108 = *((int128_t *)&v1);
                        a0[56] = v8;
                        a0[40] = v5;
                        a0[24] = v3;
                        a0[8] = v108;
                        *((unsigned long *)a0) = v86;
                        return v86;
                    }
LABEL_67d085:
                    a0[72] = v9;
                    v115 = *((int128_t *)&v1);
                    a0[56] = v8;
                    a0[40] = v5;
                    a0[24] = v3;
                    a0[8] = v115;
                }
            }
            else
            {
                *((long long *)&a0[72]) = *((long long *)&v28);
                v110 = *((int128_t *)&v13);
                v111 = *((int128_t *)&v17);
                v112 = *((int128_t *)&v21);
                *((int128_t *)&a0[57]) = *((int128_t *)&v25);
                a0[41] = v112;
                a0[25] = v111;
                a0[9] = v110;
                v113 = *((int *)&v33);
                *((int *)&a0[81]) = *((int *)&v32);
                *((unsigned int *)&a0[84]) = v113;
                *((char *)&a0[8]) = v86;
                *((char *)&a0[80]) = v31;
            }
        }
        else
        {
            v114 = &(char)v12;
            if (a1.next_is(28))
            {
                v114.presume(a1, 28);
                v86 = v31;
                if ((char)v86 == 37)
                {
                    (char)v12.parse_expression(a1);
                    v86 = v12;
                    memcpy(&(char)v1, &v15, 16);
                    memcpy(&v4, &v19, 16);
                    memcpy(&(char)v5, &v23, 16);
                    memcpy(&v7, &v27, 16);
                    memcpy(&(char)v9, &v31, 16);
                    if (v86 != 18)
                    {
                        v84 = v36;
                        v83 = v35;
                        v82 = v34;
                        v76 = v86;
                        memcpy(&v77, &v1, 16);
                        v78 = v3;
                        v79 = v6;
                        v80 = v8;
                        memcpy(&v81, &(char)v9, 16);
                        *((double *)&v41) = v76.new();
                        (char)v12.expect(a1, 29);
                        v116 = v31;
                        if ((char)v116 != 37)
                        {
                            v117 = v12;
                            v118 = *((int128_t *)&v15);
                            v1 = *((int *)&v29);
                            v2 = v30;
                            *((int *)&a0[84]) = *((int *)&v33);
                            *((int *)&a0[81]) = *((int *)&v32);
                            v119 = *((int128_t *)&v19);
                            v120 = *((int128_t *)&v23);
                            v121 = v1;
                            *((unsigned int *)&a0[76]) = v2;
                            *((unsigned int *)&a0[73]) = v121;
                            *((unsigned long *)&a0[8]) = v117;
                            a0[16] = v118;
                            a0[32] = v119;
                            a0[48] = v120;
                            *((unsigned long *)&a0[64]) = v27;
                            *((char *)&a0[72]) = v28;
                            *((char *)&a0[80]) = v116;
                            *((unsigned long long *)a0) = 18;
                            return (unsigned long long)core::ptr::drop_in_place<alloc::boxed::Box<just::expression::Expression>>(&v41);
                        }
                        *((unsigned long long *)a0) = 13;
                        *((unsigned long *)&a0[8]) = v41;
                        return v116;
                    }
                    goto LABEL_67d085;
                }
                else
                {
LABEL_67d1c6:
                    v122 = v12;
                    v123 = *((int128_t *)&v15);
                    v1 = *((int *)&v29);
                    v2 = v30;
                    *((int *)&a0[84]) = *((int *)&v33);
                    *((int *)&a0[81]) = *((int *)&v32);
                    v124 = *((int128_t *)&v19);
                    v125 = *((int128_t *)&v23);
                    v126 = v1;
                    *((unsigned int *)&a0[76]) = v2;
                    *((unsigned int *)&a0[73]) = v126;
                    *((unsigned long *)&a0[8]) = v122;
                    a0[16] = v123;
                    a0[32] = v124;
                    a0[48] = v125;
                    *((unsigned long *)&a0[64]) = v27;
                    *((char *)&a0[72]) = v28;
                    goto LABEL_67d4e5;
                }
            }
            else
            {
                v86 = v114.unexpected_token(a1);
                memcpy(&v11, &v31, 16);
                v127 = *((int128_t *)&v15);
                memcpy(&v7, &v27, 16);
                memcpy(&v6, &v23, 16);
                memcpy(&v4, &v19, 16);
                v1 = v127;
                a0[72] = v9;
                a0[56] = v7;
                a0[40] = v6;
                a0[24] = v4;
                a0[8] = v127;
            }
        }
        *((unsigned long long *)a0) = 18;
        return v86;
    }
}
