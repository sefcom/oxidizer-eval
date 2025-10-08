long long just::parser::Parser::presume_any(void* a0, unsigned long long a1)
{
    char v0;  // [bp-0x178], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x170]
    int v2;  // [bp-0x168], Other Possible Types: char *
    unsigned long long v3;  // [bp-0x160]
    int v4;  // [bp-0x158], Other Possible Types: void*
    int v5;  // [bp-0x148]
    unsigned long long v6;  // [bp-0x138]
    char v7;  // [bp-0x130]
    int v8;  // [bp-0x118], Other Possible Types: char, unsigned long long
    char v9;  // [bp-0x110]
    int v10;  // [bp-0x108]
    int v11;  // [bp-0xf8]
    int v12;  // [bp-0xe8]
    int v13;  // [bp-0xd8], Other Possible Types: char
    char v14;  // [bp-0xd0]
    char v15;  // [bp-0xcf]
    unsigned int v16;  // [bp-0xcc]
    char *v17;  // [bp-0xa8]
    unsigned long long v18;  // [bp-0xa0]
    char *v19;  // [bp-0x98]
    unsigned long long v20;  // [bp-0x90]
    unsigned long long v21;  // [bp-0x88]
    unsigned long long v22;  // [bp-0x80]
    unsigned long long v23;  // [bp-0x78]
    unsigned long long v24;  // [bp-0x70]
    int v25;  // [bp-0x68], Other Possible Types: char
    int v26;  // [bp-0x58], Other Possible Types: char
    int v27;  // [bp-0x48], Other Possible Types: char
    int v28;  // [bp-0x38], Other Possible Types: char
    unsigned long long v29;  // [bp-0x28]
    unsigned long v31;  // rax
    unsigned long long v32;  // rdx
    unsigned long long v33;  // rax
    int v34;  // xmm0
    int v35;  // xmm1
    unsigned int v36;  // ecx
    int v37;  // xmm0
    int v38;  // xmm1
    int v39;  // xmm2

    v8.advance(a1);
    v31 = v14;
    memcpy(&v0, &v8, 16);
    v2 = v10;
    v4 = v11;
    v5 = v12;
    v6 = *((long long *)&v13);
    if ((char)v31 != 37)
    {
        v36 = *((int *)&v15);
        *((unsigned int *)&a0[76]) = v16;
        *((unsigned int *)&a0[73]) = v36;
        *((unsigned long long *)&a0[64]) = v6;
        v37 = *((int128_t *)&v0);
        v38 = (int128_t)v2;
        v39 = (int128_t)v4;
        *((int128_t *)&a0[48]) = (int128_t)v5;
        a0[32] = v39;
        a0[16] = v38;
        *(a0) = v37;
        *((char *)&a0[72]) = v31;
        return v31;
    }
    memcpy(&v25, &v0, 16);
    memcpy(&v26, &v2, 16);
    memcpy(&v27, &v4, 16);
    memcpy(&v28, &v5, 16);
    v29 = v6;
    if (!v29.slice_contains())
    {
        v21 = "orattributeaan";
        v22 = 2;
        v23 = &g_4715ee;
        v24 = &g_4715f0;
        v17 = &v21;
        v18 = <just::list::List<T,I> as core::fmt::Display>::fmt;
        v19 = &v29;
        v20 = <just::token_kind::TokenKind as core::fmt::Display>::fmt;
        v0 = &g_830728;
        v1 = 2;
        v4 = 0;
        v2 = &v17;
        v3 = 2;
        v9.map_or_else(0, v32, &v0);
        v8 = 9223372036854775848;
        v33 = v0.error(a1, &v8);
        v34 = *((int128_t *)&v7);
        v13 = v34;
        v35 = *((int128_t *)&v1);
        memcpy(&v12, &v5, 16);
        memcpy(&v11, &v4, 16);
        memcpy(&v10, &v3, 16);
        v8 = v35;
        a0[64] = v34;
        a0[48] = v12;
        a0[32] = v11;
        a0[16] = v10;
        *(a0) = v35;
        return v33;
    }
    *((unsigned long long *)&a0[64]) = v29;
    a0[48] = v28;
    a0[32] = v27;
    a0[16] = v26;
    *(a0) = v25;
    *((char *)&a0[72]) = 37;
    return v29;
}
