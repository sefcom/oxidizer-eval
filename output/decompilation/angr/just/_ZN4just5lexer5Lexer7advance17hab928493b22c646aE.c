long long just::lexer::Lexer::advance(struct_1 *a0, struct_0 *a1)
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long v4;  // rax
    unsigned long long v5;  // rcx
    unsigned long long v6;  // r14
    unsigned long long v7;  // rbx
    unsigned int v8;  // edx
    unsigned long v9;  // rax

    v4 = a1->field_c0;
    if ((unsigned int)v4 == 0x110000)
        return a0.internal_error(a1, "Lexer advanced past end of textsrc/lexer.rsLexer presumed character `", 31);
    v5 = 1;
    if ((unsigned int)v4 >= 128)
    {
        v5 = 2;
        if ((unsigned int)v4 >= 0x800)
            v5 = 4 - ((unsigned int)v4 < 0x10000);
    }
    v2 = v6;
    v1 = v7;
    v0 = v4;
    a1->field_a0 = a1->field_a0 + v5;
    a1->field_90 = a1->field_90 + v5;
    if ((unsigned int)v4 == 10)
    {
        a1->field_90 = 0;
        a1->field_98 = a1->field_98 + 1;
    }
    v9 = (((char)core::str::validations::next_code_point(&a1->padding_0[96]) & 1) ? v8 : 0x110000);
    a1->field_c0 = v9;
    a0->field_48 = 37;
    return v9;
}
