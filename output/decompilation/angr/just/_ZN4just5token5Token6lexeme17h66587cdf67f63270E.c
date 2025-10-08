long long just::token::Token::lexeme(unsigned long long a0[8])
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // r15
    unsigned long long v4;  // r12
    unsigned long long v5;  // rax

    v0 = v2;
    v3 = a0[7];
    v4 = a0[5] + v3;
    v5 = v3.get(v4, a0[2], a0[3]);
    if (!v5)
        core::str::slice_error_fail(a0[2], a0[3], v3, v4, &g_831738); /* do not return */
    return v5;
}
