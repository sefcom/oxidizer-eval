long long just::lexer::Lexer::lex_identifier(struct_0 *a0, struct_1 *a1)
{
    int v0;  // [bp-0x68], Other Possible Types: char
    int v1;  // [bp-0x58]
    int v2;  // [bp-0x48]
    int v3;  // [bp-0x38]
    char v4;  // [bp-0x28]
    char v5;  // [bp-0x20]
    unsigned long long v7;  // rax
    unsigned int v8;  // eax
    unsigned long long v9;  // rax

    v7 = v0.advance(a1);
    if (v5 != 37)
    {
        *((int128_t *)&a0->field_40[0]) = *((int128_t *)&v4);
        *((void*)&a0->field_30) = v3;
        *((void*)&a0->field_20) = v2;
        *((void*)&a0->field_10) = v1;
        *((void*)&a0->field_0) = v0;
        return v7;
    }
    v8 = a1->field_c0;
    if (a1->field_c0 != 0x110000)
    {
        while (v8 - 97 < 26 || v8 >= 65 && (v8 == 95 || v8 < 91) || !(10 <= v8 - 48 & v8 != 45))
        {
            v7 = v0.advance(a1);
            if (v5 != 37)
            {
                *((int128_t *)&a0->field_40[0]) = *((int128_t *)&v4);
                *((void*)&a0->field_30) = v3;
                *((void*)&a0->field_20) = v2;
                *((void*)&a0->field_10) = v1;
                *((void*)&a0->field_0) = v0;
                return v7;
            }
            v8 = a1->field_c0;
            if (a1->field_c0 == 0x110000)
                break;
        }
    }
    v9 = a1.token(24);
    a0->field_40[8] = 37;
    return v9;
}
