long long uu_test::parser::Parser::maybe_boolop::h6a2145789e0be5b1(struct_0 *a0, void* a1)
{
    int v0;  // [sp-0xd8]
    int v1;  // [sp-0xc8]
    unsigned long long v2;  // [sp-0xb8]
    char v3;  // [bp-0xa8]
    char v4;  // [bp-0x98]
    char v5;  // [bp-0x88]
    char v6;  // [bp-0x80]
    char v7;  // [bp-0x70]
    char v8;  // [bp-0x58]
    char v9;  // [bp-0x30]
    unsigned long long v11;  // rax
    int v12;  // xmm0
    int v13;  // xmm1

    v11 = uu_test::parser::Parser::peek_is_boolop::hc6eb978165e1faff(a1);
    if (!(char)v11)
    {
        a0->field_0 = 7;
        return v11;
    }
    uu_test::parser::Parser::next_token::h6f84863b823a4061(&v3, a1);
    uu_test::parser::Parser::peek::h7974389b8f48fbed(&v8, a1);
    if (*((int *)&v8) != 6)
    {
        v2 = *((long long *)&v5);
        *((int128_t *)&v1) = *((int128_t *)&v4);
        *((int128_t *)&v0) = *((int128_t *)&v3);
        uu_test::parser::Parser::boolop::h876dfcd6445104eb(&v6, a1, &v0);
        if (*((int *)&v6) != 7)
        {
            v12 = *((int128_t *)&v6);
            v13 = *((int128_t *)&v7);
        }
        else
        {
            uu_test::parser::Parser::maybe_boolop::h6a2145789e0be5b1(&v0, a1);
            if ((int)v0 == 7)
            {
                v11 = ::0x4ae000::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h83d505a150af3249(&v8);
                a0->field_0 = 7;
                return v11;
            }
        }
    }
    else
    {
        v2 = *((long long *)&v5);
        *((int128_t *)&v1) = *((int128_t *)&v4);
        *((int128_t *)&v0) = *((int128_t *)&v3);
        uu_test::parser::Symbol::into_literal::hab166192b9973048(&v6, &v0);
        uu_test::parser::Parser::literal::h2517b2c523cfb427(&v9, a1, &v6);
        if (*((int *)&v9) == 7)
        {
            ::0x4ae000::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h83d505a150af3249(&v8);
            a0->field_0 = 7;
            return v11;
        }
    }
    *((void*)&a0->field_10) = v13;
    *((void*)&a0->field_0) = v12;
    v11 = ::0x4ae000::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h83d505a150af3249(&v8);
    return v11;
}
