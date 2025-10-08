long long just::parser::Parser::accepted_keyword(void* a0, unsigned long long a1, char a2)
{
    unsigned int v0;  // [bp-0x110]
    unsigned int v1;  // [bp-0x10d]
    char v2;  // [bp-0x108], Other Possible Types: unsigned long
    char v3;  // [bp-0x100]
    char v4;  // [bp-0xf8]
    char v5;  // [bp-0xf0]
    char v6;  // [bp-0xe8]
    char v7;  // [bp-0xe0]
    char v8;  // [bp-0xd8]
    unsigned long v9;  // [bp-0xd0]
    char v10;  // [bp-0xc8]
    char v11;  // [bp-0xc7]
    unsigned int v12;  // [bp-0xc4]
    char v13;  // [bp-0xc0]
    char v14;  // [bp-0xbf]
    unsigned int v15;  // [bp-0xbc]
    char v16;  // [bp-0xb8], Other Possible Types: unsigned int
    unsigned int v17;  // [bp-0xb5]
    int v18;  // [bp-0xa8], Other Possible Types: char
    int v19;  // [bp-0x98], Other Possible Types: char
    int v20;  // [bp-0x88], Other Possible Types: char
    char v21;  // [bp-0x78]
    int v22;  // [bp-0x68]
    int v23;  // [bp-0x58]
    int v24;  // [bp-0x48]
    char v25;  // [bp-0x38]
    unsigned int v26;  // [bp-0x37]
    unsigned int v27;  // [bp-0x34]
    unsigned long long v29;  // rax
    unsigned long long v30;  // rdx
    unsigned long v31;  // rax
    char v32;  // al
    unsigned long long v33;  // rax
    int v34;  // xmm0
    int v35;  // xmm1
    int v36;  // xmm2
    unsigned int v37;  // edi
    unsigned int v38;  // edx
    int v39;  // xmm0
    unsigned int v40;  // edx

    v2.next(a1);
    memcpy(&v16, &v2, 16);
    memcpy(&v18, &v4, 16);
    memcpy(&v19, &v6, 16);
    memcpy(&v20, &v8, 16);
    v0 = *((int *)&v11);
    v1 = v12;
    if (v13 != 37)
    {
        v38 = *((int *)&v14);
        *((unsigned int *)&a0[76]) = v15;
        *((unsigned int *)&a0[73]) = v38;
        v39 = *((int128_t *)&v16);
        a0[48] = v20;
        a0[32] = v19;
        a0[16] = v18;
        *(a0) = v39;
        v40 = v0;
        *((unsigned int *)&a0[68]) = v1;
        *((unsigned int *)&a0[65]) = v40;
        *((char *)&a0[64]) = v25;
        *((char *)&a0[72]) = v13;
        return v10;
    }
    memcpy(&v21, &v16, 16);
    v22 = v18;
    v23 = v19;
    v24 = v20;
    v26 = v0;
    v27 = v1;
    v25 = v10;
    if (v25 == 24)
    {
        v29 = v21.lexeme();
        if (!(char)v29.equal(v30, a2.lexeme(), v30))
            goto LABEL_6779ba;
        v2.advance(a1);
        v31 = v13;
        if ((char)v31 != 37)
        {
            v34 = *((int128_t *)&v3);
            v16 = *((int *)&v11);
            v17 = v12;
            *((unsigned int *)&a0[76]) = v15;
            *((int *)&a0[73]) = *((int *)&v14);
            v35 = *((int128_t *)&v5);
            v36 = *((int128_t *)&v7);
            v37 = v16;
            *((unsigned int *)&a0[68]) = v17;
            *((unsigned int *)&a0[65]) = v37;
            *((unsigned long *)a0) = v2;
            a0[8] = v34;
            a0[24] = v35;
            a0[40] = v36;
            *((unsigned long *)&a0[56]) = v9;
            *((char *)&a0[64]) = v10;
            *((char *)&a0[72]) = v31;
            return v31;
        }
        v32 = 1;
        v33 = 1;
    }
    else
    {
LABEL_6779ba:
        v33 = 0;
    }
    *((char *)a0) = v32;
    *((char *)&a0[72]) = 37;
    return v33;
}
