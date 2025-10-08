long long just::lexer::Lexer::lexeme(unsigned long long a0[24])
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    v3 = a0[23].get(a0[20], a0[16], a0[17]);
    if (!v3)
        core::str::slice_error_fail(a0[16], a0[17], a0[23], a0[20], &g_830390); /* do not return */
    return v3;
}
