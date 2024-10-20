long long uu_test::parser::Parser::next_token::h085d805503f01d40(unsigned long long a0[5], struct_1 *a1)
{
    int v0;  // [sp-0x18], Other Possible Types: unsigned long long (64 bits)[3], unsigned long long
    int v1;  // [bp-0x10]
    unsigned long long v2;  // [sp-0x8]
    unsigned long long v4;  // rcx
    struct_0 *v5;  // rcx

    v4 = a1->field_18;
    a1->field_18 = 9223372036854775809;
    if (v0 != 9223372036854775809)
    {
        *((uint128_t *)&v1) = a1->field_20;
        v0 = v4;
    }
    else
    {
        v5 = a1->field_38;
        if (v5 == a1->field_48)
        {
            v0 = 0x8000000000000000;
        }
        else
        {
            a1->field_38 = &v5[1];
            v2 = v5->field_10;
            *((uint128_t *)&v0) = v5->field_0;
        }
    }
    return uu_test::parser::Symbol::new::h6625985994e45cab(a0, v0);
}
