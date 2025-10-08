long long just::lexer::Lexer::rest_starts_with(unsigned long long a0[21], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx

    v0 = v2;
    return core::slice::<impl [T]>::starts_with(a0.rest(), v3, a1, a2);
}
