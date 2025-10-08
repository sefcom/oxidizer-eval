long long just::parser::Parser::parse_set(void* a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x368], Other Possible Types: char
    char v1;  // [bp-0x367], Other Possible Types: unsigned long long
    unsigned long v2;  // [bp-0x366]
    unsigned long v3;  // [bp-0x360]
    unsigned int v4;  // [bp-0x35f]
    unsigned int v5;  // [bp-0x35e]
    unsigned short v6;  // [bp-0x35b]
    unsigned short v7;  // [bp-0x35a]
    char v8;  // [bp-0x359]
    int v9;  // [bp-0x358], Other Possible Types: char, unsigned long long
    char v10;  // [bp-0x357]
    char v11;  // [bp-0x350]
    int v12;  // [bp-0x348], Other Possible Types: char
    char v13;  // [bp-0x347]
    char v14;  // [bp-0x340]
    int v15;  // [bp-0x338], Other Possible Types: char, unsigned long long
    char v16;  // [bp-0x337]
    unsigned long v17;  // [bp-0x330], Other Possible Types: unsigned long long
    char v18;  // [bp-0x328], Other Possible Types: unsigned long long
    unsigned int v19;  // [bp-0x324]
    char v20;  // [bp-0x320], Other Possible Types: unsigned long long
    char v21;  // [bp-0x31f]
    char v22;  // [bp-0x31c]
    char v23;  // [bp-0x318]
    int v24;  // [bp-0x308]
    int v25;  // [bp-0x2f8]
    int v26;  // [bp-0x2e8]
    unsigned long long v27;  // [bp-0x2d8]
    int v28;  // [bp-0x2c8], Other Possible Types: char, unsigned int
    unsigned int v29;  // [bp-0x2c5]
    char v30;  // [bp-0x2c1]
    int v31;  // [bp-0x2b8], Other Possible Types: char
    int v32;  // [bp-0x2b1]
    int v33;  // [bp-0x2a8], Other Possible Types: char
    int v34;  // [bp-0x2a1]
    int v35;  // [bp-0x298], Other Possible Types: char
    int v36;  // [bp-0x291]
    char v37;  // [bp-0x288], Other Possible Types: unsigned long long
    unsigned long long v38;  // [bp-0x281]
    char v39;  // [bp-0x270]
    int v40;  // [bp-0x26f]
    unsigned int v41;  // [bp-0x267]
    unsigned short v42;  // [bp-0x263]
    char v43;  // [bp-0x261]
    char v44;  // [bp-0x260]
    int v45;  // [bp-0x25f], Other Possible Types: char
    char v46;  // [bp-0x250]
    int v47;  // [bp-0x24f]
    unsigned long long v48;  // [bp-0x240]
    char v49;  // [bp-0x23f]
    unsigned long long v50;  // [bp-0x238]
    unsigned long long v51;  // [bp-0x230]
    unsigned long long v52;  // [bp-0x228]
    char v53;  // [bp-0x21f]
    int v54;  // [bp-0x218]
    int v55;  // [bp-0x20f]
    int v56;  // [bp-0x208]
    int v57;  // [bp-0x1ff]
    int v58;  // [bp-0x1f8]
    unsigned long long v59;  // [bp-0x1f0]
    int v60;  // [bp-0x1e8], Other Possible Types: char
    int v61;  // [bp-0x1d8], Other Possible Types: char
    int v62;  // [bp-0x1c8], Other Possible Types: char
    int v63;  // [bp-0x1b8], Other Possible Types: char
    unsigned long long v64;  // [bp-0x1a8]
    int v65;  // [bp-0x198], Other Possible Types: char
    int v66;  // [bp-0x188], Other Possible Types: char
    int v67;  // [bp-0x178], Other Possible Types: char
    int v68;  // [bp-0x168], Other Possible Types: char
    unsigned long long v69;  // [bp-0x158]
    int v70;  // [bp-0x148], Other Possible Types: char
    int v71;  // [bp-0x138], Other Possible Types: char
    int v72;  // [bp-0x128], Other Possible Types: char
    int v73;  // [bp-0x118], Other Possible Types: char
    unsigned long long v74;  // [bp-0x108]
    char v75;  // [bp-0x100]
    int v76;  // [bp-0xf0]
    int v77;  // [bp-0xe0]
    int v78;  // [bp-0xd0]
    unsigned long long v79;  // [bp-0xc0]
    char v80;  // [sp-0xb8]
    char v81;  // [bp-0xb7]
    unsigned long v82;  // [bp-0xb6]
    unsigned int v83;  // [bp-0xae]
    unsigned short v84;  // [bp-0xaa]
    int v85;  // [bp-0xa8]
    int v86;  // [bp-0x98]
    int v87;  // [bp-0x88]
    char v88;  // [bp-0x78]
    int v89;  // [bp-0x68], Other Possible Types: char
    int v90;  // [bp-0x58], Other Possible Types: char
    int v91;  // [bp-0x48], Other Possible Types: char
    int v92;  // [bp-0x38], Other Possible Types: char
    unsigned long long v93;  // [bp-0x28]
    unsigned long v95;  // rax
    unsigned long long v96;  // rdx
    unsigned long long v97;  // rax
    int v98;  // xmm0
    int v99;  // xmm1
    int v100;  // xmm2
    int v101;  // xmm3
    unsigned int v102;  // r15d
    char v103;  // cl
    char v104;  // cl
    int v105;  // xmm0
    int v106;  // xmm1
    int v107;  // xmm2
    unsigned int v108;  // esi
    int v109;  // xmm0
    int v110;  // xmm1
    int v111;  // xmm2
    unsigned int v112;  // ecx
    int v113;  // xmm0
    int v114;  // xmm1
    int v115;  // xmm2
    int v117;  // xmm0
    int v118;  // xmm1
    int v119;  // xmm2
    int v120;  // xmm0
    int v121;  // xmm1
    int v122;  // xmm2
    unsigned int v123;  // ecx
    unsigned int v124;  // ecx
    int v125;  // xmm0
    int v126;  // xmm1
    int v127;  // xmm2
    unsigned long long v128;  // rcx
    int v129;  // xmm0
    int v130;  // xmm1
    int v131;  // xmm0
    int v132;  // xmm1
    int v133;  // xmm0
    int v134;  // xmm1
    int v135;  // xmm2
    unsigned long long v136;  // rcx
    int v137;  // xmm0
    char v138;  // sil
    int v139;  // xmm1
    int v140;  // xmm2
    unsigned int v141;  // edi
    unsigned int v142;  // ecx

    v95 = v0.presume_keyword(a1, 21);
    if (v20 != 37)
    {
        *((int128_t *)&a0[72]) = *((int128_t *)&v18);
        v98 = *((int128_t *)&v0);
        v99 = *((int128_t *)&v9);
        v100 = (int128_t)v12;
        v101 = *((int128_t *)&v15);
        a0[56] = v101;
        a0[40] = v100;
        a0[24] = v99;
        a0[8] = v98;
        *((char *)a0) = 20;
        return v95;
    }
    v0.presume(a1, 24);
    v95 = v20;
    memcpy(&v89, &v0, 16);
    memcpy(&v90, &v9, 16);
    memcpy(&v91, &v12, 16);
    memcpy(&v92, &v15, 16);
    v93 = *((long long *)&v18);
    if ((char)v95 != 37)
    {
        v142 = v20;
        *((int *)&a0[84]) = *((int *)&v22);
        *((unsigned int *)&a0[81]) = v142;
        *((unsigned long long *)&a0[72]) = v93;
        a0[56] = v92;
        a0[40] = v91;
        a0[24] = v90;
        a0[8] = v89;
        *((char *)&a0[80]) = v95;
        *((char *)a0) = 20;
        return v95;
    }
    v75.from_identifier(&v89);
    v97 = v75.lexeme().from_lexeme(v96);
    if ((char)v97 == 31)
    {
        v3 = v75.lexeme();
        v9 = v96;
        v0 = 9223372036854775875;
        v95 = v28.error(&v75, &v0);
        *((int128_t *)&a0[72]) = *((int128_t *)&v37);
        v98 = *((int128_t *)&v28);
        v99 = *((int128_t *)&v31);
        v100 = *((int128_t *)&v33);
        *((int128_t *)&a0[56]) = *((int128_t *)&v35);
        a0[40] = v100;
        a0[24] = v99;
        a0[8] = v98;
        *((char *)a0) = 20;
        return v95;
    }
    v102 = v97;
    switch (v102)
    {
    case 1:
        v0.parse_set_bool(a1);
        v95 = v0;
        v103 = v20;
        if (v20 != 37)
        {
            *((long long *)&a0[72]) = *((long long *)&v18);
            v105 = *((int128_t *)&v1);
            v106 = *((int128_t *)&v10);
            v107 = *((int128_t *)&v13);
            *((int128_t *)&a0[57]) = *((int128_t *)&v16);
            a0[41] = v107;
            a0[25] = v106;
            a0[9] = v105;
            v108 = *((int *)&v22);
            *((int *)&a0[81]) = *((int *)&v21);
            *((unsigned int *)&a0[84]) = v108;
            *((char *)&a0[8]) = v95;
            *((char *)&a0[80]) = v103;
            *((char *)a0) = 20;
            return v95;
        }
        break;
    case 2:
        v0.parse_set_bool(a1);
        v95 = v0;
        v103 = v20;
        if (v20 != 37)
        {
            *((long long *)&a0[72]) = *((long long *)&v18);
            v105 = *((int128_t *)&v1);
            v106 = *((int128_t *)&v10);
            v107 = *((int128_t *)&v13);
            *((int128_t *)&a0[57]) = *((int128_t *)&v16);
            a0[41] = v107;
            a0[25] = v106;
            a0[9] = v105;
            v108 = *((int *)&v22);
            *((int *)&a0[81]) = *((int *)&v21);
            *((unsigned int *)&a0[84]) = v108;
            *((char *)&a0[8]) = v95;
            *((char *)&a0[80]) = v103;
            *((char *)a0) = 20;
            return v95;
        }
        v104 = 1;
        break;
    case 5:
        v0.parse_set_bool(a1);
        v95 = v0;
        v103 = v20;
        if (v20 != 37)
        {
            *((long long *)&a0[72]) = *((long long *)&v18);
            v105 = *((int128_t *)&v1);
            v106 = *((int128_t *)&v10);
            v107 = *((int128_t *)&v13);
            *((int128_t *)&a0[57]) = *((int128_t *)&v16);
            a0[41] = v107;
            a0[25] = v106;
            a0[9] = v105;
            v108 = *((int *)&v22);
            *((int *)&a0[81]) = *((int *)&v21);
            *((unsigned int *)&a0[84]) = v108;
            *((char *)&a0[8]) = v95;
            *((char *)&a0[80]) = v103;
            *((char *)a0) = 20;
            return v95;
        }
        v104 = 3;
        break;
    case 6:
        v0.parse_set_bool(a1);
        v95 = v0;
        v103 = v20;
        if (v20 != 37)
        {
            *((long long *)&a0[72]) = *((long long *)&v18);
            v105 = *((int128_t *)&v1);
            v106 = *((int128_t *)&v10);
            v107 = *((int128_t *)&v13);
            *((int128_t *)&a0[57]) = *((int128_t *)&v16);
            a0[41] = v107;
            a0[25] = v106;
            a0[9] = v105;
            v108 = *((int *)&v22);
            *((int *)&a0[81]) = *((int *)&v21);
            *((unsigned int *)&a0[84]) = v108;
            *((char *)&a0[8]) = v95;
            *((char *)&a0[80]) = v103;
            *((char *)a0) = 20;
            return v95;
        }
        v104 = 4;
        break;
    case 8:
        v0.parse_set_bool(a1);
        v95 = v0;
        v103 = v20;
        if (v20 != 37)
        {
            *((long long *)&a0[72]) = *((long long *)&v18);
            v105 = *((int128_t *)&v1);
            v106 = *((int128_t *)&v10);
            v107 = *((int128_t *)&v13);
            *((int128_t *)&a0[57]) = *((int128_t *)&v16);
            a0[41] = v107;
            a0[25] = v106;
            a0[9] = v105;
            v108 = *((int *)&v22);
            *((int *)&a0[81]) = *((int *)&v21);
            *((unsigned int *)&a0[84]) = v108;
            *((char *)&a0[8]) = v95;
            *((char *)&a0[80]) = v103;
            *((char *)a0) = 20;
            return v95;
        }
        v104 = 6;
        break;
    case 10:
        v0.parse_set_bool(a1);
        v95 = v0;
        v103 = v20;
        if (v20 != 37)
        {
            *((long long *)&a0[72]) = *((long long *)&v18);
            v105 = *((int128_t *)&v1);
            v106 = *((int128_t *)&v10);
            v107 = *((int128_t *)&v13);
            *((int128_t *)&a0[57]) = *((int128_t *)&v16);
            a0[41] = v107;
            a0[25] = v106;
            a0[9] = v105;
            v108 = *((int *)&v22);
            *((int *)&a0[81]) = *((int *)&v21);
            *((unsigned int *)&a0[84]) = v108;
            *((char *)&a0[8]) = v95;
            *((char *)&a0[80]) = v103;
            *((char *)a0) = 20;
            return v95;
        }
        v104 = 7;
        break;
    case 11:
        v0.parse_set_bool(a1);
        v95 = v0;
        v103 = v20;
        if (v20 != 37)
        {
            *((long long *)&a0[72]) = *((long long *)&v18);
            v105 = *((int128_t *)&v1);
            v106 = *((int128_t *)&v10);
            v107 = *((int128_t *)&v13);
            *((int128_t *)&a0[57]) = *((int128_t *)&v16);
            a0[41] = v107;
            a0[25] = v106;
            a0[9] = v105;
            v108 = *((int *)&v22);
            *((int *)&a0[81]) = *((int *)&v21);
            *((unsigned int *)&a0[84]) = v108;
            *((char *)&a0[8]) = v95;
            *((char *)&a0[80]) = v103;
            *((char *)a0) = 20;
            return v95;
        }
        v104 = 8;
        break;
    case 14:
        v0.parse_set_bool(a1);
        v95 = v0;
        v103 = v20;
        if (v20 != 37)
        {
            *((long long *)&a0[72]) = *((long long *)&v18);
            v105 = *((int128_t *)&v1);
            v106 = *((int128_t *)&v10);
            v107 = *((int128_t *)&v13);
            *((int128_t *)&a0[57]) = *((int128_t *)&v16);
            a0[41] = v107;
            a0[25] = v106;
            a0[9] = v105;
            v108 = *((int *)&v22);
            *((int *)&a0[81]) = *((int *)&v21);
            *((unsigned int *)&a0[84]) = v108;
            *((char *)&a0[8]) = v95;
            *((char *)&a0[80]) = v103;
            *((char *)a0) = 20;
            return v95;
        }
        v104 = 9;
        break;
    case 17:
        v0.parse_set_bool(a1);
        v95 = v0;
        v103 = v20;
        if (v20 != 37)
        {
            *((long long *)&a0[72]) = *((long long *)&v18);
            v105 = *((int128_t *)&v1);
            v106 = *((int128_t *)&v10);
            v107 = *((int128_t *)&v13);
            *((int128_t *)&a0[57]) = *((int128_t *)&v16);
            a0[41] = v107;
            a0[25] = v106;
            a0[9] = v105;
            v108 = *((int *)&v22);
            *((int *)&a0[81]) = *((int *)&v21);
            *((unsigned int *)&a0[84]) = v108;
            *((char *)&a0[8]) = v95;
            *((char *)&a0[80]) = v103;
            *((char *)a0) = 20;
            return v95;
        }
        v104 = 10;
        break;
    case 18:
        v0.parse_set_bool(a1);
        v95 = v0;
        v103 = v20;
        if (v20 != 37)
        {
            *((long long *)&a0[72]) = *((long long *)&v18);
            v105 = *((int128_t *)&v1);
            v106 = *((int128_t *)&v10);
            v107 = *((int128_t *)&v13);
            *((int128_t *)&a0[57]) = *((int128_t *)&v16);
            a0[41] = v107;
            a0[25] = v106;
            a0[9] = v105;
            v108 = *((int *)&v22);
            *((int *)&a0[81]) = *((int *)&v21);
            *((unsigned int *)&a0[84]) = v108;
            *((char *)&a0[8]) = v95;
            *((char *)&a0[80]) = v103;
            *((char *)a0) = 20;
            return v95;
        }
        v104 = 11;
        break;
    case 19:
        v0.parse_set_bool(a1);
        v95 = v0;
        v103 = v20;
        if (v20 != 37)
        {
            *((long long *)&a0[72]) = *((long long *)&v18);
            v105 = *((int128_t *)&v1);
            v106 = *((int128_t *)&v10);
            v107 = *((int128_t *)&v13);
            *((int128_t *)&a0[57]) = *((int128_t *)&v16);
            a0[41] = v107;
            a0[25] = v106;
            a0[9] = v105;
            v108 = *((int *)&v22);
            *((int *)&a0[81]) = *((int *)&v21);
            *((unsigned int *)&a0[84]) = v108;
            *((char *)&a0[8]) = v95;
            *((char *)&a0[80]) = v103;
            *((char *)a0) = 20;
            return v95;
        }
        v104 = 12;
        break;
    case 26:
        v0.parse_set_bool(a1);
        v95 = v0;
        v103 = v20;
        if (v20 != 37)
        {
            *((long long *)&a0[72]) = *((long long *)&v18);
            v105 = *((int128_t *)&v1);
            v106 = *((int128_t *)&v10);
            v107 = *((int128_t *)&v13);
            *((int128_t *)&a0[57]) = *((int128_t *)&v16);
            a0[41] = v107;
            a0[25] = v106;
            a0[9] = v105;
            v108 = *((int *)&v22);
            *((int *)&a0[81]) = *((int *)&v21);
            *((unsigned int *)&a0[84]) = v108;
            *((char *)&a0[8]) = v95;
            *((char *)&a0[80]) = v103;
            *((char *)a0) = 20;
            return v95;
        }
        v104 = 16;
        break;
    case 27:
        v0.parse_set_bool(a1);
        v95 = v0;
        v103 = v20;
        if (v20 != 37)
        {
            *((long long *)&a0[72]) = *((long long *)&v18);
            v105 = *((int128_t *)&v1);
            v106 = *((int128_t *)&v10);
            v107 = *((int128_t *)&v13);
            *((int128_t *)&a0[57]) = *((int128_t *)&v16);
            a0[41] = v107;
            a0[25] = v106;
            a0[9] = v105;
            v108 = *((int *)&v22);
            *((int *)&a0[81]) = *((int *)&v21);
            *((unsigned int *)&a0[84]) = v108;
            *((char *)&a0[8]) = v95;
            *((char *)&a0[80]) = v103;
            *((char *)a0) = 20;
            return v95;
        }
        v104 = 17;
        break;
    default:
        v80 = 20;
        v0.expect(a1, 14);
        v95 = v20;
        if ((char)v95 != 37)
        {
            v136 = v0;
            v137 = *((int128_t *)&v3);
            v138 = v18;
            v28 = *((int *)&(&v18)[1]);
            v29 = v19;
            *((int *)&a0[84]) = *((int *)&v22);
            *((int *)&a0[81]) = v20;
            v139 = *((int128_t *)&v11);
            v140 = *((int128_t *)&v14);
            v141 = v28;
            *((unsigned int *)&a0[76]) = v29;
            *((unsigned int *)&a0[73]) = v141;
            *((unsigned long long *)&a0[8]) = v136;
            a0[16] = v137;
            a0[32] = v139;
            a0[48] = v140;
            *((unsigned long *)&a0[64]) = v17;
            *((char *)&a0[72]) = v138;
            *((char *)&a0[80]) = v95;
            *((char *)a0) = 20;
            return v95;
        }
        switch (v102)
        {
        case 4:
            v0.parse_string_literal(a1);
            v95 = v20;
            if ((char)v95 != 37)
                goto LABEL_681809;
            v109 = *((int128_t *)&v0);
            v110 = (int128_t)v9;
            v111 = (int128_t)v12;
            v33 = v111;
            v31 = v110;
            v54 = v109;
            v56 = v110;
            v58 = v111;
            v39 = 2;
            break;
        case 7:
            v0.parse_string_literal(a1);
            v95 = v20;
            if ((char)v95 != 37)
                goto LABEL_681809;
            v117 = *((int128_t *)&v0);
            v118 = (int128_t)v9;
            v119 = (int128_t)v12;
            v33 = v119;
            v31 = v118;
            v54 = v117;
            v56 = v118;
            v58 = v119;
            v39 = 5;
            break;
        case 20:
            v0.parse_interpreter(a1);
            v95 = v20;
            memcpy(&v60, &v0, 16);
            memcpy(&v61, &v9, 16);
            memcpy(&v62, &v12, 16);
            memcpy(&v63, &v15, 16);
            v64 = *((long long *)&v18);
            if ((char)v95 != 37)
            {
                v123 = *((int *)&v21);
                *((int *)&a0[84]) = *((int *)&v22);
                *((unsigned int *)&a0[81]) = v123;
                *((unsigned long long *)&a0[72]) = v64;
                a0[56] = v63;
                a0[40] = v62;
                a0[24] = v61;
                a0[8] = v60;
                *((char *)&a0[80]) = v95;
                *((char *)a0) = 20;
                return v95;
            }
            memcpy(&v30, &v60, 16);
            v32 = v61;
            v34 = v62;
            v36 = v63;
            v38 = v64;
            v39 = 13;
            goto LABEL_68167e;
        case 22:
            v0.parse_interpreter(a1);
            v95 = v20;
            memcpy(&v65, &v0, 16);
            memcpy(&v66, &v9, 16);
            memcpy(&v67, &v12, 16);
            memcpy(&v68, &v15, 16);
            v69 = *((long long *)&v18);
            if ((char)v95 != 37)
            {
                v124 = *((int *)&v21);
                *((int *)&a0[84]) = *((int *)&v22);
                *((unsigned int *)&a0[81]) = v124;
                *((unsigned long long *)&a0[72]) = v69;
                a0[56] = v68;
                a0[40] = v67;
                a0[24] = v66;
                a0[8] = v65;
                *((char *)&a0[80]) = v95;
                *((char *)a0) = 20;
                return v95;
            }
            memcpy(&v30, &v65, 16);
            v32 = v66;
            v34 = v67;
            v36 = v68;
            v38 = v69;
            v39 = 14;
LABEL_68167e:
            *((int128_t *)&v40) = *((int128_t *)&v28);
            memcpy(&v45, &(char)v31, 16);
            *((int128_t *)&v47) = (int128_t)(&v32)[9];
            memcpy(&v49, &v35, 16);
            v51 = (long long)(&v36)[8];
            v52 = v38;
            v18 = v51;
            v20 = v52;
            v128 = (long long)v40;
            v129 = *((int128_t *)&v44);
            v130 = *((int128_t *)&v46);
            v15 = v48;
            v17 = v50;
            v12 = v130;
            v9 = v129;
            v0 = v39;
            v1 = v128;
            v4 = v41;
            v6 = v42;
            v8 = v43;
            memcpy(&v23, &v75, 16);
            v24 = v76;
            v25 = v77;
            v26 = v78;
            v27 = v79;
            return memcpy(a0, &v0, 152);
        case 23:
            v0.parse_string_literal(a1);
            v95 = v20;
            if ((char)v95 != 37)
            {
LABEL_681809:
                v37 = *((long long *)&v18);
                v131 = *((int128_t *)&v0);
                v132 = (int128_t)v9;
                memcpy(&(char)v35, &v15, 16);
                *((int128_t *)&v33) = (int128_t)v12;
                v31 = v132;
                v28 = v131;
                *((int *)&a0[84]) = *((int *)&v22);
                *((int *)&a0[81]) = v20;
                *((unsigned long long *)&a0[72]) = v37;
                v113 = (int128_t)v28;
                v114 = (int128_t)v31;
                v115 = (int128_t)v33;
                *((int128_t *)&a0[56]) = (int128_t)v35;
                a0[40] = v115;
                a0[24] = v114;
                a0[8] = v113;
                *((char *)&a0[80]) = v95;
                *((char *)a0) = 20;
                return v95;
            }
            v125 = *((int128_t *)&v0);
            v126 = (int128_t)v9;
            v127 = (int128_t)v12;
            v33 = v127;
            v31 = v126;
            v54 = v125;
            v56 = v126;
            v58 = v127;
            v39 = 15;
            break;
        case 28:
            v0.parse_interpreter(a1);
            v95 = v20;
            memcpy(&v70, &v0, 16);
            memcpy(&v71, &v9, 16);
            memcpy(&v72, &v12, 16);
            memcpy(&v73, &v15, 16);
            v74 = *((long long *)&v18);
            if ((char)v95 != 37)
            {
                v112 = *((int *)&v21);
                *((int *)&a0[84]) = *((int *)&v22);
                *((unsigned int *)&a0[81]) = v112;
                *((unsigned long long *)&a0[72]) = v74;
                a0[56] = v73;
                a0[40] = v72;
                a0[24] = v71;
                a0[8] = v70;
                *((char *)&a0[80]) = v95;
                *((char *)a0) = 20;
                return v95;
            }
            memcpy(&v30, &v70, 16);
            v32 = v71;
            v34 = v72;
            v36 = v73;
            v38 = v74;
            v39 = 18;
            goto LABEL_68167e;
        case 29:
            v0.parse_string_literal(a1);
            v95 = v20;
            if ((char)v95 != 37)
                goto LABEL_681809;
            v120 = *((int128_t *)&v0);
            v121 = (int128_t)v9;
            v122 = (int128_t)v12;
            v33 = v122;
            v31 = v121;
            v54 = v120;
            v56 = v121;
            v58 = v122;
            v39 = 19;
            break;
        default:
            v39 = 20;
            v3 = v75.lexeme();
            v9 = v96;
            v0 = 9223372036854775875;
            (char)v28.error(&v75, &v0);
            *((int128_t *)&a0[72]) = *((int128_t *)&v37);
            v133 = (int128_t)v28;
            v134 = (int128_t)v31;
            v135 = (int128_t)v33;
            *((int128_t *)&a0[56]) = (int128_t)v35;
            a0[40] = v135;
            a0[24] = v134;
            a0[8] = v133;
            *((char *)a0) = 20;
            core::ptr::drop_in_place<core::option::Option<just::setting::Setting>>(&v39);
            return core::ptr::drop_in_place<core::option::Option<just::setting::Setting>>(&v80);
        }
        memcpy(&(char)v40, &v53, 16);
        *((int128_t *)&v45) = (int128_t)v55;
        memcpy(&(char)v47, &v57, 16);
        v48 = v59;
        v18 = v51;
        v20 = v52;
        v128 = (long long)v40;
        v129 = *((int128_t *)&v44);
        v130 = *((int128_t *)&v46);
        v15 = v48;
        v17 = v50;
        v12 = v130;
        v9 = v129;
        v0 = v39;
        v1 = v128;
        v4 = v41;
        v6 = v42;
        v8 = v43;
        memcpy(&v23, &v75, 16);
        v24 = v76;
        v25 = v77;
        v26 = v78;
        v27 = v79;
        return memcpy(a0, &v0, 152);
    }
    v80 = v104;
    v81 = v95;
    memcpy(&v18, &v88, 16);
    v15 = v87;
    v12 = v86;
    v9 = v85;
    v0 = v80;
    v1 = v81;
    v2 = v82;
    v5 = v83;
    v7 = v84;
    memcpy(&v23, &v75, 16);
    v24 = v76;
    v25 = v77;
    v26 = v78;
    v27 = v79;
    return memcpy(a0, &v0, 152);
}
