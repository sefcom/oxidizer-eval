long long just::parser::Parser::parse_disjunct(void* a0, unsigned long long a1)
{
    int v0;  // [bp-0x268], Other Possible Types: char
    int v1;  // [bp-0x258], Other Possible Types: char
    int v2;  // [bp-0x248], Other Possible Types: char
    int v3;  // [bp-0x238], Other Possible Types: char
    char v4;  // [bp-0x228]
    unsigned long long v5;  // [bp-0x210]
    char v6;  // [bp-0x208]
    int v8;  // [bp-0x1f8]
    char v9;  // [bp-0x1f0]
    int v10;  // [bp-0x1e8]
    char v12;  // [bp-0x1d8]
    char v13;  // [bp-0x1d7]
    char v14;  // [bp-0x1d0]
    int v15;  // [bp-0x1c8]
    char v16;  // [bp-0x1c0]
    char v17;  // [bp-0x1bf]
    unsigned int v18;  // [bp-0x1bc]
    int v19;  // [bp-0x1b8]
    char v20;  // [bp-0x1b0]
    int v21;  // [bp-0x1a8]
    char v22;  // [bp-0x1a0]
    int v23;  // [bp-0x198]
    unsigned long long v24;  // [bp-0x190]
    unsigned long long v25;  // [bp-0x188]
    int v26;  // [bp-0x180]
    unsigned long long v27;  // [bp-0x178]
    int v28;  // [bp-0x170]
    int v29;  // [bp-0x160]
    int v30;  // [bp-0x150]
    int v31;  // [bp-0x148]
    char v32;  // [bp-0x140]
    char v33;  // [bp-0x138]
    int v34;  // [bp-0x130]
    int v35;  // [bp-0x120]
    unsigned long long v36;  // [bp-0x110]
    int v37;  // [bp-0x108], Other Possible Types: char
    int v38;  // [bp-0xf8], Other Possible Types: char
    int v39;  // [bp-0xe8], Other Possible Types: char
    int v40;  // [bp-0xd8], Other Possible Types: char
    int v41;  // [bp-0xc8], Other Possible Types: char
    int v42;  // [bp-0xb8], Other Possible Types: char
    unsigned long long v43;  // [bp-0xa8]
    unsigned long long v44;  // [bp-0xa0]
    int v45;  // [bp-0x98]
    int v46;  // [bp-0x88]
    int v47;  // [bp-0x78]
    int v48;  // [bp-0x68]
    char v49;  // [bp-0x58]
    char v50;  // [bp-0x48]
    char v51;  // [bp-0x38]
    unsigned long long v52;  // [bp-0x28]
    unsigned long long v54;  // rax
    unsigned long long v55;  // r12
    int v56;  // xmm0
    char v57;  // al
    int v58;  // xmm0
    int v59;  // xmm1
    unsigned long long v60;  // r15
    unsigned long long v61;  // rax
    int v62;  // xmm0
    int v63;  // xmm1
    int v64;  // xmm2

    v54 = v6.parse_conjunct(a1);
    v55 = *((long long *)&v6);
    memcpy(&v0, &v6, 16);
    memcpy(&v1, &v9, 16);
    memcpy(&v2, &(char)v10, 16);
    memcpy(&v3, &v14, 16);
    memcpy(&v4, &(char)v15, 16);
    if (v55 == 18)
    {
        *((int128_t *)&a0[72]) = *((int128_t *)&v4);
        a0[56] = v3;
        a0[40] = v2;
        a0[24] = v1;
        a0[8] = v0;
        *((unsigned long long *)a0) = 18;
        return v54;
    }
    v36 = v24;
    v56 = *((int128_t *)&v20);
    *((int128_t *)&v35) = *((int128_t *)&v22);
    v34 = v56;
    v26 = v0;
    v28 = v1;
    v29 = v2;
    v30 = v3;
    memcpy(&v32, &v4, 16);
    v25 = v55;
    v6.accepted(a1, 0);
    v57 = v6;
    if (v16 != 37)
    {
        *((long long *)&a0[72]) = (long long)v15;
        v62 = *((int128_t *)&v6);
        v63 = (int128_t)v8;
        v64 = (int128_t)v10;
        *((int128_t *)&a0[57]) = *((int128_t *)&v13);
        a0[41] = v64;
        a0[25] = v63;
        a0[9] = v62;
        *((int *)&a0[81]) = *((int *)&v17);
        *((unsigned int *)&a0[84]) = v18;
        *((char *)&a0[8]) = v57;
        *((char *)&a0[80]) = v16;
        *((unsigned long long *)a0) = 18;
        return core::ptr::drop_in_place<just::expression::Expression>(&v25);
    }
    if ((v57 & 1))
    {
        a1 + 104.insert(1);
        *((int128_t *)&v23) = (int128_t)(&v35)[8];
        *((int128_t *)&v21) = (int128_t)(&v34)[8];
        *((int128_t *)&v19) = *((int128_t *)&v33);
        v15 = v31;
        v58 = *((int128_t *)&v25);
        v59 = (int128_t)(&v26)[8];
        memcpy(&v12, &(char)v29, 16);
        *((int128_t *)&v10) = (int128_t)(&v28)[8];
        v8 = v59;
        *((void*)&v6) = v58;
        v60 = v6.new();
        v5 = v60;
        v6.parse_disjunct(a1);
        memcpy(&v0, &v6, 16);
        memcpy(&v1, &v9, 16);
        memcpy(&v2, &(char)v10, 16);
        memcpy(&v3, &v14, 16);
        memcpy(&v4, &(char)v15, 16);
        if (*((long long *)&v6) == 18)
        {
            *((int128_t *)&a0[72]) = *((int128_t *)&v4);
            a0[56] = v3;
            a0[40] = v2;
            a0[24] = v1;
            a0[8] = v0;
            *((unsigned long long *)a0) = 18;
            return (unsigned long long)core::ptr::drop_in_place<alloc::boxed::Box<just::expression::Expression>>(&v5);
        }
        v52 = v24;
        memcpy(&v51, &v21, 16);
        memcpy(&v50, &v19, 16);
        v44 = *((long long *)&v6);
        v45 = v0;
        v46 = v1;
        v47 = v2;
        v48 = v3;
        memcpy(&v49, &v4, 16);
        v61 = v44.new();
        v55 = 7;
    }
    else
    {
        v60 = (long long)v26;
        v61 = v27;
        memcpy(&v37, &(char)v28, 16);
        memcpy(&v38, &(char)v29, 16);
        memcpy(&v39, &(char)v30, 16);
        memcpy(&v40, &v32, 16);
        memcpy(&v41, &(char)v34, 16);
        memcpy(&v42, &(char)v35, 16);
        v43 = v36;
    }
    *((unsigned long long *)a0) = v55;
    *((unsigned long long *)&a0[8]) = v60;
    *((unsigned long long *)&a0[16]) = v61;
    a0[24] = v37;
    a0[40] = v38;
    a0[56] = v39;
    a0[72] = v40;
    a0[88] = v41;
    a0[104] = v42;
    *((unsigned long long *)&a0[120]) = v43;
    return v43;
}
