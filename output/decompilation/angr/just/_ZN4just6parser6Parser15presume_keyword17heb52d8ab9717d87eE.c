long long just::parser::Parser::presume_keyword(struct_0 *a0, unsigned long long a1, char a2)
{
    char v0;  // [bp-0x169]
    unsigned int v1;  // [bp-0x168]
    char *v2;  // [bp-0x168], Other Possible Types: unsigned long
    unsigned int v3;  // [bp-0x165]
    unsigned long long v4;  // [bp-0x160]
    char *v5;  // [bp-0x158]
    unsigned long long v6;  // [bp-0x150]
    char v7;  // [bp-0x148], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x140]
    int v9;  // [bp-0x138], Other Possible Types: char *
    unsigned long long v10;  // [bp-0x130]
    int v11;  // [bp-0x128], Other Possible Types: void*
    int v12;  // [bp-0x118]
    int v13;  // [bp-0x110]
    char v14;  // [bp-0x100]
    int v15;  // [bp-0xe8], Other Possible Types: char, unsigned long long
    unsigned long long v16;  // [bp-0xe0]
    int v17;  // [bp-0xd8]
    int v18;  // [bp-0xc8]
    int v19;  // [bp-0xb8]
    int v20;  // [bp-0xa8], Other Possible Types: char
    char v21;  // [bp-0xa7]
    unsigned int v22;  // [bp-0xa4]
    char v23;  // [bp-0xa0]
    char v24;  // [bp-0x9f]
    unsigned int v25;  // [bp-0x9c]
    unsigned long long v26;  // [bp-0x78]
    unsigned long long v27;  // [bp-0x70]
    char v28;  // [bp-0x68]
    char v29;  // [bp-0x58]
    char v30;  // [bp-0x48]
    char v31;  // [bp-0x38]
    char v32;  // [bp-0x28]
    unsigned int v33;  // [bp-0x27]
    unsigned int v34;  // [bp-0x24]
    char v36;  // al
    unsigned long v37;  // rdx
    unsigned long long v38;  // rdx
    unsigned long long v39;  // rax
    unsigned long long v40;  // rdx
    unsigned long long v41;  // rax
    int v42;  // xmm0
    int v43;  // xmm1
    unsigned int v44;  // edx
    int v45;  // xmm0
    int v46;  // xmm1
    int v47;  // xmm2
    unsigned int v48;  // edx

    v0 = a2;
    v15.advance(a1);
    memcpy(&v7, &v15, 16);
    v9 = v17;
    v11 = v18;
    v12 = v19;
    v36 = v20;
    v1 = *((int *)&v21);
    v3 = v22;
    if (v23 != 37)
    {
        v44 = *((int *)&v24);
        *((unsigned int *)&a0->field_40[12]) = v25;
        *((unsigned int *)&a0->field_40[9]) = v44;
        v45 = *((int128_t *)&v7);
        v46 = (int128_t)v9;
        v47 = (int128_t)v11;
        a0->field_30 = (int128_t)v12;
        *((void*)&a0->field_20) = v47;
        *((void*)&a0->field_10) = v46;
        *((void*)&a0->field_0) = v45;
        v48 = v1;
        *((unsigned int *)&a0->field_40[4]) = v3;
        *((unsigned int *)&a0->field_40[1]) = v48;
        a0->field_40[0] = v32;
        a0->field_40[8] = v23;
        return v32;
    }
    memcpy(&v28, &v7, 16);
    memcpy(&v29, &v9, 16);
    memcpy(&v30, &v11, 16);
    memcpy(&v31, &v12, 16);
    v37 = v3;
    v33 = v1;
    v34 = v37;
    v32 = v36;
    if (v32 == 24)
    {
        v15 = v28.lexeme();
        v16 = v38;
        v39 = v0.eq(&v15);
        if ((char)v39)
        {
            a0->field_40[8] = 37;
            return v39;
        }
        v26 = v28.lexeme();
        v27 = v38;
        v2 = &v0;
        v4 = <just::keyword::Keyword as core::fmt::Display>::fmt;
        v5 = &v26;
        v6 = <&T as core::fmt::Display>::fmt;
        v7 = &g_8306f8;
        v8 = 3;
        v40 = v38;
    }
    else
    {
        v2 = &g_46e88e;
        v4 = <just::token_kind::TokenKind as core::fmt::Display>::fmt;
        v5 = &v32;
        v6 = <just::token_kind::TokenKind as core::fmt::Display>::fmt;
        v7 = &g_8306d8;
        v8 = 2;
        v40 = v37;
    }
    v11 = 0;
    v9 = &(char)v2;
    v10 = 2;
    v16.map_or_else(0, v40, &v7);
    v15 = 9223372036854775848;
    v41 = v7.error(a1, &v15);
    v42 = *((int128_t *)&v14);
    v20 = v42;
    v43 = *((int128_t *)&v8);
    v19 = v13;
    memcpy(&v18, &v11, 16);
    memcpy(&v17, &v10, 16);
    v15 = v43;
    *((void*)&a0->field_40[0]) = v42;
    *((void*)&a0->field_30) = v13;
    *((void*)&a0->field_20) = v18;
    *((void*)&a0->field_10) = v17;
    *((void*)&a0->field_0) = v43;
    return v41;
}
