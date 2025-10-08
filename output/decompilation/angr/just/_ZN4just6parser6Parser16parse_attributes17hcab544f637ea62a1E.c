long long just::parser::Parser::parse_attributes(struct_0 *a0, unsigned long long a1)
{
    void* v0;  // [bp-0x300]
    char v1;  // [bp-0x2f8], Other Possible Types: unsigned long long
    int v2;  // [bp-0x2f8]
    char v3;  // [bp-0x2e8], Other Possible Types: unsigned long
    int v4;  // [bp-0x2e8]
    char v5;  // [bp-0x2d8]
    int v6;  // [bp-0x2d8]
    int v7;  // [bp-0x2c8], Other Possible Types: char
    int v8;  // [bp-0x2c7]
    unsigned long long v9;  // [bp-0x2c0]
    char v10;  // [bp-0x2b8]
    char v11;  // [bp-0x2b7], Other Possible Types: unsigned int
    unsigned int v12;  // [bp-0x2b4]
    char v13;  // [bp-0x2b0]
    char v14;  // [sp-0x2af]
    char v15;  // [bp-0x2ac]
    unsigned int v16;  // [bp-0x290]
    unsigned int v17;  // [bp-0x28d]
    int v18;  // [bp-0x288], Other Possible Types: unsigned int
    unsigned int v19;  // [bp-0x285]
    int v20;  // [bp-0x278]
    int v21;  // [bp-0x278]
    int v22;  // [bp-0x268]
    int v23;  // [bp-0x268]
    unsigned long long v25;  // [bp-0x258]
    int v26;  // [bp-0x250]
    unsigned long long v27;  // [sp-0x248]
    void* v28;  // [bp-0x230]
    unsigned long long v29;  // [bp-0x228]
    void* v30;  // [bp-0x220]
    void* v31;  // [bp-0x218]
    unsigned long long v32;  // [bp-0x210]
    void* v33;  // [bp-0x208]
    void* v34;  // [bp-0x200]
    unsigned long long v35;  // [bp-0x1f8]
    void* v36;  // [bp-0x1f0]
    int v37;  // [bp-0x1e8]
    int v38;  // [sp-0x1d8]
    int v39;  // [bp-0x1d8]
    int v40;  // [bp-0x1c8], Other Possible Types: char
    int v41;  // [bp-0x1b8], Other Possible Types: char
    unsigned long long v42;  // [bp-0x1a8]
    int v43;  // [bp-0x198], Other Possible Types: char
    int v44;  // [bp-0x188], Other Possible Types: char
    int v45;  // [bp-0x178], Other Possible Types: char
    int v46;  // [bp-0x168], Other Possible Types: char
    int v47;  // [bp-0x158]
    int v49;  // [bp-0x148]
    int v50;  // [bp-0x138]
    unsigned long long v51;  // [bp-0x128]
    int v52;  // [bp-0x120]
    int v53;  // [bp-0x108]
    int v54;  // [bp-0xf8]
    int v55;  // [bp-0xe8]
    int v56;  // [bp-0xd8]
    unsigned long long v57;  // [bp-0xc8]
    int v58;  // [bp-0xb8]
    int v59;  // [bp-0xa8], Other Possible Types: char
    int v60;  // [bp-0x98]
    int v61;  // [bp-0x88]
    int v62;  // [bp-0x78]
    char v66;  // [bp-0x38]
    char v70;  // cl
    char v71;  // al
    int v72;  // xmm1
    int v73;  // xmm2
    unsigned long long v74;  // r13
    char v75;  // al
    char v76;  // cl
    char v77;  // al
    unsigned long long v78;  // rax
    unsigned long long *v79;  // rax
    char v81;  // al
    struct_0 *v82;  // rsi
    int v83;  // xmm0
    int v84;  // xmm1
    int v85;  // xmm2
    unsigned int v86;  // edx
    int v87;  // xmm0
    int v88;  // xmm1
    int v89;  // xmm2
    unsigned int v90;  // esi
    int v91;  // xmm0
    unsigned int v92;  // ecx
    int v93;  // xmm0
    unsigned int v94;  // ecx
    unsigned long v95;  // rbx
    unsigned long v96;  // rdx
    int v97;  // xmm0
    struct_0 *v98;  // rdi
    int v99;  // xmm0
    int v100;  // xmm1
    int v101;  // xmm2
    unsigned int v102;  // esi
    unsigned int v103;  // edx
    unsigned int v104;  // edx
    unsigned long long v107;  // rcx
    int v108;  // xmm0
    int v109;  // xmm1
    int v110;  // xmm2
    unsigned int v111;  // edi
    unsigned long long v112;  // rcx
    int v113;  // xmm0
    int v114;  // xmm1
    int v115;  // xmm2
    unsigned int v116;  // edi
    unsigned long long v118;  // [bp-0x2f0]
    unsigned long v120;  // [bp-0x2e0]

    v28 = 0;
    v30 = 0;
    v31 = 0;
    v33 = 0;
    v66 = 37;
    while (true)
    {
        (char)v2.accept(a1, 9);
        v70 = v13;
        memcpy(&v43, &v1, 16);
        memcpy(&v44, &v3, 16);
        memcpy(&v45, &v5, 16);
        memcpy(&v46, &v7, 16);
        v16 = *((int *)&v11);
        v17 = v12;
        if (v13 == 37)
        {
            if (v10 == 37)
            {
                *((char *)&v0[72]) = 37;
                *((unsigned long long *)v0) = 0;
                core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<just::attribute::AttributeDiscriminant,usize>>(&v31);
                break;
            }
            v7 = v46;
            v6 = v45;
            v4 = v44;
            v2 = v43;
            v12 = v17;
            v11 = v16;
            v62.get_or_insert_with(&(char)v2);
            do
            {
                (char)v2.parse_name(a1);
                v71 = v13;
                v72 = (int128_t)v4;
                v73 = (int128_t)v6;
                *((int128_t *)&v18) = (int128_t)v2;
                v20 = v72;
                v22 = v73;
                v74 = (long long)v7;
                memcpy(&v37, &v9, 16);
                if (v13 != 37)
                {
                    v92 = *((int *)&v14);
                    v82 = a0;
                    *((int *)&v0[84]) = *((int *)&v15);
                    *((unsigned int *)&v0[81]) = v92;
                    v93 = (int128_t)v18;
                    v0[40] = v22;
                    v0[24] = v20;
                    v0[8] = v93;
                    v0[64] = v37;
                    *((unsigned long long *)&v0[56]) = v51;
                    goto LABEL_6824f3;
                }
                memcpy(&v59, &v18, 16);
                v60 = v20;
                v61 = v22;
                v58 = v37;
                v47 = v59;
                v49 = v60;
                v50 = v61;
                v51 = v74;
                v52 = v58;
                v34 = 0;
                v35 = 8;
                v36 = 0;
                (char)v2.accepted(a1, 12);
                v75 = (char)v2;
                v76 = v13;
                if (v13 != 37)
                {
LABEL_68235d:
                    *((long long *)&v0[72]) = *((long long *)&v10);
                    v87 = (int128_t)(&v2)[1];
                    v88 = (int128_t)(&v4)[1];
                    v89 = (int128_t)(&v6)[1];
                    *((int128_t *)&v0[57]) = (int128_t)v8;
                    v0[41] = v89;
                    v0[25] = v88;
                    v0[9] = v87;
                    v90 = *((int *)&v15);
                    *((int *)&v0[81]) = *((int *)&v14);
                    *((unsigned int *)&v0[84]) = v90;
                    *((char *)&v0[8]) = v75;
                    *((char *)&v0[80]) = v76;
                    *((unsigned long long *)v0) = 1;
                    goto LABEL_682449;
                }
                if ((v75 & 1))
                {
                    (char)v2.parse_string_literal(a1);
                    v77 = v13;
                    if (v13 == 37)
                    {
                        memcpy(&v22, &(char)v6, 16);
                        memcpy(&v20, &v3, 16);
                        *((int128_t *)&v18) = (int128_t)v2;
                        v34.push(&(char)v18, &g_8309e8);
                        goto LABEL_682140;
                    }
                }
                else
                {
                    (char)v2.accepted(a1, 28);
                    v75 = (char)v2;
                    v76 = v13;
                    if (v13 != 37)
                        goto LABEL_68235d;
                    if ((v75 & 1))
                    {
                        while (true)
                        {
                            (char)v2.parse_string_literal(a1);
                            v77 = v13;
                            if (v13 != 37)
                                break;
                            memcpy(&v22, &v5, 16);
                            memcpy(&v20, &v3, 16);
                            *((int128_t *)&v18) = (int128_t)v2;
                            v34.push(&(char)v18, &g_8309d0);
                            (char)v2.accepted(a1, 15);
                            v75 = (char)v2;
                            v76 = v13;
                            if (v13 != 37)
                                goto LABEL_68235d;
                            if (!(v75 & 1))
                            {
                                (char)v2.expect(a1, 29);
                                if (v13 != 37)
                                {
                                    v107 = (long long)v2;
                                    v108 = (int128_t)(&v2)[8];
                                    v18 = v11;
                                    v19 = v12;
                                    *((int *)&v0[84]) = *((int *)&v15);
                                    *((int *)&v0[81]) = *((int *)&v14);
                                    v109 = (int128_t)(&v4)[8];
                                    v110 = (int128_t)(&v6)[8];
                                    v111 = v18;
                                    *((unsigned int *)&v0[76]) = v19;
                                    *((unsigned int *)&v0[73]) = v111;
                                    *((unsigned long long *)&v0[8]) = v107;
                                    v0[16] = v108;
                                    v0[32] = v109;
                                    v0[48] = v110;
                                    *((unsigned long long *)&v0[64]) = v9;
                                    *((char *)&v0[72]) = v10;
                                    *((char *)&v0[80]) = v13;
                                    *((unsigned long long *)v0) = 1;
                                    goto LABEL_682449;
                                }
                                goto LABEL_682140;
                            }
                        }
                        v27 = *((long long *)&v10);
                        memcpy(&v25, &(char)v7, 16);
                        memcpy(&v22, &v5, 16);
                        memcpy(&v20, &v3, 16);
                        *((int128_t *)&v18) = (int128_t)v2;
                        *((int *)&v0[84]) = *((int *)&v15);
                        *((int *)&v0[81]) = *((int *)&v14);
                        *((unsigned long long *)&v0[72]) = v27;
                        v91 = (int128_t)v18;
                        *((int128_t *)&v0[56]) = *((int128_t *)&v25);
                        v0[40] = v23;
                        v0[24] = v21;
                        v0[8] = v91;
                        *((char *)&v0[80]) = v77;
                        *((unsigned long long *)v0) = 1;
LABEL_682449:
                        core::ptr::drop_in_place<alloc::vec::Vec<just::string_literal::StringLiteral>>(&v34);
                        goto LABEL_682648;
                    }
                    else
                    {
LABEL_682140:
                        v22 = v61;
                        v20 = v60;
                        v18 = v59;
                        v25 = v51;
                        v26 = v58;
                        (char)v2.new(&(char)v18, &v34);
                        v71 = v13;
                        memcpy(&v37, &(char)v2, 16);
                        memcpy(&v38, &v3, 16);
                        memcpy(&v40, &v5, 16);
                        memcpy(&v41, &v7, 16);
                        v42 = *((long long *)&v10);
                        if (v13 != 37)
                        {
                            v94 = *((int *)&v14);
                            v82 = a0;
                            *((int *)&v0[84]) = *((int *)&v15);
                            *((unsigned int *)&v0[81]) = v94;
                            *((unsigned long long *)&v0[72]) = v42;
                            v0[56] = v41;
                            v0[40] = v40;
                            v0[24] = v39;
                            v0[8] = v37;
LABEL_6824f3:
                            v82->field_50 = v71;
                            v82->field_0 = 1;
                            goto LABEL_682648;
                        }
                        v53 = v37;
                        v54 = v39;
                        v55 = v40;
                        v56 = v41;
                        v57 = v42;
                        v78 = v28.get(v29, &v53);
                        v79 = v78.or_else((long long)v53, v31, v32);
                        if (v79)
                        {
                            v95 = *(v79);
                            v118 = (char)v47.lexeme();
                            v3 = v96;
                            v120 = v95;
                            v1 = 9223372036854775834;
                            (char)v18.error(&(char)v47, &(char)v2);
                            *((int128_t *)&v0[72]) = *((int128_t *)&v27);
                            v97 = (int128_t)v18;
                            *((int128_t *)&v0[56]) = *((int128_t *)&v25);
                            v0[40] = v22;
                            v0[24] = v20;
                            v0[8] = v97;
                            *((unsigned long long *)v0) = 1;
                            core::ptr::drop_in_place<just::attribute::Attribute>(&v53);
                            goto LABEL_682648;
                        }
                        v31.insert((unsigned int)(long long)v53.discriminant(), v51);
                        v28.insert(&v53, v51);
                        (char)v2.accepted(a1, 15);
                        v81 = (char)v2;
                        v70 = v13;
                        if (v13 != 37)
                        {
                            v98 = a0;
                            *((long long *)&v0[72]) = *((long long *)&v10);
                            v99 = (int128_t)(&v2)[1];
                            v100 = (int128_t)(&v4)[1];
                            v101 = (int128_t)(&v6)[1];
                            *((int128_t *)&v0[57]) = (int128_t)v8;
                            v0[41] = v101;
                            v0[25] = v100;
                            v0[9] = v99;
                            v102 = *((int *)&v15);
                            *((int *)&v0[81]) = *((int *)&v14);
                            *((unsigned int *)&v0[84]) = v102;
                            *((char *)&v0[8]) = v81;
                            goto LABEL_68263e;
                        }
                    }
                }
            } while ((v81 & 1));
            (char)v2.expect(a1, 10);
            if (v13 == 37)
            {
                (char)v2.expect_eol(a1);
                v71 = v13;
                v38 = v39;
                if (v13 != 37)
                {
                    v82 = a0;
                    *((long long *)&v0[72]) = *((long long *)&v10);
                    v83 = (int128_t)v2;
                    v84 = (int128_t)v4;
                    v85 = (int128_t)v6;
                    *((int128_t *)&v0[56]) = (int128_t)v7;
                    v0[40] = v85;
                    v0[24] = v84;
                    v0[8] = v83;
                    v86 = *((int *)&v15);
                    *((int *)&v0[81]) = *((int *)&v14);
                    *((unsigned int *)&v0[84]) = v86;
                    goto LABEL_6824f3;
                }
            }
            else
            {
                v112 = (long long)v2;
                v113 = (int128_t)(&v2)[8];
                v18 = v11;
                v19 = v12;
                *((int *)&v0[84]) = *((int *)&v15);
                *((int *)&v0[81]) = *((int *)&v14);
                v114 = (int128_t)(&v4)[8];
                v115 = (int128_t)(&v6)[8];
                v116 = v18;
                *((unsigned int *)&v0[76]) = v19;
                *((unsigned int *)&v0[73]) = v116;
                *((unsigned long long *)&v0[8]) = v112;
                v0[16] = v113;
                v0[32] = v114;
                v0[48] = v115;
                *((unsigned long long *)&v0[64]) = v9;
                *((char *)&v0[72]) = v10;
                *((char *)&v0[80]) = v13;
                *((unsigned long long *)v0) = 1;
LABEL_682648:
                core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<just::attribute::AttributeDiscriminant,usize>>(&v31);
                break;
            }
        }
        else
        {
            v103 = *((int *)&v14);
            v98 = a0;
            *((int *)&v0[84]) = *((int *)&v15);
            *((unsigned int *)&v0[81]) = v103;
            v0[56] = v46;
            v0[40] = v45;
            v0[24] = v44;
            v0[8] = v43;
            v104 = v16;
            *((unsigned int *)&v0[76]) = v17;
            *((unsigned int *)&v0[73]) = v104;
            *((char *)&v0[72]) = v10;
LABEL_68263e:
            v98->field_50 = v70;
            v98->field_0 = 1;
            goto LABEL_682648;
        }
    }
    return core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<just::attribute::Attribute,usize>>(&v28);
}
