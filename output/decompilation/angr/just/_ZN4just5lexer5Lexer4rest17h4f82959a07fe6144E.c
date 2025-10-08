long long just::lexer::Lexer::rest(unsigned long long a0[21])
{
    unsigned long long v1;  // rbx
    unsigned long long v2;  // rax

    v1 = a0[17];
    v2 = a0[20].get(a0[16], v1);
    if (!v2)
        core::str::slice_error_fail(a0[16], v1, a0[20], v1, &g_8303c8); /* do not return */
    return v2;
}
