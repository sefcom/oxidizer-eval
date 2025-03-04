long long uu_test::parser::Parser::uop::h62a6f0e931485a3c(void* a0, struct_0 *a1)
{
    int v0;  // [bp-0xb8]
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

    uu_test::parser::Parser::next_token::hec2da245067de41f(&v3, a0);
    if (*((int *)&v3) == 6)
    {
        v2 = a1->field_20;
        *((uint128_t *)&v1) = a1->field_10;
        *((uint128_t *)&v0) = a1->field_0;
        uu_test::parser::Symbol::into_literal::hae4d6fad5ad71dcb(&v9, &v0);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h254fc79c897546ac(a0, &v9);
        v11 = ::0x4ade70::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&v3);
        return v11;
    }
    v8 = *((long long *)&v5);
    *((int128_t *)&v7) = *((int128_t *)&v4);
    *((int128_t *)&v6) = *((int128_t *)&v3);
    uu_test::parser::Symbol::into_literal::hae4d6fad5ad71dcb(&v0, &v6);
    alloc::vec::Vec$LT$T$C$A$GT$::push::h254fc79c897546ac(a0, &v0);
    v2 = a1->field_20;
    *((uint128_t *)&v1) = a1->field_10;
    *((uint128_t *)&v0) = a1->field_0;
    v11 = alloc::vec::Vec$LT$T$C$A$GT$::push::h254fc79c897546ac(a0, &v0);
    return v11;
}
