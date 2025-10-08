long long just::parser::Parser::parse_assignment(void* a0, struct_0 *a1, char a2, unsigned long long a3[3])
{
    int v0;  // [bp-0x268], Other Possible Types: char
    unsigned int v1;  // [bp-0x268]
    char v2;  // [bp-0x260]
    int v3;  // [bp-0x258], Other Possible Types: char
    int v4;  // [bp-0x248], Other Possible Types: char
    int v5;  // [bp-0x238], Other Possible Types: char
    unsigned long v6;  // [bp-0x230]
    char v7;  // [bp-0x228]
    unsigned int v8;  // [bp-0x224]
    char v9;  // [bp-0x220]
    char v10;  // [bp-0x21f]
    unsigned int v11;  // [bp-0x21c]
    int v12;  // [bp-0x218]
    int v13;  // [bp-0x210]
    char v14;  // [bp-0x200]
    int v15;  // [bp-0x1f8]
    unsigned long long v16;  // [bp-0x1f0]
    int v17;  // [bp-0x1e8]
    int v18;  // [bp-0x1d8]
    int v19;  // [bp-0x1c8]
    int v20;  // [bp-0x1b8]
    unsigned long long v21;  // [bp-0x1a8]
    char v22;  // [bp-0x198], Other Possible Types: unsigned int, unsigned long long
    unsigned int v23;  // [bp-0x195]
    int v24;  // [bp-0x190]
    int v25;  // [bp-0x188]
    int v26;  // [bp-0x180]
    int v27;  // [bp-0x178]
    int v28;  // [bp-0x170]
    int v29;  // [bp-0x168]
    int v30;  // [bp-0x160]
    unsigned long long v31;  // [bp-0x158]
    char v32;  // [bp-0x150]
    char v33;  // [bp-0x148]
    int v34;  // [bp-0x140]
    int v35;  // [bp-0x130]
    unsigned long long v36;  // [bp-0x120]
    int v37;  // [bp-0x118], Other Possible Types: char
    int v38;  // [bp-0x108], Other Possible Types: char
    int v39;  // [bp-0xf8], Other Possible Types: char
    int v40;  // [bp-0xe8], Other Possible Types: char
    int v41;  // [bp-0xd8], Other Possible Types: char
    int v42;  // [bp-0xc8], Other Possible Types: char
    int v43;  // [bp-0xb8], Other Possible Types: char
    int v44;  // [bp-0xa8], Other Possible Types: char
    int v45;  // [bp-0x98], Other Possible Types: char
    unsigned long long v46;  // [bp-0x88]
    char v47;  // [bp-0x78]
    char v48;  // [bp-0x68]
    char v49;  // [bp-0x58]
    char v50;  // [bp-0x48]
    unsigned long long v51;  // [bp-0x38]
    char v53;  // al
    int v54;  // xmm2
    int v55;  // xmm3
    unsigned long long v56;  // rax
    char v57;  // al
    unsigned int v58;  // r13d
    unsigned long long v59;  // rax
    unsigned long long v61;  // rdx
    int v62;  // xmm0
    int v63;  // xmm1
    int v64;  // xmm2
    int v65;  // xmm0
    int v66;  // xmm1
    int v67;  // xmm2
    unsigned long long v68;  // rcx
    int v69;  // xmm0
    int v70;  // xmm1
    int v71;  // xmm2
    unsigned int v72;  // edi
    unsigned int v73;  // ecx
    int v74;  // xmm0
    int v75;  // xmm1
    int v76;  // xmm2

    v0.parse_name(a1);
    v53 = v9;
    v54 = *((int128_t *)&v4);
    v55 = *((int128_t *)&v5);
    memcpy(&(char)v22, &v0, 16);
    *((int128_t *)&v25) = *((int128_t *)&v3);
    v27 = v54;
    v29 = v55;
    *((long long *)&v30) = *((long long *)&v7);
    if (v9 != 37)
    {
        v73 = *((int *)&v10);
        *((unsigned int *)&a0[84]) = v11;
        *((unsigned int *)&a0[81]) = v73;
        *((unsigned long long *)&a0[72]) = v31;
        v74 = *((int128_t *)&v22);
        v75 = (int128_t)v25;
        v76 = (int128_t)v27;
        *((int128_t *)&a0[56]) = (int128_t)v29;
        a0[40] = v76;
        a0[24] = v75;
        a0[8] = v74;
        goto LABEL_67a7a6;
    }
    memcpy(&v42, &v22, 16);
    memcpy(&v43, &v25, 16);
    memcpy(&v44, &v27, 16);
    memcpy(&v45, &v29, 16);
    v46 = v31;
    memcpy(&v47, &v22, 16);
    memcpy(&v48, &v25, 16);
    memcpy(&v49, &v27, 16);
    memcpy(&v50, &v29, 16);
    v51 = v46;
    v0.presume(a1, 14);
    v53 = v9;
    if (v9 == 37)
    {
        v0.parse_expression(a1);
        v56 = *((long long *)&v0);
        memcpy(&v37, &v2, 16);
        memcpy(&v38, &v3, 16);
        memcpy(&v39, &v4, 16);
        memcpy(&v40, &v5, 16);
        memcpy(&v41, &v9, 16);
        if (v56 == 18)
        {
            a0[72] = v41;
            a0[56] = v40;
            a0[40] = v39;
            a0[24] = v38;
            a0[8] = v37;
LABEL_67a7aa:
            *((unsigned long long *)a0) = 18;
        }
        else
        {
            v36 = v16;
            *((int128_t *)&v35) = *((int128_t *)&v14);
            v34 = v13;
            v24 = v37;
            v26 = v38;
            v28 = v39;
            v30 = v40;
            memcpy(&v32, &v41, 16);
            v22 = v56;
            v0.expect_eol(a1);
            if (v9 == 37)
            {
                v57 = a3.contains(15);
                v0.ensure_valid_attributes(a3, "AssignmentxError getting current directory: unicode decode errorsignal handlerwarning: I/O error reading from signal pipe: src/positional.rssrc/ran.rsRun recipe ``? ", 10, &v42, &g_4715f0, 1);
                if (v9 != 37)
                    goto LABEL_67a9ee;
                v58 = a1->field_80;
                if (!v57)
                {
                    v59 = v47.lexeme();
                    v1 = 0;
                    core::slice::<impl [T]>::starts_with(v59, v61, ::0x5fb200::core::char::methods::encode_utf8_raw(95, &v1), v61);
                }
                *((int128_t *)&v15) = (int128_t)(&v35)[8];
                memcpy(&(char)v13, &(char)v34, 16);
                *((int128_t *)&v12) = *((int128_t *)&v33);
                memcpy(&v7, &(unsigned long long)v30, 16);
                v62 = *((int128_t *)&v22);
                v63 = (int128_t)(&v24)[8];
                v64 = (int128_t)(&v26)[8];
                *((int128_t *)&v5) = (int128_t)(&v28)[8];
                v4 = v64;
                v3 = v63;
                v0 = v62;
                v17 = v42;
                v18 = v43;
                v19 = v44;
                v20 = v45;
                v21 = v46;
                memcpy(a0, &v0, 200);
                *((unsigned int *)&a0[200]) = v58;
                *((char *)&a0[204]) = 0;
                *((char *)&a0[205]) = a2;
                *((char *)&a0[206]) = 1;
            }
            else
            {
LABEL_67a9ee:
                *((int128_t *)&a0[72]) = *((int128_t *)&v7);
                v65 = (int128_t)v0;
                v66 = *((int128_t *)&v3);
                v67 = *((int128_t *)&v4);
                *((int128_t *)&a0[56]) = *((int128_t *)&v5);
                a0[40] = v67;
                a0[24] = v66;
                a0[8] = v65;
                *((unsigned long long *)a0) = 18;
                core::ptr::drop_in_place<just::expression::Expression>(&(char)v22);
            }
        }
    }
    else
    {
        v68 = (long long)v0;
        v69 = *((int128_t *)&v2);
        v22 = *((int *)&(&v7)[1]);
        v23 = v8;
        *((unsigned int *)&a0[84]) = v11;
        *((int *)&a0[81]) = *((int *)&v10);
        v70 = *((int128_t *)&(&v3)[8]);
        v71 = *((int128_t *)&(&v4)[8]);
        v72 = v22;
        *((unsigned int *)&a0[76]) = v23;
        *((unsigned int *)&a0[73]) = v72;
        *((unsigned long long *)&a0[8]) = v68;
        a0[16] = v69;
        a0[32] = v70;
        a0[48] = v71;
        *((unsigned long *)&a0[64]) = v6;
        *((char *)&a0[72]) = v7;
LABEL_67a7a6:
        *((char *)&a0[80]) = v53;
        goto LABEL_67a7aa;
    }
    return core::ptr::drop_in_place<just::attribute_set::AttributeSet>(a3);
}
