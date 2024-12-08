long long uu_test::parser::Parser::term::ha6227a735c9fe8ac(struct_0 *a0, void* a1, unsigned long a2)
{
    int v0;  // [bp-0x88], Other Possible Types: char
    int v1;  // [sp-0x78]
    unsigned long long v2;  // [sp-0x68]
    char v3;  // [bp-0x60]
    char v4;  // [bp-0x50]
    char v5;  // [bp-0x40]
    int v6;  // [sp-0x38]
    int v7;  // [sp-0x28]
    unsigned long long v8;  // [sp-0x18]
    unsigned long long v10;  // rax
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rax
    unsigned long long v13;  // rdx

    uu_test::parser::Parser::next_token::h6f84863b823a4061(&v3, a1);
    v10 = *((long long *)&v3);
    switch (v10)
    {
    case 0:
        uu_test::parser::Parser::lparen::hcb9e63efb7435e8e(&v0, a1, v11);
        break;
    case 1:
        uu_test::parser::Parser::bang::hb90250133902b9b0(&v0, a1, v13);
    case 5:
        v2 = *((long long *)&v5);
        *((int128_t *)&v1) = *((int128_t *)&v4);
        *((int128_t *)&v0) = *((int128_t *)&v3);
        v12 = uu_test::parser::Parser::uop::h507107ac68ac9e4c(a1, &v0);
        a0->field_0 = 7;
        return v12;
    case 6:
        v2 = *((long long *)&v5);
        *((int128_t *)&v1) = *((int128_t *)&v4);
        *((int128_t *)&v0) = *((int128_t *)&v3);
        v12 = alloc::vec::Vec$LT$T$C$A$GT$::push::h1c5600de317c134f(a1, &v0);
        a0->field_0 = 7;
        return v12;
    default:
        v8 = *((long long *)&v5);
        *((int128_t *)&v7) = *((int128_t *)&v4);
        *((int128_t *)&v6) = *((int128_t *)&v3);
        v12 = uu_test::parser::Parser::literal::h2517b2c523cfb427(&v0, a1, &v6);
        if ((int)v0 == 7)
        {
            a0->field_0 = 7;
            return v12;
        }
        *((void*)&a0->field_10) = v1;
        *((void*)&a0->field_0) = v0;
        return v12;
    }
    if ((int)v0 == 7)
    {
        a0->field_0 = 7;
    }
    else
    {
        *((void*)&a0->field_10) = v1;
        *((void*)&a0->field_0) = v0;
    }
    v12 = ::0x4ae000::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h83d505a150af3249(&v3);
    return v12;
}
