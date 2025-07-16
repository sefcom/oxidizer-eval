fn uu_test::parser::Parser::peek_is_boolop(a0: i64) -> long long {
    let v0: u8;  // [bp-0x38]

    uu_test::parser::Parser::peek(&v0, a0);
    return vvar_3{reg 56} & -0x100 | *(&v0 as &i32) == 2;
}
