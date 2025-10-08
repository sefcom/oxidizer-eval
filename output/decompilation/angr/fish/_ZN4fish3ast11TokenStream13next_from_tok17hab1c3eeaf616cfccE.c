double fish::ast::TokenStream::next_from_tok(long long a0, long long a1)
{
    char v0;  // [bp-0x38]
    char v1;  // [bp-0x2f]
    unsigned long long v4;  // rdx
    int v5;  // xmm0

    v0.advance_1(a1);
    if (v1 == 14)
    {
        do
        {
            a1.push((unsigned int)v0.range(), v4, &g_14c50b0);
            v0.advance_1(a1);
        } while (v1 == 14);
    }
    v5 = *((int128_t *)&v0);
    *((void*)a0) = v5;
    return (unsigned long long)v5;
}
