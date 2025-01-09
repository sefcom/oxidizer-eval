long long uu_test::parser::Parser::next_token::hec2da245067de41f(void* a0, struct_0 *a1)
{
    unsigned long long v0[3];  // [sp-0x20], Other Possible Types: unsigned long long
    int v1;  // [sp-0x18]
    unsigned long long v3;  // rax

    v3 = a1->field_18;
    a1->field_18 = 9223372036854775809;
    if (v0 != 9223372036854775809)
    {
        *((uint128_t *)&v1) = a1->field_20;
        v0 = v3;
    }
    else
    {
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h64663e472b050a2b(v0, a1 + 1);
    }
    return uu_test::parser::Symbol::new::ha5314f5fa26867b7(a0, v0);
}
