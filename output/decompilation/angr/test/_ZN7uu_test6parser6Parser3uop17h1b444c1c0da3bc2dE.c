long long uu_test::parser::Parser::uop(void* a0, unsigned long long *a1)
{
    char v0;  // [bp-0x60]
    char v1;  // [bp-0x38]

    v0.next_token(a0);
    if (*((int *)&v0) != 6)
    {
        v1.into_literal(&v0);
        a0.push(&v1, &g_4e0290);
        return a0.push(a1, &g_4e02a8);
    }
    v1.into_literal(a1);
    a0.push(&v1, &g_4e0278);
    return core::ptr::drop_in_place<uu_test::parser::Symbol>(&v0);
}
