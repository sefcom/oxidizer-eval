double just::lexer::Lexer::lex_interpolation(long long a0, long long a1, long long a2, long long a3)
{
    int v0;  // [bp-0x70], Other Possible Types: char
    int v1;  // [bp-0x60]
    int v2;  // [bp-0x50]
    int v3;  // [bp-0x40]
    char v4;  // [bp-0x30]
    char v5;  // [bp-0x28]
    unsigned long long v7;  // rax
    unsigned long v8;  // xmm0lq
    unsigned long v9;  // xmm0lq
    unsigned long v10;  // xmm0lq
    unsigned long v11;  // xmm0lq

    if ((char)a1.rest_starts_with("}}Lexer::lex_interpolation found `}}` but was called with empty interpolation stack.Lexer::lex_delimiter called with non-delimiter token: `", 2))
    {
        v7 = a1[5];
        if (v7)
        {
            a1[5] = v7 - 1;
            if (*((char *)(a1[4] + v7 * 72 - 8)) != 37)
            {
                a0.lex_double(a1, 26);
                return v8;
            }
        }
        v0.advance(a1);
        if (v5 == 37)
        {
            v0.advance(a1);
            if (v5 == 37)
            {
                a0.internal_error(a1, "Lexer::lex_interpolation found `}}` but was called with empty interpolation stack.Lexer::lex_delimiter called with non-delimiter token: `", 82);
                return v9;
            }
        }
        a0[4] = *((int128_t *)&v4);
        *((void*)&a0[3]) = v3;
        *((void*)&a0[2]) = v2;
        *((void*)&a0[1]) = v1;
        *((void*)&a0[0]) = v0;
        return (unsigned long long)v0;
    }
    else if (a1.at_eol_or_eof())
    {
        a0.unterminated_interpolation_error(a2);
        return v10;
    }
    else
    {
        a0.lex_normal(a1, a3);
        return v11;
    }
}
