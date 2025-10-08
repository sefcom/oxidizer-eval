long long just::lexer::Lexer::lex_double(struct_0 *a0, void* a1, char a2)
{
    int v0;  // [bp-0x68], Other Possible Types: char
    int v1;  // [bp-0x58]
    int v2;  // [bp-0x48]
    int v3;  // [bp-0x38]
    char v4;  // [bp-0x28]
    char v5;  // [bp-0x20]
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax

    v7 = v0.advance(a1);
    if (v5 == 37)
    {
        v7 = v0.advance(a1);
        if (v5 == 37)
        {
            v8 = a1.token(a2);
            a0->field_40[8] = 37;
            return v8;
        }
    }
    *((int128_t *)&a0->field_40[0]) = *((int128_t *)&v4);
    *((void*)&a0->field_30) = v3;
    *((void*)&a0->field_20) = v2;
    *((void*)&a0->field_10) = v1;
    *((void*)&a0->field_0) = v0;
    return v7;
}
