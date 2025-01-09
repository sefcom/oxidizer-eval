long long uu_test::parser::Parser::peek::hd4e8be8df06376c2(void* a0, struct_0 *a1)
{
    unsigned long long v0[3];  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v2;  // r14

    v2 = &a1->field_18;
    core::option::Option$LT$T$GT$::get_or_insert_with::h03d1de6add56340d(v2, &a1[1].padding_0[16]);
    if (a1->field_18 == 0x8000000000000000)
        v0 = 0x8000000000000000;
    else
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha4fac1976132f377(v0, v2);
    return uu_test::parser::Symbol::new::ha5314f5fa26867b7(a0, v0);
}
