long long just::lexer::Lexer::indentation(unsigned long a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    if (!a1)
    {
        v0 = v2;
        core::option::unwrap_failed(&g_8303e0); /* do not return */
    }
    return *((long long *)(a0 + a1 * 16 - 16));
}
