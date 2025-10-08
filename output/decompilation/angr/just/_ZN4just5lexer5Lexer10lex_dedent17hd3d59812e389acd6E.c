long long just::lexer::Lexer::lex_dedent(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x40]
    void* v1;  // [bp-0x38]
    unsigned long long v3;  // rax

    v0 = a0->field_a0 - a0->field_b8;
    if (a0->field_a0 != a0->field_b8)
    {
        v1 = 0;
        core::panicking::assert_failed(0, &v0, &g_4692d0, &v1, &g_8304e8); /* do not return */
    }
    a0.token(17);
    v3 = a0->field_10;
    if (v3)
    {
        v3 -= 1;
        a0->field_10 = v3;
    }
    a0->field_c4 = 0;
    return v3;
}
