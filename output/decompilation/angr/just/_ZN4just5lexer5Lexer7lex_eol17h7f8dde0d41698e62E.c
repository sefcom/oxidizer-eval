double just::lexer::Lexer::lex_eol(long long a0, long long a1)
{
    char v0;  // [bp-0x78], Other Possible Types: unsigned long long
    char v1;  // [bp-0x77]
    char v2;  // [bp-0x68]
    char v3;  // [bp-0x67]
    char v4;  // [bp-0x58]
    char v5;  // [bp-0x57]
    char v6;  // [bp-0x48]
    char v7;  // [bp-0x47]
    char v8;  // [bp-0x38], Other Possible Types: unsigned long
    char v9;  // [bp-0x30]
    char v10;  // [bp-0x2f]
    char v11;  // [bp-0x2c]
    char v13;  // al
    char *v14;  // rdi
    unsigned long v15;  // xmm0lq
    unsigned long v16;  // xmm0lq
    int v17;  // xmm0
    int v18;  // xmm1
    int v19;  // xmm2
    int v20;  // xmm0
    int v21;  // xmm1
    int v22;  // xmm2
    unsigned int v23;  // esi

    v0.accepted(a1, 13);
    v13 = v0;
    if (v9 != 37)
    {
        *((unsigned long *)&a0[64]) = v8;
        v20 = *((int128_t *)&v1);
        v21 = *((int128_t *)&v3);
        v22 = *((int128_t *)&v5);
        *((int128_t *)&a0[49]) = *((int128_t *)&v7);
        a0[33] = v22;
        a0[17] = v21;
        a0[1] = v20;
        v23 = *((int *)&v11);
        *((int *)&a0[73]) = *((int *)&v10);
        *((unsigned int *)&a0[76]) = v23;
        *((char *)a0) = v13;
        *((char *)&a0[72]) = v9;
        return (unsigned long long)v20;
    }
    v14 = &v0;
    if ((v0 & 1))
    {
        v14.accepted(a1, 10);
        v13 = v0;
        if (v9 != 37)
        {
            *((unsigned long *)&a0[64]) = v8;
            v20 = *((int128_t *)&v1);
            v21 = *((int128_t *)&v3);
            v22 = *((int128_t *)&v5);
            *((int128_t *)&a0[49]) = *((int128_t *)&v7);
            a0[33] = v22;
            a0[17] = v21;
            a0[1] = v20;
            v23 = *((int *)&v11);
            *((int *)&a0[73]) = *((int *)&v10);
            *((unsigned int *)&a0[76]) = v23;
            *((char *)a0) = v13;
            *((char *)&a0[72]) = v9;
            return (unsigned long long)v20;
        }
        else if (!(v0 & 1))
        {
            v0 = 9223372036854775877;
            a0.error(a1, &v0);
            return v15;
        }
    }
    else
    {
        v14.presume(a1, 10);
        if (v9 != 37)
        {
            *((int128_t *)&a0[64]) = *((int128_t *)&v8);
            v17 = *((int128_t *)&v0);
            v18 = *((int128_t *)&v2);
            v19 = *((int128_t *)&v4);
            *((int128_t *)&a0[48]) = *((int128_t *)&v6);
            a0[32] = v19;
            a0[16] = v18;
            *(a0) = v17;
            return (unsigned long long)v17;
        }
    }
    a1.token((a1->field_40) * 16 + 20);
    *((char *)&a0[72]) = 37;
    return v16;
}
