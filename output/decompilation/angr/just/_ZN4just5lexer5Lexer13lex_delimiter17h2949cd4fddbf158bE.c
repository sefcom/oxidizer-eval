long long just::lexer::Lexer::lex_delimiter(uint128_t a0[5], void* a1, char a2)
{
    char v0;  // [bp-0x91]
    char v1;  // [bp-0x90], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x88]
    char *v3;  // [bp-0x80], Other Possible Types: char
    unsigned long long v4;  // [bp-0x78]
    void* v5;  // [bp-0x70], Other Possible Types: char
    int v6;  // [bp-0x60]
    char v7;  // [bp-0x50]
    char v8;  // [bp-0x48]
    char *v9;  // [bp-0x40]
    unsigned long long v10;  // [bp-0x38]
    char v11;  // [bp-0x30]
    unsigned long long v13;  // rsi
    void* v14;  // 4096
    unsigned long long v15;  // rax
    int v16;  // xmm0
    int v17;  // xmm1
    int v18;  // xmm2

    v0 = a2;
    switch (a2)
    {
    case 7:
        v13 = 0;
        v14 = a1;
        break;
    case 8:
        v15 = v1.close_delimiter(a1, 0);
        if (v8 != 37)
        {
            a0[4] = *((int128_t *)&v7);
            v16 = *((int128_t *)&v1);
            v17 = *((int128_t *)&v3);
            v18 = *((int128_t *)&v5);
            *((void*)&a0[3]) = v6;
            *((void*)&a0[2]) = v18;
            *((void*)&a0[1]) = v17;
            *((void*)&a0[0]) = v16;
            return v15;
        }
        break;
    case 9:
        v13 = 1;
        v14 = a1;
        break;
    case 10:
        v15 = v1.close_delimiter(a1, 1);
        if (v8 != 37)
        {
            a0[4] = *((int128_t *)&v7);
            v16 = *((int128_t *)&v1);
            v17 = *((int128_t *)&v3);
            v18 = *((int128_t *)&v5);
            *((void*)&a0[3]) = v6;
            *((void*)&a0[2]) = v18;
            *((void*)&a0[1]) = v17;
            *((void*)&a0[0]) = v16;
            return v15;
        }
        break;
    case 28:
        v13 = 2;
        v14 = a1;
        v14.open_delimiter(v13);
    case 29:
        v15 = v1.close_delimiter(a1, 2);
        if (v8 != 37)
        {
            a0[4] = *((int128_t *)&v7);
            v16 = *((int128_t *)&v1);
            v17 = *((int128_t *)&v3);
            v18 = *((int128_t *)&v5);
            *((void*)&a0[3]) = v6;
            *((void*)&a0[2]) = v18;
            *((void*)&a0[1]) = v17;
            *((void*)&a0[0]) = v16;
            return v15;
        }
        break;
    default:
        v9 = &v0;
        v10 = <just::token_kind::TokenKind as core::fmt::Display>::fmt;
        v1 = &g_830500;
        v2 = 2;
        v5 = 0;
        v3 = &v9;
        v4 = 1;
        v11.map_or_else(0, a2, &v1);
        return a0.internal_error(a1, &v11);
    }
    return a0.lex_single(a1, a2);
}
