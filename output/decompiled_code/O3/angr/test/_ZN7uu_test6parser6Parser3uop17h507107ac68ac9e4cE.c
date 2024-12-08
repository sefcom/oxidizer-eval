long long uu_test::parser::Parser::uop::h507107ac68ac9e4c(void* a0, struct_0 *a1)
{
    int v0;  // [sp-0xb8]
    int v1;  // [sp-0xa8]
    unsigned long long v2;  // [sp-0x98]
    char v3;  // [bp-0x90]
    char v4;  // [bp-0x80]
    char v5;  // [bp-0x70]
    int v6;  // [sp-0x68]
    int v7;  // [sp-0x58]
    unsigned long long v8;  // [sp-0x48]
    char v9;  // [bp-0x40]
    unsigned long long v11;  // rax

    uu_test::parser::Parser::next_token::h6f84863b823a4061(&v3, a0);
    if (*((int *)&v3) == 6)
    {
        v2 = a1->field_20;
        *((uint128_t *)&v1) = a1->field_10;
        *((uint128_t *)&v0) = a1->field_0;
        uu_test::parser::Symbol::into_literal::hab166192b9973048(&v9, &v0);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h1c5600de317c134f(a0, &v9);
        v11 = ::0x4ae000::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h83d505a150af3249(&v3);
        return v11;
    }
    v8 = *((long long *)&v5);
    *((int128_t *)&v7) = *((int128_t *)&v4);
    *((int128_t *)&v6) = *((int128_t *)&v3);
    uu_test::parser::Symbol::into_literal::hab166192b9973048(&v0, &v6);
    alloc::vec::Vec$LT$T$C$A$GT$::push::h1c5600de317c134f(a0, &v0);
    v2 = a1->field_20;
    *((uint128_t *)&v1) = a1->field_10;
    *((uint128_t *)&v0) = a1->field_0;
    v11 = alloc::vec::Vec$LT$T$C$A$GT$::push::h1c5600de317c134f(a0, &v0);
    return v11;
}
