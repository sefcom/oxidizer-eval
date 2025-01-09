long long uu_test::parser::Parser::expr::h14b244d6254724ab(struct_0 *a0, void* a1)
{
    char v0;  // [bp-0x30]
    char v1;  // [bp-0x20]
    unsigned long long v3;  // rax
    int v4;  // xmm0

    if ((char)uu_test::parser::Parser::peek_is_boolop::h626769eb8da01166(a1) || (v3 = uu_test::parser::Parser::term::h385cc0ae73b5bef0(&v0, a1), *((int *)&v0) == 7))
    {
        v3 = uu_test::parser::Parser::maybe_boolop::h62a19c04e1420d25(&v0, a1);
        if (*((int *)&v0) == 7)
        {
            a0->field_0 = 7;
            return v3;
        }
    }
    v4 = *((int128_t *)&v0);
    a0->field_10 = *((int128_t *)&v1);
    *((void*)&a0->field_0) = v4;
    return v3;
}
