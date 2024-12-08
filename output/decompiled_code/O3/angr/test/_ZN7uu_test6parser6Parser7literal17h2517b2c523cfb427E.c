long long uu_test::parser::Parser::literal::h2517b2c523cfb427(struct_0 *a0, void* a1, unsigned int a2)
{
    int v0;  // [bp-0x118], Other Possible Types: char, unsigned long long
    unsigned long long v1;  // [sp-0x110]
    int v2;  // [sp-0x108], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x100]
    void* v4;  // [sp-0xf8], Other Possible Types: unsigned long long
    unsigned long v5;  // [sp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0xe0]
    char v7;  // [bp-0xd8]
    char v8;  // [bp-0xc8]
    char v9;  // [bp-0xb8]
    char v10;  // [bp-0xb0]
    char v11;  // [bp-0xa0]
    char v12;  // [bp-0x90]
    char v13;  // [bp-0x88]
    char v14;  // [bp-0x60]
    char v15;  // [bp-0x50]
    int v16;  // [sp-0x48]
    int v17;  // [sp-0x38]
    unsigned long long v18;  // [sp-0x28]
    int v20;  // xmm0
    unsigned long long v21;  // rax

    uu_test::parser::Symbol::into_literal::hab166192b9973048(&v0, a2);
    alloc::vec::Vec$LT$T$C$A$GT$::push::h1c5600de317c134f(a1, &v0);
    uu_test::parser::Parser::peek::h7974389b8f48fbed(&v13, a1);
    if (*((int *)&v13) == 4)
    {
        uu_test::parser::Parser::next_token::h6f84863b823a4061(&v10, a1);
        uu_test::parser::Parser::next_token::h6f84863b823a4061(&v7, a1);
        if (*((int *)&v7) == 6)
        {
            v5 = &v10;
            v6 = _$LT$uu_test..parser..Symbol$u20$as$u20$core..fmt..Display$GT$::fmt::hc4587d943e41f36b;
            v0 = &g_413ec0;
            v1 = 1;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h5cd5b7e3ea62c08e(&v14, &v0);
            *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v15);
            *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v14);
            a0->field_0 = 3;
            ::0x4ae000::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h83d505a150af3249(&v7);
            ::0x4ae000::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h83d505a150af3249(&v10);
            v21 = ::0x4ae000::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h83d505a150af3249(&v13);
            return v21;
        }
        v18 = *((long long *)&v9);
        *((int128_t *)&v17) = *((int128_t *)&v8);
        *((int128_t *)&v16) = *((int128_t *)&v7);
        uu_test::parser::Symbol::into_literal::hab166192b9973048(&v0, &v16);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h1c5600de317c134f(a1, &v0);
        v4 = *((long long *)&v12);
        v20 = *((int128_t *)&v10);
        *((int128_t *)&v2) = *((int128_t *)&v11);
        v0 = v20;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h1c5600de317c134f(a1, &v0);
    }
    v21 = ::0x4ae000::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h83d505a150af3249(&v13);
    a0->field_0 = 7;
    return v21;
}
