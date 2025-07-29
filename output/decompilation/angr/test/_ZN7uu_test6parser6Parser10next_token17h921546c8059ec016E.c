long long uu_test::parser::Parser::next_token(void* a0, struct_0 *a1)
{
    char v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x20]
    int v2;  // [bp-0x18]
    unsigned long long v4;  // rax

    v4 = a1->field_18;
    a1->field_18 = 9223372036854775809;
    if (v4 == 9223372036854775809)
    {
        v0.next(a1 + 1);
    }
    else
    {
        *((uint128_t *)&v2) = a1->field_20;
        v1 = v4;
    }
    return a0.new(&v0);
}
