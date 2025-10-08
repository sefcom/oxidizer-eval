long long just::lexer::Lexer::is_identifier(unsigned long long a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x18]
    unsigned long long v3;  // [bp-0x10]
    unsigned long long v5;  // rbx
    unsigned int v6;  // edx
    unsigned long long v7;  // rsi
    unsigned long long v8;  // rax

    v3 = v5;
    v0 = a0;
    v1 = a1 + a0;
    if (!((char)core::str::validations::next_code_point(&v0) & 1))
        return 0;
    if (v6 - 97 >= 26)
    {
        if (v6 < 65)
        {
            return 0;
        }
        else if ((v6 != 95 & 91 <= v6))
        {
            return 0;
        }
    }
    v0 = a0;
    v7 = 1;
    v7 = 1;
    while (true)
    {
        v7 = v2;
        if (v7)
        {
            v7 = 0;
            if (v0.advance_by(v7))
                break;
        }
        v7 = v2;
        if (!((char)core::str::validations::next_code_point(&v0) & 1))
            break;
        if (v6 - 97 >= 26 && (v6 < 65 || !v6 == 95 && !v6 < 91) && !v6 == 45 && !v6 - 48 < 10)
            return 0;
    }
    return v8 & 0xffffffffffffff00 | 1;
}
