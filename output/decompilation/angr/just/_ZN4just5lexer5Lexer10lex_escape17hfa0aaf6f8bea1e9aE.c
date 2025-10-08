long long just::lexer::Lexer::lex_escape(void* a0, struct_0 *a1)
{
    char v0;  // [bp-0x80], Other Possible Types: unsigned long long
    char v1;  // [bp-0x7f]
    unsigned int v2;  // [bp-0x78]
    char v3;  // [bp-0x70]
    char v4;  // [bp-0x6f]
    char v5;  // [bp-0x60]
    char v6;  // [bp-0x5f]
    char v7;  // [bp-0x50]
    char v8;  // [bp-0x4f]
    unsigned long v9;  // [bp-0x40]
    char v10;  // [bp-0x38]
    char v11;  // [bp-0x37]
    char v12;  // [bp-0x34]
    unsigned long long v14;  // rax
    unsigned long v15;  // rax
    char v16;  // cl
    unsigned long long v17;  // rax
    int v19;  // xmm0
    int v20;  // xmm1
    int v21;  // xmm2
    unsigned int v22;  // esi
    int v23;  // xmm0
    int v24;  // xmm1
    int v25;  // xmm2

    v14 = (char)v0.presume(a1, 92);
    if (v10 == 37)
    {
        (char)v0.accepted(a1, 10);
        v15 = v0;
        if (v10 != 37)
        {
            *((unsigned long *)&a0[64]) = v9;
            v19 = *((int128_t *)&v1);
            v20 = *((int128_t *)&v4);
            v21 = *((int128_t *)&v6);
            *((int128_t *)&a0[49]) = *((int128_t *)&v8);
            a0[33] = v21;
            a0[17] = v20;
            a0[1] = v19;
            v22 = *((int *)&v12);
            *((int *)&a0[73]) = *((int *)&v11);
            *((unsigned int *)&a0[76]) = v22;
            *((char *)a0) = v15;
            *((char *)&a0[72]) = v10;
            return v15;
        }
        else if (!((char)v15 & 1))
        {
            (char)v0.accepted(a1, 13);
            v15 = v0;
            v16 = v10;
            if (v10 != 37)
            {
                *((unsigned long *)&a0[64]) = v9;
                v19 = *((int128_t *)&v1);
                v20 = *((int128_t *)&v4);
                v21 = *((int128_t *)&v6);
                *((int128_t *)&a0[49]) = *((int128_t *)&v8);
                a0[33] = v21;
                a0[17] = v20;
                a0[1] = v19;
                v22 = *((int *)&v12);
                *((int *)&a0[73]) = *((int *)&v11);
                *((unsigned int *)&a0[76]) = v22;
                *((char *)a0) = v15;
                *((char *)&a0[72]) = v10;
                return v15;
            }
            if (((char)v15 & 1))
            {
                (char)v0.accepted(a1, 10);
                v15 = v0;
                if (v10 != 37)
                {
                    *((unsigned long *)&a0[64]) = v9;
                    v19 = *((int128_t *)&v1);
                    v20 = *((int128_t *)&v4);
                    v21 = *((int128_t *)&v6);
                    *((int128_t *)&a0[49]) = *((int128_t *)&v8);
                    a0[33] = v21;
                    a0[17] = v20;
                    a0[1] = v19;
                    v22 = *((int *)&v12);
                    *((int *)&a0[73]) = *((int *)&v11);
                    *((unsigned int *)&a0[76]) = v22;
                    *((char *)a0) = v15;
                    *((char *)&a0[72]) = v10;
                    return v15;
                }
                if (((char)v15 & 1))
                {
                    if (!a1->field_c0.next_is_whitespace())
                    {
                        a1.token(36);
                        *((char *)&a0[72]) = 37;
                        return v17;
                    }
                    while (true)
                    {
                        v14 = (char)v0.advance(a1);
                        if (v10 != 37)
                            break;
                        if (!a1->field_c0.next_is_whitespace())
                        {
                            a1.token(36);
                            *((char *)&a0[72]) = 37;
                            return v17;
                        }
                    }
                }
                else
                {
                    v0 = 9223372036854775877;
                    return a0.error(a1, &(char)v0);
                }
            }
            else
            {
                v17 = a1->field_c0;
                if ((unsigned int)v17 != 0x110000)
                {
                    v2 = v17;
                    v0 = 9223372036854775850;
                    return a0.error(a1, &(char)v0);
                }
                *((char *)&a0[72]) = 37;
                return v17;
            }
        }
        else if (a1->field_c0.next_is_whitespace())
        {
            while (true)
            {
                v14 = (char)v0.advance(a1);
                if (v10 != 37)
                    break;
                if (!a1->field_c0.next_is_whitespace())
                {
                    a1.token(36);
                    *((char *)&a0[72]) = 37;
                    return v17;
                }
            }
        }
        else
        {
            a1.token(36);
            *((char *)&a0[72]) = 37;
            return v17;
        }
    }
    *((int128_t *)&a0[64]) = *((int128_t *)&v9);
    v23 = *((int128_t *)&v0);
    v24 = *((int128_t *)&v3);
    v25 = *((int128_t *)&v5);
    *((int128_t *)&a0[48]) = *((int128_t *)&v7);
    a0[32] = v25;
    a0[16] = v24;
    *(a0) = v23;
    return v14;
}
