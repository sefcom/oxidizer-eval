double just::lexer::Lexer::lex_colon(long long a0, long long a1)
{
    char v0;  // [bp-0x60]
    char v1;  // [bp-0x5f]
    char v2;  // [bp-0x50]
    char v3;  // [bp-0x4f]
    char v4;  // [bp-0x40]
    char v5;  // [bp-0x3f]
    char v6;  // [bp-0x30]
    char v7;  // [bp-0x2f]
    unsigned long v8;  // [bp-0x20]
    char v9;  // [bp-0x18]
    char v10;  // [bp-0x17]
    char v11;  // [bp-0x14]
    char v13;  // sil
    unsigned long v14;  // xmm0lq
    int v15;  // xmm0
    int v16;  // xmm1
    int v17;  // xmm2
    unsigned int v18;  // esi
    int v19;  // xmm0
    int v20;  // xmm1
    int v21;  // xmm2

    v0.presume(a1, 58);
    if (v9 != 37)
    {
        *((int128_t *)&a0[64]) = *((int128_t *)&v8);
        v19 = *((int128_t *)&v0);
        v20 = *((int128_t *)&v2);
        v21 = *((int128_t *)&v4);
        *((int128_t *)&a0[48]) = *((int128_t *)&v6);
        a0[32] = v21;
        a0[16] = v20;
        *(a0) = v19;
        return (unsigned long long)v19;
    }
    v0.accepted(a1, 61);
    if (v9 != 37)
    {
        *((unsigned long *)&a0[64]) = v8;
        v15 = *((int128_t *)&v1);
        v16 = *((int128_t *)&v3);
        v17 = *((int128_t *)&v5);
        *((int128_t *)&a0[49]) = *((int128_t *)&v7);
        a0[33] = v17;
        a0[17] = v16;
        a0[1] = v15;
        v18 = *((int *)&v11);
        *((int *)&a0[73]) = *((int *)&v10);
        *((unsigned int *)&a0[76]) = v18;
        *((char *)a0) = v0;
        *((char *)&a0[72]) = v9;
        return (unsigned long long)v15;
    }
    else if ((v0 & 1))
    {
        v13 = 14;
        goto LABEL_672764;
    }
    else
    {
        v0.accepted(a1, 58);
        if (v9 != 37)
        {
            *((unsigned long *)&a0[64]) = v8;
            v15 = *((int128_t *)&v1);
            v16 = *((int128_t *)&v3);
            v17 = *((int128_t *)&v5);
            *((int128_t *)&a0[49]) = *((int128_t *)&v7);
            a0[33] = v17;
            a0[17] = v16;
            a0[1] = v15;
            v18 = *((int *)&v11);
            *((int *)&a0[73]) = *((int *)&v10);
            *((unsigned int *)&a0[76]) = v18;
            *((char *)a0) = v0;
            *((char *)&a0[72]) = v9;
            return (unsigned long long)v15;
        }
        if ((v0 & 1))
        {
            v13 = 13;
LABEL_672764:
            a1.token(v13);
        }
        else
        {
            a1.token(12);
            a1->field_c5 = 1;
        }
        *((char *)&a0[72]) = 37;
        return v14;
    }
}
