double uu_test::parser::Parser::expr(long long a0, long long a1)
{
    int v0;  // [bp-0x30], Other Possible Types: char
    char v1;  // [bp-0x20]
    unsigned long v3;  // xmm0lq

    if (!(char)a1.peek_is_boolop())
    {
        v0.term(a1);
        if (*((int *)&v0) != 7)
        {
            a0->field_10 = *((int128_t *)&v1);
            *((void*)&a0->field_0) = v0;
            return (unsigned long long)v0;
        }
    }
    v0.maybe_boolop(a1);
    if ((int)v0 != 7)
    {
        a0->field_10 = *((int128_t *)&v1);
        *((void*)&a0->field_0) = v0;
        return (unsigned long long)v0;
    }
    *((unsigned long long *)&a0->field_0) = 7;
    return v3;
}
