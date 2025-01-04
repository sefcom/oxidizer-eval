long long uu_test::parser::Parser::expr::h14b244d6254724ab(struct_0 *a0, void* a1, unsigned long a2)
{
    char v0;  // [bp-0x30]
    char v1;  // [bp-0x20]
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rax
    int v5;  // xmm0

    if ((char)uu_test::parser::Parser::peek_is_boolop::h626769eb8da01166(a1) || (v4 = uu_test::parser::Parser::term::h385cc0ae73b5bef0(&v0, a1, v3), *((int *)&v0) == 7))
    {
        v4 = uu_test::parser::Parser::maybe_boolop::h62a19c04e1420d25(&v0, a1);
        if (*((int *)&v0) == 7)
        {
            a0->field_0 = 7;
            return v4;
        }
    }
    v5 = *((int128_t *)&v0);
    a0->field_10 = *((int128_t *)&v1);
    *((void*)&a0->field_0) = v5;
    return v4;
}
