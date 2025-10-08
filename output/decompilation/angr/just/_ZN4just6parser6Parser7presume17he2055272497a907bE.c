long long just::parser::Parser::presume(void* a0, unsigned long long a1, char a2)
{
    char v0;  // [bp-0x1a1]
    unsigned int v1;  // [bp-0x1a0]
    unsigned int v2;  // [bp-0x19d]
    char *v3;  // [bp-0x198], Other Possible Types: unsigned int
    unsigned int v4;  // [bp-0x195]
    unsigned long long v5;  // [bp-0x190]
    char *v6;  // [bp-0x188]
    unsigned long long v7;  // [bp-0x180]
    char v8;  // [bp-0x178], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x170]
    int v10;  // [bp-0x168], Other Possible Types: char *
    unsigned long long v11;  // [bp-0x160]
    int v12;  // [bp-0x158], Other Possible Types: void*
    int v13;  // [bp-0x148]
    int v14;  // [bp-0x140]
    char v15;  // [bp-0x130]
    int v16;  // [bp-0x118], Other Possible Types: char, unsigned long long
    char v17;  // [bp-0x110]
    int v18;  // [bp-0x108]
    int v19;  // [bp-0xf8]
    int v20;  // [bp-0xe8]
    int v21;  // [bp-0xd8], Other Possible Types: char
    char v22;  // [bp-0xd7]
    unsigned int v23;  // [bp-0xd4]
    char v24;  // [bp-0xd0]
    char v25;  // [bp-0xcf]
    unsigned int v26;  // [bp-0xcc]
    int v27;  // [bp-0xa8], Other Possible Types: char
    int v28;  // [bp-0x98], Other Possible Types: char
    int v29;  // [bp-0x88], Other Possible Types: char
    int v30;  // [bp-0x78], Other Possible Types: char
    int v31;  // [bp-0x68]
    int v32;  // [bp-0x58]
    int v33;  // [bp-0x48]
    int v34;  // [bp-0x38]
    char v35;  // [bp-0x28]
    unsigned int v36;  // [bp-0x27]
    unsigned int v37;  // [bp-0x24]
    char v39;  // al
    unsigned long v40;  // rax
    unsigned long long v41;  // rax
    int v42;  // xmm0
    int v43;  // xmm1
    unsigned int v44;  // edx
    int v45;  // xmm0
    int v46;  // xmm1
    int v47;  // xmm2
    unsigned int v48;  // edx

    v0 = a2;
    v16.advance(a1);
    memcpy(&v8, &v16, 16);
    v10 = v18;
    v12 = v19;
    v13 = v20;
    v39 = v21;
    v3 = *((int *)&v22);
    v4 = v23;
    if (v24 != 37)
    {
        v44 = *((int *)&v25);
        *((unsigned int *)&a0[76]) = v26;
        *((unsigned int *)&a0[73]) = v44;
        v45 = *((int128_t *)&v8);
        v46 = (int128_t)v10;
        v47 = (int128_t)v12;
        *((int128_t *)&a0[48]) = (int128_t)v13;
        a0[32] = v47;
        a0[16] = v46;
        *(a0) = v45;
        v48 = v3;
        *((unsigned int *)&a0[68]) = v4;
        *((unsigned int *)&a0[65]) = v48;
        *((char *)&a0[64]) = v35;
        *((char *)&a0[72]) = v24;
        return v35;
    }
    memcpy(&v27, &v8, 16);
    memcpy(&v28, &v10, 16);
    memcpy(&v29, &v12, 16);
    memcpy(&v30, &v13, 16);
    v1 = v3;
    v2 = v4;
    v31 = v27;
    v32 = v28;
    v33 = v29;
    v34 = v30;
    v35 = v39;
    v36 = v3;
    v37 = v4;
    if (v35 != v0)
    {
        v3 = &v0;
        v5 = <just::token_kind::TokenKind as core::fmt::Debug>::fmt;
        v6 = &v35;
        v7 = <just::token_kind::TokenKind as core::fmt::Debug>::fmt;
        v8 = &g_8306d8;
        v9 = 2;
        v12 = 0;
        v10 = &(char)v3;
        v11 = 2;
        v17.map_or_else(0, v4, &v8);
        v16 = 9223372036854775848;
        v41 = v8.error(a1, &v16);
        v42 = *((int128_t *)&v15);
        v21 = v42;
        v43 = *((int128_t *)&v9);
        v20 = v14;
        memcpy(&v19, &v12, 16);
        memcpy(&v18, &v11, 16);
        v16 = v43;
        a0[64] = v42;
        a0[48] = v14;
        a0[32] = v19;
        a0[16] = v18;
        *(a0) = v43;
        return v41;
    }
    a0[48] = v30;
    a0[32] = v29;
    a0[16] = v28;
    *(a0) = v27;
    *((char *)&a0[64]) = v0;
    v40 = v1;
    *((unsigned int *)&a0[65]) = v40;
    *((unsigned int *)&a0[68]) = v2;
    *((char *)&a0[72]) = 37;
    return v40;
}
