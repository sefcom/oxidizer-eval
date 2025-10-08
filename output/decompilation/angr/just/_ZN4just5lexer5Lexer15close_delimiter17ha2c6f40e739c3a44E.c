long long just::lexer::Lexer::close_delimiter(struct_0 *a0, unsigned long long a1[9], char a2)
{
    unsigned long long v0;  // [bp-0x68]
    char v1;  // [bp-0x60], Other Possible Types: unsigned long
    char v2;  // [bp-0x58]
    char v3;  // [bp-0x57]
    unsigned long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax

    if (a1[8])
    {
        v5 = a1[8] - 1;
        a1[8] = v5;
        v6 = v5 * 16;
        if (*((char *)(a1[7] + v6)) == a2)
        {
            a0->field_48 = 37;
            return v6;
        }
        v2 = a2;
        v3 = *((char *)(a1[7] + v6));
        v1 = *((long long *)(a1[7] + v6 + 8));
        v7 = 9223372036854775851;
    }
    else
    {
        v1 = a2;
        v7 = 9223372036854775862;
    }
    v0 = v7;
    return a0.error(a1, &v0);
}
