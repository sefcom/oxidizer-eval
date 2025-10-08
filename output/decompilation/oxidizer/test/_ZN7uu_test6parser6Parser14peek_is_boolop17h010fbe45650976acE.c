fn uu_test::parser::Parser::peek_is_boolop(a0: void*) -> long long {
    let v0: struct40;  // [bp-0x38]

    v0 = uu_test::parser::Parser::peek(a0);
    return vvar_3{reg 56} & -0x100 | v0.field_0 as i32 == 2;
}
