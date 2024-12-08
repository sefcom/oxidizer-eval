long long uu_test::parser::Parser::peek::h7974389b8f48fbed(void* a0, struct_0 *a1)
{
    char v0;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v2;  // r14

    v2 = &a1->field_18;
    core::option::Option$LT$T$GT$::get_or_insert_with::h3d0c3e2c6e1ebc92(v2, &a1[1].padding_0[16]);
    if (a1->field_18 == 0x8000000000000000)
        v0 = 0x8000000000000000;
    else
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::had0fad1999619c11(&v0, v2);
    return uu_test::parser::Symbol::new::h3b55e9adf678ab6a(a0, &v0);
}
